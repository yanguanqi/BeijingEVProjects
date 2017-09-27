/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/mesh.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMesh*  _stdcall EarthView_World_Graphic_CMeshPtr_get_CMesh(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMeshPtr* ptrNativeObject = (EarthView::World::Graphic::CMeshPtr*) pObjectXXXX;
				EarthView::World::Graphic::CMesh* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMeshPtr_OperatorAssign_CMeshPtr_ResourcePtr(void *pObjXXXX, _in const void* r )
			{
				EarthView::World::Graphic::CMeshPtr& objXXXX = *((EarthView::World::Graphic::CMeshPtr*) pObjXXXX);
				objXXXX = *(EarthView::World::Graphic::ResourcePtr*)r;
				EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_userValue( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->userValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_userValue( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->userValue = value;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_value( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->value;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_value( void *pObjectXXXX, Real  value )
			{
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->value = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_manualName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->manualName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_manualName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->manualName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_manualGroup( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->manualGroup;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_manualGroup( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->manualGroup = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_manualMesh( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr &objXXXX = ptrNativeObject->manualMesh;
				EarthView::World::Graphic::CMeshPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_manualMesh( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->manualMesh = *(EarthView::World::Graphic::CMeshPtr*)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall Get_EarthView_World_Graphic_MeshLodUsage_edgeData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::MeshLodUsage* ptrNativeObject = (EarthView::World::Graphic::MeshLodUsage*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->edgeData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_MeshLodUsage_edgeData( void *pObjectXXXX, EarthView::World::Graphic::CEdgeData*  value )
			{
				((EarthView::World::Graphic::MeshLodUsage*)pObjectXXXX)->edgeData = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_push_back_void_ev_uint16(void *pObjectXXXX, _in ev_uint16& t )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->push_back(t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_IndexMap_front_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_IndexMap_back_ev_uint16(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_insert_void_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint32 pos, _in ev_uint16& t )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->insert(pos, t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_IndexMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_IndexMap_OperatorIndex_ev_uint16_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IndexMap& objYYYY = *(EarthView::World::Graphic::IndexMap*) pObjXXXX;
				ev_uint16& objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_IndexMap_at_ev_uint16_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_IndexMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_IndexMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::IndexMap* ptrNativeObject = (EarthView::World::Graphic::IndexMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback)(_in char*& name);
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_prepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_loadImpl_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_unloadImpl_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_prepare_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback)(_in ev_bool backgroundThread);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_load_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_reload_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_unload_void_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_touch_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CMesh_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback)();
			typedef int  ( _stdcall EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback)(_in ev_bool bl);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_escalateLoading_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback)(_in EarthView::World::Graphic::CResource::CResourceListener* lis);
			typedef char*  ( _stdcall EarthView_World_Graphic_CMesh_getGroup_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback)(_in char*& newGroup);
			typedef EarthView::World::Graphic::CResourceManager*  ( _stdcall EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback)();
			typedef char*  ( _stdcall EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback)(_in char*& origin);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh__dirtyState_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback)(_in ev_bool wasBackgroundLoaded);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
			typedef char*  ( _stdcall EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
			class CMeshProxy : public EarthView::World::Graphic::CMesh
			{
			private:
				EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback;
				EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback* m_EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback;
				EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* m_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback;
				EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_prepareImpl_void_Callback* m_EarthView_World_Graphic_CMesh_prepareImpl_void_Callback;
				EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback* m_EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback;
				EarthView_World_Graphic_CMesh_loadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_loadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_unloadImpl_void_Callback* m_EarthView_World_Graphic_CMesh_unloadImpl_void_Callback;
				EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback* m_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback;
				EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_prepare_void_Callback* m_EarthView_World_Graphic_CMesh_prepare_void_Callback;
				EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_load_void_Callback* m_EarthView_World_Graphic_CMesh_load_void_Callback;
				EarthView_World_Graphic_CMesh_reload_void_Callback* m_EarthView_World_Graphic_CMesh_reload_void_Callback;
				EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_unload_void_Callback* m_EarthView_World_Graphic_CMesh_unload_void_Callback;
				EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback* m_EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback;
				EarthView_World_Graphic_CMesh_touch_void_Callback* m_EarthView_World_Graphic_CMesh_touch_void_Callback;
				EarthView_World_Graphic_CMesh_getName_EVString_Callback* m_EarthView_World_Graphic_CMesh_getName_EVString_Callback;
				EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback* m_EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback;
				EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback* m_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback;
				EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_escalateLoading_void_Callback* m_EarthView_World_Graphic_CMesh_escalateLoading_void_Callback;
				EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback* m_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback;
				EarthView_World_Graphic_CMesh_getGroup_EVString_Callback* m_EarthView_World_Graphic_CMesh_getGroup_EVString_Callback;
				EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback* m_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback;
				EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback* m_EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback;
				EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback* m_EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback;
				EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback* m_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback;
				EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback* m_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback;
				EarthView_World_Graphic_CMesh__dirtyState_void_Callback* m_EarthView_World_Graphic_CMesh__dirtyState_void_Callback;
				EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback* m_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback;
				EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback* m_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback;
				EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback;
				EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
				EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback;
				EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback* m_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback;
				EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback;
			public:
				CMeshProxy(EarthView::World::Core::CNameValuePairList *pList) : CMesh(pList)
				{
					m_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_prepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_loadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_unloadImpl_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_prepare_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_load_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_reload_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_unload_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_touch_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getName_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_escalateLoading_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getGroup_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__dirtyState_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString(EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString(EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString(EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16(EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_removeAllAnimations_void(EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType(EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_preLoadImpl_void(EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_postLoadImpl_void(EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_preUnloadImpl_void(EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_postUnloadImpl_void(EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_prepareImpl_void(EarthView_World_Graphic_CMesh_prepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_prepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_unprepareImpl_void(EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_loadImpl_void(EarthView_World_Graphic_CMesh_loadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_loadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_unloadImpl_void(EarthView_World_Graphic_CMesh_unloadImpl_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_unloadImpl_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t(EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_prepare_void_ev_bool(EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_prepare_void(EarthView_World_Graphic_CMesh_prepare_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_prepare_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_load_void_ev_bool(EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_load_void(EarthView_World_Graphic_CMesh_load_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_load_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_reload_void(EarthView_World_Graphic_CMesh_reload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_reload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isReloadable_ev_bool(EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool(EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_unload_void(EarthView_World_Graphic_CMesh_unload_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_unload_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getSize_ev_size_t(EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_touch_void(EarthView_World_Graphic_CMesh_touch_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_touch_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getName_EVString(EarthView_World_Graphic_CMesh_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getHandle_ev_uint64(EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isPrepared_ev_bool(EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isLoaded_ev_bool(EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isLoading_ev_bool(EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState(EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool(EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool(EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_escalateLoading_void(EarthView_World_Graphic_CMesh_escalateLoading_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_escalateLoading_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener(EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener(EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getGroup_EVString(EarthView_World_Graphic_CMesh_getGroup_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getGroup_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString(EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getCreator_CResourceManager(EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getOrigin_EVString(EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString(EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t(EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__dirtyState_void(EarthView_World_Graphic_CMesh__dirtyState_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__dirtyState_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool(EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool(EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void(EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString(EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList(EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString(EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface(EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CMesh::createAnimation(name, length);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMesh::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* _getAnimationImpl(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMesh::_getAnimationImpl(name);
				}
				virtual ev_bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMesh::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CMesh::removeAnimation(name);
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CMesh::getAnimation(index);
				}
				virtual void removeAllAnimations()
				{
					if(m_EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback();
					}
					else
						return this->CMesh::removeAllAnimations();
				}
				virtual void prepareImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_prepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_prepareImpl_void_Callback();
					}
					else
						return this->CMesh::prepareImpl();
				}
				virtual void unprepareImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback();
					}
					else
						return this->CMesh::unprepareImpl();
				}
				virtual void loadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_loadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_loadImpl_void_Callback();
					}
					else
						return this->CMesh::loadImpl();
				}
				virtual void postLoadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback();
					}
					else
						return this->CMesh::postLoadImpl();
				}
				virtual void unloadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_unloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_unloadImpl_void_Callback();
					}
					else
						return this->CMesh::unloadImpl();
				}
				virtual ev_size_t calculateSize() const
				{
					if(m_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMesh::calculateSize();
				}
				virtual EarthView::World::Graphic::VertexAnimationType getSharedVertexDataAnimationType() const
				{
					if(m_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::VertexAnimationType returnValue = (EarthView::World::Graphic::VertexAnimationType)m_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getSharedVertexDataAnimationType();
				}
				virtual void preLoadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback();
					}
					else
						return this->CMesh::preLoadImpl();
				}
				virtual void preUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback();
					}
					else
						return this->CMesh::preUnloadImpl();
				}
				virtual void postUnloadImpl()
				{
					if(m_EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback();
					}
					else
						return this->CMesh::postUnloadImpl();
				}
				virtual void prepare(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CMesh::prepare(backgroundThread);
				}
				virtual void prepare()
				{
					if(m_EarthView_World_Graphic_CMesh_prepare_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_prepare_void_Callback();
					}
					else
						return this->CMesh::prepare();
				}
				virtual void load(_in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback(backgroundThread);
					}
					else
						return this->CMesh::load(backgroundThread);
				}
				virtual void load()
				{
					if(m_EarthView_World_Graphic_CMesh_load_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_load_void_Callback();
					}
					else
						return this->CMesh::load();
				}
				virtual void reload()
				{
					if(m_EarthView_World_Graphic_CMesh_reload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_reload_void_Callback();
					}
					else
						return this->CMesh::reload();
				}
				virtual ev_bool isReloadable() const
				{
					if(m_EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isReloadable();
				}
				virtual ev_bool isManuallyLoaded() const
				{
					if(m_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isManuallyLoaded();
				}
				virtual void unload()
				{
					if(m_EarthView_World_Graphic_CMesh_unload_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_unload_void_Callback();
					}
					else
						return this->CMesh::unload();
				}
				virtual ev_size_t getSize() const
				{
					if(m_EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getSize();
				}
				virtual void touch()
				{
					if(m_EarthView_World_Graphic_CMesh_touch_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_touch_void_Callback();
					}
					else
						return this->CMesh::touch();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Graphic_CMesh_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMesh_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getName();
				}
				virtual ev_uint64 getHandle() const
				{
					if(m_EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getHandle();
				}
				virtual ev_bool isPrepared() const
				{
					if(m_EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isPrepared();
				}
				virtual ev_bool isLoaded() const
				{
					if(m_EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isLoaded();
				}
				virtual ev_bool isLoading() const
				{
					if(m_EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isLoading();
				}
				virtual EarthView::World::Graphic::CResource::LoadingState getLoadingState() const
				{
					if(m_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResource::LoadingState returnValue = (EarthView::World::Graphic::CResource::LoadingState)m_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getLoadingState();
				}
				virtual ev_bool isBackgroundLoaded() const
				{
					if(m_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CMesh::isBackgroundLoaded();
				}
				virtual void setBackgroundLoaded(_in ev_bool bl)
				{
					if(m_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback(bl);
					}
					else
						return this->CMesh::setBackgroundLoaded(bl);
				}
				virtual void escalateLoading()
				{
					if(m_EarthView_World_Graphic_CMesh_escalateLoading_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_escalateLoading_void_Callback();
					}
					else
						return this->CMesh::escalateLoading();
				}
				virtual void addListener(_in EarthView::World::Graphic::CResource::CResourceListener* ref_lis)
				{
					if(m_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback(ref_lis);
					}
					else
						return this->CMesh::addListener(ref_lis);
				}
				virtual void removeListener(_in EarthView::World::Graphic::CResource::CResourceListener* lis)
				{
					if(m_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback(lis);
					}
					else
						return this->CMesh::removeListener(lis);
				}
				virtual EVString getGroup() const
				{
					if(m_EarthView_World_Graphic_CMesh_getGroup_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMesh_getGroup_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getGroup();
				}
				virtual void changeGroupOwnership(_in const EVString& newGroup)
				{
					if(m_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* newGroup_Char = newGroup.makeBuffer();
						m_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback(newGroup_Char);
					}
					else
						return this->CMesh::changeGroupOwnership(newGroup);
				}
				virtual EarthView::World::Graphic::CResourceManager* getCreator()
				{
					if(m_EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CResourceManager* returnValue = m_EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getCreator();
				}
				virtual EVString getOrigin() const
				{
					if(m_EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getOrigin();
				}
				virtual void _notifyOrigin(_in const EVString& origin)
				{
					if(m_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* origin_Char = origin.makeBuffer();
						m_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback(origin_Char);
					}
					else
						return this->CMesh::_notifyOrigin(origin);
				}
				virtual ev_size_t getStateCount() const
				{
					if(m_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CMesh::getStateCount();
				}
				virtual void _dirtyState()
				{
					if(m_EarthView_World_Graphic_CMesh__dirtyState_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh__dirtyState_void_Callback();
					}
					else
						return this->CMesh::_dirtyState();
				}
				virtual void _fireLoadingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CMesh::_fireLoadingComplete(wasBackgroundLoaded);
				}
				virtual void _firePreparingComplete(_in ev_bool wasBackgroundLoaded)
				{
					if(m_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback(wasBackgroundLoaded);
					}
					else
						return this->CMesh::_firePreparingComplete(wasBackgroundLoaded);
				}
				virtual void _fireUnloadingComplete()
				{
					if(m_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback();
					}
					else
						return this->CMesh::_fireUnloadingComplete();
				}
				virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
				{
					if(m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* value_Char = value.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
						return returnValue;
					}
					else
						return this->CMesh::setParameter(name, value);
				}
				virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
				{
					if(m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
						return returnValue;
					}
					else
						return this->CMesh::setParameter(name, readOnly, enable);
				}
				virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
				{
					if(m_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback(&paramList);
					}
					else
						return this->CMesh::setParameterList(paramList);
				}
				virtual EVString getParameter(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EVString returnValue = m_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMesh::getParameter(name);
				}
				virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
				{
					if(m_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback(dest);
					}
					else
						return this->CMesh::copyParametersTo(dest);
				}
			};
			REGISTER_FACTORY_CLASS(CMeshProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshInfo_OperatorLessThan_ev_bool_SubMeshInfo(void *pObjXXXX, _in const void* oth )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo& objXXXX = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshInfo& objXXXX1 = *(EarthView::World::Graphic::CMesh::SubMeshInfo*)oth;
				return objXXXX < objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshInfo_OperatorGreaterThan_ev_bool_SubMeshInfo(void *pObjXXXX, _in const void* oth )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo& objXXXX = *(EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshInfo& objXXXX1 = *(EarthView::World::Graphic::CMesh::SubMeshInfo*)oth;
				return objXXXX > objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshInfo_SubMeshIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->SubMeshIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshInfo_SubMeshIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjectXXXX)->SubMeshIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshInfo_InstanceIndex( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->InstanceIndex;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshInfo_InstanceIndex( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjectXXXX)->InstanceIndex = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshInfo_IndexBegun( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->IndexBegun;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshInfo_IndexBegun( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjectXXXX)->IndexBegun = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshInfo_IndexEnd( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshInfo* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->IndexEnd;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshInfo_IndexEnd( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMesh::SubMeshInfo*)pObjectXXXX)->IndexEnd = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMesh::CMeshNode*  _stdcall EarthView_World_Graphic_CMesh_MeshNodePtr_get_CMeshNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::MeshNodePtr* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshNodePtr*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::CMeshNode* objXXXX = ptrNativeObject->get();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_addNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_existNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_existNode_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existNode(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getNumNodes_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumNodes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getNode_MeshNodePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getNode(index);
				EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getNode_MeshNodePtr_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getNode(name1);
				EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_removeNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_removeNode_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeNode(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_clearNodes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ptrNativeObject->clearNodes();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_appendSubMesh_ev_bool_SubMeshInfo(void *pObjectXXXX, _inout void* sm )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->appendSubMesh(*(EarthView::World::Graphic::CMesh::SubMeshInfo*)sm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_removeSubMesh_ev_bool_SubMeshInfo(void *pObjectXXXX, _inout void* sm )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeSubMesh(*(EarthView::World::Graphic::CMesh::SubMeshInfo*)sm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_existSubMesh_ev_bool_SubMeshInfo(void *pObjectXXXX, _inout void* sm )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existSubMesh(*(EarthView::World::Graphic::CMesh::SubMeshInfo*)sm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getNumSubMeshes_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumSubMeshes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getSubMesh_SubMeshInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::SubMeshInfo objXXXX = ptrNativeObject->getSubMesh(index);
				EarthView::World::Graphic::CMesh::SubMeshInfo *pXXXX = new EarthView::World::Graphic::CMesh::SubMeshInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_clearSubMeshes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ptrNativeObject->clearSubMeshes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_setBoundingBox_void_CAxisAlignedBox(void *pObjectXXXX, _in void* boundingBox )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				ptrNativeObject->setBoundingBox(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)boundingBox);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshNode_getBoundingBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getBoundingBox();
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshNode_Name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->Name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshNode_Name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CMesh::CMeshNode*)pObjectXXXX)->Name = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshNode_OffsetMatrix( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshNode* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshNode*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 &objXXXX = ptrNativeObject->OffsetMatrix;
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshNode_OffsetMatrix( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMesh::CMeshNode*)pObjectXXXX)->OffsetMatrix = *(EarthView::World::Spatial::Math::CMatrix4*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_addNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_existNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				const EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_existNode_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existNode(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_getNumNodes_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumNodes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_getNode_MeshNodePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getNode(index);
				EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_getNode_MeshNodePtr_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getNode(name1);
				EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_removeNode_ev_bool_MeshNodePtr(void *pObjectXXXX, _in void* node )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeNode(*(EarthView::World::Graphic::CMesh::MeshNodePtr*)node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_removeNode_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeNode(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshCategory_clearNodes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ptrNativeObject->clearNodes();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshCategory_Name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->Name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshCategory_Name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CMesh::CMeshCategory*)pObjectXXXX)->Name = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshCategory_mDescription( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mDescription;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshCategory_mDescription( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CMesh::CMeshCategory*)pObjectXXXX)->mDescription = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshCategory_mId( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->mId;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshCategory_mId( void *pObjectXXXX, ev_uint32  value )
			{
				((EarthView::World::Graphic::CMesh::CMeshCategory*)pObjectXXXX)->mId = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMesh_CMeshCategory_mCategoryAttributeList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::CMeshCategory* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshCategory*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList &objXXXX = ptrNativeObject->mCategoryAttributeList;
				EarthView::World::Core::CommonStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_CMeshCategory_mCategoryAttributeList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMesh::CMeshCategory*)pObjectXXXX)->mCategoryAttributeList = *(EarthView::World::Core::CommonStringPairList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CMesh_getNumCategorys_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumCategorys();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getCategory_CMeshCategory_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CMesh::CMeshCategory& objXXXX = ptrNativeObject->getCategory(index);
				const EarthView::World::Graphic::CMesh::CMeshCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getCategory_CMeshCategory_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CMesh::CMeshCategory& objXXXX = ptrNativeObject->getCategory(name1);
				const EarthView::World::Graphic::CMesh::CMeshCategory *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_existCategory_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->existCategory(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_addCategory_ev_bool_CMeshCategory(void *pObjectXXXX, _in const void* cate )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addCategory(*(EarthView::World::Graphic::CMesh::CMeshCategory*)cate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_removeCategory_ev_bool_CMeshCategory(void *pObjectXXXX, _in const void* cate )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeCategory(*(EarthView::World::Graphic::CMesh::CMeshCategory*)cate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_clearCategorys_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->clearCategorys();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_getRootMeshNode_MeshNodePtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::MeshNodePtr objXXXX = ptrNativeObject->getRootMeshNode();
				EarthView::World::Graphic::CMesh::MeshNodePtr *pXXXX = new EarthView::World::Graphic::CMesh::MeshNodePtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_createRootMeshNode_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createRootMeshNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_destroyRootMeshNode_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->destroyRootMeshNode();
			}
			typedef ev_uint16  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback)();
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback)(_in ev_uint16 index);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback)(_in char*& name);
			typedef EarthView::World::Graphic::CAnimation*  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback)(_in char*& name, _in Real length);
			typedef bool  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback)(_in char*& name);
			class CMeshAnimationContainerProxy : public EarthView::World::Graphic::CMesh::CMeshAnimationContainer
			{
			private:
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback;
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback;
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback;
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback;
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback;
				EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback* m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback;
			public:
				CMeshAnimationContainerProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshAnimationContainer(pList)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString(EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback = pCallback;
				}
				virtual ev_uint16 getNumAnimations() const
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						ev_uint16 returnValue = m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback();
						return returnValue;
					}
					else
						return this->CMeshAnimationContainer::getNumAnimations();
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in ev_uint16 index) const
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback(index);
						return returnValue;
					}
					else
						return this->CMeshAnimationContainer::getAnimation(index);
				}
				virtual EarthView::World::Graphic::CAnimation* getAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMeshAnimationContainer::getAnimation(name);
				}
				virtual EarthView::World::Graphic::CAnimation* createAnimation(_in const EVString& name, _in Real length)
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::CAnimation* returnValue = m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback(name_Char, length);
						return returnValue;
					}
					else
						return this->CMeshAnimationContainer::createAnimation(name, length);
				}
				virtual bool hasAnimation(_in const EVString& name) const
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						bool returnValue = m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CMeshAnimationContainer::hasAnimation(name);
				}
				virtual void removeAnimation(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback(name_Char);
					}
					else
						return this->CMeshAnimationContainer::removeAnimation(name);
				}
			};
			REGISTER_FACTORY_CLASS(CMeshAnimationContainerProxy);
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getNumAnimations();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumAnimations();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getNumAnimations_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getNumAnimations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_getAnimation_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::getAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::createAnimation(name1, length);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->createAnimation(name1, length);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_createAnimation_CAnimation_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::createAnimation(name1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::hasAnimation(name1);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->hasAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_hasAnimation_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::hasAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				if (dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::removeAnimation(name1);
				else
					ptrNativeObject->removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_Callback* pCallback )
			{
				CMeshAnimationContainerProxy* ptr = dynamic_cast<CMeshAnimationContainerProxy*>((EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_CMeshAnimationContainer_removeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* ptrNativeObject = (EarthView::World::Graphic::CMesh::CMeshAnimationContainer*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::CMeshAnimationContainer::removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMesh::CMeshAnimationContainer*  _stdcall EarthView_World_Graphic_CMesh_getAnimationContainerPtr_CMeshAnimationContainer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer* objXXXX = ptrNativeObject->getAnimationContainerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_getAnimationContainer_CMeshAnimationContainer(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer& objXXXX = ptrNativeObject->getAnimationContainer();
				EarthView::World::Graphic::CMesh::CMeshAnimationContainer *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::createAnimation(name1, length);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->createAnimation(name1, length);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real( void *pObjectXXXX, EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_createAnimation_CAnimation_EVString_Real_NoVirtual(void *pObjectXXXX, _in const char* name, _in Real length )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::createAnimation(name1, length);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getAnimation(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::_getAnimationImpl(name1);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->_getAnimationImpl(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh__getAnimationImpl_CAnimation_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::_getAnimationImpl(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::hasAnimation(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasAnimation(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_hasAnimation_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::hasAnimation(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::removeAnimation(name1);
				else
					ptrNativeObject->removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_removeAnimation_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeAnimation_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::removeAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getNumAnimations();
					return objXXXX;
				}
				else
				{
					ev_uint16 objXXXX = ptrNativeObject->getNumAnimations();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_getNumAnimations_ev_uint16_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getNumAnimations();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getAnimation(index);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->getAnimation(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CAnimation*  _stdcall EarthView_World_Graphic_CMesh_getAnimation_CAnimation_ev_uint16_NoVirtual(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation* objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getAnimation(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeAllAnimations_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::removeAllAnimations();
				else
					ptrNativeObject->removeAllAnimations();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_removeAllAnimations_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_removeAllAnimations_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_removeAllAnimations_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeAllAnimations_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::removeAllAnimations();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_push_back_void_MeshLodUsage(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::MeshLodUsage*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_front_MeshLodUsage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				EarthView::World::Graphic::MeshLodUsage& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::MeshLodUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_back_MeshLodUsage(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				EarthView::World::Graphic::MeshLodUsage& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::MeshLodUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_insert_void_ev_uint32_MeshLodUsage(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::MeshLodUsage*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_OperatorIndex_MeshLodUsage_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList& objYYYY = *(EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjXXXX;
				EarthView::World::Graphic::MeshLodUsage& objXXXX = objYYYY[n];
				EarthView::World::Graphic::MeshLodUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_at_MeshLodUsage_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				EarthView::World::Graphic::MeshLodUsage& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Graphic::MeshLodUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_MeshLodUsageList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::MeshLodUsageList* ptrNativeObject = (EarthView::World::Graphic::CMesh::MeshLodUsageList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_push_void_ev_size_t_VertexBoneAssignment(void *pObjectXXXX, _in ev_uint64 & key, _in EarthView::World::Graphic::VertexBoneAssignment& val )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ptrNativeObject->push((ev_size_t&)key, val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_exist_ev_bool_ev_size_t(void *pObjectXXXX, _in ev_uint64 & key )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_erase_void_ev_size_t(void *pObjectXXXX, _in ev_uint64 & key )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_count_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64 & key )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->count((ev_size_t&)key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::VertexBoneAssignment&  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_get_VertexBoneAssignment_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64 & key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				EarthView::World::Graphic::VertexBoneAssignment& objXXXX = ptrNativeObject->get((ev_size_t&)key, index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_erase_void_ev_size_t_ev_size_t(void *pObjectXXXX, _in ev_uint64 & key, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ptrNativeObject->erase((ev_size_t&)key, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_VertexBoneAssignmentList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList* ptrNativeObject = (EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_push_back_void_CSubMesh(void *pObjectXXXX, _in EarthView::World::Graphic::CSubMesh*& ref_t )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_front_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_back_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_insert_void_ev_uint32_CSubMesh(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CSubMesh*& ref_t )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_OperatorIndex_CSubMesh_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMesh::SubMeshList& objYYYY = *(EarthView::World::Graphic::CMesh::SubMeshList*) pObjXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_at_CSubMesh_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_SubMeshList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshList* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_push_ev_bool_EVString_ev_uint16(void *pObjectXXXX, _in const char* key, _in ev_uint16& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_OperatorIndex_ev_uint16_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMap& objYYYY = *(EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjXXXX;
				ev_uint16& objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16&  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_get_ev_uint16_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ev_uint16& objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_SubMeshNameMap_getKeys_StringVector(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshNameMap* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMap*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshNameMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshNameMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CMesh_SubMeshNameMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshNameMapPair* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshNameMapPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_SubMeshNameMapPair_second( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CMesh::SubMeshNameMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_prepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::prepareImpl();
				else
					ptrNativeObject->prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_prepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_prepareImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_prepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_prepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::prepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_unprepareImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::unprepareImpl();
				else
					ptrNativeObject->unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_unprepareImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_unprepareImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_unprepareImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_unprepareImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::unprepareImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_loadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::loadImpl();
				else
					ptrNativeObject->loadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_loadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_loadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_loadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_loadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::loadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_postLoadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::postLoadImpl();
				else
					ptrNativeObject->postLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_postLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_postLoadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_postLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_postLoadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::postLoadImpl();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_unloadImpl_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CMesh::unloadImpl();
				else
					ptrNativeObject->unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_unloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_unloadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_unloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_unloadImpl_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CMesh::unloadImpl();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_calculateSize_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::calculateSize();
					return objXXXX;
				}
				else
				{
					ev_size_t objXXXX = ptrNativeObject->calculateSize();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_calculateSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_calculateSize_ev_size_t_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::calculateSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CMesh_checkInstanceCapability_InstanceTechniuqe(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::InstanceTechniuqe objXXXX = ptrNativeObject->checkInstanceCapability();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_checkHardwareInstanceCapability_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Graphic::CMesh::checkHardwareInstanceCapability();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_createSubMesh_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->createSubMesh();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_createSubMesh_CSubMesh_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->createSubMesh(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_nameSubMesh_void_EVString_ev_uint16(void *pObjectXXXX, _in const char* name, _in ev_uint16 index )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->nameSubMesh(name1, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_unnameSubMesh_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->unnameSubMesh(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CMesh_calculateGlobalIndex_ev_int32_ev_uint16_ev_uint32(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceIndex )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->calculateGlobalIndex(submeshIndex, instanceIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_calculateInstanceIndex_void_ev_uint32_ev_int16_ev_int32(void *pObjectXXXX, _in ev_uint32 globalIndex, _out ev_int16& submeshIndex, _out ev_int32& instanceIndex )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->calculateInstanceIndex(globalIndex, submeshIndex, instanceIndex);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Graphic_CMesh_getMaxGlobalIndex_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMaxGlobalIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh__getSubMeshIndex_ev_uint16_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->_getSubMeshIndex(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_getNumSubMeshes_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumSubMeshes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_getSubMesh_CSubMesh_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getSubMesh(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_getSubMesh_CSubMesh_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getSubMesh(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_destroySubMesh_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->destroySubMesh(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_destroySubMesh_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->destroySubMesh(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_getCurrent_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_next_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_getBegin_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSubMesh*  _stdcall EarthView_World_Graphic_CMesh_SubMeshIterator_getEnd_CSubMesh(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::SubMeshIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::SubMeshIterator*) pObjectXXXX;
				EarthView::World::Graphic::CSubMesh* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_getSubMeshIterator_SubMeshIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::SubMeshIterator objXXXX = ptrNativeObject->getSubMeshIterator();
				EarthView::World::Graphic::CMesh::SubMeshIterator *pXXXX = new EarthView::World::Graphic::CMesh::SubMeshIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall Get_EarthView_World_Graphic_CMesh_sharedVertexData( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->sharedVertexData;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_sharedVertexData( void *pObjectXXXX, EarthView::World::Graphic::CVertexData*  value )
			{
				((EarthView::World::Graphic::CMesh*)pObjectXXXX)->sharedVertexData = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CMesh_sharedBlendIndexToBoneIndexMap( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::IndexMap &objXXXX = ptrNativeObject->sharedBlendIndexToBoneIndexMap;
				EarthView::World::Graphic::IndexMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CMesh_sharedBlendIndexToBoneIndexMap( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CMesh*)pObjectXXXX)->sharedBlendIndexToBoneIndexMap = *(EarthView::World::Graphic::IndexMap*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_clone_CMeshPtr_EVString_EVString(void *pObjectXXXX, _in const char* newName, _in const char* newGroup )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Core::ev_string newGroup1 = newGroup;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->clone(newName1, newGroup1);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_clone_CMeshPtr_EVString(void *pObjectXXXX, _in const char* newName )
			{
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->clone(newName1);
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getBounds_CAxisAlignedBox(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Spatial::Math::CAxisAlignedBox& objXXXX = ptrNativeObject->getBounds();
				const EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CMesh_getBoundingSphereRadius_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getBoundingSphereRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setBounds_void_CAxisAlignedBox_ev_bool(void *pObjectXXXX, _in const void* bounds, _in ev_bool pad )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setBounds(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds, pad);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setBounds_void_CAxisAlignedBox(void *pObjectXXXX, _in const void* bounds )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setBounds(*(EarthView::World::Spatial::Math::CAxisAlignedBox*)bounds);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setBoundingSphereRadius_void_Real(void *pObjectXXXX, _in Real radius )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setBoundingSphereRadius(radius);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setSkeletonName_void_EVString(void *pObjectXXXX, _in const char* skelName )
			{
				EarthView::World::Core::ev_string skelName1 = skelName;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setSkeletonName(skelName1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_hasSkeleton_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSkeleton();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_hasVertexAnimation_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasVertexAnimation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getSkeleton_CSkeletonPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CSkeletonPtr& objXXXX = ptrNativeObject->getSkeleton();
				const EarthView::World::Graphic::CSkeletonPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CMesh_getSkeletonName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getSkeletonName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__initAnimationState_void_CAnimationStateSet(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_initAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__refreshAnimationState_void_CAnimationStateSet(void *pObjectXXXX, _in EarthView::World::Graphic::CAnimationStateSet* animSet )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_refreshAnimationState(animSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_addBoneAssignment_void_VertexBoneAssignment(void *pObjectXXXX, _in const EarthView::World::Graphic::VertexBoneAssignment& vertBoneAssign )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->addBoneAssignment(vertBoneAssign);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_clearBoneAssignments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->clearBoneAssignments();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__notifySkeleton_void_CSkeletonPtr(void *pObjectXXXX, _inout void* pSkel )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_notifySkeleton(*(EarthView::World::Graphic::CSkeletonPtr*)pSkel);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_getBoneAssignmentIterator_BoneAssignmentIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::BoneAssignmentIterator objXXXX = ptrNativeObject->getBoneAssignmentIterator();
				EarthView::World::Graphic::BoneAssignmentIterator *pXXXX = new EarthView::World::Graphic::BoneAssignmentIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getBoneAssignments_VertexBoneAssignmentList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList& objXXXX = ptrNativeObject->getBoneAssignments();
				const EarthView::World::Graphic::CMesh::VertexBoneAssignmentList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_getNumLodLevels_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumLodLevels();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getLodLevel_MeshLodUsage_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::MeshLodUsage& objXXXX = ptrNativeObject->getLodLevel(index);
				const EarthView::World::Graphic::MeshLodUsage *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_createManualLodLevel_void_Real_EVString_EVString(void *pObjectXXXX, _in Real value, _in const char* meshName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->createManualLodLevel(value, meshName1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_createManualLodLevel_void_Real_EVString(void *pObjectXXXX, _in Real value, _in const char* meshName )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->createManualLodLevel(value, meshName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_updateManualLodLevel_void_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 index, _in const char* meshName )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->updateManualLodLevel(index, meshName1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh_getLodIndex_ev_uint16_Real(void *pObjectXXXX, _in Real value )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getLodIndex(value);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_isLodManual_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLodManual();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setLodInfo_void_ev_uint16_ev_bool(void *pObjectXXXX, _in ev_uint16 numLevels, _in ev_bool isManual )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setLodInfo(numLevels, isManual);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setLodUsage_void_ev_uint16_MeshLodUsage(void *pObjectXXXX, _in ev_uint16 level, _inout void* usage )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setLodUsage(level, *(EarthView::World::Graphic::MeshLodUsage*)usage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__setSubMeshLodFaceList_void_ev_uint16_ev_uint16_CIndexData(void *pObjectXXXX, _in ev_uint16 subIdx, _in ev_uint16 level, _in EarthView::World::Graphic::CIndexData* facedata )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_setSubMeshLodFaceList(subIdx, level, facedata);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeLodLevels_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->removeLodLevels();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setVertexBufferPolicy_void_Usage_ev_bool(void *pObjectXXXX, _in int usage, _in ev_bool shadowBuffer )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setVertexBufferPolicy((EarthView::World::Graphic::CHardwareBuffer::Usage)usage, shadowBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setVertexBufferPolicy_void_Usage(void *pObjectXXXX, _in int usage )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setVertexBufferPolicy((EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setIndexBufferPolicy_void_Usage_ev_bool(void *pObjectXXXX, _in int usage, _in ev_bool shadowBuffer )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setIndexBufferPolicy((EarthView::World::Graphic::CHardwareBuffer::Usage)usage, shadowBuffer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setIndexBufferPolicy_void_Usage(void *pObjectXXXX, _in int usage )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setIndexBufferPolicy((EarthView::World::Graphic::CHardwareBuffer::Usage)usage);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CMesh_getVertexBufferUsage_Usage(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage objXXXX = ptrNativeObject->getVertexBufferUsage();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CMesh_getIndexBufferUsage_Usage(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CHardwareBuffer::Usage objXXXX = ptrNativeObject->getIndexBufferUsage();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_isVertexBufferShadowed_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isVertexBufferShadowed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_isIndexBufferShadowed_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isIndexBufferShadowed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CMesh__rationaliseBoneAssignments_ev_uint16_ev_size_t_VertexBoneAssignmentList(void *pObjectXXXX, _in ev_uint64  vertexCount, _inout void* assignments )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->_rationaliseBoneAssignments(vertexCount, *(EarthView::World::Graphic::CMesh::VertexBoneAssignmentList*)assignments);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__compileBoneAssignments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_compileBoneAssignments();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__updateCompiledBoneAssignments_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_updateCompiledBoneAssignments();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool_ev_bool(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet, _in ev_uint16 index, _in ev_bool splitMirrored, _in ev_bool splitRotated, _in ev_bool storeParityInW )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index, splitMirrored, splitRotated, storeParityInW);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool_ev_bool(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet, _in ev_uint16 index, _in ev_bool splitMirrored, _in ev_bool splitRotated )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index, splitMirrored, splitRotated);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic_ev_uint16_ev_uint16_ev_bool(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet, _in ev_uint16 index, _in ev_bool splitMirrored )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index, splitMirrored);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic_ev_uint16_ev_uint16(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic_ev_uint16(void *pObjectXXXX, _in int targetSemantic, _in ev_uint16 sourceTexCoordSet )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, sourceTexCoordSet);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void_VertexElementSemantic(void *pObjectXXXX, _in int targetSemantic )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors((EarthView::World::Graphic::VertexElementSemantic)targetSemantic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildTangentVectors_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildTangentVectors();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_suggestTangentVectorBuildParams_ev_bool_VertexElementSemantic_ev_uint16_ev_uint16(void *pObjectXXXX, _in int targetSemantic, _inout ev_uint16& outSourceCoordSet, _inout ev_uint16& outIndex )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->suggestTangentVectorBuildParams((EarthView::World::Graphic::VertexElementSemantic)targetSemantic, outSourceCoordSet, outIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_buildEdgeList_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->buildEdgeList();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_freeEdgeList_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->freeEdgeList();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_prepareForShadowVolume_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->prepareForShadowVolume();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CMesh_getEdgeList_CEdgeData_ev_uint16(void *pObjectXXXX, _in ev_uint16 lodIndex )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->getEdgeList(lodIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CEdgeData*  _stdcall EarthView_World_Graphic_CMesh_getEdgeList_CEdgeData(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CEdgeData* objXXXX = ptrNativeObject->getEdgeList();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_isPreparedForShadowVolumes_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isPreparedForShadowVolumes();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_isEdgeListBuilt_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isEdgeListBuilt();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_prepareMatricesForVertexBlend_void_CMatrix4_CMatrix4_IndexMap(_in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in const EarthView::World::Spatial::Math::CMatrix4* boneMatrices, _in const void* indexMap )
			{
				EarthView::World::Graphic::CMesh::prepareMatricesForVertexBlend(blendMatrices, boneMatrices, *(EarthView::World::Graphic::IndexMap*)indexMap);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_softwareVertexBlend_void_CVertexData_CVertexData_CMatrix4_ev_size_t_ev_bool(_in const EarthView::World::Graphic::CVertexData* sourceVertexData, _in const EarthView::World::Graphic::CVertexData* targetVertexData, _in const EarthView::World::Spatial::Math::CMatrix4** blendMatrices, _in ev_uint64  numMatrices, _in ev_bool blendNormals )
			{
				EarthView::World::Graphic::CMesh::softwareVertexBlend(sourceVertexData, targetVertexData, blendMatrices, numMatrices, blendNormals);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_softwareVertexMorph_void_Real_CHardwareVertexBufferSharedPtr_CHardwareVertexBufferSharedPtr_CVertexData(_in Real t, _in const void* b1, _in const void* b2, _in EarthView::World::Graphic::CVertexData* targetVertexData )
			{
				EarthView::World::Graphic::CMesh::softwareVertexMorph(t, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)b1, *(EarthView::World::Graphic::CHardwareVertexBufferSharedPtr*)b2, targetVertexData);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_softwareVertexPoseBlend_void_Real_VertexOffsetMap_NormalsMap_CVertexData(_in Real weight, _in const void* vertexOffsetMap, _in const void* normalsMap, _in EarthView::World::Graphic::CVertexData* targetVertexData )
			{
				EarthView::World::Graphic::CMesh::softwareVertexPoseBlend(weight, *(EarthView::World::Graphic::CPose::VertexOffsetMap*)vertexOffsetMap, *(EarthView::World::Graphic::CPose::NormalsMap*)normalsMap, targetVertexData);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getSubMeshNameMap_SubMeshNameMap(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CMesh::SubMeshNameMap& objXXXX = ptrNativeObject->getSubMeshNameMap();
				const EarthView::World::Graphic::CMesh::SubMeshNameMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setAutoBuildEdgeLists_void_ev_bool(void *pObjectXXXX, _in ev_bool autobuild )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setAutoBuildEdgeLists(autobuild);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_getAutoBuildEdgeLists_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAutoBuildEdgeLists();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				if (dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::VertexAnimationType objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getSharedVertexDataAnimationType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Graphic::VertexAnimationType objXXXX = ptrNativeObject->getSharedVertexDataAnimationType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationType_VertexAnimationType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::VertexAnimationType objXXXX = ptrNativeObject->EarthView::World::Graphic::CMesh::getSharedVertexDataAnimationType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_getSharedVertexDataAnimationIncludesNormals_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSharedVertexDataAnimationIncludesNormals();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CVertexData*  _stdcall EarthView_World_Graphic_CMesh_getVertexDataByTrackHandle_CVertexData_ev_uint16(void *pObjectXXXX, _in ev_uint16 handle )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CVertexData* objXXXX = ptrNativeObject->getVertexDataByTrackHandle(handle);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_updateMaterialForAllSubMeshes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->updateMaterialForAllSubMeshes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh__determineAnimationTypes_void(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->_determineAnimationTypes();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh__getAnimationTypesDirty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_getAnimationTypesDirty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_createPose_CPose_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 target, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->createPose(target, name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_createPose_CPose_ev_uint16(void *pObjectXXXX, _in ev_uint16 target )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->createPose(target);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CMesh_getPoseCount_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getPoseCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_getPose_CPose_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getPose(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_getPose_CPose_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getPose(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removePose_void_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->removePose(index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removePose_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->removePose(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_removeAllPoses_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->removeAllPoses();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_getCurrent_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_next_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_getBegin_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_ConstPoseIterator_getEnd_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::ConstPoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::ConstPoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_getCurrent_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_next_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_getBegin_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPose*  _stdcall EarthView_World_Graphic_CMesh_PoseIterator_getEnd_CPose(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh::PoseIterator* ptrNativeObject = (EarthView::World::Graphic::CMesh::PoseIterator*) pObjectXXXX;
				EarthView::World::Graphic::CPose* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CMesh_getPoseIterator_PoseIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				EarthView::World::Graphic::CMesh::PoseIterator objXXXX = ptrNativeObject->getPoseIterator();
				EarthView::World::Graphic::CMesh::PoseIterator *pXXXX = new EarthView::World::Graphic::CMesh::PoseIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CMesh_getPoseList_PoseList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::PoseList& objXXXX = ptrNativeObject->getPoseList();
				const EarthView::World::Graphic::PoseList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CLodStrategy*  _stdcall EarthView_World_Graphic_CMesh_getLodStrategy_CLodStrategy(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				const EarthView::World::Graphic::CLodStrategy* objXXXX = ptrNativeObject->getLodStrategy();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_setLodStrategy_void_CLodStrategy(void *pObjectXXXX, _in EarthView::World::Graphic::CLodStrategy* lodStrategy )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->setLodStrategy(lodStrategy);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CMesh_loadFromDataStream_void_DataStreamPtr(void *pObjectXXXX, _in void* stream )
			{
				EarthView::World::Graphic::CMesh* ptrNativeObject = (EarthView::World::Graphic::CMesh*) pObjectXXXX;
				ptrNativeObject->loadFromDataStream(*(EarthView::World::Core::DataStreamPtr*)stream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_preLoadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_preLoadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_preLoadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_preUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_preUnloadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_preUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_postUnloadImpl_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_postUnloadImpl_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_postUnloadImpl_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_prepare_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_prepare_void_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_prepare_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_prepare_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_prepare_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_prepare_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_load_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_load_void_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_load_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_load_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_load_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_load_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_reload_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_reload_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_reload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isReloadable_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isReloadable_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isReloadable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isManuallyLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_unload_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_unload_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_unload_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getSize_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getSize_ev_size_t_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getSize_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_touch_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_touch_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_touch_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getName_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getName_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getHandle_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getHandle_ev_uint64_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getHandle_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isPrepared_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isPrepared_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isPrepared_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isLoaded_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isLoading_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isLoading_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isLoading_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getLoadingState_LoadingState_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getLoadingState_LoadingState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_isBackgroundLoaded_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_setBackgroundLoaded_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_escalateLoading_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh_escalateLoading_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_escalateLoading_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CMesh_addListener_void_CResourceListener_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_addListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener( void *pObjectXXXX, EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_removeListener_void_CResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getGroup_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getGroup_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getGroup_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_changeGroupOwnership_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getCreator_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getCreator_CResourceManager_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getCreator_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getOrigin_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getOrigin_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getOrigin_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__notifyOrigin_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getStateCount_ev_size_t_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getStateCount_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__dirtyState_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh__dirtyState_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__dirtyState_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__fireLoadingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__firePreparingComplete_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void( void *pObjectXXXX, EarthView_World_Graphic_CMesh__fireUnloadingComplete_void_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh__fireUnloadingComplete_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_setParameterList_void_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CMesh_getParameter_EVString_EVString_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_getParameter_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface_Callback* pCallback )
			{
				CMeshProxy* ptr = dynamic_cast<CMeshProxy*>((EarthView::World::Graphic::CMesh*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CMesh_copyParametersTo_void_CStringInterface(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_VertexBoneAssignmentPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair* ptrNativeObject = (EarthView::World::Graphic::VertexBoneAssignmentPair*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_VertexBoneAssignmentPair_first( void *pObjectXXXX, ev_uint64   value )
			{
				((EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::VertexBoneAssignment  _stdcall Get_EarthView_World_Graphic_VertexBoneAssignmentPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::VertexBoneAssignmentPair* ptrNativeObject = (EarthView::World::Graphic::VertexBoneAssignmentPair*) pObjectXXXX;
				EarthView::World::Graphic::VertexBoneAssignment objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_VertexBoneAssignmentPair_second( void *pObjectXXXX, EarthView::World::Graphic::VertexBoneAssignment  value )
			{
				((EarthView::World::Graphic::VertexBoneAssignmentPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::VertexBoneAssignment  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_nextValue_VertexBoneAssignment(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				EarthView::World::Graphic::VertexBoneAssignment objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::VertexBoneAssignment*  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_nextValuePtr_VertexBoneAssignment(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				EarthView::World::Graphic::VertexBoneAssignment* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::VertexBoneAssignment  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_next_VertexBoneAssignment(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				EarthView::World::Graphic::VertexBoneAssignment objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_getBegin_VertexBoneAssignmentPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::VertexBoneAssignmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_getEnd_VertexBoneAssignmentPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::VertexBoneAssignmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_BoneAssignmentIterator_getCurrent_VertexBoneAssignmentPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::BoneAssignmentIterator* ptrNativeObject = (EarthView::World::Graphic::BoneAssignmentIterator*) pObjectXXXX;
				const EarthView::World::Graphic::VertexBoneAssignmentPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::VertexBoneAssignmentPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
