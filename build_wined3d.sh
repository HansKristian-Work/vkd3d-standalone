#!/bin/bash

cd wine

echo "=== Building winetools ==="
mkdir -p winetools-build
cd winetools-build
../configure --enable-win64 --without-freetype || exit 1
make __tooldeps__ -j8 || exit 1
cd ..

echo "=== Building wined3d ==="
mkdir -p build-wined3d
cd build-wined3d
../configure \
   --enable-win64 \
   --without-freetype \
   CFLAGS="-O2 -DWINE_NOWINSOCK -DUSE_WIN32_OPENGL -DUSE_WIN32_VULKAN" \
   --with-wine-tools=../winetools-build \
   VKD3D_CFLAGS="-I/mingw64/include/vkd3d" \
   VKD3D_LIBS="-lvkd3d" || exit 1

# !!! Super hacky, soname resolve seems to be broken, so manually patch include/config.h ... !!!
echo '#undef SONAME_LIBVKD3D' >> include/config.h
echo '#undef SONAME_LIBVULKAN' >> include/config.h
echo '#define SONAME_LIBVKD3D "libvkd3d-1.dll"' >> include/config.h
echo '#define SONAME_LIBVULKAN "libvulkan-1.dll"' >> include/config.h

make libs/port -j8 || exit 1
make dlls/wined3d -j8 || exit 1
make dlls/dxgi -j8 || exit 1
make dlls/d3d12 -j8 || exit

cd ../..

echo "=== Copying DLLs ==="

mkdir -p bin
cp wine/build-wined3d/dlls/wined3d/wined3d.dll bin/
cp wine/build-wined3d/dlls/dxgi/dxgi.dll bin/
cp wine/build-wined3d/dlls/d3d12/d3d12.dll bin/
