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
		vkd3d/include/private/vkd3d_common.h
		vkd3d/include/private/vkd3d_debug.h
		vkd3d/include/private/vkd3d_memory.h
		vkd3d/include/private/vkd3d_utf8.h
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

if (WIN32 AND CMAKE_COMPILER_IS_GNUCC)
	set_target_properties(vkd3d PROPERTIES LINK_FLAGS "-static")
	set_target_properties(vkd3d-shader PROPERTIES LINK_FLAGS "-static")
	target_compile_options(vkd3d PRIVATE -Wno-format -Wno-discarded-qualifiers -Wno-incompatible-pointer-types)
	target_compile_options(vkd3d-shader PRIVATE -Wno-format -Wno-discarded-qualifiers -Wno-incompatible-pointer-types)
	target_compile_options(vkd3d-common PRIVATE -Wno-format -Wno-discarded-qualifiers -Wno-incompatible-pointer-types)
elseif (MSVC)
	target_compile_definitions(vkd3d PRIVATE _CRT_SECURE_NO_WARNINGS)
	target_compile_definitions(vkd3d-shader PRIVATE _CRT_SECURE_NO_WARNINGS)
	target_compile_definitions(vkd3d-common PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

if (WIN32)
	install(TARGETS vkd3d RUNTIME DESTINATION bin ARCHIVE DESTINATION lib LIBRARY DESTINATION lib)
	install(TARGETS vkd3d-shader RUNTIME DESTINATION bin ARCHIVE DESTINATION lib LIBRARY DESTINATION lib)
else()
	install(TARGETS vkd3d DESTINATION lib)
	install(TARGETS vkd3d-shader DESTINATION lib)
endif()

install(FILES
	vkd3d/include/vkd3d.h
	vkd3d/include/vkd3d_types.h
	vkd3d/include/vkd3d_shader.h
	vkd3d/include/vkd3d_utils.h
	vkd3d/include/vkd3d_windows.h
	generated/vkd3d_d3d12.h
	generated/vkd3d_d3dcommon.h
	generated/vkd3d_dxgibase.h
	generated/vkd3d_dxgiformat.h
	DESTINATION include/vkd3d)

add_executable(d3d12-test vkd3d/tests/d3d12.c)

#if (NOT WIN32)
add_library(vkd3d-utils SHARED
	vkd3d/libs/vkd3d-utils/vkd3d_utils_main.c
	vkd3d/libs/vkd3d-utils/vkd3d_utils_private.h)
target_link_libraries(vkd3d-utils PRIVATE vkd3d vkd3d-common Vulkan-Headers)
target_include_directories(vkd3d-utils PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include/private)
target_link_libraries(d3d12-test PRIVATE vkd3d-utils vkd3d-common vkd3d Vulkan-Headers)
if (NOT WIN32)
	target_link_libraries(d3d12-test PRIVATE vulkan)
endif()
target_compile_definitions(d3d12-test PRIVATE VKD3D_FORCE_UTILS_WRAPPER)
#else()
#	target_link_libraries(d3d12-test PRIVATE vkd3d-common d3d12 dxgi)
#endif()

if (WIN32)
	target_sources(vkd3d PRIVATE vkd3d.def)
	target_sources(vkd3d-shader PRIVATE vkd3d_shader.def)
	target_sources(vkd3d-utils PRIVATE vkd3d_utils.def)
	set_target_properties(vkd3d PROPERTIES PREFIX "lib" SUFFIX "-1.dll")
	set_target_properties(vkd3d-shader PROPERTIES PREFIX "lib" SUFFIX "-1.dll")
	set_target_properties(vkd3d-utils PROPERTIES PREFIX "lib" SUFFIX "-1.dll")
endif()


target_include_directories(d3d12-test PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/generated
	${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include
	${CMAKE_CURRENT_SOURCE_DIR}/vkd3d/include/private)

if (NOT MSVC)
	target_link_libraries(d3d12-test PRIVATE -pthread)
	if (NOT WIN32)
		target_link_libraries(d3d12-test PRIVATE dl)
	endif()
endif()

add_executable(dump-hex dump_hex.c)
