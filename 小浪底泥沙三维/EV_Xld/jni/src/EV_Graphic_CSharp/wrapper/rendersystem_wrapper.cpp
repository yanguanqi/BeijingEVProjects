/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystem.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_push_back_void_CDepthBuffer(void *pObjectXXXX, _in EarthView::World::Graphic::CDepthBuffer*& ref_t )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_DepthBufferVec_front_CDepthBuffer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_DepthBufferVec_back_CDepthBuffer(void *pObjectXXXX )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_insert_void_ev_uint32_CDepthBuffer(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CDepthBuffer*& ref_t )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_DepthBufferVec_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_DepthBufferVec_OperatorIndex_CDepthBuffer_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::DepthBufferVec& objYYYY = *(EarthView::World::Graphic::DepthBufferVec*) pObjXXXX;
				EarthView::World::Graphic::CDepthBuffer* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_DepthBufferVec_at_CDepthBuffer_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_DepthBufferVec_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferVec_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::DepthBufferVec* ptrNativeObject = (EarthView::World::Graphic::DepthBufferVec*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_DepthBufferMap_push_ev_bool_ev_uint16_DepthBufferVec(void *pObjectXXXX, _in const ev_uint16& key, _in void* val )
			{
				EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, *(EarthView::World::Graphic::DepthBufferVec*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_DepthBufferMap_exist_ev_bool_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_DepthBufferMap_OperatorIndex_DepthBufferVec_ev_uint16(void *pObjXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::DepthBufferMap& objYYYY = *(EarthView::World::Graphic::DepthBufferMap*) pObjXXXX;
				EarthView::World::Graphic::DepthBufferVec& objXXXX = objYYYY[key];
				EarthView::World::Graphic::DepthBufferVec *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_DepthBufferMap_get_DepthBufferVec_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				EarthView::World::Graphic::DepthBufferVec& objXXXX = ptrNativeObject->get(key);
				EarthView::World::Graphic::DepthBufferVec *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferMap_erase_void_ev_uint16(void *pObjectXXXX, _in const ev_uint16& key )
			{
				EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_DepthBufferMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_DepthBufferMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_DepthBufferMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::DepthBufferMap* ptrNativeObject = (EarthView::World::Graphic::DepthBufferMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderTargetMap_push_ev_bool_EVString_CRenderTarget(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CRenderTarget*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderTargetMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_RenderTargetMap_OperatorIndex_CRenderTarget_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::RenderTargetMap& objYYYY = *(EarthView::World::Graphic::RenderTargetMap*) pObjXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_RenderTargetMap_get_CRenderTarget_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderTargetMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderTargetMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderTargetMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_push_void_ev_uchar_CRenderTarget(void *pObjectXXXX, _in const ev_uchar& key, _in EarthView::World::Graphic::CRenderTarget*& ref_val )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ptrNativeObject->push(key, ref_val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_exist_ev_bool_ev_uchar(void *pObjectXXXX, _in const ev_uchar& key )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_erase_void_ev_uchar(void *pObjectXXXX, _in const ev_uchar& key )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_count_ev_size_t_ev_uchar(void *pObjectXXXX, _in const ev_uchar& key )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_get_CRenderTarget_ev_uchar_ev_size_t(void *pObjectXXXX, _in const ev_uchar& key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->get(key, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_erase_void_ev_uchar_ev_size_t(void *pObjectXXXX, _in const ev_uchar& key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ptrNativeObject->erase(key, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderTargetPriorityMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderTargetPriorityMap* ptrNativeObject = (EarthView::World::Graphic::RenderTargetPriorityMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef EarthView::World::Graphic::CHardwareOcclusionQuery*  ( _stdcall EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback)(_inout EarthView::World::Graphic::CHardwareOcclusionQuery* hq);
			typedef char*  ( _stdcall EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback)();
			typedef EarthView::World::Graphic::CRenderWindow*  ( _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback)(_in ev_bool autoCreateWindow, _in char*& windowTitle);
			typedef EarthView::World::Graphic::CRenderWindow*  ( _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback)(_in ev_bool autoCreateWindow);
			typedef EarthView::World::Graphic::CRenderSystemCapabilities*  ( _stdcall EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback)(_inout EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback)(_in ev_real32 r, _in ev_real32 g, _in ev_real32 b);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback)(_in int so);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef EarthView::World::Graphic::CRenderWindow*  ( _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback)(_in char*& name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen, _in const EarthView::World::Core::CommonStringPairList* miscParams);
			typedef EarthView::World::Graphic::CRenderWindow*  ( _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback)(_in char*& name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback)(_in const void* renderWindowDescriptions, _out void* createdWindows);
			typedef EarthView::World::Graphic::CMultiRenderTarget*  ( _stdcall EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback)(_inout void* target);
			typedef EarthView::World::Graphic::CRenderTarget*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CRenderTarget*  ( _stdcall EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback)(_in ev_int32 errorNumber);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback)(_in EarthView::World::Graphic::CRenderTarget* renderTarget);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback)(_in const void* lights, _in ev_uint16 limit);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback)(_in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint16 count);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback)(_in const void* m);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback)(_in ev_uint64  texUnit, _inout void* tl);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback)(_in ev_uint64  texUnit);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback)(_in ev_uint64  texUnit);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback)(_in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess, _in ev_int32 tracking);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback)(_in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback)(_in Real size, _in ev_bool attenuationEnabled, _in Real constant, _in Real linear, _in Real quadratic, _in Real minSize, _in Real maxSize);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback)(_in ev_uint64  unit, _in ev_bool enabled, _in const void* texPtr);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback)(_in ev_uint64  unit, _in ev_bool enabled, _in char*& texname);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback)(_in ev_uint64  unit, _in const void* tex);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback)(_in ev_uint64  unit, _in ev_uint64  index);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback)(_in ev_uint64  unit, _in int m, _in const EarthView::World::Graphic::CFrustum* ref_frustum);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback)(_in ev_uint64  unit, _in int m);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback)(_in ev_uint64  unit, _in const void* bm);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback)(_in ev_uint64  unit, _in int minFilter, _in int magFilter, _in int mipFilter);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback)(_in ev_uint64  unit, _in int ftype, _in int filter);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback)(_in ev_uint64  unit, _in ev_uint32 maxAnisotropy);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback)(_in ev_uint64  unit, _in const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback)(_in ev_uint64  unit, _in const void* colour);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback)(_in ev_uint64  unit, _in ev_real32 bias);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback)(_in ev_uint64  unit, _in const void* xform);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback)(_in int sourceFactor, _in int destFactor, _in int op);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback)(_in int sourceFactor, _in int destFactor);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback)(_in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op, _in int alphaOp);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback)(_in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback)(_in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback)(_in int func, _in ev_uchar value, _in ev_bool alphaToCoverage);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback)(_in ev_bool enabled, _in const void* pos);
			typedef EarthView::World::Graphic::CDepthBuffer*  ( _stdcall EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback)(_in EarthView::World::Graphic::CRenderTarget* renderTarget);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback)();
			typedef EarthView::World::Graphic::CRenderSystem::RenderSystemContext*  ( _stdcall EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback)(_in EarthView::World::Graphic::CRenderSystem::RenderSystemContext* context);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* ref_vp);
			typedef EarthView::World::Graphic::CViewport*  ( _stdcall EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback)(_in int mode);
			typedef int  ( _stdcall EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback)(_in ev_bool depthTest, _in ev_bool depthWrite, _in int depthFunction);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback)(_in ev_bool depthTest, _in ev_bool depthWrite);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback)(_in ev_bool depthTest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback)(_in int func);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback)(_in ev_bool red, _in ev_bool green, _in ev_bool blue, _in ev_bool alpha);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback)(_in ev_real32 constantBias, _in ev_real32 slopeScaleBias);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback)(_in ev_real32 constantBias);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback)(_in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback)(_in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback)(_in int mode, _in const void* colour, _in Real expDensity);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback)(_in int mode, _in const void* colour);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback)(_in int mode);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback)(_in const void* colour, _in ev_uint32* pDest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback)(_in ev_uint32 srcColor, _inout void* colour);
			typedef int  ( _stdcall EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback)(_in const void* matrix, _inout void* dest, _in ev_bool forGpuProgram);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback)(_in const void* matrix, _inout void* dest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback)(_in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback)(_in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback)(_in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback)(_in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback)(_in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback)(_in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback)(_inout void* matrix, _in const void* plane, _in ev_bool forGpuProgram);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback)(_in int level);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback)(_in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp, _in ev_bool twoSidedOperation);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback)(_in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback)(_in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback)(_in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback)(_in int func, _in ev_uint32 refValue, _in ev_uint32 mask);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback)(_in int func, _in ev_uint32 refValue);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback)(_in int func);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback)(_inout EarthView::World::Graphic::CVertexDeclaration* decl);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback)(_inout EarthView::World::Graphic::CVertexBufferBinding* binding);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback)(_in ev_bool normalise);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback)(_in const void* op);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback)();
			typedef void*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback)(_inout EarthView::World::Graphic::CGpuProgram* ref_prg);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback)(_in int gptype, _in void* params, _in ev_uint16 variabilityMask);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback)(_in int gptype);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback)(_in int gptype);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback)(_in int gptype);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback)(_in const void* clipPlanes);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback)(_in const void* p);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback)(_in Real A, _in Real B, _in Real C, _in Real D);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback)(_in const EarthView::World::Graphic::CCamera* cam);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback)(_in ev_bool swapBuffers);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback)(_in ev_bool waitForVsync);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback)(_in ev_bool invert);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback)(_in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right, _in ev_uint64  bottom);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback)(_in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback)(_in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback)(_in ev_bool enabled, _in ev_uint64  left);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback)(_in ev_bool enabled);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback)(_in ev_uint32 buffers, _in const void* colour, _in Real depth, _in ev_uint16 stencil);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback)(_in ev_uint32 buffers, _in const void* colour, _in Real depth);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback)(_in ev_uint32 buffers, _in const void* colour);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback)(_in ev_uint32 buffers);
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback)(_in const ev_uint64  count);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback)(_in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier, _in ev_real32 slopeScale);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback)(_in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback)(_in ev_bool derive, _in ev_real32 baseValue);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback)(_in ev_bool derive);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback)(_inout EarthView::World::Graphic::CRenderTarget* ref_target);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback)(_in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ref_l);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback)(_in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* l);
			typedef const void*  ( _stdcall EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback)(_in char*& name, _in const EarthView::World::Core::CommonStringPairList* params);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback)(_in const void* clipPlanes);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback)(_inout EarthView::World::Graphic::CRenderSystemCapabilities* caps, _inout EarthView::World::Graphic::CRenderTarget* primary);
			class CRenderSystemProxy : public EarthView::World::Graphic::CRenderSystem
			{
			private:
				EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback* m_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback;
				EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback* m_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback;
				EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback* m_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback;
				EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback* m_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback;
				EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback* m_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback;
				EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback* m_EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback;
				EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback* m_EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback;
				EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback* m_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback;
				EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback* m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback;
				EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback* m_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback;
				EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback* m_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback;
				EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback* m_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback;
				EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback* m_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback;
				EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback* m_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback;
				EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback;
				EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback* m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback;
				EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback* m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback;
				EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback* m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback;
				EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback* m_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback;
				EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback* m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback;
				EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback* m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback;
				EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback;
				EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback* m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback;
				EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback* m_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback;
				EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback* m_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback;
				EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback* m_EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback;
				EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback* m_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback;
				EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback* m_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback;
				EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback* m_EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback;
				EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback* m_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback;
				EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback* m_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback;
				EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback* m_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback;
				EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback* m_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback;
				EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback;
				EarthView_World_Graphic_CRenderSystem__setFog_void_Callback* m_EarthView_World_Graphic_CRenderSystem__setFog_void_Callback;
				EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback* m_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback;
				EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback* m_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback;
				EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback* m_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback;
				EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback;
				EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback* m_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback;
				EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback* m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback;
				EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback* m_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback;
				EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback* m_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback;
				EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback* m_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback;
				EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback* m_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback;
				EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback* m_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback;
				EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback* m_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback;
				EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback* m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback;
				EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback* m_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback;
				EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback* m_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback;
				EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback* m_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback;
				EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback* m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback;
				EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback* m_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback;
				EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback* m_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback;
				EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback* m_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback;
				EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback* m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback;
				EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback* m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback;
				EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback* m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback;
				EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback* m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback;
				EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback* m_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback;
				EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback* m_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback;
				EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback* m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback;
				EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback* m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback;
				EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback* m_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback;
				EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback* m_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback;
				EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback* m_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback;
				EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback* m_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback;
				EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback* m_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback;
				EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback* m_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback;
				EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback* m_EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback;
				EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback* m_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback;
				EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback* m_EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback;
				EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback* m_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback;
				EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback;
				EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback* m_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback;
				EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback* m_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback;
			public:
				CRenderSystemProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystem(pList)
				{
					m_EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getName_EVString(EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap(EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString(EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery(EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery(EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString(EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString(EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool(EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities(EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities(EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_reinitialise_void(EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_shutdown_void(EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32(EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions(EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList(EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString(EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString(EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString(EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString(EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget(EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString(EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString(EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator(EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32(EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget(EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16(EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool(EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4(EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16(EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4(EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4(EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4(EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4(EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4(EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState(EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t(EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t(EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real(EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool(EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real(EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr(EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString(EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr(EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t(EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum(EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod(EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx(EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions(EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions(EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32(EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode(EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue(EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32(EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4(EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool(EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3(EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget(EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__beginFrame_void(EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext(EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext(EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__endFrame_void(EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport(EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport(EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode(EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode(EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction(EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool(EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool(EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void(EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void(EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool(EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void(EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction(EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void(EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool(EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32(EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32(EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real(EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real(EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real(EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue(EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode(EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void(EarthView_World_Graphic_CRenderSystem__setFog_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setFog_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void(EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32(EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32(EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32(EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32(EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue(EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType(EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool(EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4(EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4(EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4(EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4(EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool(EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode(EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void(EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration(EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding(EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation(EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion(EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void(EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString(EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram(EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType(EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType(EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType(EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList(EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane(EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real(EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void(EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void(EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera(EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool(EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void(EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool(EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void(EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool(EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t(EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t(EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t(EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16(EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real(EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue(EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32(EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real(EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real(EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real(EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real(EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t(EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32(EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32(EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32(EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool(EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget(EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener(EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener(EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector(EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void(EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void(EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_registerThread_void(EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void(EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_unregisterThread_void(EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32(EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList(EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString(EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList(EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget(EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback = pCallback;
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getName();
				}
				virtual EarthView::World::Graphic::ConfigOptionMap& getConfigOptions()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ConfigOptionMap& returnValue = *(EarthView::World::Graphic::ConfigOptionMap*)m_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getConfigOptions();
				}
				virtual void setConfigOption(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback(name_Char, value_Char);
					}
					else
						return this->CRenderSystem::setConfigOption(name, value);
				}
				virtual EarthView::World::Graphic::CHardwareOcclusionQuery* createHardwareOcclusionQuery()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CHardwareOcclusionQuery* returnValue = m_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::createHardwareOcclusionQuery();
				}
				virtual void destroyHardwareOcclusionQuery(_inout EarthView::World::Graphic::CHardwareOcclusionQuery* hq)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback(hq);
					}
					else
						return this->CRenderSystem::destroyHardwareOcclusionQuery(hq);
				}
				virtual EVString validateConfigOptions()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::validateConfigOptions();
				}
				virtual EarthView::World::Graphic::CRenderWindow* _initialise(_in ev_bool autoCreateWindow, _in const EVString& windowTitle)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* windowTitle_Char = windowTitle.makeBuffer();
						EarthView::World::Graphic::CRenderWindow* returnValue = m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback(autoCreateWindow, windowTitle_Char);
						return returnValue;
					}
					else
						return this->CRenderSystem::_initialise(autoCreateWindow, windowTitle);
				}
				virtual EarthView::World::Graphic::CRenderWindow* _initialise(_in ev_bool autoCreateWindow)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderWindow* returnValue = m_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback(autoCreateWindow);
						return returnValue;
					}
					else
						return this->CRenderSystem::_initialise(autoCreateWindow);
				}
				virtual EarthView::World::Graphic::CRenderSystemCapabilities* createRenderSystemCapabilities() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderSystemCapabilities* returnValue = m_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::createRenderSystemCapabilities();
				}
				virtual void useCustomRenderSystemCapabilities(_inout EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback(ref_capabilities);
					}
					else
						return this->CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
				}
				virtual void reinitialise()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback();
					}
					else
						return this->CRenderSystem::reinitialise();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback();
					}
					else
						return this->CRenderSystem::shutdown();
				}
				virtual void setAmbientLight(_in ev_real32 r, _in ev_real32 g, _in ev_real32 b)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback(r, g, b);
					}
					else
						return this->CRenderSystem::setAmbientLight(r, g, b);
				}
				virtual void setShadingType(_in EarthView::World::Graphic::ShadeOptions so)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback((int)so);
					}
					else
						return this->CRenderSystem::setShadingType(so);
				}
				virtual void setLightingEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::setLightingEnabled(enabled);
				}
				virtual EarthView::World::Graphic::CRenderWindow* _createRenderWindow(_in const EVString& name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen, _in const EarthView::World::Core::CommonStringPairList* miscParams)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRenderWindow* returnValue = m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback(name_Char, width, height, fullScreen, miscParams);
						return returnValue;
					}
					else
						return this->CRenderSystem::_createRenderWindow(name, width, height, fullScreen, miscParams);
				}
				virtual EarthView::World::Graphic::CRenderWindow* _createRenderWindow(_in const EVString& name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRenderWindow* returnValue = m_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback(name_Char, width, height, fullScreen);
						return returnValue;
					}
					else
						return this->CRenderSystem::_createRenderWindow(name, width, height, fullScreen);
				}
				virtual ev_bool _createRenderWindows(_in const EarthView::World::Graphic::RenderWindowDescriptionList& renderWindowDescriptions, _out EarthView::World::Graphic::RenderWindowList& createdWindows)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback(&renderWindowDescriptions, &createdWindows);
						return returnValue;
					}
					else
						return this->CRenderSystem::_createRenderWindows(renderWindowDescriptions, createdWindows);
				}
				virtual EarthView::World::Graphic::CMultiRenderTarget* createMultiRenderTarget(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CMultiRenderTarget* returnValue = m_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CRenderSystem::createMultiRenderTarget(name);
				}
				virtual void destroyRenderWindow(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback(name_Char);
					}
					else
						return this->CRenderSystem::destroyRenderWindow(name);
				}
				virtual void destroyRenderTexture(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback(name_Char);
					}
					else
						return this->CRenderSystem::destroyRenderTexture(name);
				}
				virtual void destroyRenderTarget(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback(name_Char);
					}
					else
						return this->CRenderSystem::destroyRenderTarget(name);
				}
				virtual void attachRenderTarget(_inout EarthView::World::Graphic::CRenderTarget& target)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback(&target);
					}
					else
						return this->CRenderSystem::attachRenderTarget(target);
				}
				virtual EarthView::World::Graphic::CRenderTarget* getRenderTarget(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRenderTarget* returnValue = m_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CRenderSystem::getRenderTarget(name);
				}
				virtual EarthView::World::Graphic::CRenderTarget* detachRenderTarget(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CRenderTarget* returnValue = m_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CRenderSystem::detachRenderTarget(name);
				}
				virtual EarthView::World::Graphic::CRenderSystem::RenderTargetIterator getRenderTargetIterator()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderSystem::RenderTargetIterator returnValue = *(EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*)m_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getRenderTargetIterator();
				}
				virtual EVString getErrorDescription(_in ev_int32 errorNumber) const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback(errorNumber);
						return returnValue;
					}
					else
						return this->CRenderSystem::getErrorDescription(errorNumber);
				}
				virtual void setDepthBufferFor(_in EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback(renderTarget);
					}
					else
						return this->CRenderSystem::setDepthBufferFor(renderTarget);
				}
				virtual void _useLights(_in const EarthView::World::Graphic::LightList& lights, _in ev_uint16 limit)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback(&lights, limit);
					}
					else
						return this->CRenderSystem::_useLights(lights, limit);
				}
				virtual ev_bool areFixedFunctionLightsInViewSpace() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::areFixedFunctionLightsInViewSpace();
				}
				virtual void _setWorldMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CRenderSystem::_setWorldMatrix(m);
				}
				virtual void _setWorldMatrices(_in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint16 count)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback(m, count);
					}
					else
						return this->CRenderSystem::_setWorldMatrices(m, count);
				}
				virtual void _setViewMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CRenderSystem::_setViewMatrix(m);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getViewMatrix() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getViewMatrix();
				}
				virtual void _setProjectionMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& m)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback(&m);
					}
					else
						return this->CRenderSystem::_setProjectionMatrix(m);
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrix() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getProjectMatrix();
				}
				virtual const EarthView::World::Spatial::Math::CMatrix4& _getProjectMatrixDepth() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Math::CMatrix4& returnValue = *(EarthView::World::Spatial::Math::CMatrix4*)m_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getProjectMatrixDepth();
				}
				virtual void _setTextureUnitSettings(_in ev_size_t texUnit, _inout EarthView::World::Graphic::CTextureUnitState& tl)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback(texUnit, &tl);
					}
					else
						return this->CRenderSystem::_setTextureUnitSettings(texUnit, tl);
				}
				virtual void _disableTextureUnit(_in ev_size_t texUnit)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback(texUnit);
					}
					else
						return this->CRenderSystem::_disableTextureUnit(texUnit);
				}
				virtual void _disableTextureUnitsFrom(_in ev_size_t texUnit)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback(texUnit);
					}
					else
						return this->CRenderSystem::_disableTextureUnitsFrom(texUnit);
				}
				virtual void _setSurfaceParams(_in const EarthView::World::Graphic::CColourValue& ambient, _in const EarthView::World::Graphic::CColourValue& diffuse, _in const EarthView::World::Graphic::CColourValue& specular, _in const EarthView::World::Graphic::CColourValue& emissive, _in Real shininess, _in ev_int32 tracking)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback(&ambient, &diffuse, &specular, &emissive, shininess, tracking);
					}
					else
						return this->CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess, tracking);
				}
				virtual void _setSurfaceParams(_in const EarthView::World::Graphic::CColourValue& ambient, _in const EarthView::World::Graphic::CColourValue& diffuse, _in const EarthView::World::Graphic::CColourValue& specular, _in const EarthView::World::Graphic::CColourValue& emissive, _in Real shininess)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback(&ambient, &diffuse, &specular, &emissive, shininess);
					}
					else
						return this->CRenderSystem::_setSurfaceParams(ambient, diffuse, specular, emissive, shininess);
				}
				virtual void _setPointSpritesEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::_setPointSpritesEnabled(enabled);
				}
				virtual void _setPointParameters(_in Real size, _in ev_bool attenuationEnabled, _in Real constant, _in Real linear, _in Real quadratic, _in Real minSize, _in Real maxSize)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
					}
					else
						return this->CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
				}
				virtual void _setTexture(_in ev_size_t unit, _in ev_bool enabled, _in const EarthView::World::Graphic::CTexturePtr& texPtr)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback(unit, enabled, &texPtr);
					}
					else
						return this->CRenderSystem::_setTexture(unit, enabled, texPtr);
				}
				virtual void _setTexture(_in ev_size_t unit, _in ev_bool enabled, _in const EVString& texname)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* texname_Char = texname.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback(unit, enabled, texname_Char);
					}
					else
						return this->CRenderSystem::_setTexture(unit, enabled, texname);
				}
				virtual void _setVertexTexture(_in ev_size_t unit, _in const EarthView::World::Graphic::CTexturePtr& tex)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback(unit, &tex);
					}
					else
						return this->CRenderSystem::_setVertexTexture(unit, tex);
				}
				virtual void _setTextureCoordSet(_in ev_size_t unit, _in ev_size_t index)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback(unit, index);
					}
					else
						return this->CRenderSystem::_setTextureCoordSet(unit, index);
				}
				virtual void _setTextureCoordCalculation(_in ev_size_t unit, _in TexCoordCalcMethod m, _in const EarthView::World::Graphic::CFrustum* ref_frustum)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback(unit, (int)m, ref_frustum);
					}
					else
						return this->CRenderSystem::_setTextureCoordCalculation(unit, m, ref_frustum);
				}
				virtual void _setTextureCoordCalculation(_in ev_size_t unit, _in TexCoordCalcMethod m)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback(unit, (int)m);
					}
					else
						return this->CRenderSystem::_setTextureCoordCalculation(unit, m);
				}
				virtual void _setTextureBlendMode(_in ev_size_t unit, _in const EarthView::World::Graphic::CLayerBlendModeEx& bm)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback(unit, &bm);
					}
					else
						return this->CRenderSystem::_setTextureBlendMode(unit, bm);
				}
				virtual void _setTextureUnitFiltering(_in ev_size_t unit, _in EarthView::World::Graphic::FilterOptions minFilter, _in EarthView::World::Graphic::FilterOptions magFilter, _in EarthView::World::Graphic::FilterOptions mipFilter)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback(unit, (int)minFilter, (int)magFilter, (int)mipFilter);
					}
					else
						return this->CRenderSystem::_setTextureUnitFiltering(unit, minFilter, magFilter, mipFilter);
				}
				virtual void _setTextureUnitFiltering(_in ev_size_t unit, _in EarthView::World::Graphic::FilterType ftype, _in EarthView::World::Graphic::FilterOptions filter)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback(unit, (int)ftype, (int)filter);
					}
					else
						return this->CRenderSystem::_setTextureUnitFiltering(unit, ftype, filter);
				}
				virtual void _setTextureLayerAnisotropy(_in ev_size_t unit, _in ev_uint32 maxAnisotropy)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback(unit, maxAnisotropy);
					}
					else
						return this->CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
				}
				virtual void _setTextureAddressingMode(_in ev_size_t unit, _in const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback(unit, uvw);
					}
					else
						return this->CRenderSystem::_setTextureAddressingMode(unit, uvw);
				}
				virtual void _setTextureBorderColour(_in ev_size_t unit, _in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback(unit, &colour);
					}
					else
						return this->CRenderSystem::_setTextureBorderColour(unit, colour);
				}
				virtual void _setTextureMipmapBias(_in ev_size_t unit, _in ev_real32 bias)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback(unit, bias);
					}
					else
						return this->CRenderSystem::_setTextureMipmapBias(unit, bias);
				}
				virtual void _setTextureMatrix(_in ev_size_t unit, _in const EarthView::World::Spatial::Math::CMatrix4& xform)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback(unit, &xform);
					}
					else
						return this->CRenderSystem::_setTextureMatrix(unit, xform);
				}
				virtual void _setSceneBlending(_in EarthView::World::Graphic::SceneBlendFactor sourceFactor, _in EarthView::World::Graphic::SceneBlendFactor destFactor, _in EarthView::World::Graphic::SceneBlendOperation op)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback((int)sourceFactor, (int)destFactor, (int)op);
					}
					else
						return this->CRenderSystem::_setSceneBlending(sourceFactor, destFactor, op);
				}
				virtual void _setSceneBlending(_in EarthView::World::Graphic::SceneBlendFactor sourceFactor, _in EarthView::World::Graphic::SceneBlendFactor destFactor)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback((int)sourceFactor, (int)destFactor);
					}
					else
						return this->CRenderSystem::_setSceneBlending(sourceFactor, destFactor);
				}
				virtual void _setSeparateSceneBlending(_in EarthView::World::Graphic::SceneBlendFactor sourceFactor, _in EarthView::World::Graphic::SceneBlendFactor destFactor, _in EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, _in EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, _in EarthView::World::Graphic::SceneBlendOperation op, _in EarthView::World::Graphic::SceneBlendOperation alphaOp)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback((int)sourceFactor, (int)destFactor, (int)sourceFactorAlpha, (int)destFactorAlpha, (int)op, (int)alphaOp);
					}
					else
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op, alphaOp);
				}
				virtual void _setSeparateSceneBlending(_in EarthView::World::Graphic::SceneBlendFactor sourceFactor, _in EarthView::World::Graphic::SceneBlendFactor destFactor, _in EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, _in EarthView::World::Graphic::SceneBlendFactor destFactorAlpha, _in EarthView::World::Graphic::SceneBlendOperation op)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback((int)sourceFactor, (int)destFactor, (int)sourceFactorAlpha, (int)destFactorAlpha, (int)op);
					}
					else
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha, op);
				}
				virtual void _setSeparateSceneBlending(_in EarthView::World::Graphic::SceneBlendFactor sourceFactor, _in EarthView::World::Graphic::SceneBlendFactor destFactor, _in EarthView::World::Graphic::SceneBlendFactor sourceFactorAlpha, _in EarthView::World::Graphic::SceneBlendFactor destFactorAlpha)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback((int)sourceFactor, (int)destFactor, (int)sourceFactorAlpha, (int)destFactorAlpha);
					}
					else
						return this->CRenderSystem::_setSeparateSceneBlending(sourceFactor, destFactor, sourceFactorAlpha, destFactorAlpha);
				}
				virtual void _setAlphaRejectSettings(_in EarthView::World::Graphic::CompareFunction func, _in ev_uchar value, _in ev_bool alphaToCoverage)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback((int)func, value, alphaToCoverage);
					}
					else
						return this->CRenderSystem::_setAlphaRejectSettings(func, value, alphaToCoverage);
				}
				virtual void _setTextureProjectionRelativeTo(_in ev_bool enabled, _in const EarthView::World::Spatial::Math::CVector3& pos)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback(enabled, &pos);
					}
					else
						return this->CRenderSystem::_setTextureProjectionRelativeTo(enabled, pos);
				}
				virtual EarthView::World::Graphic::CDepthBuffer* _createDepthBufferFor(_in EarthView::World::Graphic::CRenderTarget* renderTarget)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CDepthBuffer* returnValue = m_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback(renderTarget);
						return returnValue;
					}
					else
						return this->CRenderSystem::_createDepthBufferFor(renderTarget);
				}
				virtual void _beginFrame()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback();
					}
					else
						return this->CRenderSystem::_beginFrame();
				}
				virtual EarthView::World::Graphic::CRenderSystem::RenderSystemContext* _pauseFrame()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CRenderSystem::RenderSystemContext* returnValue = m_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_pauseFrame();
				}
				virtual void _resumeFrame(_in EarthView::World::Graphic::CRenderSystem::RenderSystemContext* context)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback(context);
					}
					else
						return this->CRenderSystem::_resumeFrame(context);
				}
				virtual void _endFrame()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback();
					}
					else
						return this->CRenderSystem::_endFrame();
				}
				virtual void _setViewport(_in EarthView::World::Graphic::CViewport* ref_vp)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback(ref_vp);
					}
					else
						return this->CRenderSystem::_setViewport(ref_vp);
				}
				virtual EarthView::World::Graphic::CViewport* _getViewport()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CViewport* returnValue = m_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getViewport();
				}
				virtual void _setCullingMode(_in EarthView::World::Graphic::CullingMode mode)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback((int)mode);
					}
					else
						return this->CRenderSystem::_setCullingMode(mode);
				}
				virtual EarthView::World::Graphic::CullingMode _getCullingMode() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CullingMode returnValue = (EarthView::World::Graphic::CullingMode)m_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getCullingMode();
				}
				virtual void _setDepthBufferParams(_in ev_bool depthTest, _in ev_bool depthWrite, _in EarthView::World::Graphic::CompareFunction depthFunction)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback(depthTest, depthWrite, (int)depthFunction);
					}
					else
						return this->CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, depthFunction);
				}
				virtual void _setDepthBufferParams(_in ev_bool depthTest, _in ev_bool depthWrite)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback(depthTest, depthWrite);
					}
					else
						return this->CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
				}
				virtual void _setDepthBufferParams(_in ev_bool depthTest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback(depthTest);
					}
					else
						return this->CRenderSystem::_setDepthBufferParams(depthTest);
				}
				virtual void _setDepthBufferParams()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback();
					}
					else
						return this->CRenderSystem::_setDepthBufferParams();
				}
				virtual void _setDepthBufferCheckEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::_setDepthBufferCheckEnabled(enabled);
				}
				virtual void _setDepthBufferCheckEnabled()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback();
					}
					else
						return this->CRenderSystem::_setDepthBufferCheckEnabled();
				}
				virtual void _setDepthBufferWriteEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::_setDepthBufferWriteEnabled(enabled);
				}
				virtual void _setDepthBufferWriteEnabled()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback();
					}
					else
						return this->CRenderSystem::_setDepthBufferWriteEnabled();
				}
				virtual void _setDepthBufferFunction(_in EarthView::World::Graphic::CompareFunction func)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback((int)func);
					}
					else
						return this->CRenderSystem::_setDepthBufferFunction(func);
				}
				virtual void _setDepthBufferFunction()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback();
					}
					else
						return this->CRenderSystem::_setDepthBufferFunction();
				}
				virtual void _setColourBufferWriteEnabled(_in ev_bool red, _in ev_bool green, _in ev_bool blue, _in ev_bool alpha)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback(red, green, blue, alpha);
					}
					else
						return this->CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
				}
				virtual void _setDepthBias(_in ev_real32 constantBias, _in ev_real32 slopeScaleBias)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback(constantBias, slopeScaleBias);
					}
					else
						return this->CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
				}
				virtual void _setDepthBias(_in ev_real32 constantBias)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback(constantBias);
					}
					else
						return this->CRenderSystem::_setDepthBias(constantBias);
				}
				virtual void _setFog(_in EarthView::World::Graphic::FogMode mode, _in const EarthView::World::Graphic::CColourValue& colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback((int)mode, &colour, expDensity, linearStart, linearEnd);
					}
					else
						return this->CRenderSystem::_setFog(mode, colour, expDensity, linearStart, linearEnd);
				}
				virtual void _setFog(_in EarthView::World::Graphic::FogMode mode, _in const EarthView::World::Graphic::CColourValue& colour, _in Real expDensity, _in Real linearStart)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback((int)mode, &colour, expDensity, linearStart);
					}
					else
						return this->CRenderSystem::_setFog(mode, colour, expDensity, linearStart);
				}
				virtual void _setFog(_in EarthView::World::Graphic::FogMode mode, _in const EarthView::World::Graphic::CColourValue& colour, _in Real expDensity)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback((int)mode, &colour, expDensity);
					}
					else
						return this->CRenderSystem::_setFog(mode, colour, expDensity);
				}
				virtual void _setFog(_in EarthView::World::Graphic::FogMode mode, _in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback((int)mode, &colour);
					}
					else
						return this->CRenderSystem::_setFog(mode, colour);
				}
				virtual void _setFog(_in EarthView::World::Graphic::FogMode mode)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback((int)mode);
					}
					else
						return this->CRenderSystem::_setFog(mode);
				}
				virtual void _setFog()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setFog_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setFog_void_Callback();
					}
					else
						return this->CRenderSystem::_setFog();
				}
				virtual void _beginGeometryCount()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback();
					}
					else
						return this->CRenderSystem::_beginGeometryCount();
				}
				virtual ev_uint32 _getFaceCount() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getFaceCount();
				}
				virtual ev_uint32 _getBatchCount() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getBatchCount();
				}
				virtual ev_uint32 _getVertexCount() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getVertexCount();
				}
				virtual void convertColourValue(_in const EarthView::World::Graphic::CColourValue& colour, _in ev_uint32* pDest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback(&colour, pDest);
					}
					else
						return this->CRenderSystem::convertColourValue(colour, pDest);
				}
				virtual void toColourValue(_in ev_uint32 srcColor, _inout EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback(srcColor, &colour);
					}
					else
						return this->CRenderSystem::toColourValue(srcColor, colour);
				}
				virtual EarthView::World::Graphic::VertexElementType getColourVertexElementType() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::VertexElementType returnValue = (EarthView::World::Graphic::VertexElementType)m_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getColourVertexElementType();
				}
				virtual void _convertProjectionMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& matrix, _inout EarthView::World::Spatial::Math::CMatrix4& dest, _in ev_bool forGpuProgram)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback(&matrix, &dest, forGpuProgram);
					}
					else
						return this->CRenderSystem::_convertProjectionMatrix(matrix, dest, forGpuProgram);
				}
				virtual void _convertProjectionMatrix(_in const EarthView::World::Spatial::Math::CMatrix4& matrix, _inout EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback(&matrix, &dest);
					}
					else
						return this->CRenderSystem::_convertProjectionMatrix(matrix, dest);
				}
				virtual void _makeProjectionMatrix(_in const EarthView::World::Spatial::Math::CRadian& fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest, _in ev_bool forGpuProgram)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback(&fovy, aspect, nearPlane, farPlane, &dest, forGpuProgram);
					}
					else
						return this->CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
				virtual void _makeProjectionMatrix(_in const EarthView::World::Spatial::Math::CRadian& fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback(&fovy, aspect, nearPlane, farPlane, &dest);
					}
					else
						return this->CRenderSystem::_makeProjectionMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
				virtual void _makeProjectionMatrix(_in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest, _in ev_bool forGpuProgram)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback(left, right, bottom, top, nearPlane, farPlane, &dest, forGpuProgram);
					}
					else
						return this->CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest, forGpuProgram);
				}
				virtual void _makeProjectionMatrix(_in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback(left, right, bottom, top, nearPlane, farPlane, &dest);
					}
					else
						return this->CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, dest);
				}
				virtual void _makeOrthoMatrix(_in const EarthView::World::Spatial::Math::CRadian& fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest, _in ev_bool forGpuProgram)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback(&fovy, aspect, nearPlane, farPlane, &dest, forGpuProgram);
					}
					else
						return this->CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest, forGpuProgram);
				}
				virtual void _makeOrthoMatrix(_in const EarthView::World::Spatial::Math::CRadian& fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout EarthView::World::Spatial::Math::CMatrix4& dest)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback(&fovy, aspect, nearPlane, farPlane, &dest);
					}
					else
						return this->CRenderSystem::_makeOrthoMatrix(fovy, aspect, nearPlane, farPlane, dest);
				}
				virtual void _applyObliqueDepthProjection(_inout EarthView::World::Spatial::Math::CMatrix4& matrix, _in const EarthView::World::Spatial::Math::CPlane& plane, _in ev_bool forGpuProgram)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback(&matrix, &plane, forGpuProgram);
					}
					else
						return this->CRenderSystem::_applyObliqueDepthProjection(matrix, plane, forGpuProgram);
				}
				virtual void _setPolygonMode(_in EarthView::World::Graphic::PolygonMode level)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback((int)level);
					}
					else
						return this->CRenderSystem::_setPolygonMode(level);
				}
				virtual void setStencilCheckEnabled(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::setStencilCheckEnabled(enabled);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue, _in ev_uint32 mask, _in StencilOperation stencilFailOp, _in StencilOperation depthFailOp, _in StencilOperation passOp, _in ev_bool twoSidedOperation)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback((int)func, refValue, mask, (int)stencilFailOp, (int)depthFailOp, (int)passOp, twoSidedOperation);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp, twoSidedOperation);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue, _in ev_uint32 mask, _in StencilOperation stencilFailOp, _in StencilOperation depthFailOp, _in StencilOperation passOp)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback((int)func, refValue, mask, (int)stencilFailOp, (int)depthFailOp, (int)passOp);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp, passOp);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue, _in ev_uint32 mask, _in StencilOperation stencilFailOp, _in StencilOperation depthFailOp)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback((int)func, refValue, mask, (int)stencilFailOp, (int)depthFailOp);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp, depthFailOp);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue, _in ev_uint32 mask, _in StencilOperation stencilFailOp)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback((int)func, refValue, mask, (int)stencilFailOp);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask, stencilFailOp);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue, _in ev_uint32 mask)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback((int)func, refValue, mask);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue, mask);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func, _in ev_uint32 refValue)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback((int)func, refValue);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func, refValue);
				}
				virtual void setStencilBufferParams(_in EarthView::World::Graphic::CompareFunction func)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback((int)func);
					}
					else
						return this->CRenderSystem::setStencilBufferParams(func);
				}
				virtual void setStencilBufferParams()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback();
					}
					else
						return this->CRenderSystem::setStencilBufferParams();
				}
				virtual void setVertexDeclaration(_inout EarthView::World::Graphic::CVertexDeclaration* decl)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback(decl);
					}
					else
						return this->CRenderSystem::setVertexDeclaration(decl);
				}
				virtual void setVertexBufferBinding(_inout EarthView::World::Graphic::CVertexBufferBinding* binding)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback(binding);
					}
					else
						return this->CRenderSystem::setVertexBufferBinding(binding);
				}
				virtual void setNormaliseNormals(_in ev_bool normalise)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback(normalise);
					}
					else
						return this->CRenderSystem::setNormaliseNormals(normalise);
				}
				virtual void _render(_in const EarthView::World::Graphic::CRenderOperation& op)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback(&op);
					}
					else
						return this->CRenderSystem::_render(op);
				}
				virtual const EarthView::World::Graphic::DriverVersion& getDriverVersion() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::DriverVersion& returnValue = *(EarthView::World::Graphic::DriverVersion*)m_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getDriverVersion();
				}
				virtual void* getActD3D9Device()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getActD3D9Device();
				}
				virtual EVString _getDefaultViewportMaterialScheme() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::_getDefaultViewportMaterialScheme();
				}
				virtual void bindGpuProgram(_inout EarthView::World::Graphic::CGpuProgram* ref_prg)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback(ref_prg);
					}
					else
						return this->CRenderSystem::bindGpuProgram(ref_prg);
				}
				virtual void bindGpuProgramParameters(_in EarthView::World::Graphic::GpuProgramType gptype, _in EarthView::World::Graphic::GpuProgramParametersSharedPtr params, _in ev_uint16 variabilityMask)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback((int)gptype, &params, variabilityMask);
					}
					else
						return this->CRenderSystem::bindGpuProgramParameters(gptype, params, variabilityMask);
				}
				virtual void bindGpuProgramPassIterationParameters(_in EarthView::World::Graphic::GpuProgramType gptype)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback((int)gptype);
					}
					else
						return this->CRenderSystem::bindGpuProgramPassIterationParameters(gptype);
				}
				virtual void unbindGpuProgram(_in EarthView::World::Graphic::GpuProgramType gptype)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback((int)gptype);
					}
					else
						return this->CRenderSystem::unbindGpuProgram(gptype);
				}
				virtual ev_bool isGpuProgramBound(_in EarthView::World::Graphic::GpuProgramType gptype)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback((int)gptype);
						return returnValue;
					}
					else
						return this->CRenderSystem::isGpuProgramBound(gptype);
				}
				virtual void setClipPlanes(_in const EarthView::World::Spatial::Math::PlaneList& clipPlanes)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback(&clipPlanes);
					}
					else
						return this->CRenderSystem::setClipPlanes(clipPlanes);
				}
				virtual void addClipPlane(_in const EarthView::World::Spatial::Math::CPlane& p)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback(&p);
					}
					else
						return this->CRenderSystem::addClipPlane(p);
				}
				virtual void addClipPlane(_in Real A, _in Real B, _in Real C, _in Real D)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback(A, B, C, D);
					}
					else
						return this->CRenderSystem::addClipPlane(A, B, C, D);
				}
				virtual void resetClipPlanes()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback();
					}
					else
						return this->CRenderSystem::resetClipPlanes();
				}
				virtual void _initRenderTargets()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback();
					}
					else
						return this->CRenderSystem::_initRenderTargets();
				}
				virtual void _notifyCameraRemoved(_in const EarthView::World::Graphic::CCamera* cam)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback(cam);
					}
					else
						return this->CRenderSystem::_notifyCameraRemoved(cam);
				}
				virtual void _updateAllRenderTargets(_in ev_bool swapBuffers)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback(swapBuffers);
					}
					else
						return this->CRenderSystem::_updateAllRenderTargets(swapBuffers);
				}
				virtual void _updateAllRenderTargets()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback();
					}
					else
						return this->CRenderSystem::_updateAllRenderTargets();
				}
				virtual void _swapAllRenderTargetBuffers(_in ev_bool waitForVsync)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback(waitForVsync);
					}
					else
						return this->CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
				}
				virtual void _swapAllRenderTargetBuffers()
				{
					if(m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback();
					}
					else
						return this->CRenderSystem::_swapAllRenderTargetBuffers();
				}
				virtual void setInvertVertexWinding(_in ev_bool invert)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback(invert);
					}
					else
						return this->CRenderSystem::setInvertVertexWinding(invert);
				}
				virtual ev_bool getInvertVertexWinding() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getInvertVertexWinding();
				}
				virtual void setScissorTest(_in ev_bool enabled, _in ev_size_t left, _in ev_size_t top, _in ev_size_t right, _in ev_size_t bottom)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback(enabled, left, top, right, bottom);
					}
					else
						return this->CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
				}
				virtual void setScissorTest(_in ev_bool enabled, _in ev_size_t left, _in ev_size_t top, _in ev_size_t right)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback(enabled, left, top, right);
					}
					else
						return this->CRenderSystem::setScissorTest(enabled, left, top, right);
				}
				virtual void setScissorTest(_in ev_bool enabled, _in ev_size_t left, _in ev_size_t top)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback(enabled, left, top);
					}
					else
						return this->CRenderSystem::setScissorTest(enabled, left, top);
				}
				virtual void setScissorTest(_in ev_bool enabled, _in ev_size_t left)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback(enabled, left);
					}
					else
						return this->CRenderSystem::setScissorTest(enabled, left);
				}
				virtual void setScissorTest(_in ev_bool enabled)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback(enabled);
					}
					else
						return this->CRenderSystem::setScissorTest(enabled);
				}
				virtual void clearFrameBuffer(_in ev_uint32 buffers, _in const EarthView::World::Graphic::CColourValue& colour, _in Real depth, _in ev_uint16 stencil)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback(buffers, &colour, depth, stencil);
					}
					else
						return this->CRenderSystem::clearFrameBuffer(buffers, colour, depth, stencil);
				}
				virtual void clearFrameBuffer(_in ev_uint32 buffers, _in const EarthView::World::Graphic::CColourValue& colour, _in Real depth)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback(buffers, &colour, depth);
					}
					else
						return this->CRenderSystem::clearFrameBuffer(buffers, colour, depth);
				}
				virtual void clearFrameBuffer(_in ev_uint32 buffers, _in const EarthView::World::Graphic::CColourValue& colour)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback(buffers, &colour);
					}
					else
						return this->CRenderSystem::clearFrameBuffer(buffers, colour);
				}
				virtual void clearFrameBuffer(_in ev_uint32 buffers)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback(buffers);
					}
					else
						return this->CRenderSystem::clearFrameBuffer(buffers);
				}
				virtual Real getHorizontalTexelOffset()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getHorizontalTexelOffset();
				}
				virtual Real getVerticalTexelOffset()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getVerticalTexelOffset();
				}
				virtual Real getMinimumDepthInputValue()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getMinimumDepthInputValue();
				}
				virtual Real getMaximumDepthInputValue()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getMaximumDepthInputValue();
				}
				virtual void setCurrentPassIterationCount(_in const ev_size_t count)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback(count);
					}
					else
						return this->CRenderSystem::setCurrentPassIterationCount(count);
				}
				virtual void setDeriveDepthBias(_in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier, _in ev_real32 slopeScale)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback(derive, baseValue, multiplier, slopeScale);
					}
					else
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
				}
				virtual void setDeriveDepthBias(_in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback(derive, baseValue, multiplier);
					}
					else
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
				}
				virtual void setDeriveDepthBias(_in ev_bool derive, _in ev_real32 baseValue)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback(derive, baseValue);
					}
					else
						return this->CRenderSystem::setDeriveDepthBias(derive, baseValue);
				}
				virtual void setDeriveDepthBias(_in ev_bool derive)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback(derive);
					}
					else
						return this->CRenderSystem::setDeriveDepthBias(derive);
				}
				virtual void _setRenderTarget(_inout EarthView::World::Graphic::CRenderTarget* ref_target)
				{
					if(m_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback(ref_target);
					}
					else
						return this->CRenderSystem::_setRenderTarget(ref_target);
				}
				virtual void addListener(_in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ref_l)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback(ref_l);
					}
					else
						return this->CRenderSystem::addListener(ref_l);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* l)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback(l);
					}
					else
						return this->CRenderSystem::removeListener(l);
				}
				virtual const EarthView::World::Core::StringVector& getRenderSystemEvents() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getRenderSystemEvents();
				}
				virtual void preExtraThreadsStarted()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback();
					}
					else
						return this->CRenderSystem::preExtraThreadsStarted();
				}
				virtual void postExtraThreadsStarted()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback();
					}
					else
						return this->CRenderSystem::postExtraThreadsStarted();
				}
				virtual void registerThread()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback();
					}
					else
						return this->CRenderSystem::registerThread();
				}
				virtual void flushRenderSystem()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback();
					}
					else
						return this->CRenderSystem::flushRenderSystem();
				}
				virtual void unregisterThread()
				{
					if(m_EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback();
					}
					else
						return this->CRenderSystem::unregisterThread();
				}
				virtual ev_uint32 getDisplayMonitorCount() const
				{
					if(m_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CRenderSystem::getDisplayMonitorCount();
				}
				virtual void fireEvent(_in const EVString& name, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback(name_Char, params);
					}
					else
						return this->CRenderSystem::fireEvent(name, params);
				}
				virtual void fireEvent(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback(name_Char);
					}
					else
						return this->CRenderSystem::fireEvent(name);
				}
				virtual void setClipPlanesImpl(_in const EarthView::World::Spatial::Math::PlaneList& clipPlanes)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback(&clipPlanes);
					}
					else
						return this->CRenderSystem::setClipPlanesImpl(clipPlanes);
				}
				virtual void initialiseFromRenderSystemCapabilities(_inout EarthView::World::Graphic::CRenderSystemCapabilities* caps, _inout EarthView::World::Graphic::CRenderTarget* primary)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback(caps, primary);
					}
					else
						return this->CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderSystemProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getName_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::ConfigOptionMap& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getConfigOptions();
					EarthView::World::Graphic::ConfigOptionMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::ConfigOptionMap& objXXXX = ptrNativeObject->getConfigOptions();
					EarthView::World::Graphic::ConfigOptionMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getConfigOptions_ConfigOptionMap_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::ConfigOptionMap& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getConfigOptions();
				EarthView::World::Graphic::ConfigOptionMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* value )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setConfigOption(name1, value1);
				else
					ptrNativeObject->setConfigOption(name1, value1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setConfigOption_void_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* value )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setConfigOption(name1, value1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareOcclusionQuery*  _stdcall EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHardwareOcclusionQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createHardwareOcclusionQuery();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHardwareOcclusionQuery* objXXXX = ptrNativeObject->createHardwareOcclusionQuery();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHardwareOcclusionQuery*  _stdcall EarthView_World_Graphic_CRenderSystem_createHardwareOcclusionQuery_CHardwareOcclusionQuery_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareOcclusionQuery* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createHardwareOcclusionQuery();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery(void *pObjectXXXX, _inout EarthView::World::Graphic::CHardwareOcclusionQuery* hq )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyHardwareOcclusionQuery(hq);
				else
					ptrNativeObject->destroyHardwareOcclusionQuery(hq);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyHardwareOcclusionQuery_void_CHardwareOcclusionQuery_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CHardwareOcclusionQuery* hq )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyHardwareOcclusionQuery(hq);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::validateConfigOptions();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->validateConfigOptions();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_validateConfigOptions_EVString_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::validateConfigOptions();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString(void *pObjectXXXX, _in ev_bool autoCreateWindow, _in const char* windowTitle )
			{
				EarthView::World::Core::ev_string windowTitle1 = windowTitle;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow, windowTitle1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->_initialise(autoCreateWindow, windowTitle1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in ev_bool autoCreateWindow, _in const char* windowTitle )
			{
				EarthView::World::Core::ev_string windowTitle1 = windowTitle;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow, windowTitle1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool(void *pObjectXXXX, _in ev_bool autoCreateWindow )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->_initialise(autoCreateWindow);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__initialise_CRenderWindow_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool autoCreateWindow )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initialise(autoCreateWindow);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystemCapabilities*  _stdcall EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createRenderSystemCapabilities();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->createRenderSystemCapabilities();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystemCapabilities*  _stdcall EarthView_World_Graphic_CRenderSystem_createRenderSystemCapabilities_CRenderSystemCapabilities_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createRenderSystemCapabilities();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystemCapabilities*  _stdcall EarthView_World_Graphic_CRenderSystem_getMutableCapabilities_CRenderSystemCapabilities(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->getMutableCapabilities();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
				else
					ptrNativeObject->useCustomRenderSystemCapabilities(ref_capabilities);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::useCustomRenderSystemCapabilities(ref_capabilities);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_reinitialise_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::reinitialise();
				else
					ptrNativeObject->reinitialise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_reinitialise_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_reinitialise_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_reinitialise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_reinitialise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::reinitialise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_shutdown_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_shutdown_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::shutdown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 r, _in ev_real32 g, _in ev_real32 b )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setAmbientLight(r, g, b);
				else
					ptrNativeObject->setAmbientLight(r, g, b);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setAmbientLight_void_ev_real32_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 r, _in ev_real32 g, _in ev_real32 b )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setAmbientLight(r, g, b);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions(void *pObjectXXXX, _in int so )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setShadingType((EarthView::World::Graphic::ShadeOptions)so);
				else
					ptrNativeObject->setShadingType((EarthView::World::Graphic::ShadeOptions)so);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setShadingType_void_ShadeOptions_NoVirtual(void *pObjectXXXX, _in int so )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setShadingType((EarthView::World::Graphic::ShadeOptions)so);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setLightingEnabled(enabled);
				else
					ptrNativeObject->setLightingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setLightingEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setLightingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setWBufferEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setWBufferEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_getWBufferEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getWBufferEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen, _in const EarthView::World::Core::CommonStringPairList* miscParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name1, width, height, fullScreen, miscParams);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->_createRenderWindow(name1, width, height, fullScreen, miscParams);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen, _in const EarthView::World::Core::CommonStringPairList* miscParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name1, width, height, fullScreen, miscParams);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name1, width, height, fullScreen);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->_createRenderWindow(name1, width, height, fullScreen);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindow(name1, width, height, fullScreen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList(void *pObjectXXXX, _in const void* renderWindowDescriptions, _out void* createdWindows )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindows(*(EarthView::World::Graphic::RenderWindowDescriptionList*)renderWindowDescriptions, *(EarthView::World::Graphic::RenderWindowList*)createdWindows);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->_createRenderWindows(*(EarthView::World::Graphic::RenderWindowDescriptionList*)renderWindowDescriptions, *(EarthView::World::Graphic::RenderWindowList*)createdWindows);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem__createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList_NoVirtual(void *pObjectXXXX, _in const void* renderWindowDescriptions, _out void* createdWindows )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createRenderWindows(*(EarthView::World::Graphic::RenderWindowDescriptionList*)renderWindowDescriptions, *(EarthView::World::Graphic::RenderWindowList*)createdWindows);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMultiRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CMultiRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createMultiRenderTarget(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CMultiRenderTarget* objXXXX = ptrNativeObject->createMultiRenderTarget(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMultiRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_createMultiRenderTarget_CMultiRenderTarget_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CMultiRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::createMultiRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderWindow(name1);
				else
					ptrNativeObject->destroyRenderWindow(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderWindow_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderWindow(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderTexture(name1);
				else
					ptrNativeObject->destroyRenderTexture(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTexture_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderTexture(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderTarget(name1);
				else
					ptrNativeObject->destroyRenderTarget(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_destroyRenderTarget_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::destroyRenderTarget(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget(void *pObjectXXXX, _inout void* target )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::attachRenderTarget(*(EarthView::World::Graphic::CRenderTarget*)target);
				else
					ptrNativeObject->attachRenderTarget(*(EarthView::World::Graphic::CRenderTarget*)target);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_attachRenderTarget_void_CRenderTarget_NoVirtual(void *pObjectXXXX, _inout void* target )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::attachRenderTarget(*(EarthView::World::Graphic::CRenderTarget*)target);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderTarget(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->getRenderTarget(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTarget_CRenderTarget_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::detachRenderTarget(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->detachRenderTarget(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_detachRenderTarget_CRenderTarget_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::detachRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CRenderSystem_StringRenderTargetMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderSystem_StringRenderTargetMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall Get_EarthView_World_Graphic_CRenderSystem_StringRenderTargetMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRenderSystem_StringRenderTargetMapPair_second( void *pObjectXXXX, EarthView::World::Graphic::CRenderTarget*  value )
			{
				((EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_nextValue_CRenderTarget(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget**  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_nextValuePtr_CRenderTarget(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_next_CRenderTarget(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_getBegin_StringRenderTargetMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_getEnd_StringRenderTargetMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_RenderTargetIterator_getCurrent_StringRenderTargetMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::RenderTargetIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRenderSystem::StringRenderTargetMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderTargetIterator();
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pXXXX = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator objXXXX = ptrNativeObject->getRenderTargetIterator();
					EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pXXXX = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderTargetIterator_RenderTargetIterator_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderTargetIterator();
				EarthView::World::Graphic::CRenderSystem::RenderTargetIterator *pXXXX = new EarthView::World::Graphic::CRenderSystem::RenderTargetIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32(void *pObjectXXXX, _in ev_int32 errorNumber )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getErrorDescription(errorNumber);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getErrorDescription(errorNumber);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem_getErrorDescription_EVString_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 errorNumber )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getErrorDescription(errorNumber);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setWaitForVerticalBlank_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setWaitForVerticalBlank(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_getWaitForVerticalBlank_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getWaitForVerticalBlank();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getGlobalInstanceVertexBuffer_CHardwareVertexBufferSharedPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr objXXXX = ptrNativeObject->getGlobalInstanceVertexBuffer();
				EarthView::World::Graphic::CHardwareVertexBufferSharedPtr *pXXXX = new EarthView::World::Graphic::CHardwareVertexBufferSharedPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setGlobalInstanceVertexBuffer_void_CHardwareVertexBufferSharedPtr(void *pObjectXXXX, _in const void* val )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setGlobalInstanceVertexBuffer(*(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)val);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexDeclaration*  _stdcall EarthView_World_Graphic_CRenderSystem_getGlobalInstanceVertexBufferVertexDeclaration_CVertexDeclaration(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CVertexDeclaration* objXXXX = ptrNativeObject->getGlobalInstanceVertexBufferVertexDeclaration();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setGlobalInstanceVertexBufferVertexDeclaration_void_CVertexDeclaration(void *pObjectXXXX, _in EarthView::World::Graphic::CVertexDeclaration* ref_val )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setGlobalInstanceVertexBufferVertexDeclaration(ref_val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRenderSystem_getGlobalNumberOfInstances_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getGlobalNumberOfInstances();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setGlobalNumberOfInstances_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64  val )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setGlobalNumberOfInstances(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setFixedPipelineEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->setFixedPipelineEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_getFixedPipelineEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getFixedPipelineEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDepthBufferFor(renderTarget);
				else
					ptrNativeObject->setDepthBufferFor(renderTarget);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDepthBufferFor_void_CRenderTarget_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDepthBufferFor(renderTarget);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16(void *pObjectXXXX, _in const void* lights, _in ev_uint16 limit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_useLights(*(EarthView::World::Graphic::LightList*)lights, limit);
				else
					ptrNativeObject->_useLights(*(EarthView::World::Graphic::LightList*)lights, limit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__useLights_void_LightList_ev_uint16_NoVirtual(void *pObjectXXXX, _in const void* lights, _in ev_uint16 limit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_useLights(*(EarthView::World::Graphic::LightList*)lights, limit);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::areFixedFunctionLightsInViewSpace();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->areFixedFunctionLightsInViewSpace();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_areFixedFunctionLightsInViewSpace_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::areFixedFunctionLightsInViewSpace();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				else
					ptrNativeObject->_setWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setWorldMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16(void *pObjectXXXX, _in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint16 count )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setWorldMatrices(m, count);
				else
					ptrNativeObject->_setWorldMatrices(m, count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setWorldMatrices_void_CMatrix4_ev_uint16_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Math::CMatrix4* m, _in ev_uint16 count )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setWorldMatrices(m, count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setViewMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				else
					ptrNativeObject->_setViewMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setViewMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setViewMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getViewMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getViewMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getViewMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getViewMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
				else
					ptrNativeObject->_setProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setProjectionMatrix_void_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)m);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getProjectMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getProjectMatrix();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrix_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getProjectMatrix();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getProjectMatrixDepth();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->_getProjectMatrixDepth();
					const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem__getProjectMatrixDepth_CMatrix4_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CMatrix4& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getProjectMatrixDepth();
				const EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState(void *pObjectXXXX, _in ev_uint64  texUnit, _inout void* tl )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitSettings(texUnit, *(EarthView::World::Graphic::CTextureUnitState*)tl);
				else
					ptrNativeObject->_setTextureUnitSettings(texUnit, *(EarthView::World::Graphic::CTextureUnitState*)tl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitSettings_void_ev_size_t_CTextureUnitState_NoVirtual(void *pObjectXXXX, _in ev_uint64  texUnit, _inout void* tl )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitSettings(texUnit, *(EarthView::World::Graphic::CTextureUnitState*)tl);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  texUnit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_disableTextureUnit(texUnit);
				else
					ptrNativeObject->_disableTextureUnit(texUnit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnit_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  texUnit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_disableTextureUnit(texUnit);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  texUnit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_disableTextureUnitsFrom(texUnit);
				else
					ptrNativeObject->_disableTextureUnitsFrom(texUnit);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__disableTextureUnitsFrom_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  texUnit )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_disableTextureUnitsFrom(texUnit);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess, _in ev_int32 tracking )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess, tracking);
				else
					ptrNativeObject->_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess, tracking);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_ev_int32_NoVirtual(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess, _in ev_int32 tracking )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess, tracking);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess);
				else
					ptrNativeObject->_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSurfaceParams_void_CColourValue_CColourValue_CColourValue_CColourValue_Real_NoVirtual(void *pObjectXXXX, _in const void* ambient, _in const void* diffuse, _in const void* specular, _in const void* emissive, _in Real shininess )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSurfaceParams(*(EarthView::World::Graphic::CColourValue*)ambient, *(EarthView::World::Graphic::CColourValue*)diffuse, *(EarthView::World::Graphic::CColourValue*)specular, *(EarthView::World::Graphic::CColourValue*)emissive, shininess);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPointSpritesEnabled(enabled);
				else
					ptrNativeObject->_setPointSpritesEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPointSpritesEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPointSpritesEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real(void *pObjectXXXX, _in Real size, _in ev_bool attenuationEnabled, _in Real constant, _in Real linear, _in Real quadratic, _in Real minSize, _in Real maxSize )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
				else
					ptrNativeObject->_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPointParameters_void_Real_ev_bool_Real_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real size, _in ev_bool attenuationEnabled, _in Real constant, _in Real linear, _in Real quadratic, _in Real minSize, _in Real maxSize )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPointParameters(size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr(void *pObjectXXXX, _in ev_uint64  unit, _in ev_bool enabled, _in const void* texPtr )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, *(EarthView::World::Graphic::CTexturePtr*)texPtr);
				else
					ptrNativeObject->_setTexture(unit, enabled, *(EarthView::World::Graphic::CTexturePtr*)texPtr);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_CTexturePtr_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in ev_bool enabled, _in const void* texPtr )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, *(EarthView::World::Graphic::CTexturePtr*)texPtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString(void *pObjectXXXX, _in ev_uint64  unit, _in ev_bool enabled, _in const char* texname )
			{
				EarthView::World::Core::ev_string texname1 = texname;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texname1);
				else
					ptrNativeObject->_setTexture(unit, enabled, texname1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTexture_void_ev_size_t_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in ev_bool enabled, _in const char* texname )
			{
				EarthView::World::Core::ev_string texname1 = texname;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTexture(unit, enabled, texname1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr(void *pObjectXXXX, _in ev_uint64  unit, _in const void* tex )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setVertexTexture(unit, *(EarthView::World::Graphic::CTexturePtr*)tex);
				else
					ptrNativeObject->_setVertexTexture(unit, *(EarthView::World::Graphic::CTexturePtr*)tex);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setVertexTexture_void_ev_size_t_CTexturePtr_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in const void* tex )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setVertexTexture(unit, *(EarthView::World::Graphic::CTexturePtr*)tex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64  unit, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordSet(unit, index);
				else
					ptrNativeObject->_setTextureCoordSet(unit, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordSet_void_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordSet(unit, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum(void *pObjectXXXX, _in ev_uint64  unit, _in int m, _in const EarthView::World::Graphic::CFrustum* ref_frustum )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m, ref_frustum);
				else
					ptrNativeObject->_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m, ref_frustum);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_CFrustum_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in int m, _in const EarthView::World::Graphic::CFrustum* ref_frustum )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m, ref_frustum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod(void *pObjectXXXX, _in ev_uint64  unit, _in int m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m);
				else
					ptrNativeObject->_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureCoordCalculation_void_ev_size_t_TexCoordCalcMethod_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in int m )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureCoordCalculation(unit, (TexCoordCalcMethod)m);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx(void *pObjectXXXX, _in ev_uint64  unit, _in const void* bm )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureBlendMode(unit, *(EarthView::World::Graphic::CLayerBlendModeEx*)bm);
				else
					ptrNativeObject->_setTextureBlendMode(unit, *(EarthView::World::Graphic::CLayerBlendModeEx*)bm);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBlendMode_void_ev_size_t_CLayerBlendModeEx_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in const void* bm )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureBlendMode(unit, *(EarthView::World::Graphic::CLayerBlendModeEx*)bm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions(void *pObjectXXXX, _in ev_uint64  unit, _in int minFilter, _in int magFilter, _in int mipFilter )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterOptions)minFilter, (EarthView::World::Graphic::FilterOptions)magFilter, (EarthView::World::Graphic::FilterOptions)mipFilter);
				else
					ptrNativeObject->_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterOptions)minFilter, (EarthView::World::Graphic::FilterOptions)magFilter, (EarthView::World::Graphic::FilterOptions)mipFilter);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterOptions_FilterOptions_FilterOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in int minFilter, _in int magFilter, _in int mipFilter )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterOptions)minFilter, (EarthView::World::Graphic::FilterOptions)magFilter, (EarthView::World::Graphic::FilterOptions)mipFilter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions(void *pObjectXXXX, _in ev_uint64  unit, _in int ftype, _in int filter )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterType)ftype, (EarthView::World::Graphic::FilterOptions)filter);
				else
					ptrNativeObject->_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterType)ftype, (EarthView::World::Graphic::FilterOptions)filter);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureUnitFiltering_void_ev_size_t_FilterType_FilterOptions_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in int ftype, _in int filter )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureUnitFiltering(unit, (EarthView::World::Graphic::FilterType)ftype, (EarthView::World::Graphic::FilterOptions)filter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32(void *pObjectXXXX, _in ev_uint64  unit, _in ev_uint32 maxAnisotropy )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
				else
					ptrNativeObject->_setTextureLayerAnisotropy(unit, maxAnisotropy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureLayerAnisotropy_void_ev_size_t_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in ev_uint32 maxAnisotropy )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureLayerAnisotropy(unit, maxAnisotropy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode(void *pObjectXXXX, _in ev_uint64  unit, _in const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureAddressingMode(unit, uvw);
				else
					ptrNativeObject->_setTextureAddressingMode(unit, uvw);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureAddressingMode_void_ev_size_t_UVWAddressingMode_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in const EarthView::World::Graphic::CTextureUnitState::UVWAddressingMode& uvw )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureAddressingMode(unit, uvw);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue(void *pObjectXXXX, _in ev_uint64  unit, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureBorderColour(unit, *(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->_setTextureBorderColour(unit, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureBorderColour_void_ev_size_t_CColourValue_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureBorderColour(unit, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32(void *pObjectXXXX, _in ev_uint64  unit, _in ev_real32 bias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureMipmapBias(unit, bias);
				else
					ptrNativeObject->_setTextureMipmapBias(unit, bias);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMipmapBias_void_ev_size_t_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in ev_real32 bias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureMipmapBias(unit, bias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4(void *pObjectXXXX, _in ev_uint64  unit, _in const void* xform )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureMatrix(unit, *(EarthView::World::Spatial::Math::CMatrix4*)xform);
				else
					ptrNativeObject->_setTextureMatrix(unit, *(EarthView::World::Spatial::Math::CMatrix4*)xform);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureMatrix_void_ev_size_t_CMatrix4_NoVirtual(void *pObjectXXXX, _in ev_uint64  unit, _in const void* xform )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureMatrix(unit, *(EarthView::World::Spatial::Math::CMatrix4*)xform);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendOperation)op);
				else
					ptrNativeObject->_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in int sourceFactor, _in int destFactor )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
				else
					ptrNativeObject->_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSceneBlending_void_SceneBlendFactor_SceneBlendFactor_NoVirtual(void *pObjectXXXX, _in int sourceFactor, _in int destFactor )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op, _in int alphaOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op, (EarthView::World::Graphic::SceneBlendOperation)alphaOp);
				else
					ptrNativeObject->_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op, (EarthView::World::Graphic::SceneBlendOperation)alphaOp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_SceneBlendOperation_NoVirtual(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op, _in int alphaOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op, (EarthView::World::Graphic::SceneBlendOperation)alphaOp);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op);
				else
					ptrNativeObject->_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendOperation_NoVirtual(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha, _in int op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha, (EarthView::World::Graphic::SceneBlendOperation)op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
				else
					ptrNativeObject->_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_NoVirtual(void *pObjectXXXX, _in int sourceFactor, _in int destFactor, _in int sourceFactorAlpha, _in int destFactorAlpha )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool(void *pObjectXXXX, _in int func, _in ev_uchar value, _in ev_bool alphaToCoverage )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setAlphaRejectSettings((EarthView::World::Graphic::CompareFunction)func, value, alphaToCoverage);
				else
					ptrNativeObject->_setAlphaRejectSettings((EarthView::World::Graphic::CompareFunction)func, value, alphaToCoverage);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setAlphaRejectSettings_void_CompareFunction_ev_uchar_ev_bool_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uchar value, _in ev_bool alphaToCoverage )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setAlphaRejectSettings((EarthView::World::Graphic::CompareFunction)func, value, alphaToCoverage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3(void *pObjectXXXX, _in ev_bool enabled, _in const void* pos )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureProjectionRelativeTo(enabled, *(EarthView::World::Spatial::Math::CVector3*)pos);
				else
					ptrNativeObject->_setTextureProjectionRelativeTo(enabled, *(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setTextureProjectionRelativeTo_void_ev_bool_CVector3_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in const void* pos )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setTextureProjectionRelativeTo(enabled, *(EarthView::World::Spatial::Math::CVector3*)pos);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createDepthBufferFor(renderTarget);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->_createDepthBufferFor(renderTarget);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CDepthBuffer*  _stdcall EarthView_World_Graphic_CRenderSystem__createDepthBufferFor_CDepthBuffer_CRenderTarget_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* renderTarget )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CDepthBuffer* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_createDepthBufferFor(renderTarget);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__cleanupDepthBuffers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->_cleanupDepthBuffers();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__cleanupDepthBuffers_void_bool(void *pObjectXXXX, _in bool bCleanManualBuffers )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->_cleanupDepthBuffers(bCleanManualBuffers);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__beginFrame_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_beginFrame();
				else
					ptrNativeObject->_beginFrame();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__beginFrame_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__beginFrame_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__beginFrame_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__beginFrame_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_beginFrame();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem::RenderSystemContext*  _stdcall EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CRenderSystem::RenderSystemContext* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_pauseFrame();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CRenderSystem::RenderSystemContext* objXXXX = ptrNativeObject->_pauseFrame();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem::RenderSystemContext*  _stdcall EarthView_World_Graphic_CRenderSystem__pauseFrame_RenderSystemContext_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem::RenderSystemContext* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_pauseFrame();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::RenderSystemContext* context )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_resumeFrame(context);
				else
					ptrNativeObject->_resumeFrame(context);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__resumeFrame_void_RenderSystemContext_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::RenderSystemContext* context )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_resumeFrame(context);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__endFrame_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_endFrame();
				else
					ptrNativeObject->_endFrame();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__endFrame_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__endFrame_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__endFrame_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__endFrame_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_endFrame();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_vp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setViewport(ref_vp);
				else
					ptrNativeObject->_setViewport(ref_vp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setViewport_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_vp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setViewport(ref_vp);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CRenderSystem__getViewport_CViewport(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getViewport();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->_getViewport();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getViewport_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CRenderSystem__getViewport_CViewport_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setCullingMode((EarthView::World::Graphic::CullingMode)mode);
				else
					ptrNativeObject->_setCullingMode((EarthView::World::Graphic::CullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setCullingMode_void_CullingMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setCullingMode((EarthView::World::Graphic::CullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CullingMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getCullingMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CullingMode objXXXX = ptrNativeObject->_getCullingMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystem__getCullingMode_CullingMode_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::CullingMode objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getCullingMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction(void *pObjectXXXX, _in ev_bool depthTest, _in ev_bool depthWrite, _in int depthFunction )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, (EarthView::World::Graphic::CompareFunction)depthFunction);
				else
					ptrNativeObject->_setDepthBufferParams(depthTest, depthWrite, (EarthView::World::Graphic::CompareFunction)depthFunction);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_CompareFunction_NoVirtual(void *pObjectXXXX, _in ev_bool depthTest, _in ev_bool depthWrite, _in int depthFunction )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite, (EarthView::World::Graphic::CompareFunction)depthFunction);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool depthTest, _in ev_bool depthWrite )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
				else
					ptrNativeObject->_setDepthBufferParams(depthTest, depthWrite);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool depthTest, _in ev_bool depthWrite )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest, depthWrite);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool(void *pObjectXXXX, _in ev_bool depthTest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest);
				else
					ptrNativeObject->_setDepthBufferParams(depthTest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool depthTest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams(depthTest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams();
				else
					ptrNativeObject->_setDepthBufferParams();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferParams_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferParams();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled(enabled);
				else
					ptrNativeObject->_setDepthBufferCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled();
				else
					ptrNativeObject->_setDepthBufferCheckEnabled();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferCheckEnabled_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferCheckEnabled();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled(enabled);
				else
					ptrNativeObject->_setDepthBufferWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled();
				else
					ptrNativeObject->_setDepthBufferWriteEnabled();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferWriteEnabled_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferWriteEnabled();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction((EarthView::World::Graphic::CompareFunction)func);
				else
					ptrNativeObject->_setDepthBufferFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_CompareFunction_NoVirtual(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction();
				else
					ptrNativeObject->_setDepthBufferFunction();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBufferFunction_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBufferFunction();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool red, _in ev_bool green, _in ev_bool blue, _in ev_bool alpha )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
				else
					ptrNativeObject->_setColourBufferWriteEnabled(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setColourBufferWriteEnabled_void_ev_bool_ev_bool_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool red, _in ev_bool green, _in ev_bool blue, _in ev_bool alpha )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setColourBufferWriteEnabled(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias, _in ev_real32 slopeScaleBias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
				else
					ptrNativeObject->_setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 constantBias, _in ev_real32 slopeScaleBias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias);
				else
					ptrNativeObject->_setDepthBias(constantBias);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setDepthBias_void_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_real32 constantBias )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setDepthBias(constantBias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
				else
					ptrNativeObject->_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
				else
					ptrNativeObject->_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Real_NoVirtual(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
				else
					ptrNativeObject->_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Real_NoVirtual(void *pObjectXXXX, _in int mode, _in const void* colour, _in Real expDensity )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue(void *pObjectXXXX, _in int mode, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_CColourValue_NoVirtual(void *pObjectXXXX, _in int mode, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode);
				else
					ptrNativeObject->_setFog((EarthView::World::Graphic::FogMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_FogMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog((EarthView::World::Graphic::FogMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog();
				else
					ptrNativeObject->_setFog();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setFog_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setFog_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setFog_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setFog_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setFog();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_beginGeometryCount();
				else
					ptrNativeObject->_beginGeometryCount();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__beginGeometryCount_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_beginGeometryCount();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getFaceCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->_getFaceCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getFaceCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getFaceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getBatchCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->_getBatchCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getBatchCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getBatchCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getVertexCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->_getVertexCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem__getVertexCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getVertexCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32(void *pObjectXXXX, _in const void* colour, _in ev_uint32* pDest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::convertColourValue(*(EarthView::World::Graphic::CColourValue*)colour, pDest);
				else
					ptrNativeObject->convertColourValue(*(EarthView::World::Graphic::CColourValue*)colour, pDest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_convertColourValue_void_CColourValue_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* colour, _in ev_uint32* pDest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::convertColourValue(*(EarthView::World::Graphic::CColourValue*)colour, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue(void *pObjectXXXX, _in ev_uint32 srcColor, _inout void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::toColourValue(srcColor, *(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->toColourValue(srcColor, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_toColourValue_void_ev_uint32_CColourValue_NoVirtual(void *pObjectXXXX, _in ev_uint32 srcColor, _inout void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::toColourValue(srcColor, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::VertexElementType objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getColourVertexElementType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::VertexElementType objXXXX = ptrNativeObject->getColourVertexElementType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRenderSystem_getColourVertexElementType_VertexElementType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EarthView::World::Graphic::VertexElementType objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getColourVertexElementType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool(void *pObjectXXXX, _in const void* matrix, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
				else
					ptrNativeObject->_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* matrix, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4(void *pObjectXXXX, _in const void* matrix, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
				else
					ptrNativeObject->_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__convertProjectionMatrix_void_CMatrix4_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* matrix, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_convertProjectionMatrix(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
				else
					ptrNativeObject->_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
				else
					ptrNativeObject->_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_CRadian_Real_Real_Real_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(void *pObjectXXXX, _in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
				else
					ptrNativeObject->_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(void *pObjectXXXX, _in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4(void *pObjectXXXX, _in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
				else
					ptrNativeObject->_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeProjectionMatrix_void_Real_Real_Real_Real_Real_Real_CMatrix4_NoVirtual(void *pObjectXXXX, _in Real left, _in Real right, _in Real bottom, _in Real top, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeProjectionMatrix(left, right, bottom, top, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
				else
					ptrNativeObject->_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_ev_bool_NoVirtual(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
				else
					ptrNativeObject->_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__makeOrthoMatrix_void_CRadian_Real_Real_Real_CMatrix4_NoVirtual(void *pObjectXXXX, _in const void* fovy, _in Real aspect, _in Real nearPlane, _in Real farPlane, _inout void* dest )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_makeOrthoMatrix(*(EarthView::World::Spatial::Math::CRadian*)fovy, aspect, nearPlane, farPlane, *(EarthView::World::Spatial::Math::CMatrix4*)dest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool(void *pObjectXXXX, _inout void* matrix, _in const void* plane, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_applyObliqueDepthProjection(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CPlane*)plane, forGpuProgram);
				else
					ptrNativeObject->_applyObliqueDepthProjection(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CPlane*)plane, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__applyObliqueDepthProjection_void_CMatrix4_CPlane_ev_bool_NoVirtual(void *pObjectXXXX, _inout void* matrix, _in const void* plane, _in ev_bool forGpuProgram )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_applyObliqueDepthProjection(*(EarthView::World::Spatial::Math::CMatrix4*)matrix, *(EarthView::World::Spatial::Math::CPlane*)plane, forGpuProgram);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode(void *pObjectXXXX, _in int level )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPolygonMode((EarthView::World::Graphic::PolygonMode)level);
				else
					ptrNativeObject->_setPolygonMode((EarthView::World::Graphic::PolygonMode)level);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setPolygonMode_void_PolygonMode_NoVirtual(void *pObjectXXXX, _in int level )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setPolygonMode((EarthView::World::Graphic::PolygonMode)level);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilCheckEnabled(enabled);
				else
					ptrNativeObject->setStencilCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilCheckEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp, _in ev_bool twoSidedOperation )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp, twoSidedOperation);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp, twoSidedOperation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_ev_bool_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp, _in ev_bool twoSidedOperation )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp, twoSidedOperation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_StencilOperation_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp, _in int passOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp, (StencilOperation)passOp);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_StencilOperation_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp, _in int depthFailOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp, (StencilOperation)depthFailOp);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_StencilOperation_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask, _in int stencilFailOp )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask, (StencilOperation)stencilFailOp);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue, mask);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32(void *pObjectXXXX, _in int func, _in ev_uint32 refValue )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_ev_uint32_NoVirtual(void *pObjectXXXX, _in int func, _in ev_uint32 refValue )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func, refValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func);
				else
					ptrNativeObject->setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_CompareFunction_NoVirtual(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams();
				else
					ptrNativeObject->setStencilBufferParams();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setStencilBufferParams_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setStencilBufferParams();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration(void *pObjectXXXX, _inout EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setVertexDeclaration(decl);
				else
					ptrNativeObject->setVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setVertexDeclaration_void_CVertexDeclaration_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CVertexDeclaration* decl )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setVertexDeclaration(decl);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding(void *pObjectXXXX, _inout EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setVertexBufferBinding(binding);
				else
					ptrNativeObject->setVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setVertexBufferBinding_void_CVertexBufferBinding_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CVertexBufferBinding* binding )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setVertexBufferBinding(binding);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool(void *pObjectXXXX, _in ev_bool normalise )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setNormaliseNormals(normalise);
				else
					ptrNativeObject->setNormaliseNormals(normalise);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setNormaliseNormals_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool normalise )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setNormaliseNormals(normalise);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation(void *pObjectXXXX, _in const void* op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_render(*(EarthView::World::Graphic::CRenderOperation*)op);
				else
					ptrNativeObject->_render(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__render_void_CRenderOperation_NoVirtual(void *pObjectXXXX, _in const void* op )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_render(*(EarthView::World::Graphic::CRenderOperation*)op);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CRenderSystemCapabilities*  _stdcall EarthView_World_Graphic_CRenderSystem_getCapabilities_CRenderSystemCapabilities(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Graphic::CRenderSystemCapabilities* objXXXX = ptrNativeObject->getCapabilities();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::DriverVersion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getDriverVersion();
					const EarthView::World::Graphic::DriverVersion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Graphic::DriverVersion& objXXXX = ptrNativeObject->getDriverVersion();
					const EarthView::World::Graphic::DriverVersion *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_getDriverVersion_DriverVersion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Graphic::DriverVersion& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getDriverVersion();
				const EarthView::World::Graphic::DriverVersion *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getActD3D9Device();
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->getActD3D9Device();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRenderSystem_getActD3D9Device_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getActD3D9Device();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getDefaultViewportMaterialScheme();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->_getDefaultViewportMaterialScheme();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRenderSystem__getDefaultViewportMaterialScheme_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_getDefaultViewportMaterialScheme();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram(void *pObjectXXXX, _inout EarthView::World::Graphic::CGpuProgram* ref_prg )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgram(ref_prg);
				else
					ptrNativeObject->bindGpuProgram(ref_prg);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgram_void_CGpuProgram_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CGpuProgram* ref_prg )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgram(ref_prg);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(void *pObjectXXXX, _in int gptype, _in void* params, _in ev_uint16 variabilityMask )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgramParameters((EarthView::World::Graphic::GpuProgramType)gptype, *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, variabilityMask);
				else
					ptrNativeObject->bindGpuProgramParameters((EarthView::World::Graphic::GpuProgramType)gptype, *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, variabilityMask);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramParameters_void_GpuProgramType_GpuProgramParametersSharedPtr_ev_uint16_NoVirtual(void *pObjectXXXX, _in int gptype, _in void* params, _in ev_uint16 variabilityMask )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgramParameters((EarthView::World::Graphic::GpuProgramType)gptype, *(EarthView::World::Graphic::GpuProgramParametersSharedPtr*)params, variabilityMask);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgramPassIterationParameters((EarthView::World::Graphic::GpuProgramType)gptype);
				else
					ptrNativeObject->bindGpuProgramPassIterationParameters((EarthView::World::Graphic::GpuProgramType)gptype);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_bindGpuProgramPassIterationParameters_void_GpuProgramType_NoVirtual(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::bindGpuProgramPassIterationParameters((EarthView::World::Graphic::GpuProgramType)gptype);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::unbindGpuProgram((EarthView::World::Graphic::GpuProgramType)gptype);
				else
					ptrNativeObject->unbindGpuProgram((EarthView::World::Graphic::GpuProgramType)gptype);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_unbindGpuProgram_void_GpuProgramType_NoVirtual(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::unbindGpuProgram((EarthView::World::Graphic::GpuProgramType)gptype);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::isGpuProgramBound((EarthView::World::Graphic::GpuProgramType)gptype);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isGpuProgramBound((EarthView::World::Graphic::GpuProgramType)gptype);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_isGpuProgramBound_ev_bool_GpuProgramType_NoVirtual(void *pObjectXXXX, _in int gptype )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::isGpuProgramBound((EarthView::World::Graphic::GpuProgramType)gptype);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList(void *pObjectXXXX, _in const void* clipPlanes )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setClipPlanes(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
				else
					ptrNativeObject->setClipPlanes(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanes_void_PlaneList_NoVirtual(void *pObjectXXXX, _in const void* clipPlanes )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setClipPlanes(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addClipPlane(*(EarthView::World::Spatial::Math::CPlane*)p);
				else
					ptrNativeObject->addClipPlane(*(EarthView::World::Spatial::Math::CPlane*)p);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_CPlane_NoVirtual(void *pObjectXXXX, _in const void* p )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addClipPlane(*(EarthView::World::Spatial::Math::CPlane*)p);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real A, _in Real B, _in Real C, _in Real D )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addClipPlane(A, B, C, D);
				else
					ptrNativeObject->addClipPlane(A, B, C, D);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addClipPlane_void_Real_Real_Real_Real_NoVirtual(void *pObjectXXXX, _in Real A, _in Real B, _in Real C, _in Real D )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addClipPlane(A, B, C, D);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::resetClipPlanes();
				else
					ptrNativeObject->resetClipPlanes();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_resetClipPlanes_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::resetClipPlanes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__initRenderTargets_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initRenderTargets();
				else
					ptrNativeObject->_initRenderTargets();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__initRenderTargets_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__initRenderTargets_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_initRenderTargets();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_notifyCameraRemoved(cam);
				else
					ptrNativeObject->_notifyCameraRemoved(cam);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__notifyCameraRemoved_void_CCamera_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::CCamera* cam )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_notifyCameraRemoved(cam);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool(void *pObjectXXXX, _in ev_bool swapBuffers )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets(swapBuffers);
				else
					ptrNativeObject->_updateAllRenderTargets(swapBuffers);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool swapBuffers )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets(swapBuffers);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets();
				else
					ptrNativeObject->_updateAllRenderTargets();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__updateAllRenderTargets_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_updateAllRenderTargets();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool(void *pObjectXXXX, _in ev_bool waitForVsync )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
				else
					ptrNativeObject->_swapAllRenderTargetBuffers(waitForVsync);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool waitForVsync )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers(waitForVsync);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers();
				else
					ptrNativeObject->_swapAllRenderTargetBuffers();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__swapAllRenderTargetBuffers_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_swapAllRenderTargetBuffers();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool(void *pObjectXXXX, _in ev_bool invert )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setInvertVertexWinding(invert);
				else
					ptrNativeObject->setInvertVertexWinding(invert);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setInvertVertexWinding_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool invert )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setInvertVertexWinding(invert);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getInvertVertexWinding();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getInvertVertexWinding();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRenderSystem_getInvertVertexWinding_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getInvertVertexWinding();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right, _in ev_uint64  bottom )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
				else
					ptrNativeObject->setScissorTest(enabled, left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right, _in ev_uint64  bottom )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right);
				else
					ptrNativeObject->setScissorTest(enabled, left, top, right);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top, _in ev_uint64  right )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top, right);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top);
				else
					ptrNativeObject->setScissorTest(enabled, left, top);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left, _in ev_uint64  top )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left, top);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left);
				else
					ptrNativeObject->setScissorTest(enabled, left);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_ev_size_t_NoVirtual(void *pObjectXXXX, _in ev_bool enabled, _in ev_uint64  left )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled, left);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled);
				else
					ptrNativeObject->setScissorTest(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setScissorTest_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setScissorTest(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth, _in ev_uint16 stencil )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth, stencil);
				else
					ptrNativeObject->clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth, stencil);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth, _in ev_uint16 stencil )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth, stencil);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth);
				else
					ptrNativeObject->clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Real_NoVirtual(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour, _in Real depth )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour, depth);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour);
				else
					ptrNativeObject->clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_CColourValue_NoVirtual(void *pObjectXXXX, _in ev_uint32 buffers, _in const void* colour )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 buffers )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers);
				else
					ptrNativeObject->clearFrameBuffer(buffers);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_clearFrameBuffer_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 buffers )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::clearFrameBuffer(buffers);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getHorizontalTexelOffset();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getHorizontalTexelOffset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getHorizontalTexelOffset_Real_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getHorizontalTexelOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getVerticalTexelOffset();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getVerticalTexelOffset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getVerticalTexelOffset_Real_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getVerticalTexelOffset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getMinimumDepthInputValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMinimumDepthInputValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getMinimumDepthInputValue_Real_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getMinimumDepthInputValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getMaximumDepthInputValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getMaximumDepthInputValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRenderSystem_getMaximumDepthInputValue_Real_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getMaximumDepthInputValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t(void *pObjectXXXX, _in const ev_uint64  count )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setCurrentPassIterationCount(count);
				else
					ptrNativeObject->setCurrentPassIterationCount(count);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setCurrentPassIterationCount_void_ev_size_t_NoVirtual(void *pObjectXXXX, _in const ev_uint64  count )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setCurrentPassIterationCount(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier, _in ev_real32 slopeScale )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
				else
					ptrNativeObject->setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier, _in ev_real32 slopeScale )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier, slopeScale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
				else
					ptrNativeObject->setDeriveDepthBias(derive, baseValue, multiplier);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue, _in ev_real32 multiplier )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue, multiplier);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue);
				else
					ptrNativeObject->setDeriveDepthBias(derive, baseValue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_ev_real32_NoVirtual(void *pObjectXXXX, _in ev_bool derive, _in ev_real32 baseValue )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive, baseValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool(void *pObjectXXXX, _in ev_bool derive )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive);
				else
					ptrNativeObject->setDeriveDepthBias(derive);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setDeriveDepthBias_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool derive )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setDeriveDepthBias(derive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderTarget* ref_target )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setRenderTarget(ref_target);
				else
					ptrNativeObject->_setRenderTarget(ref_target);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem__setRenderTarget_void_CRenderTarget_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderTarget* ref_target )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::_setRenderTarget(ref_target);
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback)(_in char*& eventName, _in const EarthView::World::Core::CommonStringPairList* parameters);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback)(_in char*& eventName);
			class CRenderSystemListenerProxy : public EarthView::World::Graphic::CRenderSystem::CRenderSystemListener
			{
			private:
				EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback* m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback;
				EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback* m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback;
			public:
				CRenderSystemListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderSystemListener(pList)
				{
					m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList(EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString(EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback = pCallback;
				}
				virtual void eventOccurred(_in const EVString& eventName, _in const EarthView::World::Core::CommonStringPairList* parameters)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* eventName_Char = eventName.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback(eventName_Char, parameters);
					}
					else
						return this->CRenderSystemListener::eventOccurred(eventName, parameters);
				}
				virtual void eventOccurred(_in const EVString& eventName)
				{
					if(m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* eventName_Char = eventName.makeBuffer();
						m_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback(eventName_Char);
					}
					else
						return this->CRenderSystemListener::eventOccurred(eventName);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderSystemListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList(void *pObjectXXXX, _in const char* eventName, _in const EarthView::World::Core::CommonStringPairList* parameters )
			{
				EarthView::World::Core::ev_string eventName1 = eventName;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemListenerProxy*>((EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName1, parameters);
				else
					ptrNativeObject->eventOccurred(eventName1, parameters);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_Callback* pCallback )
			{
				CRenderSystemListenerProxy* ptr = dynamic_cast<CRenderSystemListenerProxy*>((EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* eventName, _in const EarthView::World::Core::CommonStringPairList* parameters )
			{
				EarthView::World::Core::ev_string eventName1 = eventName;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName1, parameters);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString(void *pObjectXXXX, _in const char* eventName )
			{
				EarthView::World::Core::ev_string eventName1 = eventName;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemListenerProxy*>((EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName1);
				else
					ptrNativeObject->eventOccurred(eventName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_Callback* pCallback )
			{
				CRenderSystemListenerProxy* ptr = dynamic_cast<CRenderSystemListenerProxy*>((EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_CRenderSystemListener_eventOccurred_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* eventName )
			{
				EarthView::World::Core::ev_string eventName1 = eventName;
				EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem::CRenderSystemListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::CRenderSystemListener::eventOccurred(eventName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ref_l )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addListener(ref_l);
				else
					ptrNativeObject->addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_addListener_void_CRenderSystemListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* ref_l )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::addListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* l )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::removeListener(l);
				else
					ptrNativeObject->removeListener(l);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_removeListener_void_CRenderSystemListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem::CRenderSystemListener* l )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::removeListener(l);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderSystemEvents();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				else
				{
					const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->getRenderSystemEvents();
					const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRenderSystem_getRenderSystemEvents_StringVector_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				const EarthView::World::Core::StringVector& objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getRenderSystemEvents();
				const EarthView::World::Core::StringVector *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::preExtraThreadsStarted();
				else
					ptrNativeObject->preExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_preExtraThreadsStarted_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::preExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::postExtraThreadsStarted();
				else
					ptrNativeObject->postExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_postExtraThreadsStarted_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::postExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_registerThread_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::registerThread();
				else
					ptrNativeObject->registerThread();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_registerThread_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_registerThread_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_registerThread_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_registerThread_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::registerThread();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::flushRenderSystem();
				else
					ptrNativeObject->flushRenderSystem();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_flushRenderSystem_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::flushRenderSystem();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_unregisterThread_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::unregisterThread();
				else
					ptrNativeObject->unregisterThread();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_unregisterThread_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_unregisterThread_void_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_unregisterThread_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_unregisterThread_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::unregisterThread();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getDisplayMonitorCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getDisplayMonitorCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRenderSystem_getDisplayMonitorCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Graphic::CRenderSystem::getDisplayMonitorCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::fireEvent(name1, params);
				else
					ptrNativeObject->fireEvent(name1, params);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::fireEvent(name1, params);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::fireEvent(name1);
				else
					ptrNativeObject->fireEvent(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_fireEvent_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::fireEvent(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList(void *pObjectXXXX, _in const void* clipPlanes )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setClipPlanesImpl(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
				else
					ptrNativeObject->setClipPlanesImpl(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_setClipPlanesImpl_void_PlaneList_NoVirtual(void *pObjectXXXX, _in const void* clipPlanes )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::setClipPlanesImpl(*(EarthView::World::Spatial::Math::PlaneList*)clipPlanes);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderSystemCapabilities* caps, _inout EarthView::World::Graphic::CRenderTarget* primary )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				if (dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
				else
					ptrNativeObject->initialiseFromRenderSystemCapabilities(caps, primary);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget( void *pObjectXXXX, EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_Callback* pCallback )
			{
				CRenderSystemProxy* ptr = dynamic_cast<CRenderSystemProxy*>((EarthView::World::Graphic::CRenderSystem*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystem_initialiseFromRenderSystemCapabilities_void_CRenderSystemCapabilities_CRenderTarget_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Graphic::CRenderSystemCapabilities* caps, _inout EarthView::World::Graphic::CRenderTarget* primary )
			{
				EarthView::World::Graphic::CRenderSystem* ptrNativeObject = (EarthView::World::Graphic::CRenderSystem*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderSystem::initialiseFromRenderSystemCapabilities(caps, primary);
			}
		}
	}
}
