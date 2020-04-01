/*** Autogenerated by WIDL 4.18 from include/vkd3d_dxgi1_4.idl - Do not edit ***/

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

#ifndef __vkd3d_dxgi1_4_h__
#define __vkd3d_dxgi1_4_h__

/* Forward declarations */

#ifndef __IDXGISwapChain3_FWD_DEFINED__
#define __IDXGISwapChain3_FWD_DEFINED__
typedef interface IDXGISwapChain3 IDXGISwapChain3;
#ifdef __cplusplus
interface IDXGISwapChain3;
#endif /* __cplusplus */
#endif

#ifndef __IDXGIFactory4_FWD_DEFINED__
#define __IDXGIFactory4_FWD_DEFINED__
typedef interface IDXGIFactory4 IDXGIFactory4;
#ifdef __cplusplus
interface IDXGIFactory4;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <vkd3d_dxgi1_3.h>

#ifdef __cplusplus
extern "C" {
#endif

/*****************************************************************************
 * IDXGISwapChain3 interface
 */
#ifndef __IDXGISwapChain3_INTERFACE_DEFINED__
#define __IDXGISwapChain3_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGISwapChain3, 0x94d99bdb, 0xf1f8, 0x4ab0, 0xb2,0x36, 0x7d,0xa0,0x17,0x0e,0xda,0xb1);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("94d99bdb-f1f8-4ab0-b236-7da0170edab1")
IDXGISwapChain3 : public IDXGISwapChain2
{
    virtual UINT STDMETHODCALLTYPE GetCurrentBackBufferIndex(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE CheckColorSpaceSupport(
        DXGI_COLOR_SPACE_TYPE type,
        UINT *support) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetColorSpace1(
        DXGI_COLOR_SPACE_TYPE type) = 0;

    virtual HRESULT STDMETHODCALLTYPE ResizeBuffers1(
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT format,
        UINT flags,
        const UINT *node_mask,
        IUnknown *const *present_queue) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGISwapChain3, 0x94d99bdb, 0xf1f8, 0x4ab0, 0xb2,0x36, 0x7d,0xa0,0x17,0x0e,0xda,0xb1)
#endif
#else
typedef struct IDXGISwapChain3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGISwapChain3 *This,
        REFIID riid,
        void **object);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGISwapChain3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGISwapChain3 *This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGISwapChain3 *This,
        REFGUID name,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *GetPrivateDataInterface)(
        IDXGISwapChain3 *This,
        REFGUID name,
        const IUnknown *unknown);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGISwapChain3 *This,
        REFGUID name,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGISwapChain3 *This,
        REFIID riid,
        void **parent);

    /*** IDXGIDeviceSubObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDevice)(
        IDXGISwapChain3 *This,
        REFIID riid,
        void **device);

    /*** IDXGISwapChain methods ***/
    HRESULT (STDMETHODCALLTYPE *Present)(
        IDXGISwapChain3 *This,
        UINT sync_interval,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *GetBuffer)(
        IDXGISwapChain3 *This,
        UINT buffer_idx,
        REFIID riid,
        void **surface);

    HRESULT (STDMETHODCALLTYPE *SetFullscreenState)(
        IDXGISwapChain3 *This,
        BOOL fullscreen,
        IDXGIOutput *target);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenState)(
        IDXGISwapChain3 *This,
        BOOL *fullscreen,
        IDXGIOutput **target);

    HRESULT (STDMETHODCALLTYPE *GetDesc)(
        IDXGISwapChain3 *This,
        DXGI_SWAP_CHAIN_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *ResizeBuffers)(
        IDXGISwapChain3 *This,
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT format,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *ResizeTarget)(
        IDXGISwapChain3 *This,
        const DXGI_MODE_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *GetContainingOutput)(
        IDXGISwapChain3 *This,
        IDXGIOutput **output);

    HRESULT (STDMETHODCALLTYPE *GetFrameStatistics)(
        IDXGISwapChain3 *This,
        DXGI_FRAME_STATISTICS *stats);

    HRESULT (STDMETHODCALLTYPE *GetLastPresentCount)(
        IDXGISwapChain3 *This,
        UINT *last_present_count);

    /*** IDXGISwapChain1 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDesc1)(
        IDXGISwapChain3 *This,
        DXGI_SWAP_CHAIN_DESC1 *desc);

    HRESULT (STDMETHODCALLTYPE *GetFullscreenDesc)(
        IDXGISwapChain3 *This,
        DXGI_SWAP_CHAIN_FULLSCREEN_DESC *desc);

    HRESULT (STDMETHODCALLTYPE *GetHwnd)(
        IDXGISwapChain3 *This,
        HWND *hwnd);

    HRESULT (STDMETHODCALLTYPE *GetCoreWindow)(
        IDXGISwapChain3 *This,
        REFIID riid,
        void **object);

    HRESULT (STDMETHODCALLTYPE *Present1)(
        IDXGISwapChain3 *This,
        UINT sync_interval,
        UINT flags,
        const DXGI_PRESENT_PARAMETERS *parameters);

    BOOL (STDMETHODCALLTYPE *IsTemporaryMonoSupported)(
        IDXGISwapChain3 *This);

    HRESULT (STDMETHODCALLTYPE *GetRestrictToOutput)(
        IDXGISwapChain3 *This,
        IDXGIOutput **output);

    HRESULT (STDMETHODCALLTYPE *SetBackgroundColor)(
        IDXGISwapChain3 *This,
        const DXGI_RGBA *color);

    HRESULT (STDMETHODCALLTYPE *GetBackgroundColor)(
        IDXGISwapChain3 *This,
        DXGI_RGBA *color);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IDXGISwapChain3 *This,
        DXGI_MODE_ROTATION rotation);

    HRESULT (STDMETHODCALLTYPE *GetRotation)(
        IDXGISwapChain3 *This,
        DXGI_MODE_ROTATION *rotation);

    /*** IDXGISwapChain2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetSourceSize)(
        IDXGISwapChain3 *This,
        UINT width,
        UINT height);

    HRESULT (STDMETHODCALLTYPE *GetSourceSize)(
        IDXGISwapChain3 *This,
        UINT *width,
        UINT *height);

    HRESULT (STDMETHODCALLTYPE *SetMaximumFrameLatency)(
        IDXGISwapChain3 *This,
        UINT latency);

    HRESULT (STDMETHODCALLTYPE *GetMaximumFrameLatency)(
        IDXGISwapChain3 *This,
        UINT *latency);

    HANDLE (STDMETHODCALLTYPE *GetFrameLatencyWaitableObject)(
        IDXGISwapChain3 *This);

    HRESULT (STDMETHODCALLTYPE *SetMatrixTransform)(
        IDXGISwapChain3 *This,
        const DXGI_MATRIX_3X2_F *matrix);

    HRESULT (STDMETHODCALLTYPE *GetMatrixTransform)(
        IDXGISwapChain3 *This,
        DXGI_MATRIX_3X2_F *matrix);

    /*** IDXGISwapChain3 methods ***/
    UINT (STDMETHODCALLTYPE *GetCurrentBackBufferIndex)(
        IDXGISwapChain3 *This);

    HRESULT (STDMETHODCALLTYPE *CheckColorSpaceSupport)(
        IDXGISwapChain3 *This,
        DXGI_COLOR_SPACE_TYPE type,
        UINT *support);

    HRESULT (STDMETHODCALLTYPE *SetColorSpace1)(
        IDXGISwapChain3 *This,
        DXGI_COLOR_SPACE_TYPE type);

    HRESULT (STDMETHODCALLTYPE *ResizeBuffers1)(
        IDXGISwapChain3 *This,
        UINT buffer_count,
        UINT width,
        UINT height,
        DXGI_FORMAT format,
        UINT flags,
        const UINT *node_mask,
        IUnknown *const *present_queue);

    END_INTERFACE
} IDXGISwapChain3Vtbl;

