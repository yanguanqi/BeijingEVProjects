/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/material.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_push_back_void_Real(void *pObjectXXXX, _in Real& t )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_LodValueList_front_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_LodValueList_back_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_insert_void_ev_uint32_Real(void *pObjectXXXX, _in ev_uint32 pos, _in Real& t )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LodValueList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_LodValueList_OperatorIndex_Real_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::LodValueList& objYYYY = *(EarthView::World::Graphic::LodValueList*) pObjXXXX;
				Real& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real&  _stdcall EarthView_World_Graphic_LodValueList_at_Real_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				Real& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_LodValueList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueList* ptrNativeObject = (EarthView::World::Graphic::LodValueList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_LodValueIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_LodValueIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_LodValueIterator_getCurrent_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_LodValueIterator_next_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_LodValueIterator_getBegin_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_LodValueIterator_getEnd_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::LodValueIterator* ptrNativeObject = (EarthView::World::Graphic::LodValueIterator*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CMaterial_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CMaterialProxy : public EarthView::World::Graphic::CMaterial
			{
			private:
				EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_loadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_loadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback* m_EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback;
				EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_prepare_void_Callback* m_EarthView_World_Graphic_CMaterial_prepare_void_Callback;
				EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_load_void_Callback* m_EarthView_World_Graphic_CMaterial_load_void_Callback;
				EarthView_World_Graphic_CMaterial_reload_void_Callback* m_EarthView_World_Graphic_CMaterial_reload_void_Callback;
				EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_unload_void_Callback* m_EarthView_World_Graphic_CMaterial_unload_void_Callback;
				EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CMaterial_touch_void_Callback* m_EarthView_World_Graphic_CMaterial_touch_void_Callback;
				EarthView_World_Graphic_CMaterial_getName_EVString_Callback* m_EarthView_World_Graphic_CMaterial_getName_EVString_Callback;
				EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback* m_EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback;
				EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback* m_EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback;
				EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CMaterial__dirtyState_void_Callback* m_EarthView_World_Graphic_CMaterial__dirtyState_void_Callback;
				EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback;
			public:
				CMaterialProxy(EarthView::World::Core::CNameValuePairList *pList) : CMaterial(pList)
				{
					m_EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_preLoadImpl_void(EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_postLoadImpl_void(EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_preUnloadImpl_void(EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_postUnloadImpl_void(EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_prepareImpl_void(EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_unprepareImpl_void(EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_loadImpl_void(EarthView_World_Graphic_CMaterial_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_unloadImpl_void(EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t(EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool(EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_prepare_void(EarthView_World_Graphic_CMaterial_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_load_void_ev_bool(EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_load_void(EarthView_World_Graphic_CMaterial_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_reload_void(EarthView_World_Graphic_CMaterial_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool(EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_unload_void(EarthView_World_Graphic_CMaterial_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getSize_ev_size_t(EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_touch_void(EarthView_World_Graphic_CMaterial_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getName_EVString(EarthView_World_Graphic_CMaterial_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64(EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool(EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool(EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isLoading_ev_bool(EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState(EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_escalateLoading_void(EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener(EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener(EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getGroup_EVString(EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager(EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getOrigin_EVString(EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString(EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t(EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial__dirtyState_void(EarthView_World_Graphic_CMaterial__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void(EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString(EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback();
					}
					else
						return this->CMaterial::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback();
					}
					else
						return this->CMaterial::unprepareImpl();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_loadImpl_void_Callback();
					}
					else
						return this->CMaterial::loadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback();
					}
					else
						return this->CMaterial::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::calculateSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CMaterial_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_touch_void_Callback();
					}
					else
						return this->CMaterial::touch();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback();
					}
					else
						return this->CMaterial::preLoadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback();
					}
					else
						return this->CMaterial::postLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback();
					}
					else
						return this->CMaterial::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback();
					}
					else
						return this->CMaterial::postUnloadImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CMaterial::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CMaterial_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_prepare_void_Callback();
					}
					else
						return this->CMaterial::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CMaterial::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CMaterial_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_load_void_Callback();
					}
					else
						return this->CMaterial::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CMaterial_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_reload_void_Callback();
					}
					else
						return this->CMaterial::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CMaterial_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_unload_void_Callback();
					}
					else
						return this->CMaterial::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getSize();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMaterial_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CMaterial::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback();
					}
					else
						return this->CMaterial::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CMaterial::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CMaterial::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CMaterial::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CMaterial::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMaterial::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CMaterial__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial__dirtyState_void_Callback();
					}
					else
						return this->CMaterial::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CMaterial::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CMaterial::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CMaterial::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CMaterial::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CMaterial::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CMaterial::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMaterial::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CMaterial::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CMaterialProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_Techniques_push_back_void_CTechnique(void *pObjectXXXX, _in EarthView::World::Graphic::CTechnique*& ref_t )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_Techniques_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_Techniques_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_Techniques_OperatorIndex_CTechnique_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMaterial::Techniques& objYYYY = *(EarthView::World::Graphic::CMaterial::Techniques*) pObjXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_Techniques_at_CTechnique_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMaterial_Techniques_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_Techniques_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_Techniques_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_Techniques_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::Techniques* ptrNativeObject = (EarthView::World::Graphic::CMaterial::Techniques*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_prepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterial::prepareImpl();
				else
					ptrNativeObject->prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_prepareImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_prepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterial::prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_unprepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterial::unprepareImpl();
				else
					ptrNativeObject->unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_unprepareImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_unprepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterial::unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterial::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_loadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterial::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterial::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_unloadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterial::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CMaterial::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMaterial_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CMaterial::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_OperatorAssign_CMaterial_CMaterial(void *pObjXXXX, _in const void* rhs )
			{
				EarthView::World::Graphic::CMaterial& objXXXX = *((EarthView::World::Graphic::CMaterial*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::CMaterial*)rhs;
				EarthView::World::Graphic::CMaterial *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_isTransparent_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isTransparent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setReceiveShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setReceiveShadows(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_getReceiveShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getReceiveShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setTransparencyCastsShadows_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setTransparencyCastsShadows(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_getTransparencyCastsShadows_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTransparencyCastsShadows();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_createTechnique_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->createTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getTechnique_CTechnique_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getTechnique_CTechnique_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getTechnique(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMaterial_getNumTechniques_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumTechniques();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_removeTechnique_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->removeTechnique(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_removeAllTechniques_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->removeAllTechniques();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_getCurrent_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_next_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_getBegin_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_TechniqueIterator_getEnd_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial::TechniqueIterator* ptrNativeObject = (EarthView::World::Graphic::CMaterial::TechniqueIterator*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_getTechniqueIterator_TechniqueIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterial::TechniqueIterator objXXXX = ptrNativeObject->getTechniqueIterator();
				EarthView::World::Graphic::CMaterial::TechniqueIterator *pXXXX = new EarthView::World::Graphic::CMaterial::TechniqueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_getSupportedTechniqueIterator_TechniqueIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterial::TechniqueIterator objXXXX = ptrNativeObject->getSupportedTechniqueIterator();
				EarthView::World::Graphic::CMaterial::TechniqueIterator *pXXXX = new EarthView::World::Graphic::CMaterial::TechniqueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getSupportedTechnique_CTechnique_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getSupportedTechnique(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMaterial_getNumSupportedTechniques_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumSupportedTechniques();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CMaterial_getUnsupportedTechniquesExplanation_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUnsupportedTechniquesExplanation();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMaterial_getNumLodLevels_ev_uint16_ev_uint16(void *pObjectXXXX, _in ev_uint16 schemeIndex )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumLodLevels(schemeIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMaterial_getNumLodLevels_ev_uint16_EVString(void *pObjectXXXX, _in const char* schemeName )
			{
				EarthView::World::Core::ev_string schemeName1 = schemeName;
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumLodLevels(schemeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getBestTechnique_CTechnique_ev_uint16_CRenderable(void *pObjectXXXX, _in ev_uint16 lodIndex, _in const EarthView::World::Graphic::CRenderable* rend )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getBestTechnique(lodIndex, rend);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getBestTechnique_CTechnique_ev_uint16(void *pObjectXXXX, _in ev_uint16 lodIndex )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getBestTechnique(lodIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTechnique*  _stdcall EarthView_World_Graphic_CMaterial_getBestTechnique_CTechnique(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CTechnique* objXXXX = ptrNativeObject->getBestTechnique();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_clone_CMaterialPtr_EVString_ev_bool_EVString(void *pObjectXXXX, _in const char* newName, _in ev_bool changeGroup, _in const char* newGroup )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Core::ev_string newGroup1 = newGroup;
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->clone(newName1, changeGroup, newGroup1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_clone_CMaterialPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* newName, _in ev_bool changeGroup )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->clone(newName1, changeGroup);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_clone_CMaterialPtr_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->clone(newName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_cloneUnmanaged_CMaterialPtr_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr objXXXX = ptrNativeObject->cloneUnmanaged(newName1);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = new EarthView::World::Graphic::CMaterialPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_copyDetailsTo_void_CMaterialPtr(void *pObjectXXXX, _inout void* mat )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->copyDetailsTo(*(EarthView::World::Graphic::CMaterialPtr*)mat);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_compile_void_ev_bool(void *pObjectXXXX, _in ev_bool autoManageTextureUnits )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->compile(autoManageTextureUnits);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_compile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->compile();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setPointSize_void_Real(void *pObjectXXXX, _in Real ps )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setPointSize(ps);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setAmbient_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setAmbient(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setAmbient_void_CColourValue(void *pObjectXXXX, _in const void* ambient )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setAmbient(*(EarthView::World::Graphic::CColourValue*)ambient);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDiffuse_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDiffuse(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDiffuse_void_CColourValue(void *pObjectXXXX, _in const void* diffuse )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDiffuse(*(EarthView::World::Graphic::CColourValue*)diffuse);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSpecular_void_Real_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue, _in Real alpha )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSpecular(red, green, blue, alpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSpecular_void_CColourValue(void *pObjectXXXX, _in const void* specular )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSpecular(*(EarthView::World::Graphic::CColourValue*)specular);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setShininess_void_Real(void *pObjectXXXX, _in Real val )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setShininess(val);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSelfIllumination_void_Real_Real_Real(void *pObjectXXXX, _in Real red, _in Real green, _in Real blue )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(red, green, blue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSelfIllumination_void_CColourValue(void *pObjectXXXX, _in const void* selfIllum )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSelfIllumination(*(EarthView::World::Graphic::CColourValue*)selfIllum);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDepthCheckEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDepthCheckEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDepthWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDepthWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDepthFunction_void_CompareFunction(void *pObjectXXXX, _in int func )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDepthFunction((EarthView::World::Graphic::CompareFunction)func);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setColourWriteEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setColourWriteEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setCullingMode_void_CullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setCullingMode((EarthView::World::Graphic::CullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setManualCullingMode_void_ManualCullingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setManualCullingMode((EarthView::World::Graphic::ManualCullingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setLightingEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setLightingEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setShadingMode_void_ShadeOptions(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setShadingMode((EarthView::World::Graphic::ShadeOptions)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool_FogMode_CColourValue_Real_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart, _in Real linearEnd )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart, linearEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool_FogMode_CColourValue_Real_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity, _in Real linearStart )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity, linearStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool_FogMode_CColourValue_Real(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour, _in Real expDensity )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour, expDensity);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool_FogMode_CColourValue(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode, _in const void* colour )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool_FogMode(void *pObjectXXXX, _in ev_bool overrideScene, _in int mode )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene, (EarthView::World::Graphic::FogMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setFog_void_ev_bool(void *pObjectXXXX, _in ev_bool overrideScene )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setFog(overrideScene);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setDepthBias_void_ev_real32_ev_real32(void *pObjectXXXX, _in ev_real32 constantBias, _in ev_real32 slopeScaleBias )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setDepthBias(constantBias, slopeScaleBias);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setTextureFiltering_void_TextureFilterOptions(void *pObjectXXXX, _in int filterType )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setTextureFiltering((EarthView::World::Graphic::TextureFilterOptions)filterType);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setTextureAnisotropy_void_ev_int32(void *pObjectXXXX, _in ev_int32 maxAniso )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setTextureAnisotropy(maxAniso);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSceneBlending_void_SceneBlendType(void *pObjectXXXX, _in const int sbt )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSeparateSceneBlending_void_SceneBlendType_SceneBlendType(void *pObjectXXXX, _in const int sbt, _in const int sbta )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendType)sbt, (EarthView::World::Graphic::SceneBlendType)sbta);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSceneBlending_void_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setSeparateSceneBlending_void_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor_SceneBlendFactor(void *pObjectXXXX, _in const int sourceFactor, _in const int destFactor, _in const int sourceFactorAlpha, _in const int destFactorAlpha )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setSeparateSceneBlending((EarthView::World::Graphic::SceneBlendFactor)sourceFactor, (EarthView::World::Graphic::SceneBlendFactor)destFactor, (EarthView::World::Graphic::SceneBlendFactor)sourceFactorAlpha, (EarthView::World::Graphic::SceneBlendFactor)destFactorAlpha);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial__notifyNeedsRecompile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->_notifyNeedsRecompile();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setLodLevels_void_LodValueList(void *pObjectXXXX, _in const void* lodValues )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setLodLevels(*(EarthView::World::Graphic::LodValueList*)lodValues);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_getLodValueIterator_LodValueIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::LodValueIterator objXXXX = ptrNativeObject->getLodValueIterator();
				EarthView::World::Graphic::LodValueIterator *pXXXX = new EarthView::World::Graphic::LodValueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterial_getUserLodValueIterator_LodValueIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				EarthView::World::Graphic::LodValueIterator objXXXX = ptrNativeObject->getUserLodValueIterator();
				EarthView::World::Graphic::LodValueIterator *pXXXX = new EarthView::World::Graphic::LodValueIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMaterial_getLodIndex_ev_uint16_Real(void *pObjectXXXX, _in Real value )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLodIndex(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CLodStrategy*  _stdcall EarthView_World_Graphic_CMaterial_getLodStrategy_CLodStrategy(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				const EarthView::World::Graphic::CLodStrategy* objXXXX = ptrNativeObject->getLodStrategy();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_setLodStrategy_void_CLodStrategy(void *pObjectXXXX, _in EarthView::World::Graphic::CLodStrategy* ref_lodStrategy )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->setLodStrategy(ref_lodStrategy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_touch_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				if (dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMaterial::touch();
				else
					ptrNativeObject->touch();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_touch_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterial_touch_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMaterial::touch();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_applyTextureAliases_ev_bool_CommonStringPairList_ev_bool(void *pObjectXXXX, _in const void* aliasList, _in const ev_bool apply )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList, apply);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_applyTextureAliases_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const void* aliasList )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->applyTextureAliases(*(EarthView::World::Core::CommonStringPairList*)aliasList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterial_getCompilationRequired_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterial* ptrNativeObject = (EarthView::World::Graphic::CMaterial*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCompilationRequired();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_preLoadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_postLoadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_preUnloadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_postUnloadImpl_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_prepare_void_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_prepare_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_load_void_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_load_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_load_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_reload_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isReloadable_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_unload_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getSize_ev_size_t_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getName_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getHandle_ev_uint64_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isPrepared_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isLoaded_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isLoading_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_escalateLoading_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getGroup_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getCreator_CResourceManager_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getOrigin_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial__dirtyState_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CMaterialProxy* ptr = dynamic_cast<CMaterialProxy*>((EarthView::World::Graphic::CMaterial*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMaterial_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMaterial*  _stdcall EarthView_World_Graphic_CMaterialPtr_get_CMaterial(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterialPtr* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtr*) pObjectXXXX;
				EarthView::World::Graphic::CMaterial* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterialPtr_OperatorAssign_CMaterialPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CMaterialPtr& objXXXX = *((EarthView::World::Graphic::CMaterialPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_push_back_void_CMaterialPtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CMaterialPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterialPtrList_front_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterialPtrList_back_CMaterialPtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMaterialPtrList_at_CMaterialPtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				EarthView::World::Graphic::CMaterialPtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CMaterialPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_insert_void_ev_uint32_CMaterialPtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CMaterialPtr*)t);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMaterialPtrList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMaterialPtrList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMaterialPtrList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMaterialPtrList* ptrNativeObject = (EarthView::World::Graphic::CMaterialPtrList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
		}
	}
}
