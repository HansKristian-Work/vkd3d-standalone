/*** Autogenerated by WIDL 4.18 from include/vkd3d_dxgitype.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __vkd3d_dxgitype_h__
#define __vkd3d_dxgitype_h__

/* Forward declarations */

/* Headers for imported files */

#include <vkd3d_windows.h>
#include <vkd3d_dxgibase.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum DXGI_COLOR_SPACE_TYPE {
    DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 = 0x0,
    DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 = 0x1,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709 = 0x2,
    DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020 = 0x3,
    DXGI_COLOR_SPACE_RESERVED = 0x4,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_NONE_P709_X601 = 0x5,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601 = 0x6,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601 = 0x7,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 = 0x8,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 = 0x9,
    DXGI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020 = 0xa,
    DXGI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020 = 0xb,
    DXGI_COLOR_SPACE_CUSTOM = 0xffffffff
} DXGI_COLOR_SPACE_TYPE;
typedef struct _D3DCOLORVALUE D3DCOLORVALUE;
typedef struct _D3DCOLORVALUE DXGI_RGBA;
typedef struct DXGI_MODE_DESC DXGI_MODE_DESC;
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __vkd3d_dxgitype_h__ */