interface IDXGISwapChain3 {
    CONST_VTBL IDXGISwapChain3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGISwapChain3_QueryInterface(This,riid,object) (This)->lpVtbl->QueryInterface(This,riid,object)
#define IDXGISwapChain3_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGISwapChain3_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGISwapChain3_SetPrivateData(This,name,data_size,data) (This)->lpVtbl->SetPrivateData(This,name,data_size,data)
#define IDXGISwapChain3_GetPrivateDataInterface(This,name,unknown) (This)->lpVtbl->GetPrivateDataInterface(This,name,unknown)
#define IDXGISwapChain3_GetPrivateData(This,name,data_size,data) (This)->lpVtbl->GetPrivateData(This,name,data_size,data)
#define IDXGISwapChain3_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIDeviceSubObject methods ***/
#define IDXGISwapChain3_GetDevice(This,riid,device) (This)->lpVtbl->GetDevice(This,riid,device)
/*** IDXGISwapChain methods ***/
#define IDXGISwapChain3_Present(This,sync_interval,flags) (This)->lpVtbl->Present(This,sync_interval,flags)
#define IDXGISwapChain3_GetBuffer(This,buffer_idx,riid,surface) (This)->lpVtbl->GetBuffer(This,buffer_idx,riid,surface)
#define IDXGISwapChain3_SetFullscreenState(This,fullscreen,target) (This)->lpVtbl->SetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain3_GetFullscreenState(This,fullscreen,target) (This)->lpVtbl->GetFullscreenState(This,fullscreen,target)
#define IDXGISwapChain3_GetDesc(This,desc) (This)->lpVtbl->GetDesc(This,desc)
#define IDXGISwapChain3_ResizeBuffers(This,buffer_count,width,height,format,flags) (This)->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags)
#define IDXGISwapChain3_ResizeTarget(This,desc) (This)->lpVtbl->ResizeTarget(This,desc)
#define IDXGISwapChain3_GetContainingOutput(This,output) (This)->lpVtbl->GetContainingOutput(This,output)
#define IDXGISwapChain3_GetFrameStatistics(This,stats) (This)->lpVtbl->GetFrameStatistics(This,stats)
#define IDXGISwapChain3_GetLastPresentCount(This,last_present_count) (This)->lpVtbl->GetLastPresentCount(This,last_present_count)
/*** IDXGISwapChain1 methods ***/
#define IDXGISwapChain3_GetDesc1(This,desc) (This)->lpVtbl->GetDesc1(This,desc)
#define IDXGISwapChain3_GetFullscreenDesc(This,desc) (This)->lpVtbl->GetFullscreenDesc(This,desc)
#define IDXGISwapChain3_GetHwnd(This,hwnd) (This)->lpVtbl->GetHwnd(This,hwnd)
#define IDXGISwapChain3_GetCoreWindow(This,riid,object) (This)->lpVtbl->GetCoreWindow(This,riid,object)
#define IDXGISwapChain3_Present1(This,sync_interval,flags,parameters) (This)->lpVtbl->Present1(This,sync_interval,flags,parameters)
#define IDXGISwapChain3_IsTemporaryMonoSupported(This) (This)->lpVtbl->IsTemporaryMonoSupported(This)
#define IDXGISwapChain3_GetRestrictToOutput(This,output) (This)->lpVtbl->GetRestrictToOutput(This,output)
#define IDXGISwapChain3_SetBackgroundColor(This,color) (This)->lpVtbl->SetBackgroundColor(This,color)
#define IDXGISwapChain3_GetBackgroundColor(This,color) (This)->lpVtbl->GetBackgroundColor(This,color)
#define IDXGISwapChain3_SetRotation(This,rotation) (This)->lpVtbl->SetRotation(This,rotation)
#define IDXGISwapChain3_GetRotation(This,rotation) (This)->lpVtbl->GetRotation(This,rotation)
/*** IDXGISwapChain2 methods ***/
#define IDXGISwapChain3_SetSourceSize(This,width,height) (This)->lpVtbl->SetSourceSize(This,width,height)
#define IDXGISwapChain3_GetSourceSize(This,width,height) (This)->lpVtbl->GetSourceSize(This,width,height)
#define IDXGISwapChain3_SetMaximumFrameLatency(This,latency) (This)->lpVtbl->SetMaximumFrameLatency(This,latency)
#define IDXGISwapChain3_GetMaximumFrameLatency(This,latency) (This)->lpVtbl->GetMaximumFrameLatency(This,latency)
#define IDXGISwapChain3_GetFrameLatencyWaitableObject(This) (This)->lpVtbl->GetFrameLatencyWaitableObject(This)
#define IDXGISwapChain3_SetMatrixTransform(This,matrix) (This)->lpVtbl->SetMatrixTransform(This,matrix)
#define IDXGISwapChain3_GetMatrixTransform(This,matrix) (This)->lpVtbl->GetMatrixTransform(This,matrix)
/*** IDXGISwapChain3 methods ***/
#define IDXGISwapChain3_GetCurrentBackBufferIndex(This) (This)->lpVtbl->GetCurrentBackBufferIndex(This)
#define IDXGISwapChain3_CheckColorSpaceSupport(This,type,support) (This)->lpVtbl->CheckColorSpaceSupport(This,type,support)
#define IDXGISwapChain3_SetColorSpace1(This,type) (This)->lpVtbl->SetColorSpace1(This,type)
#define IDXGISwapChain3_ResizeBuffers1(This,buffer_count,width,height,format,flags,node_mask,present_queue) (This)->lpVtbl->ResizeBuffers1(This,buffer_count,width,height,format,flags,node_mask,present_queue)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_QueryInterface(IDXGISwapChain3* This,REFIID riid,void **object) {
    return This->lpVtbl->QueryInterface(This,riid,object);
}
static FORCEINLINE ULONG IDXGISwapChain3_AddRef(IDXGISwapChain3* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGISwapChain3_Release(IDXGISwapChain3* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_SetPrivateData(IDXGISwapChain3* This,REFGUID name,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,name,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetPrivateDataInterface(IDXGISwapChain3* This,REFGUID name,const IUnknown *unknown) {
    return This->lpVtbl->GetPrivateDataInterface(This,name,unknown);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetPrivateData(IDXGISwapChain3* This,REFGUID name,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,name,data_size,data);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetParent(IDXGISwapChain3* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIDeviceSubObject methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_GetDevice(IDXGISwapChain3* This,REFIID riid,void **device) {
    return This->lpVtbl->GetDevice(This,riid,device);
}
/*** IDXGISwapChain methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_Present(IDXGISwapChain3* This,UINT sync_interval,UINT flags) {
    return This->lpVtbl->Present(This,sync_interval,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetBuffer(IDXGISwapChain3* This,UINT buffer_idx,REFIID riid,void **surface) {
    return This->lpVtbl->GetBuffer(This,buffer_idx,riid,surface);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetFullscreenState(IDXGISwapChain3* This,BOOL fullscreen,IDXGIOutput *target) {
    return This->lpVtbl->SetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFullscreenState(IDXGISwapChain3* This,BOOL *fullscreen,IDXGIOutput **target) {
    return This->lpVtbl->GetFullscreenState(This,fullscreen,target);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetDesc(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_DESC *desc) {
    return This->lpVtbl->GetDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeBuffers(IDXGISwapChain3* This,UINT buffer_count,UINT width,UINT height,DXGI_FORMAT format,UINT flags) {
    return This->lpVtbl->ResizeBuffers(This,buffer_count,width,height,format,flags);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeTarget(IDXGISwapChain3* This,const DXGI_MODE_DESC *desc) {
    return This->lpVtbl->ResizeTarget(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetContainingOutput(IDXGISwapChain3* This,IDXGIOutput **output) {
    return This->lpVtbl->GetContainingOutput(This,output);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFrameStatistics(IDXGISwapChain3* This,DXGI_FRAME_STATISTICS *stats) {
    return This->lpVtbl->GetFrameStatistics(This,stats);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetLastPresentCount(IDXGISwapChain3* This,UINT *last_present_count) {
    return This->lpVtbl->GetLastPresentCount(This,last_present_count);
}
/*** IDXGISwapChain1 methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_GetDesc1(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_DESC1 *desc) {
    return This->lpVtbl->GetDesc1(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetFullscreenDesc(IDXGISwapChain3* This,DXGI_SWAP_CHAIN_FULLSCREEN_DESC *desc) {
    return This->lpVtbl->GetFullscreenDesc(This,desc);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetHwnd(IDXGISwapChain3* This,HWND *hwnd) {
    return This->lpVtbl->GetHwnd(This,hwnd);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetCoreWindow(IDXGISwapChain3* This,REFIID riid,void **object) {
    return This->lpVtbl->GetCoreWindow(This,riid,object);
}
static FORCEINLINE HRESULT IDXGISwapChain3_Present1(IDXGISwapChain3* This,UINT sync_interval,UINT flags,const DXGI_PRESENT_PARAMETERS *parameters) {
    return This->lpVtbl->Present1(This,sync_interval,flags,parameters);
}
static FORCEINLINE BOOL IDXGISwapChain3_IsTemporaryMonoSupported(IDXGISwapChain3* This) {
    return This->lpVtbl->IsTemporaryMonoSupported(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetRestrictToOutput(IDXGISwapChain3* This,IDXGIOutput **output) {
    return This->lpVtbl->GetRestrictToOutput(This,output);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetBackgroundColor(IDXGISwapChain3* This,const DXGI_RGBA *color) {
    return This->lpVtbl->SetBackgroundColor(This,color);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetBackgroundColor(IDXGISwapChain3* This,DXGI_RGBA *color) {
    return This->lpVtbl->GetBackgroundColor(This,color);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetRotation(IDXGISwapChain3* This,DXGI_MODE_ROTATION rotation) {
    return This->lpVtbl->SetRotation(This,rotation);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetRotation(IDXGISwapChain3* This,DXGI_MODE_ROTATION *rotation) {
    return This->lpVtbl->GetRotation(This,rotation);
}
/*** IDXGISwapChain2 methods ***/
static FORCEINLINE HRESULT IDXGISwapChain3_SetSourceSize(IDXGISwapChain3* This,UINT width,UINT height) {
    return This->lpVtbl->SetSourceSize(This,width,height);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetSourceSize(IDXGISwapChain3* This,UINT *width,UINT *height) {
    return This->lpVtbl->GetSourceSize(This,width,height);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetMaximumFrameLatency(IDXGISwapChain3* This,UINT latency) {
    return This->lpVtbl->SetMaximumFrameLatency(This,latency);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetMaximumFrameLatency(IDXGISwapChain3* This,UINT *latency) {
    return This->lpVtbl->GetMaximumFrameLatency(This,latency);
}
static FORCEINLINE HANDLE IDXGISwapChain3_GetFrameLatencyWaitableObject(IDXGISwapChain3* This) {
    return This->lpVtbl->GetFrameLatencyWaitableObject(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetMatrixTransform(IDXGISwapChain3* This,const DXGI_MATRIX_3X2_F *matrix) {
    return This->lpVtbl->SetMatrixTransform(This,matrix);
}
static FORCEINLINE HRESULT IDXGISwapChain3_GetMatrixTransform(IDXGISwapChain3* This,DXGI_MATRIX_3X2_F *matrix) {
    return This->lpVtbl->GetMatrixTransform(This,matrix);
}
/*** IDXGISwapChain3 methods ***/
static FORCEINLINE UINT IDXGISwapChain3_GetCurrentBackBufferIndex(IDXGISwapChain3* This) {
    return This->lpVtbl->GetCurrentBackBufferIndex(This);
}
static FORCEINLINE HRESULT IDXGISwapChain3_CheckColorSpaceSupport(IDXGISwapChain3* This,DXGI_COLOR_SPACE_TYPE type,UINT *support) {
    return This->lpVtbl->CheckColorSpaceSupport(This,type,support);
}
static FORCEINLINE HRESULT IDXGISwapChain3_SetColorSpace1(IDXGISwapChain3* This,DXGI_COLOR_SPACE_TYPE type) {
    return This->lpVtbl->SetColorSpace1(This,type);
}
static FORCEINLINE HRESULT IDXGISwapChain3_ResizeBuffers1(IDXGISwapChain3* This,UINT buffer_count,UINT width,UINT height,DXGI_FORMAT format,UINT flags,const UINT *node_mask,IUnknown *const *present_queue) {
    return This->lpVtbl->ResizeBuffers1(This,buffer_count,width,height,format,flags,node_mask,present_queue);
}
#endif
#endif

#endif


#endif  /* __IDXGISwapChain3_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IDXGIFactory4 interface
 */
#ifndef __IDXGIFactory4_INTERFACE_DEFINED__
#define __IDXGIFactory4_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDXGIFactory4, 0x1bc6ea02, 0xef36, 0x464f, 0xbf,0x0c, 0x21,0xca,0x39,0xe5,0x16,0x8a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("1bc6ea02-ef36-464f-bf0c-21ca39e5168a")
IDXGIFactory4 : public IDXGIFactory3
{
    virtual HRESULT STDMETHODCALLTYPE EnumAdapterByLuid(
        LUID luid,
        REFIID iid,
        void **adapter) = 0;

    virtual HRESULT STDMETHODCALLTYPE EnumWarpAdapter(
        REFIID iid,
        void **adapter) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDXGIFactory4, 0x1bc6ea02, 0xef36, 0x464f, 0xbf,0x0c, 0x21,0xca,0x39,0xe5,0x16,0x8a)
#endif
#else
typedef struct IDXGIFactory4Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDXGIFactory4 *This,
        REFIID riid,
        void **object);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDXGIFactory4 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDXGIFactory4 *This);

    /*** IDXGIObject methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPrivateData)(
        IDXGIFactory4 *This,
        REFGUID name,
        UINT data_size,
        const void *data);

    HRESULT (STDMETHODCALLTYPE *GetPrivateDataInterface)(
        IDXGIFactory4 *This,
        REFGUID name,
        const IUnknown *unknown);

    HRESULT (STDMETHODCALLTYPE *GetPrivateData)(
        IDXGIFactory4 *This,
        REFGUID name,
        UINT *data_size,
        void *data);

    HRESULT (STDMETHODCALLTYPE *GetParent)(
        IDXGIFactory4 *This,
        REFIID riid,
        void **parent);

    /*** IDXGIFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumAdapters)(
        IDXGIFactory4 *This,
        UINT adapter_idx,
        IDXGIAdapter **adapter);

    HRESULT (STDMETHODCALLTYPE *MakeWindowAssociation)(
        IDXGIFactory4 *This,
        HWND hwnd,
        UINT flags);

    HRESULT (STDMETHODCALLTYPE *GetWindowAssociation)(
        IDXGIFactory4 *This,
        HWND *hwnd);

    HRESULT (STDMETHODCALLTYPE *CreateSwapChain)(
        IDXGIFactory4 *This,
        IUnknown *device,
        DXGI_SWAP_CHAIN_DESC *desc,
        IDXGISwapChain **swapchain);

    HRESULT (STDMETHODCALLTYPE *CreateSoftwareAdapter)(
        IDXGIFactory4 *This,
        HMODULE hmodule,
        IDXGIAdapter **adapter);

    /*** IDXGIFactory1 methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumAdapters1)(
        IDXGIFactory4 *This,
        UINT adapter_idx,
        IDXGIAdapter1 **adpter);

    BOOL (STDMETHODCALLTYPE *IsCurrent)(
        IDXGIFactory4 *This);

    /*** IDXGIFactory2 methods ***/
    BOOL (STDMETHODCALLTYPE *IsWindowedStereoEnabled)(
        IDXGIFactory4 *This);

    HRESULT (STDMETHODCALLTYPE *CreateSwapChainForHwnd)(
        IDXGIFactory4 *This,
        IUnknown *device,
        HWND window,
        const DXGI_SWAP_CHAIN_DESC1 *desc,
        const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *fullscreen_desc,
        IDXGIOutput *output,
        IDXGISwapChain1 **swapchain);

    HRESULT (STDMETHODCALLTYPE *CreateSwapChainForCoreWindow)(
        IDXGIFactory4 *This,
        IUnknown *device,
        IUnknown *window,
        const DXGI_SWAP_CHAIN_DESC1 *desc,
        IDXGIOutput *output,
        IDXGISwapChain1 **swapchain);

    HRESULT (STDMETHODCALLTYPE *GetSharedResourceAdapterLuid)(
        IDXGIFactory4 *This,
        HANDLE resource,
        LUID *luid);

    HRESULT (STDMETHODCALLTYPE *RegisterStereoStatusWindow)(
        IDXGIFactory4 *This,
        HWND window,
        UINT msg,
        DWORD *cookie);

    HRESULT (STDMETHODCALLTYPE *RegisterStereoStatusEvent)(
        IDXGIFactory4 *This,
        HANDLE event,
        DWORD *cookie);

    void (STDMETHODCALLTYPE *UnregisterStereoStatus)(
        IDXGIFactory4 *This,
        DWORD cookie);

    HRESULT (STDMETHODCALLTYPE *RegisterOcclusionStatusWindow)(
        IDXGIFactory4 *This,
        HWND window,
        UINT msg,
        DWORD *cookie);

    HRESULT (STDMETHODCALLTYPE *RegisterOcclusionStatusEvent)(
        IDXGIFactory4 *This,
        HANDLE event,
        DWORD *cookie);

    void (STDMETHODCALLTYPE *UnregisterOcclusionStatus)(
        IDXGIFactory4 *This,
        DWORD cookie);

    HRESULT (STDMETHODCALLTYPE *CreateSwapChainForComposition)(
        IDXGIFactory4 *This,
        IUnknown *device,
        const DXGI_SWAP_CHAIN_DESC1 *desc,
        IDXGIOutput *output,
        IDXGISwapChain1 **swapchain);

    /*** IDXGIFactory3 methods ***/
    UINT (STDMETHODCALLTYPE *GetCreationFlags)(
        IDXGIFactory4 *This);

    /*** IDXGIFactory4 methods ***/
    HRESULT (STDMETHODCALLTYPE *EnumAdapterByLuid)(
        IDXGIFactory4 *This,
        LUID luid,
        REFIID iid,
        void **adapter);

    HRESULT (STDMETHODCALLTYPE *EnumWarpAdapter)(
        IDXGIFactory4 *This,
        REFIID iid,
        void **adapter);

    END_INTERFACE
} IDXGIFactory4Vtbl;

interface IDXGIFactory4 {
    CONST_VTBL IDXGIFactory4Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDXGIFactory4_QueryInterface(This,riid,object) (This)->lpVtbl->QueryInterface(This,riid,object)
#define IDXGIFactory4_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDXGIFactory4_Release(This) (This)->lpVtbl->Release(This)
/*** IDXGIObject methods ***/
#define IDXGIFactory4_SetPrivateData(This,name,data_size,data) (This)->lpVtbl->SetPrivateData(This,name,data_size,data)
#define IDXGIFactory4_GetPrivateDataInterface(This,name,unknown) (This)->lpVtbl->GetPrivateDataInterface(This,name,unknown)
#define IDXGIFactory4_GetPrivateData(This,name,data_size,data) (This)->lpVtbl->GetPrivateData(This,name,data_size,data)
#define IDXGIFactory4_GetParent(This,riid,parent) (This)->lpVtbl->GetParent(This,riid,parent)
/*** IDXGIFactory methods ***/
#define IDXGIFactory4_EnumAdapters(This,adapter_idx,adapter) (This)->lpVtbl->EnumAdapters(This,adapter_idx,adapter)
#define IDXGIFactory4_MakeWindowAssociation(This,hwnd,flags) (This)->lpVtbl->MakeWindowAssociation(This,hwnd,flags)
#define IDXGIFactory4_GetWindowAssociation(This,hwnd) (This)->lpVtbl->GetWindowAssociation(This,hwnd)
#define IDXGIFactory4_CreateSwapChain(This,device,desc,swapchain) (This)->lpVtbl->CreateSwapChain(This,device,desc,swapchain)
#define IDXGIFactory4_CreateSoftwareAdapter(This,hmodule,adapter) (This)->lpVtbl->CreateSoftwareAdapter(This,hmodule,adapter)
/*** IDXGIFactory1 methods ***/
#define IDXGIFactory4_EnumAdapters1(This,adapter_idx,adpter) (This)->lpVtbl->EnumAdapters1(This,adapter_idx,adpter)
#define IDXGIFactory4_IsCurrent(This) (This)->lpVtbl->IsCurrent(This)
/*** IDXGIFactory2 methods ***/
#define IDXGIFactory4_IsWindowedStereoEnabled(This) (This)->lpVtbl->IsWindowedStereoEnabled(This)
#define IDXGIFactory4_CreateSwapChainForHwnd(This,device,window,desc,fullscreen_desc,output,swapchain) (This)->lpVtbl->CreateSwapChainForHwnd(This,device,window,desc,fullscreen_desc,output,swapchain)
#define IDXGIFactory4_CreateSwapChainForCoreWindow(This,device,window,desc,output,swapchain) (This)->lpVtbl->CreateSwapChainForCoreWindow(This,device,window,desc,output,swapchain)
#define IDXGIFactory4_GetSharedResourceAdapterLuid(This,resource,luid) (This)->lpVtbl->GetSharedResourceAdapterLuid(This,resource,luid)
#define IDXGIFactory4_RegisterStereoStatusWindow(This,window,msg,cookie) (This)->lpVtbl->RegisterStereoStatusWindow(This,window,msg,cookie)
#define IDXGIFactory4_RegisterStereoStatusEvent(This,event,cookie) (This)->lpVtbl->RegisterStereoStatusEvent(This,event,cookie)
#define IDXGIFactory4_UnregisterStereoStatus(This,cookie) (This)->lpVtbl->UnregisterStereoStatus(This,cookie)
#define IDXGIFactory4_RegisterOcclusionStatusWindow(This,window,msg,cookie) (This)->lpVtbl->RegisterOcclusionStatusWindow(This,window,msg,cookie)
#define IDXGIFactory4_RegisterOcclusionStatusEvent(This,event,cookie) (This)->lpVtbl->RegisterOcclusionStatusEvent(This,event,cookie)
#define IDXGIFactory4_UnregisterOcclusionStatus(This,cookie) (This)->lpVtbl->UnregisterOcclusionStatus(This,cookie)
#define IDXGIFactory4_CreateSwapChainForComposition(This,device,desc,output,swapchain) (This)->lpVtbl->CreateSwapChainForComposition(This,device,desc,output,swapchain)
/*** IDXGIFactory3 methods ***/
#define IDXGIFactory4_GetCreationFlags(This) (This)->lpVtbl->GetCreationFlags(This)
/*** IDXGIFactory4 methods ***/
#define IDXGIFactory4_EnumAdapterByLuid(This,luid,iid,adapter) (This)->lpVtbl->EnumAdapterByLuid(This,luid,iid,adapter)
#define IDXGIFactory4_EnumWarpAdapter(This,iid,adapter) (This)->lpVtbl->EnumWarpAdapter(This,iid,adapter)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IDXGIFactory4_QueryInterface(IDXGIFactory4* This,REFIID riid,void **object) {
    return This->lpVtbl->QueryInterface(This,riid,object);
}
static FORCEINLINE ULONG IDXGIFactory4_AddRef(IDXGIFactory4* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IDXGIFactory4_Release(IDXGIFactory4* This) {
    return This->lpVtbl->Release(This);
}
/*** IDXGIObject methods ***/
static FORCEINLINE HRESULT IDXGIFactory4_SetPrivateData(IDXGIFactory4* This,REFGUID name,UINT data_size,const void *data) {
    return This->lpVtbl->SetPrivateData(This,name,data_size,data);
}
static FORCEINLINE HRESULT IDXGIFactory4_GetPrivateDataInterface(IDXGIFactory4* This,REFGUID name,const IUnknown *unknown) {
    return This->lpVtbl->GetPrivateDataInterface(This,name,unknown);
}
static FORCEINLINE HRESULT IDXGIFactory4_GetPrivateData(IDXGIFactory4* This,REFGUID name,UINT *data_size,void *data) {
    return This->lpVtbl->GetPrivateData(This,name,data_size,data);
}
static FORCEINLINE HRESULT IDXGIFactory4_GetParent(IDXGIFactory4* This,REFIID riid,void **parent) {
    return This->lpVtbl->GetParent(This,riid,parent);
}
/*** IDXGIFactory methods ***/
static FORCEINLINE HRESULT IDXGIFactory4_EnumAdapters(IDXGIFactory4* This,UINT adapter_idx,IDXGIAdapter **adapter) {
    return This->lpVtbl->EnumAdapters(This,adapter_idx,adapter);
}
static FORCEINLINE HRESULT IDXGIFactory4_MakeWindowAssociation(IDXGIFactory4* This,HWND hwnd,UINT flags) {
    return This->lpVtbl->MakeWindowAssociation(This,hwnd,flags);
}
static FORCEINLINE HRESULT IDXGIFactory4_GetWindowAssociation(IDXGIFactory4* This,HWND *hwnd) {
    return This->lpVtbl->GetWindowAssociation(This,hwnd);
}
static FORCEINLINE HRESULT IDXGIFactory4_CreateSwapChain(IDXGIFactory4* This,IUnknown *device,DXGI_SWAP_CHAIN_DESC *desc,IDXGISwapChain **swapchain) {
    return This->lpVtbl->CreateSwapChain(This,device,desc,swapchain);
}
static FORCEINLINE HRESULT IDXGIFactory4_CreateSoftwareAdapter(IDXGIFactory4* This,HMODULE hmodule,IDXGIAdapter **adapter) {
    return This->lpVtbl->CreateSoftwareAdapter(This,hmodule,adapter);
}
/*** IDXGIFactory1 methods ***/
static FORCEINLINE HRESULT IDXGIFactory4_EnumAdapters1(IDXGIFactory4* This,UINT adapter_idx,IDXGIAdapter1 **adpter) {
    return This->lpVtbl->EnumAdapters1(This,adapter_idx,adpter);
}
static FORCEINLINE BOOL IDXGIFactory4_IsCurrent(IDXGIFactory4* This) {
    return This->lpVtbl->IsCurrent(This);
}
/*** IDXGIFactory2 methods ***/
static FORCEINLINE BOOL IDXGIFactory4_IsWindowedStereoEnabled(IDXGIFactory4* This) {
    return This->lpVtbl->IsWindowedStereoEnabled(This);
}
static FORCEINLINE HRESULT IDXGIFactory4_CreateSwapChainForHwnd(IDXGIFactory4* This,IUnknown *device,HWND window,const DXGI_SWAP_CHAIN_DESC1 *desc,const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *fullscreen_desc,IDXGIOutput *output,IDXGISwapChain1 **swapchain) {
    return This->lpVtbl->CreateSwapChainForHwnd(This,device,window,desc,fullscreen_desc,output,swapchain);
}
static FORCEINLINE HRESULT IDXGIFactory4_CreateSwapChainForCoreWindow(IDXGIFactory4* This,IUnknown *device,IUnknown *window,const DXGI_SWAP_CHAIN_DESC1 *desc,IDXGIOutput *output,IDXGISwapChain1 **swapchain) {
    return This->lpVtbl->CreateSwapChainForCoreWindow(This,device,window,desc,output,swapchain);
}
static FORCEINLINE HRESULT IDXGIFactory4_GetSharedResourceAdapterLuid(IDXGIFactory4* This,HANDLE resource,LUID *luid) {
    return This->lpVtbl->GetSharedResourceAdapterLuid(This,resource,luid);
}
static FORCEINLINE HRESULT IDXGIFactory4_RegisterStereoStatusWindow(IDXGIFactory4* This,HWND window,UINT msg,DWORD *cookie) {
    return This->lpVtbl->RegisterStereoStatusWindow(This,window,msg,cookie);
}
static FORCEINLINE HRESULT IDXGIFactory4_RegisterStereoStatusEvent(IDXGIFactory4* This,HANDLE event,DWORD *cookie) {
    return This->lpVtbl->RegisterStereoStatusEvent(This,event,cookie);
}
static FORCEINLINE void IDXGIFactory4_UnregisterStereoStatus(IDXGIFactory4* This,DWORD cookie) {
    This->lpVtbl->UnregisterStereoStatus(This,cookie);
}
static FORCEINLINE HRESULT IDXGIFactory4_RegisterOcclusionStatusWindow(IDXGIFactory4* This,HWND window,UINT msg,DWORD *cookie) {
    return This->lpVtbl->RegisterOcclusionStatusWindow(This,window,msg,cookie);
}
static FORCEINLINE HRESULT IDXGIFactory4_RegisterOcclusionStatusEvent(IDXGIFactory4* This,HANDLE event,DWORD *cookie) {
    return This->lpVtbl->RegisterOcclusionStatusEvent(This,event,cookie);
}
static FORCEINLINE void IDXGIFactory4_UnregisterOcclusionStatus(IDXGIFactory4* This,DWORD cookie) {
    This->lpVtbl->UnregisterOcclusionStatus(This,cookie);
}
static FORCEINLINE HRESULT IDXGIFactory4_CreateSwapChainForComposition(IDXGIFactory4* This,IUnknown *device,const DXGI_SWAP_CHAIN_DESC1 *desc,IDXGIOutput *output,IDXGISwapChain1 **swapchain) {
    return This->lpVtbl->CreateSwapChainForComposition(This,device,desc,output,swapchain);
}
/*** IDXGIFactory3 methods ***/
static FORCEINLINE UINT IDXGIFactory4_GetCreationFlags(IDXGIFactory4* This) {
    return This->lpVtbl->GetCreationFlags(This);
}
/*** IDXGIFactory4 methods ***/
static FORCEINLINE HRESULT IDXGIFactory4_EnumAdapterByLuid(IDXGIFactory4* This,LUID luid,REFIID iid,void **adapter) {
    return This->lpVtbl->EnumAdapterByLuid(This,luid,iid,adapter);
}
static FORCEINLINE HRESULT IDXGIFactory4_EnumWarpAdapter(IDXGIFactory4* This,REFIID iid,void **adapter) {
    return This->lpVtbl->EnumWarpAdapter(This,iid,adapter);
}
#endif
#endif

#endif


#endif  /* __IDXGIFactory4_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __vkd3d_dxgi1_4_h__ */
