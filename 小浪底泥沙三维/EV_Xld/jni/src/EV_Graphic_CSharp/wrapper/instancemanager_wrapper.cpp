/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instancemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_push_back_void_CInstanceBatch(void *pObjectXXXX, _in EarthView::World::Graphic::CInstanceBatch*& ref_t )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_front_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_back_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_insert_void_ev_uint32_CInstanceBatch(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CInstanceBatch*& ref_t )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_OperatorIndex_CInstanceBatch_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& objYYYY = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_at_CInstanceBatch_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchVec_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_push_ev_bool_EVString_InstanceBatchVec(void *pObjectXXXX, _in const char* key, _in const void* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*)val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_OperatorIndex_InstanceBatchVec_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap& objYYYY = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& objXXXX = objYYYY[key];
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_get_InstanceBatchVec_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec& objXXXX = ptrNativeObject->get(key1);
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CInstanceManager_InstanceBatchPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstanceManager_InstanceBatchPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CInstanceManager_InstanceBatchPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchPair* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec &objXXXX = ptrNativeObject->second;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CInstanceManager_InstanceBatchPair_second( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CInstanceManager::InstanceBatchPair*)pObjectXXXX)->second = *(EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_nextKey_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->nextKey();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_nextValue_InstanceBatchVec(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec objXXXX = ptrNativeObject->nextValue();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pXXXX = new EarthView::World::Graphic::CInstanceManager::InstanceBatchVec(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceManager::InstanceBatchVec*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_nextValuePtr_InstanceBatchVec(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec* objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_next_InstanceBatchVec(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec objXXXX = ptrNativeObject->next();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchVec *pXXXX = new EarthView::World::Graphic::CInstanceManager::InstanceBatchVec(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_getBegin_InstanceBatchPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_getEnd_InstanceBatchPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchMapIterator_getCurrent_InstanceBatchPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_getCurrent_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_next_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_getBegin_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceManager_InstanceBatchIterator_getEnd_CInstanceBatch(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CInstanceManager_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_getMeshPtr_CMeshPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CMeshPtr objXXXX = ptrNativeObject->getMeshPtr();
				EarthView::World::Graphic::CMeshPtr *pXXXX = new EarthView::World::Graphic::CMeshPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_detachAllInstanceBatch_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->detachAllInstanceBatch();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setInstancesPerBatch_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  instancesPerBatch )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setInstancesPerBatch(instancesPerBatch);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceManager_getInstancesPerBatch_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getInstancesPerBatch();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_isInternalInstance_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInternalInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setInternalInstance_void_ev_bool(void *pObjectXXXX, _in ev_bool bInternalInstance )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setInternalInstance(bInternalInstance);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setMaxLookupTableInstances_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  maxLookupTableInstances )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setMaxLookupTableInstances(maxLookupTableInstances);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceManager_getMaxOrBestNumInstancesPerBatch_ev_size_t_EVString_ev_size_t_ev_uint16(void *pObjectXXXX, _in char* materialName, _in ev_uint64  suggestedSize, _in ev_uint16 flags )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getMaxOrBestNumInstancesPerBatch(materialName1, suggestedSize, flags);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceManager_createInstancedEntity_CInstancedEntity_EVString(void *pObjectXXXX, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->createInstancedEntity(materialName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceManager_createInstancedEntity_CInstancedEntity_EVString_ev_bool(void *pObjectXXXX, _in const char* materialName, _in ev_bool bInUse )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->createInstancedEntity(materialName1, bInUse);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_cleanupEmptyBatches_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->cleanupEmptyBatches();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setSetting_void_BatchSettingId_ev_bool_EVString(void *pObjectXXXX, _in int id, _in ev_bool value, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setSetting((EarthView::World::Graphic::CInstanceManager::BatchSettingId)id, value, materialName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setSetting_void_BatchSettingId_ev_bool(void *pObjectXXXX, _in int id, _in ev_bool value )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setSetting((EarthView::World::Graphic::CInstanceManager::BatchSettingId)id, value);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_getSetting_ev_bool_BatchSettingId_EVString(void *pObjectXXXX, _in int id, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSetting((EarthView::World::Graphic::CInstanceManager::BatchSettingId)id, materialName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_hasSettings_ev_bool_EVString(void *pObjectXXXX, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSettings(materialName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setBatchesAsStaticAndUpdate_void_ev_bool(void *pObjectXXXX, _in ev_bool bStatic )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setBatchesAsStaticAndUpdate(bStatic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager__addDirtyBatch_void_CInstanceBatch(void *pObjectXXXX, _in EarthView::World::Graphic::CInstanceBatch* ref_dirtyBatch )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->_addDirtyBatch(ref_dirtyBatch);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager__updateDirtyBatches_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->_updateDirtyBatches();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstanceManager_getSubMeshIdx_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getSubMeshIdx();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CInstanceManager_getSceneManager_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_getInstanceBatchMapIterator_InstanceBatchMapIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator objXXXX = ptrNativeObject->getInstanceBatchMapIterator();
				EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator *pXXXX = new EarthView::World::Graphic::CInstanceManager::InstanceBatchMapIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CInstanceManager_getInstanceBatchIterator_InstanceBatchIterator_EVString(void *pObjectXXXX, _in const char* materialName )
			{
				EarthView::World::Core::ev_string materialName1 = materialName;
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator objXXXX = ptrNativeObject->getInstanceBatchIterator(materialName1);
				EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator *pXXXX = new EarthView::World::Graphic::CInstanceManager::InstanceBatchIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceManager_isAsyncUpdatingBuffer_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAsyncUpdatingBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceManager_setAsyncUpdateBuffer_void_ev_bool(void *pObjectXXXX, _in ev_bool async )
			{
				EarthView::World::Graphic::CInstanceManager* ptrNativeObject = (EarthView::World::Graphic::CInstanceManager*) pObjectXXXX;
				ptrNativeObject->setAsyncUpdateBuffer(async);
			}
		}
	}
}
