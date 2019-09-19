#!/bin/bash

mkdir -p build-vkd3d-mingw
cd build-vkd3d-mingw
cmake .. -DCMAKE_INSTALL_PREFIX=/mingw64 -DCMAKE_BUILD_TYPE=Release -G"Unix Makefiles"
make -j8
make install
