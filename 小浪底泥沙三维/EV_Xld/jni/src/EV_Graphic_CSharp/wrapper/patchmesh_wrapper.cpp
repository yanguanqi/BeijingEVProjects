/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/patchmesh.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback)(_in char*& name);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CPatchMeshProxy : public EarthView::World::Graphic::CPatchMesh
			{
			private:
				EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback* m_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback;
				EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* m_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback;
				EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback* m_EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback;
				EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_prepare_void_Callback* m_EarthView_World_Graphic_CPatchMesh_prepare_void_Callback;
				EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_load_void_Callback* m_EarthView_World_Graphic_CPatchMesh_load_void_Callback;
				EarthView_World_Graphic_CPatchMesh_reload_void_Callback* m_EarthView_World_Graphic_CPatchMesh_reload_void_Callback;
				EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_unload_void_Callback* m_EarthView_World_Graphic_CPatchMesh_unload_void_Callback;
				EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CPatchMesh_touch_void_Callback* m_EarthView_World_Graphic_CPatchMesh_touch_void_Callback;
				EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback* m_EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback;
				EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback* m_EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback;
				EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback;
			public:
				CPatchMeshProxy(EarthView::World::Core::CNameValuePairList *pList) : CPatchMesh(pList)
				{
					m_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString(EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString(EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString(EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16(EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void(EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType(EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void(EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void(EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void(EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void(EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_prepareImpl_void(EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void(EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_loadImpl_void(EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_unloadImpl_void(EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t(EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool(EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_prepare_void(EarthView_World_Graphic_CPatchMesh_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool(EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_load_void(EarthView_World_Graphic_CPatchMesh_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_reload_void(EarthView_World_Graphic_CPatchMesh_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool(EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_unload_void(EarthView_World_Graphic_CPatchMesh_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t(EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_touch_void(EarthView_World_Graphic_CPatchMesh_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getName_EVString(EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64(EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool(EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool(EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool(EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState(EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_escalateLoading_void(EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener(EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener(EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getGroup_EVString(EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager(EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString(EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString(EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t(EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__dirtyState_void(EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void(EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString(EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::loadImpl();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback();
					}
					else
						return this->CPatchMesh::prepareImpl();
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CPatchMesh::createAnimation(name, length);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CPatchMesh::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CPatchMesh::_getAnimationImpl(name);
				}
				virtual ev_bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CPatchMesh::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CPatchMesh::removeAnimation(name);
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CPatchMesh::getAnimation(index);
				}
				virtual void removeAllAnimations()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback();
					}
					else
						return this->CPatchMesh::removeAllAnimations();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback();
					}
					else
						return this->CPatchMesh::unprepareImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::postLoadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::calculateSize();
				}
				virtual EarthView::World::Graphic::VertexAnimationType getSharedVertexDataAnimationType() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::VertexAnimationType returnValue = (EarthView::World::Graphic::VertexAnimationType)m_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getSharedVertexDataAnimationType();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::preLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback();
					}
					else
						return this->CPatchMesh::postUnloadImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CPatchMesh::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_prepare_void_Callback();
					}
					else
						return this->CPatchMesh::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CPatchMesh::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_load_void_Callback();
					}
					else
						return this->CPatchMesh::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_reload_void_Callback();
					}
					else
						return this->CPatchMesh::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_unload_void_Callback();
					}
					else
						return this->CPatchMesh::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_touch_void_Callback();
					}
					else
						return this->CPatchMesh::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CPatchMesh::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback();
					}
					else
						return this->CPatchMesh::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CPatchMesh::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CPatchMesh::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CPatchMesh::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CPatchMesh::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CPatchMesh::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback();
					}
					else
						return this->CPatchMesh::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CPatchMesh::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CPatchMesh::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CPatchMesh::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CPatchMesh::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CPatchMesh::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CPatchMesh::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CPatchMesh::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CPatchMesh::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CPatchMeshProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_update_void_void_size_t_size_t_size_t_size_t_VisibleSide(void *pObjectXXXX, _in void* controlPointBuffer, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->update(controlPointBuffer, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool_ev_bool(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide, _in int vbUsage, _in int ibUsage, _in ev_bool vbUseShadow, _in ev_bool ibUseShadow )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide, (EarthView::World::Graphic::CHardwareBuffer::Usage)vbUsage, (EarthView::World::Graphic::CHardwareBuffer::Usage)ibUsage, vbUseShadow, ibUseShadow);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage_ev_bool(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide, _in int vbUsage, _in int ibUsage, _in ev_bool vbUseShadow )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide, (EarthView::World::Graphic::CHardwareBuffer::Usage)vbUsage, (EarthView::World::Graphic::CHardwareBuffer::Usage)ibUsage, vbUseShadow);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage_Usage(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide, _in int vbUsage, _in int ibUsage )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide, (EarthView::World::Graphic::CHardwareBuffer::Usage)vbUsage, (EarthView::World::Graphic::CHardwareBuffer::Usage)ibUsage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide_Usage(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide, _in int vbUsage )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide, (EarthView::World::Graphic::CHardwareBuffer::Usage)vbUsage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t_VisibleSide(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel, _in int visibleSide )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (EarthView::World::Graphic::CPatchSurface::VisibleSide)visibleSide);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel, _in ev_uint64  vMaxSubdivisionLevel )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t_ev_size_t(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height, _in ev_uint64  uMaxSubdivisionLevel )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_define_void_void_CVertexDeclaration_ev_size_t_ev_size_t(void *pObjectXXXX, _in void* controlPointBuffer, _in EarthView::World::Graphic::CVertexDeclaration* declaration, _in ev_uint64  width, _in ev_uint64  height )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->define(controlPointBuffer, declaration, width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_setSubdivision_void_Real(void *pObjectXXXX, _in Real factor )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->setSubdivision(factor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				if (dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPatchMesh::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_loadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPatchMesh::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_prepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				if (dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CPatchMesh::prepareImpl();
				else
					ptrNativeObject->prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_prepareImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CPatchMesh_prepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CPatchMesh* ptrNativeObject = (EarthView::World::Graphic::CPatchMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CPatchMesh::prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__getAnimationImpl_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_hasAnimation_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_removeAllAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getSharedVertexDataAnimationType_VertexAnimationType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_preLoadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_postLoadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_unprepareImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_unloadImpl_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_prepare_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_load_void_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_load_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_load_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_reload_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_unload_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_touch_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getName_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_escalateLoading_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getGroup_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getOrigin_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__dirtyState_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CPatchMeshProxy* ptr = dynamic_cast<CPatchMeshProxy*>((EarthView::World::Graphic::CPatchMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPatchMesh_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPatchMesh*  _stdcall EarthView_World_Graphic_CPatchMeshPtr_get_CPatchMesh(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CPatchMeshPtr* ptrNativeObject = (EarthView::World::Graphic::CPatchMeshPtr*) pObjectXXXX;
				EarthView::World::Graphic::CPatchMesh* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPatchMeshPtr_OperatorAssign_CPatchMeshPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CPatchMeshPtr& objXXXX = *((EarthView::World::Graphic::CPatchMeshPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CPatchMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CPatchMeshPtr_OperatorAssign_CPatchMeshPtr_CMeshPtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CPatchMeshPtr& objXXXX = *((EarthView::World::Graphic::CPatchMeshPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CMeshPtr*)r;
				EarthView::World::Graphic::CPatchMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
