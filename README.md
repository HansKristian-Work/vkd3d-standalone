# Standalone VKD3D build for Windows

This repo provides a way to build VKD3D and required WineD3D DLLs
so that VKD3D can be run directly on Windows as a drop-in replacement for D3D12.
The main motivation for this is easy of side-by-side debugging and being able to debug
in a more native environment vs. winedbg.

A simple CMake build system is provided for VKD3D so it can be built with MinGW or MSVC.

## Build

This build assumes you have MSYS2 working with toolchains and cmake installed,
using the mingw64 prefix (x86_64-w64-mingw32).
I've only tried with 64-bit, but 32-bit might work as well with some trivial edits in the scripts.

### Update submodules

```
git submodule update --init
```

This pulls in VKD3D, SPIRV-Headers and Vulkan-Headers.

### Build and install VKD3D in /mingw64

For Wine to be able to enable D3D12 support, a dummy install of VKD3D must be performed
 so that Wine's autoconf scripts pick it up. There is a handy script for this.

```
./build_vkd3d_mingw.sh
```

which should give you something like this at the end:

```
-- Install configuration: "Release"
-- Up-to-date: D:/msys/mingw64/lib/libvkd3d.dll.a
-- Up-to-date: D:/msys/mingw64/bin/libvkd3d-1.dll
-- Up-to-date: D:/msys/mingw64/lib/libvkd3d-shader.dll.a
-- Up-to-date: D:/msys/mingw64/bin/libvkd3d-shader-1.dll
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_types.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_shader.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_utils.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_windows.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_d3d12.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_d3dcommon.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_dxgibase.h
-- Up-to-date: D:/msys/mingw64/include/vkd3d/vkd3d_dxgiformat.h
```

### Build Wine

This one takes a while, and it will build `wined3d.dll`, `dxgi.dll` and `d3d12.dll`.
These link against the `libvkd3d-1.dll` in `/mingw64/bin` when building,
but we can rebuild it later however we want later.

```
./clone_wine.sh
./build_wined3d.sh
```

This will take a long time. If something goes wrong build, inspect the scripts.

If this is successful, D3D binaries are placed in `bin/`.

### Build VKD3D with MSVC

For debugging, it might make more sense to build with MSVC unless GDB in msys2 works for you.

```
mkdir build-msvc
cd build-msvc
cmake .. -G"Visual Studio 15 2017 Win64"
cmake --build . --config Debug --parallel
```

### Run application

Place the wined3d DLLs together with any `libvkd3d-1.dll` and `libvkd3d-shader-1.dll` you built and an app
should now be using Vulkan.
