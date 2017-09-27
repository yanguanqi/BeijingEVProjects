/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/resource.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CResource_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CResource_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CResource_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CResourceProxy : public EarthView::World::Graphic::CResource
			{
			private:
				EarthView_World_Graphic_CResource_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CResource_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CResource_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CResource_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CResource_prepareImpl_void_Callback* m_EarthView_World_Graphic_CResource_prepareImpl_void_Callback;
				EarthView_World_Graphic_CResource_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CResource_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CResource_loadImpl_void_Callback* m_EarthView_World_Graphic_CResource_loadImpl_void_Callback;
				EarthView_World_Graphic_CResource_unloadImpl_void_Callback* m_EarthView_World_Graphic_CResource_unloadImpl_void_Callback;
				EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CResource_prepare_void_Callback* m_EarthView_World_Graphic_CResource_prepare_void_Callback;
				EarthView_World_Graphic_CResource_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CResource_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CResource_load_void_Callback* m_EarthView_World_Graphic_CResource_load_void_Callback;
				EarthView_World_Graphic_CResource_reload_void_Callback* m_EarthView_World_Graphic_CResource_reload_void_Callback;
				EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CResource_unload_void_Callback* m_EarthView_World_Graphic_CResource_unload_void_Callback;
				EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CResource_touch_void_Callback* m_EarthView_World_Graphic_CResource_touch_void_Callback;
				EarthView_World_Graphic_CResource_getName_EVString_Callback* m_EarthView_World_Graphic_CResource_getName_EVString_Callback;
				EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CResource_escalateLoading_void_Callback* m_EarthView_World_Graphic_CResource_escalateLoading_void_Callback;
				EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CResource_getGroup_EVString_Callback* m_EarthView_World_Graphic_CResource_getGroup_EVString_Callback;
				EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CResource_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CResource_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CResource__dirtyState_void_Callback* m_EarthView_World_Graphic_CResource__dirtyState_void_Callback;
				EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback;
			public:
				CResourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CResource(pList)
				{
					m_EarthView_World_Graphic_CResource_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResource_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResource__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CResource_preLoadImpl_void(EarthView_World_Graphic_CResource_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_postLoadImpl_void(EarthView_World_Graphic_CResource_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_preUnloadImpl_void(EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_postUnloadImpl_void(EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_prepareImpl_void(EarthView_World_Graphic_CResource_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_unprepareImpl_void(EarthView_World_Graphic_CResource_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_loadImpl_void(EarthView_World_Graphic_CResource_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_unloadImpl_void(EarthView_World_Graphic_CResource_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_calculateSize_ev_size_t(EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_prepare_void_ev_bool(EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_prepare_void(EarthView_World_Graphic_CResource_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_load_void_ev_bool(EarthView_World_Graphic_CResource_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_load_void(EarthView_World_Graphic_CResource_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_reload_void(EarthView_World_Graphic_CResource_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isReloadable_ev_bool(EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_unload_void(EarthView_World_Graphic_CResource_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getSize_ev_size_t(EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_touch_void(EarthView_World_Graphic_CResource_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getName_EVString(EarthView_World_Graphic_CResource_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getHandle_ev_uint64(EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isPrepared_ev_bool(EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isLoaded_ev_bool(EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isLoading_ev_bool(EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getLoadingState_LoadingState(EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_escalateLoading_void(EarthView_World_Graphic_CResource_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_addListener_void_CResourceListener(EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener(EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getGroup_EVString(EarthView_World_Graphic_CResource_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getCreator_CResourceManager(EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getOrigin_EVString(EarthView_World_Graphic_CResource_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString(EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getStateCount_ev_size_t(EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource__dirtyState_void(EarthView_World_Graphic_CResource__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource__fireUnloadingComplete_void(EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_getParameter_EVString_EVString(EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_preLoadImpl_void_Callback();
					}
					else
						return this->CResource::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_postLoadImpl_void_Callback();
					}
					else
						return this->CResource::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback();
					}
					else
						return this->CResource::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback();
					}
					else
						return this->CResource::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CResource_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_prepareImpl_void_Callback();
					}
					else
						return this->CResource::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CResource_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_unprepareImpl_void_Callback();
					}
					else
						return this->CResource::unprepareImpl();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_loadImpl_void_Callback();
					}
					else
						return this->CResource::loadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CResource_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_unloadImpl_void_Callback();
					}
					else
						return this->CResource::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CResource::calculateSize();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CResource::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CResource_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_prepare_void_Callback();
					}
					else
						return this->CResource::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CResource_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CResource::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CResource_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_load_void_Callback();
					}
					else
						return this->CResource::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CResource_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_reload_void_Callback();
					}
					else
						return this->CResource::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CResource_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_unload_void_Callback();
					}
					else
						return this->CResource::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CResource::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CResource_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_touch_void_Callback();
					}
					else
						return this->CResource::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CResource_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CResource_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CResource::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CResource::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CResource::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CResource::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CResource::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CResource_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_escalateLoading_void_Callback();
					}
					else
						return this->CResource::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CResource::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CResource::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CResource_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CResource_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CResource::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CResource::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CResource::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CResource_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CResource_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CResource::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CResource::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CResource::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CResource__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource__dirtyState_void_Callback();
					}
					else
						return this->CResource::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CResource::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CResource::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CResource::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CResource::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CResource::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CResource::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CResource::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CResource::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CResourceProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* pResource);
			class CResourceListenerProxy : public EarthView::World::Graphic::CResource::CResourceListener
			{
			private:
				EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback;
				EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback* m_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback;
			public:
				CResourceListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceListener(pList)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource(EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource(EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource(EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource(EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource(EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback = pCallback;
				}
				virtual void backgroundLoadingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CResourceListener::backgroundLoadingComplete(pResource);
				}
				virtual void backgroundPreparingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CResourceListener::backgroundPreparingComplete(pResource);
				}
				virtual void loadingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CResourceListener::loadingComplete(pResource);
				}
				virtual void preparingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CResourceListener::preparingComplete(pResource);
				}
				virtual void unloadingComplete(_in EarthView::World::Graphic::CResource* pResource)
				{
					if(m_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback(pResource);
					}
					else
						return this->CResourceListener::unloadingComplete(pResource);
				}
			};
			REGISTER_FACTORY_CLASS(CResourceListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				if (dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::backgroundLoadingComplete(pResource);
				else
					ptrNativeObject->backgroundLoadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_Callback* pCallback )
			{
				CResourceListenerProxy* ptr = dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundLoadingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::backgroundLoadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				if (dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::backgroundPreparingComplete(pResource);
				else
					ptrNativeObject->backgroundPreparingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_Callback* pCallback )
			{
				CResourceListenerProxy* ptr = dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_backgroundPreparingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::backgroundPreparingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				if (dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::loadingComplete(pResource);
				else
					ptrNativeObject->loadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_Callback* pCallback )
			{
				CResourceListenerProxy* ptr = dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_loadingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::loadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				if (dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::preparingComplete(pResource);
				else
					ptrNativeObject->preparingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_Callback* pCallback )
			{
				CResourceListenerProxy* ptr = dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_preparingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::preparingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				if (dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::unloadingComplete(pResource);
				else
					ptrNativeObject->unloadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_Callback* pCallback )
			{
				CResourceListenerProxy* ptr = dynamic_cast<CResourceListenerProxy*>((EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_CResourceListener_unloadingComplete_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* pResource )
			{
				EarthView::World::Graphic::CResource::CResourceListener* ptrNativeObject = (EarthView::World::Graphic::CResource::CResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::CResourceListener::unloadingComplete(pResource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_preLoadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::preLoadImpl();
				else
					ptrNativeObject->preLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_preLoadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_preLoadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::preLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_postLoadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::postLoadImpl();
				else
					ptrNativeObject->postLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_postLoadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_postLoadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::postLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_preUnloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::preUnloadImpl();
				else
					ptrNativeObject->preUnloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_preUnloadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_preUnloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::preUnloadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_postUnloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::postUnloadImpl();
				else
					ptrNativeObject->postUnloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_postUnloadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_postUnloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::postUnloadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::prepareImpl();
				else
					ptrNativeObject->prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_prepareImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unprepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::unprepareImpl();
				else
					ptrNativeObject->unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_unprepareImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unprepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_loadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_unloadImpl_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResource_calculateSize_ev_size_t_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepare_void_ev_bool(void *pObjectXXXX, _in ev_bool backgroundThread )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::prepare(backgroundThread);
				else
					ptrNativeObject->prepare(backgroundThread);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_prepare_void_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepare_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool backgroundThread )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::prepare(backgroundThread);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepare_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::prepare();
				else
					ptrNativeObject->prepare();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_prepare_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_prepare_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::prepare();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_load_void_ev_bool(void *pObjectXXXX, _in ev_bool backgroundThread )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::load(backgroundThread);
				else
					ptrNativeObject->load(backgroundThread);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_load_void_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_load_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool backgroundThread )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::load(backgroundThread);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_load_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::load();
				else
					ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_load_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_load_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_load_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_reload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::reload();
				else
					ptrNativeObject->reload();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_reload_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_reload_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::reload();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isReloadable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isReloadable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isReloadable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isReloadable_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isReloadable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isReloadable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isManuallyLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isManuallyLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isManuallyLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isManuallyLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::unload();
				else
					ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_unload_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_unload_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::unload();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_getSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResource_getSize_ev_size_t_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_getSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_touch_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::touch();
				else
					ptrNativeObject->touch();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_touch_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_touch_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::touch();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_setResFilename_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->setResFilename(filename1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getResFilename_EVString(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getResFilename();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_getName_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Graphic_CResource_getHandle_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getHandle();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getHandle();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CResource_getHandle_ev_uint64_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Graphic_CResource_getHandle_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getHandle();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isPrepared_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isPrepared();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isPrepared();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isPrepared_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isPrepared_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isPrepared();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isLoaded_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isLoading_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isLoading();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isLoading();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isLoading_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isLoading_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isLoading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CResource_getLoadingState_LoadingState(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResource::LoadingState objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getLoadingState();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResource::LoadingState objXXXX = ptrNativeObject->getLoadingState();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CResource_getLoadingState_LoadingState_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CResource_getLoadingState_LoadingState_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EarthView::World::Graphic::CResource::LoadingState objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getLoadingState();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isBackgroundLoaded();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isBackgroundLoaded();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResource_isBackgroundLoaded_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::isBackgroundLoaded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool(void *pObjectXXXX, _in ev_bool bl )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::setBackgroundLoaded(bl);
				else
					ptrNativeObject->setBackgroundLoaded(bl);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_setBackgroundLoaded_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool bl )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::setBackgroundLoaded(bl);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_escalateLoading_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::escalateLoading();
				else
					ptrNativeObject->escalateLoading();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CResource_escalateLoading_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_escalateLoading_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::escalateLoading();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_addListener_void_CResourceListener(void *pObjectXXXX, _in EarthView::World::Graphic::CResource::CResourceListener* ref_lis )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::addListener(ref_lis);
				else
					ptrNativeObject->addListener(ref_lis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CResource_addListener_void_CResourceListener_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_addListener_void_CResourceListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource::CResourceListener* ref_lis )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::addListener(ref_lis);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_removeListener_void_CResourceListener(void *pObjectXXXX, _in EarthView::World::Graphic::CResource::CResourceListener* lis )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::removeListener(lis);
				else
					ptrNativeObject->removeListener(lis);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_removeListener_void_CResourceListener_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource::CResourceListener* lis )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::removeListener(lis);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getGroup_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getGroup();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getGroup();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_getGroup_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getGroup_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getGroup();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString(void *pObjectXXXX, _in const char* newGroup )
			{
				EarthView::World::Core::ev_string newGroup1 = newGroup;
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::changeGroupOwnership(newGroup1);
				else
					ptrNativeObject->changeGroupOwnership(newGroup1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource_changeGroupOwnership_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* newGroup )
			{
				EarthView::World::Core::ev_string newGroup1 = newGroup;
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::changeGroupOwnership(newGroup1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResource_getCreator_CResourceManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getCreator();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->getCreator();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CResource_getCreator_CResourceManager_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResource_getCreator_CResourceManager_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getCreator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getOrigin_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getOrigin();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getOrigin();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_getOrigin_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CResource_getOrigin_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getOrigin();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__notifyOrigin_void_EVString(void *pObjectXXXX, _in const char* origin )
			{
				EarthView::World::Core::ev_string origin1 = origin;
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::_notifyOrigin(origin1);
				else
					ptrNativeObject->_notifyOrigin(origin1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__notifyOrigin_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* origin )
			{
				EarthView::World::Core::ev_string origin1 = origin;
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::_notifyOrigin(origin1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_getStateCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getStateCount();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->getStateCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResource_getStateCount_ev_size_t_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResource_getStateCount_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CResource::getStateCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__dirtyState_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::_dirtyState();
				else
					ptrNativeObject->_dirtyState();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CResource__dirtyState_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__dirtyState_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::_dirtyState();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool(void *pObjectXXXX, _in ev_bool wasBackgroundLoaded )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::_fireLoadingComplete(wasBackgroundLoaded);
				else
					ptrNativeObject->_fireLoadingComplete(wasBackgroundLoaded);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__fireLoadingComplete_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool wasBackgroundLoaded )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::_fireLoadingComplete(wasBackgroundLoaded);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool(void *pObjectXXXX, _in ev_bool wasBackgroundLoaded )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::_firePreparingComplete(wasBackgroundLoaded);
				else
					ptrNativeObject->_firePreparingComplete(wasBackgroundLoaded);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__firePreparingComplete_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool wasBackgroundLoaded )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::_firePreparingComplete(wasBackgroundLoaded);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__fireUnloadingComplete_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				if (dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResource::_fireUnloadingComplete();
				else
					ptrNativeObject->_fireUnloadingComplete();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CResource__fireUnloadingComplete_void_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResource__fireUnloadingComplete_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResource* ptrNativeObject = (EarthView::World::Graphic::CResource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResource::_fireUnloadingComplete();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResource_getParameter_EVString_EVString_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CResourceProxy* ptr = dynamic_cast<CResourceProxy*>((EarthView::World::Graphic::CResource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResource_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResource*  _stdcall EarthView_World_Graphic_ResourcePtr_get_CResource(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::ResourcePtr* ptrNativeObject = (EarthView::World::Graphic::ResourcePtr*) pObjectXXXX;
				EarthView::World::Graphic::CResource* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* resource);
			typedef void  ( _stdcall EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* resource);
			class CManualResourceLoaderProxy : public EarthView::World::Graphic::CManualResourceLoader
			{
			private:
				EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback* m_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback;
				EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback* m_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback;
			public:
				CManualResourceLoaderProxy(EarthView::World::Core::CNameValuePairList *pList) : CManualResourceLoader(pList)
				{
					m_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource(EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource(EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback = pCallback;
				}
				virtual void prepareResource(_in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback(resource);
					}
					else
						return this->CManualResourceLoader::prepareResource(resource);
				}
				virtual void loadResource(_in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback(resource);
					}
					else
						return this->CManualResourceLoader::loadResource(resource);
				}
			};
			REGISTER_FACTORY_CLASS(CManualResourceLoaderProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CManualResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX;
				if (dynamic_cast<CManualResourceLoaderProxy*>((EarthView::World::Graphic::CManualResourceLoader*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CManualResourceLoader::prepareResource(resource);
				else
					ptrNativeObject->prepareResource(resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_Callback* pCallback )
			{
				CManualResourceLoaderProxy* ptr = dynamic_cast<CManualResourceLoaderProxy*>((EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CManualResourceLoader_prepareResource_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CManualResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CManualResourceLoader::prepareResource(resource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CManualResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX;
				if (dynamic_cast<CManualResourceLoaderProxy*>((EarthView::World::Graphic::CManualResourceLoader*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CManualResourceLoader::loadResource(resource);
				else
					ptrNativeObject->loadResource(resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_Callback* pCallback )
			{
				CManualResourceLoaderProxy* ptr = dynamic_cast<CManualResourceLoaderProxy*>((EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CManualResourceLoader_loadResource_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CManualResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CManualResourceLoader*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CManualResourceLoader::loadResource(resource);
			}
		}
	}
}
