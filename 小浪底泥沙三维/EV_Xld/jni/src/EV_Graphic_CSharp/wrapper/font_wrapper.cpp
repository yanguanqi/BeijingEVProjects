/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/font.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* resource);
			typedef EarthView::World::Graphic::CFont::CFontInternalResourceLoader*  ( _stdcall EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CFontProxy : public EarthView::World::Graphic::CFont
			{
			private:
				EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback* m_EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback;
				EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback* m_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback;
				EarthView_World_Graphic_CFont_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CFont_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CFont_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CFont_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CFont_prepareImpl_void_Callback* m_EarthView_World_Graphic_CFont_prepareImpl_void_Callback;
				EarthView_World_Graphic_CFont_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CFont_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CFont_loadImpl_void_Callback* m_EarthView_World_Graphic_CFont_loadImpl_void_Callback;
				EarthView_World_Graphic_CFont_unloadImpl_void_Callback* m_EarthView_World_Graphic_CFont_unloadImpl_void_Callback;
				EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CFont_prepare_void_Callback* m_EarthView_World_Graphic_CFont_prepare_void_Callback;
				EarthView_World_Graphic_CFont_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CFont_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CFont_load_void_Callback* m_EarthView_World_Graphic_CFont_load_void_Callback;
				EarthView_World_Graphic_CFont_reload_void_Callback* m_EarthView_World_Graphic_CFont_reload_void_Callback;
				EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CFont_unload_void_Callback* m_EarthView_World_Graphic_CFont_unload_void_Callback;
				EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CFont_touch_void_Callback* m_EarthView_World_Graphic_CFont_touch_void_Callback;
				EarthView_World_Graphic_CFont_getName_EVString_Callback* m_EarthView_World_Graphic_CFont_getName_EVString_Callback;
				EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CFont_escalateLoading_void_Callback* m_EarthView_World_Graphic_CFont_escalateLoading_void_Callback;
				EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CFont_getGroup_EVString_Callback* m_EarthView_World_Graphic_CFont_getGroup_EVString_Callback;
				EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CFont_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CFont_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CFont__dirtyState_void_Callback* m_EarthView_World_Graphic_CFont__dirtyState_void_Callback;
				EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback;
			public:
				CFontProxy(EarthView::World::Core::CNameValuePairList *pList) : CFont(pList)
				{
					m_EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CFont_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFont_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CFont__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_loadResource_void_CResource(EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader(EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_preLoadImpl_void(EarthView_World_Graphic_CFont_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_postLoadImpl_void(EarthView_World_Graphic_CFont_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_preUnloadImpl_void(EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_postUnloadImpl_void(EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_prepareImpl_void(EarthView_World_Graphic_CFont_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_unprepareImpl_void(EarthView_World_Graphic_CFont_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_loadImpl_void(EarthView_World_Graphic_CFont_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_unloadImpl_void(EarthView_World_Graphic_CFont_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_calculateSize_ev_size_t(EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_prepare_void_ev_bool(EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_prepare_void(EarthView_World_Graphic_CFont_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_load_void_ev_bool(EarthView_World_Graphic_CFont_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_load_void(EarthView_World_Graphic_CFont_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_reload_void(EarthView_World_Graphic_CFont_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isReloadable_ev_bool(EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_unload_void(EarthView_World_Graphic_CFont_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getSize_ev_size_t(EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_touch_void(EarthView_World_Graphic_CFont_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getName_EVString(EarthView_World_Graphic_CFont_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getHandle_ev_uint64(EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isPrepared_ev_bool(EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isLoaded_ev_bool(EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isLoading_ev_bool(EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getLoadingState_LoadingState(EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_escalateLoading_void(EarthView_World_Graphic_CFont_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_addListener_void_CResourceListener(EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener(EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getGroup_EVString(EarthView_World_Graphic_CFont_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getCreator_CResourceManager(EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getOrigin_EVString(EarthView_World_Graphic_CFont_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString(EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getStateCount_ev_size_t(EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont__dirtyState_void(EarthView_World_Graphic_CFont__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont__fireUnloadingComplete_void(EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_getParameter_EVString_EVString(EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void loadResource(_in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback(resource);
					}
					else
						return this->CFont::loadResource(resource);
				}
				virtual EarthView::World::Graphic::CFont::CFontInternalResourceLoader* getManualResourceLoaderPtr()
				{
					if(m_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CFont::CFontInternalResourceLoader* returnValue = m_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback();
						return returnValue;
					}
					else
						return this->CFont::getManualResourceLoaderPtr();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_loadImpl_void_Callback();
					}
					else
						return this->CFont::loadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_unloadImpl_void_Callback();
					}
					else
						return this->CFont::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFont::calculateSize();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_preLoadImpl_void_Callback();
					}
					else
						return this->CFont::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_postLoadImpl_void_Callback();
					}
					else
						return this->CFont::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback();
					}
					else
						return this->CFont::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback();
					}
					else
						return this->CFont::postUnloadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CFont_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_prepareImpl_void_Callback();
					}
					else
						return this->CFont::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CFont_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_unprepareImpl_void_Callback();
					}
					else
						return this->CFont::unprepareImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CFont::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CFont_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_prepare_void_Callback();
					}
					else
						return this->CFont::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CFont_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CFont::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CFont_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_load_void_Callback();
					}
					else
						return this->CFont::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CFont_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_reload_void_Callback();
					}
					else
						return this->CFont::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CFont_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_unload_void_Callback();
					}
					else
						return this->CFont::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFont::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CFont_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_touch_void_Callback();
					}
					else
						return this->CFont::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CFont_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFont::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CFont::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CFont::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CFont::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CFont::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CFont_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_escalateLoading_void_Callback();
					}
					else
						return this->CFont::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CFont::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CFont::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CFont_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFont::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CFont::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CFont::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CFont_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CFont::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CFont::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CFont::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CFont__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont__dirtyState_void_Callback();
					}
					else
						return this->CFont::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CFont::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CFont::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CFont::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CFont::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CFont::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CFont::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CFont::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CFont::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CFontProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* resource);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* resource);
			class CFontInternalResourceLoaderProxy : public EarthView::World::Graphic::CFont::CFontInternalResourceLoader
			{
			private:
				EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback* m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback;
				EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback* m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback;
			public:
				CFontInternalResourceLoaderProxy(EarthView::World::Core::CNameValuePairList *pList) : CFontInternalResourceLoader(pList)
				{
					m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource(EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource(EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback = pCallback;
				}
				virtual void loadResource(_in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback(resource);
					}
					else
						return this->CFontInternalResourceLoader::loadResource(resource);
				}
				virtual void prepareResource(_in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback(resource);
					}
					else
						return this->CFontInternalResourceLoader::prepareResource(resource);
				}
			};
			REGISTER_FACTORY_CLASS(CFontInternalResourceLoaderProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CFont::CFontInternalResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontInternalResourceLoader*) pObjectXXXX;
				if (dynamic_cast<CFontInternalResourceLoaderProxy*>((EarthView::World::Graphic::CFont::CFontInternalResourceLoader*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CFontInternalResourceLoader::loadResource(resource);
				else
					ptrNativeObject->loadResource(resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_Callback* pCallback )
			{
				CFontInternalResourceLoaderProxy* ptr = dynamic_cast<CFontInternalResourceLoaderProxy*>((EarthView::World::Graphic::CFont::CFontInternalResourceLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CFontInternalResourceLoader_loadResource_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CFont::CFontInternalResourceLoader* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontInternalResourceLoader*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CFontInternalResourceLoader::loadResource(resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource_Callback* pCallback )
			{
				CFontInternalResourceLoaderProxy* ptr = dynamic_cast<CFontInternalResourceLoaderProxy*>((EarthView::World::Graphic::CFont::CFontInternalResourceLoader*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CFontInternalResourceLoader_prepareResource_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_loadResource_void_CResource(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				if (dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::loadResource(resource);
				else
					ptrNativeObject->loadResource(resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_loadResource_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CFont_loadResource_void_CResource_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_loadResource_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_loadResource_void_CResource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::loadResource(resource);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFont::CFontInternalResourceLoader*  _stdcall EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				if (dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CFont::CFontInternalResourceLoader* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::getManualResourceLoaderPtr();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CFont::CFontInternalResourceLoader* objXXXX = ptrNativeObject->getManualResourceLoaderPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFont::CFontInternalResourceLoader*  _stdcall EarthView_World_Graphic_CFont_getManualResourceLoaderPtr_CFontInternalResourceLoader_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				EarthView::World::Graphic::CFont::CFontInternalResourceLoader* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::getManualResourceLoaderPtr();
				return objXXXX;
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CFontCmdTypeProxy : public EarthView::World::Graphic::CFont::CFontCmdType
			{
			private:
				EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CFontCmdTypeProxy(EarthView::World::Core::CNameValuePairList *pList) : CFontCmdType(pList)
				{
					m_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void(EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CFontCmdType::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CFontCmdType::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CFontCmdType::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CFontCmdTypeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CFontCmdType* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX;
				if (dynamic_cast<CFontCmdTypeProxy*>((EarthView::World::Graphic::CFont::CFontCmdType*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CFontCmdType::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_Callback* pCallback )
			{
				CFontCmdTypeProxy* ptr = dynamic_cast<CFontCmdTypeProxy*>((EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CFontCmdType* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CFontCmdType::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CFontCmdType* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX;
				if (dynamic_cast<CFontCmdTypeProxy*>((EarthView::World::Graphic::CFont::CFontCmdType*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CFontCmdType::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_Callback* pCallback )
			{
				CFontCmdTypeProxy* ptr = dynamic_cast<CFontCmdTypeProxy*>((EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CFontCmdType_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CFontCmdType* ptrNativeObject = (EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CFontCmdType::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CFontCmdTypeProxy* ptr = dynamic_cast<CFontCmdTypeProxy*>((EarthView::World::Graphic::CFont::CFontCmdType*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CFontCmdType_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdSourceProxy : public EarthView::World::Graphic::CFont::CCmdSource
			{
			private:
				EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSource(pList)
				{
					m_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void(EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdSource::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdSource::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdSource::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdSourceProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdSource* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX;
				if (dynamic_cast<CCmdSourceProxy*>((EarthView::World::Graphic::CFont::CCmdSource*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSource::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_Callback* pCallback )
			{
				CCmdSourceProxy* ptr = dynamic_cast<CCmdSourceProxy*>((EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdSource_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdSource* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSource::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdSource* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX;
				if (dynamic_cast<CCmdSourceProxy*>((EarthView::World::Graphic::CFont::CCmdSource*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSource::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdSourceProxy* ptr = dynamic_cast<CCmdSourceProxy*>((EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdSource_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdSource* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSource::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdSourceProxy* ptr = dynamic_cast<CCmdSourceProxy*>((EarthView::World::Graphic::CFont::CCmdSource*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSource_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdCharSpacerProxy : public EarthView::World::Graphic::CFont::CCmdCharSpacer
			{
			private:
				EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdCharSpacerProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdCharSpacer(pList)
				{
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void(EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdCharSpacer::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdCharSpacer::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdCharSpacer::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdCharSpacerProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdCharSpacer* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX;
				if (dynamic_cast<CCmdCharSpacerProxy*>((EarthView::World::Graphic::CFont::CCmdCharSpacer*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCharSpacer::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_Callback* pCallback )
			{
				CCmdCharSpacerProxy* ptr = dynamic_cast<CCmdCharSpacerProxy*>((EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdCharSpacer* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCharSpacer::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdCharSpacer* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX;
				if (dynamic_cast<CCmdCharSpacerProxy*>((EarthView::World::Graphic::CFont::CCmdCharSpacer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCharSpacer::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdCharSpacerProxy* ptr = dynamic_cast<CCmdCharSpacerProxy*>((EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdCharSpacer_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdCharSpacer* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCharSpacer::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdCharSpacerProxy* ptr = dynamic_cast<CCmdCharSpacerProxy*>((EarthView::World::Graphic::CFont::CCmdCharSpacer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCharSpacer_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdSizeProxy : public EarthView::World::Graphic::CFont::CCmdSize
			{
			private:
				EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdSizeProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdSize(pList)
				{
					m_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void(EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdSize::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdSize::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdSize::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdSizeProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdSize* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX;
				if (dynamic_cast<CCmdSizeProxy*>((EarthView::World::Graphic::CFont::CCmdSize*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSize::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_Callback* pCallback )
			{
				CCmdSizeProxy* ptr = dynamic_cast<CCmdSizeProxy*>((EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdSize_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdSize* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSize::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdSize* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX;
				if (dynamic_cast<CCmdSizeProxy*>((EarthView::World::Graphic::CFont::CCmdSize*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSize::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdSizeProxy* ptr = dynamic_cast<CCmdSizeProxy*>((EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdSize_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdSize* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CCmdSize::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdSizeProxy* ptr = dynamic_cast<CCmdSizeProxy*>((EarthView::World::Graphic::CFont::CCmdSize*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdSize_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdResolutionProxy : public EarthView::World::Graphic::CFont::CCmdResolution
			{
			private:
				EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdResolutionProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdResolution(pList)
				{
					m_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void(EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdResolution::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdResolution::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdResolution::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdResolutionProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdResolution* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX;
				if (dynamic_cast<CCmdResolutionProxy*>((EarthView::World::Graphic::CFont::CCmdResolution*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdResolution::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_Callback* pCallback )
			{
				CCmdResolutionProxy* ptr = dynamic_cast<CCmdResolutionProxy*>((EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdResolution* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdResolution::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdResolution* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX;
				if (dynamic_cast<CCmdResolutionProxy*>((EarthView::World::Graphic::CFont::CCmdResolution*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CCmdResolution::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdResolutionProxy* ptr = dynamic_cast<CCmdResolutionProxy*>((EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdResolution_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdResolution* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CCmdResolution::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdResolutionProxy* ptr = dynamic_cast<CCmdResolutionProxy*>((EarthView::World::Graphic::CFont::CCmdResolution*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdResolution_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			typedef char*  ( _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback)(_in const void* target);
			typedef void  ( _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback)(_in void* target, _in char*& val);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback)(_in void* target, _in char*& val, _inout char*& reason);
			class CCmdCodePointsProxy : public EarthView::World::Graphic::CFont::CCmdCodePoints
			{
			private:
				EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback* m_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback;
				EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback;
				EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback;
			public:
				CCmdCodePointsProxy(EarthView::World::Core::CNameValuePairList *pList) : CCmdCodePoints(pList)
				{
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void(EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString(EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString(EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback = pCallback;
				}
				virtual EVString doGet(_in const void* target) const
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback(target);
						return returnValue;
					}
					else
						return this->CCmdCodePoints::doGet(target);
				}
				virtual void doSet(_in void* target, _in const EVString& val)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						m_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback(target, val_Char);
					}
					else
						return this->CCmdCodePoints::doSet(target, val);
				}
				virtual ev_bool trySet(_in void* target, _in const EVString& val, _inout EVString& reason)
				{
					if(m_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* val_Char = val.makeBuffer();
						char* reason_Char = reason.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback(target, val_Char, reason_Char);
						reason = reason_Char;
						if(reason_Char != NULL){ delete[] reason_Char;reason_Char = NULL;}
						return returnValue;
					}
					else
						return this->CCmdCodePoints::trySet(target, val, reason);
				}
			};
			REGISTER_FACTORY_CLASS(CCmdCodePointsProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdCodePoints* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX;
				if (dynamic_cast<CCmdCodePointsProxy*>((EarthView::World::Graphic::CFont::CCmdCodePoints*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCodePoints::doGet(target);
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->doGet(target);
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_Callback* pCallback )
			{
				CCmdCodePointsProxy* ptr = dynamic_cast<CCmdCodePointsProxy*>((EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doGet_EVString_void_NoVirtual(void *pObjectXXXX, _in const void* target )
			{
				const EarthView::World::Graphic::CFont::CCmdCodePoints* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCodePoints::doGet(target);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdCodePoints* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX;
				if (dynamic_cast<CCmdCodePointsProxy*>((EarthView::World::Graphic::CFont::CCmdCodePoints*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCodePoints::doSet(target, val1);
				else
					ptrNativeObject->doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_Callback* pCallback )
			{
				CCmdCodePointsProxy* ptr = dynamic_cast<CCmdCodePointsProxy*>((EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_CCmdCodePoints_doSet_void_void_EVString_NoVirtual(void *pObjectXXXX, _in void* target, _in const char* val )
			{
				EarthView::World::Core::ev_string val1 = val;
				EarthView::World::Graphic::CFont::CCmdCodePoints* ptrNativeObject = (EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::CCmdCodePoints::doSet(target, val1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString_Callback* pCallback )
			{
				CCmdCodePointsProxy* ptr = dynamic_cast<CCmdCodePointsProxy*>((EarthView::World::Graphic::CFont::CCmdCodePoints*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_CCmdCodePoints_trySet_ev_bool_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_codePoint( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->codePoint;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_codePoint( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->codePoint = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_uvRect( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				EarthView::World::Graphic::FloatRect &objXXXX = ptrNativeObject->uvRect;
				EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_uvRect( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->uvRect = *(EarthView::World::Graphic::FloatRect*)value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_aspectRatio( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->aspectRatio;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_aspectRatio( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->aspectRatio = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_clampUVRect( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				EarthView::World::Graphic::FloatRect &objXXXX = ptrNativeObject->clampUVRect;
				EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_clampUVRect( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->clampUVRect = *(EarthView::World::Graphic::FloatRect*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_horiBearingX( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->horiBearingX;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_horiBearingX( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->horiBearingX = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_horiBearingY( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->horiBearingY;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_horiBearingY( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->horiBearingY = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_horiAdvance( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->horiAdvance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_horiAdvance( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->horiAdvance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_vertBearingX( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->vertBearingX;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_vertBearingX( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->vertBearingX = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_vertBearingY( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->vertBearingY;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_vertBearingY( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->vertBearingY = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_vertAdvance( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->vertAdvance;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_vertAdvance( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->vertAdvance = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_height( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_height( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Graphic_CFont_GlyphInfo_width( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::GlyphInfo* ptrNativeObject = (EarthView::World::Graphic::CFont::GlyphInfo*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_GlyphInfo_width( void *pObjectXXXX, ev_real32  value )
			{
				((EarthView::World::Graphic::CFont::GlyphInfo*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CFont_FontCodePointRange_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_FontCodePointRange_first( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CFont::FontCodePointRange*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CFont_FontCodePointRange_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CFont_FontCodePointRange_second( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CFont::FontCodePointRange*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_FontCodePointRange_merge_ev_bool_FontCodePointRange(void *pObjectXXXX, _in const void* newVal )
			{
				EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->merge(*(EarthView::World::Graphic::CFont::FontCodePointRange*)newVal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_FontCodePointRange_rightMerge_ev_bool_FontCodePointRange(void *pObjectXXXX, _in const void* newVal )
			{
				EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->rightMerge(*(EarthView::World::Graphic::CFont::FontCodePointRange*)newVal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_FontCodePointRange_leftMerge_ev_bool_FontCodePointRange(void *pObjectXXXX, _in const void* newVal )
			{
				EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->leftMerge(*(EarthView::World::Graphic::CFont::FontCodePointRange*)newVal);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_FontCodePointRange_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont::FontCodePointRange* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRange*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_push_back_void_FontCodePointRange(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CFont::FontCodePointRange*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_front_FontCodePointRange(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				EarthView::World::Graphic::CFont::FontCodePointRange& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CFont::FontCodePointRange *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_back_FontCodePointRange(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				EarthView::World::Graphic::CFont::FontCodePointRange& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CFont::FontCodePointRange *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_charCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->charCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_cutDownTo_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  charCount )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ptrNativeObject->cutDownTo(charCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_FontCodePointRangeList_compressRangeList_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont::FontCodePointRangeList* ptrNativeObject = (EarthView::World::Graphic::CFont::FontCodePointRangeList*) pObjectXXXX;
				ptrNativeObject->compressRangeList();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				if (dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_loadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				if (dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFont::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_unloadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFont::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				if (dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFont_calculateSize_ev_size_t_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CFont::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setType_void_FontType(void *pObjectXXXX, _in int ftype )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setType((EarthView::World::Graphic::FontType)ftype);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CFont_getType_FontType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				EarthView::World::Graphic::FontType objXXXX = ptrNativeObject->getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setSource_void_EVString(void *pObjectXXXX, _in const char* source )
			{
				EarthView::World::Core::ev_string source1 = source;
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setSource(source1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CFont_getSource_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSource();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setCharacterSpacer_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 charSpacer )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setCharacterSpacer(charSpacer);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFont_getCharacterSpacer_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getCharacterSpacer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setTrueTypeSize_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 ttfSize )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setTrueTypeSize(ttfSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setTrueTypeResolution_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 ttfResolution )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setTrueTypeResolution(ttfResolution);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CFont_getTrueTypeSize_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getTrueTypeSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFont_getTrueTypeResolution_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTrueTypeResolution();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CFont_getTrueTypeMaxBearingY_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTrueTypeMaxBearingY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFont_getTrueTypeMaxHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getTrueTypeMaxHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CFont_getMaxCapability_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getMaxCapability();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CFont_life_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->life();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setLife_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 val )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setLife(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setFontStyle_void_FontStyle(void *pObjectXXXX, _in const void* style )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setFontStyle(*(EarthView::World::Graphic::FontStyle*)style);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFont_getFontStyle_FontStyle(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EarthView::World::Graphic::FontStyle& objXXXX = ptrNativeObject->getFontStyle();
				const EarthView::World::Graphic::FontStyle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CFont_getFontFamily_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFontFamily();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setFontFamily_void_EVString(void *pObjectXXXX, _in const char* family )
			{
				EarthView::World::Core::ev_string family1 = family;
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setFontFamily(family1);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFont_getGlyphTexCoords_FloatRect_ev_uint32(void *pObjectXXXX, _in ev_uint32 unicode )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EarthView::World::Graphic::FloatRect& objXXXX = ptrNativeObject->getGlyphTexCoords(unicode);
				const EarthView::World::Graphic::FloatRect *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setGlyphInfo_void_GlyphInfo(void *pObjectXXXX, _in const void* info )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setGlyphInfo(*(EarthView::World::Graphic::CFont::GlyphInfo*)info);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setGlyphTexCoords_void_ev_uint32_Real_Real_Real_Real_Real(void *pObjectXXXX, _in ev_uint32 id, _in Real u1, _in Real v1, _in Real u2, _in Real v2, _in Real textureAspect )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setGlyphTexCoords(id, u1, v1, u2, v2, textureAspect);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFont_getGlyphAspectRatio_Real_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getGlyphAspectRatio(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setGlyphAspectRatio_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 id, _in Real ratio )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setGlyphAspectRatio(id, ratio);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_existGlyphInfo_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existGlyphInfo(id);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFont_getGlyphInfo_GlyphInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EarthView::World::Graphic::CFont::GlyphInfo& objXXXX = ptrNativeObject->getGlyphInfo(id);
				const EarthView::World::Graphic::CFont::GlyphInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_addCodePointRange_void_FontCodePointRange(void *pObjectXXXX, _in const void* range )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->addCodePointRange(*(EarthView::World::Graphic::CFont::FontCodePointRange*)range);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_clearCodePointRanges_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->clearCodePointRanges();
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFont_getCodePointRangeList_FontCodePointRangeList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EarthView::World::Graphic::CFont::FontCodePointRangeList& objXXXX = ptrNativeObject->getCodePointRangeList();
				const EarthView::World::Graphic::CFont::FontCodePointRangeList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CFont_getMaterial_CMaterialPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				const EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->getMaterial();
				const EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFont_setAntialiasColour_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ptrNativeObject->setAntialiasColour(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFont_getAntialiasColour_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFont* ptrNativeObject = (EarthView::World::Graphic::CFont*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAntialiasColour();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_preLoadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_postLoadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_preUnloadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_postUnloadImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_prepareImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_unprepareImpl_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_prepare_void_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_prepare_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_load_void_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_load_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_load_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_reload_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isReloadable_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_unload_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFont_getSize_ev_size_t_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_touch_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_getName_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CFont_getHandle_ev_uint64_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isPrepared_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isLoaded_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isLoading_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CFont_getLoadingState_LoadingState_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CFont_escalateLoading_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CFont_addListener_void_CResourceListener_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CFont_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_getGroup_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CFont_getCreator_CResourceManager_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_getOrigin_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CFont_getStateCount_ev_size_t_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CFont__dirtyState_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CFont__fireUnloadingComplete_void_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CFont_getParameter_EVString_EVString_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CFontProxy* ptr = dynamic_cast<CFontProxy*>((EarthView::World::Graphic::CFont*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFont_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFont*  _stdcall EarthView_World_Graphic_CFontPtr_get_CFont(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFontPtr* ptrNativeObject = (EarthView::World::Graphic::CFontPtr*) pObjectXXXX;
				EarthView::World::Graphic::CFont* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CFontPtr_OperatorAssign_CFontPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CFontPtr& objXXXX = *((EarthView::World::Graphic::CFontPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CFontPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
