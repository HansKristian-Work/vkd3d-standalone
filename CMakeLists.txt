cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_STANDARD 99)
project(vkd3d-standalone LANGUAGES CXX C)

add_subdirectory(SPIRV-Headers EXCLUDE_FROM_ALL)
add_subdirectory(Vulkan-Headers EXCLUDE_FROM_ALL)

add_library(vkd3d-version STATIC
	vkd3d_version.c)
set_target_properties(vkd3d-version PROPERTIES POSITION_INDEPENDENT_CODE ON)

add_library(vkd3d-common STATIC
	vkd3d/libs/vkd3d-common/debug.c
	vkd3d/libs/vkd3d-common/memory.c
	vkd3d/libs/vkd3d-common/utf8.c
	dbg_env_name.c)
set_target_properties(vkd3d-common PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_include_directories(vkd3d-common PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include)
target_include_directories(vkd3d-common PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include/private ${CMAKE_CURRENT_SOURCE_DIR}/generated)
target_link_libraries(vkd3d-common PRIVATE vkd3d-version)

add_library(vkd3d-shader SHARED
	vkd3d/libs/vkd3d-shader/spirv.c
	vkd3d/libs/vkd3d-shader/trace.c
	vkd3d/libs/vkd3d-shader/checksum.c
	vkd3d/libs/vkd3d-shader/dxbc.c
	vkd3d/libs/vkd3d-shader/vkd3d_shader_main.c
	vkd3d/libs/vkd3d-shader/vkd3d_shader_private.h)
set_target_properties(vkd3d-shader PROPERTIES POSITION_INDEPENDENT_CODE ON)
target_include_directories(vkd3d-shader PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include)
target_include_directories(vkd3d-shader PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include/private ${CMAKE_CURRENT_SOURCE_DIR}/generated)
target_link_libraries(vkd3d-shader PRIVATE vkd3d-common SPIRV-Headers)
set_target_properties(vkd3d-shader PROPERTIES VERSION 1.1.0)
set_target_properties(vkd3d-shader PROPERTIES SOVERSION 1)

add_library(vkd3d SHARED
	vkd3d/libs/vkd3d/command.c
	vkd3d/libs/vkd3d/device.c
	vkd3d/libs/vkd3d/resource.c
	vkd3d/libs/vkd3d/state.c
	vkd3d/libs/vkd3d/utils.c
	vkd3d/libs/vkd3d/vkd3d_main.c)
target_include_directories(vkd3d PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include)
target_include_directories(vkd3d PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include/private ${CMAKE_CURRENT_SOURCE_DIR}/generated)
target_link_libraries(vkd3d PRIVATE vkd3d-shader vkd3d-common Vulkan-Headers)
set_target_properties(vkd3d PROPERTIES VERSION 1.1.0)
set_target_properties(vkd3d PROPERTIES SOVERSION 1)
