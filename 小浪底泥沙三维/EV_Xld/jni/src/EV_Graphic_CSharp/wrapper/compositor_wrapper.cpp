/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositor.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CCompositor_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CCompositorProxy : public EarthView::World::Graphic::CCompositor
			{
			private:
				EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_loadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_loadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback* m_EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback;
				EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_prepare_void_Callback* m_EarthView_World_Graphic_CCompositor_prepare_void_Callback;
				EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_load_void_Callback* m_EarthView_World_Graphic_CCompositor_load_void_Callback;
				EarthView_World_Graphic_CCompositor_reload_void_Callback* m_EarthView_World_Graphic_CCompositor_reload_void_Callback;
				EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_unload_void_Callback* m_EarthView_World_Graphic_CCompositor_unload_void_Callback;
				EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CCompositor_touch_void_Callback* m_EarthView_World_Graphic_CCompositor_touch_void_Callback;
				EarthView_World_Graphic_CCompositor_getName_EVString_Callback* m_EarthView_World_Graphic_CCompositor_getName_EVString_Callback;
				EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback* m_EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback;
				EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback* m_EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback;
				EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CCompositor__dirtyState_void_Callback* m_EarthView_World_Graphic_CCompositor__dirtyState_void_Callback;
				EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback;
			public:
				CCompositorProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositor(pList)
				{
					m_EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_preLoadImpl_void(EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_postLoadImpl_void(EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_preUnloadImpl_void(EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_postUnloadImpl_void(EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_prepareImpl_void(EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_unprepareImpl_void(EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_loadImpl_void(EarthView_World_Graphic_CCompositor_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_unloadImpl_void(EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t(EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool(EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_prepare_void(EarthView_World_Graphic_CCompositor_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_load_void_ev_bool(EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_load_void(EarthView_World_Graphic_CCompositor_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_reload_void(EarthView_World_Graphic_CCompositor_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool(EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_unload_void(EarthView_World_Graphic_CCompositor_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getSize_ev_size_t(EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_touch_void(EarthView_World_Graphic_CCompositor_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getName_EVString(EarthView_World_Graphic_CCompositor_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64(EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool(EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool(EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isLoading_ev_bool(EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState(EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_escalateLoading_void(EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener(EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener(EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getGroup_EVString(EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager(EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getOrigin_EVString(EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString(EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t(EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor__dirtyState_void(EarthView_World_Graphic_CCompositor__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void(EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString(EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_loadImpl_void_Callback();
					}
					else
						return this->CCompositor::loadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback();
					}
					else
						return this->CCompositor::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::calculateSize();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback();
					}
					else
						return this->CCompositor::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback();
					}
					else
						return this->CCompositor::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback();
					}
					else
						return this->CCompositor::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback();
					}
					else
						return this->CCompositor::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback();
					}
					else
						return this->CCompositor::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback();
					}
					else
						return this->CCompositor::unprepareImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CCompositor::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CCompositor_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_prepare_void_Callback();
					}
					else
						return this->CCompositor::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CCompositor::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CCompositor_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_load_void_Callback();
					}
					else
						return this->CCompositor::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CCompositor_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_reload_void_Callback();
					}
					else
						return this->CCompositor::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CCompositor_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_unload_void_Callback();
					}
					else
						return this->CCompositor::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CCompositor_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_touch_void_Callback();
					}
					else
						return this->CCompositor::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCompositor_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CCompositor::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback();
					}
					else
						return this->CCompositor::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CCompositor::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CCompositor::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CCompositor::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CCompositor::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CCompositor::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CCompositor__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor__dirtyState_void_Callback();
					}
					else
						return this->CCompositor::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CCompositor::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CCompositor::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CCompositor::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CCompositor::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CCompositor::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CCompositor::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CCompositor::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CCompositor::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_push_back_void_CCompositionTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositionTechnique*& ref_t )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_OperatorIndex_CCompositionTechnique_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques& objYYYY = *(EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_at_CCompositionTechnique_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniques_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniques* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniques*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_getCurrent_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_next_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_getBegin_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_CompositionTechniqueIterator_getEnd_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_createTechnique_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->createTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_removeTechnique_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ptrNativeObject->removeTechnique(idx);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_getTechnique_CCompositionTechnique_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getTechnique(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositor_getNumTechniques_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumTechniques();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_removeAllTechniques_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ptrNativeObject->removeAllTechniques();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositor_getTechniqueIterator_CompositionTechniqueIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator objXXXX = ptrNativeObject->getTechniqueIterator();
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator *pXXXX = new EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_getSupportedTechnique_CCompositionTechnique_ev_size_t(void *pObjectXXXX, _in ev_uint64  idx )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getSupportedTechnique(idx);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositor_getNumSupportedTechniques_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumSupportedTechniques();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositor_getSupportedTechniqueIterator_CompositionTechniqueIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator objXXXX = ptrNativeObject->getSupportedTechniqueIterator();
				EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator *pXXXX = new EarthView::World::Graphic::CCompositor::CompositionTechniqueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_getSupportedTechnique_CCompositionTechnique_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getSupportedTechnique(schemeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositionTechnique*  _stdcall EarthView_World_Graphic_CCompositor_getSupportedTechnique_CCompositionTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CCompositionTechnique* objXXXX = ptrNativeObject->getSupportedTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CCompositor_getTextureInstanceName_EVString_EVString_ev_size_t(void *pObjectXXXX, _in const char* name, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getTextureInstanceName(name1, mrtIndex);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositor_getTextureInstance_CTexturePtr_EVString_ev_size_t(void *pObjectXXXX, _in const char* name, _in ev_uint64  mrtIndex )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CTexturePtr objXXXX = ptrNativeObject->getTextureInstance(name1, mrtIndex);
				EarthView::World::Graphic::CTexturePtr *pXXXX = new EarthView::World::Graphic::CTexturePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CCompositor_getRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->getRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				if (dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositor::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_loadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositor::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				if (dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositor::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_unloadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositor_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositor::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				if (dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositor::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositor_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositor* ptrNativeObject = (EarthView::World::Graphic::CCompositor*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositor::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_preLoadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_postLoadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_preUnloadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_postUnloadImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_prepareImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_unprepareImpl_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_prepare_void_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_prepare_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_load_void_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_load_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_load_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_reload_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isReloadable_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_unload_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getSize_ev_size_t_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_touch_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getName_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getHandle_ev_uint64_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isPrepared_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isLoaded_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isLoading_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_escalateLoading_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getGroup_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getCreator_CResourceManager_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getOrigin_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor__dirtyState_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CCompositorProxy* ptr = dynamic_cast<CCompositorProxy*>((EarthView::World::Graphic::CCompositor*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositor_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositor*  _stdcall EarthView_World_Graphic_CCompositorPtr_get_CCompositor(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CCompositorPtr* ptrNativeObject = (EarthView::World::Graphic::CCompositorPtr*) pObjectXXXX;
				EarthView::World::Graphic::CCompositor* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorPtr_OperatorAssign_CCompositorPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CCompositorPtr& objXXXX = *((EarthView::World::Graphic::CCompositorPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CCompositorPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
