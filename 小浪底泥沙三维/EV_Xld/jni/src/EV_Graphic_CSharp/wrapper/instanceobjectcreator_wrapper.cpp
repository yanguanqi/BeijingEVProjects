/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/instanceobjectcreator.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CInstanceObject_getNumInstanceEntities_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getNumInstanceEntities();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstancedEntity*  _stdcall EarthView_World_Graphic_CInstanceObject_getInstancedEntity_CInstancedEntity_ev_uint16(void *pObjectXXXX, _in ev_uint16 index )
			{
				const EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				EarthView::World::Graphic::CInstancedEntity* objXXXX = ptrNativeObject->getInstancedEntity(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObject_attachToNode_ev_bool_CNode(void *pObjectXXXX, _in EarthView::World::Graphic::CNode* ref_node )
			{
				EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->attachToNode(ref_node);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CInstanceObject_detachFromNode_CNode(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->detachFromNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall EarthView_World_Graphic_CInstanceObject_getParentNode_CNode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->getParentNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObjectCreator*  _stdcall EarthView_World_Graphic_CInstanceObject_getCreator_CInstanceObjectCreator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceObjectCreator* objXXXX = ptrNativeObject->getCreator();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceObject_setSelected_void_ev_bool(void *pObjectXXXX, _in ev_bool selected )
			{
				EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				ptrNativeObject->setSelected(selected);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObject_getSelected_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObject* ptrNativeObject = (EarthView::World::Graphic::CInstanceObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObjectMap_push_ev_bool_EVString_CInstanceObject(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CInstanceObject*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				const EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObject*  _stdcall EarthView_World_Graphic_CInstanceObjectMap_OperatorIndex_CInstanceObject_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CInstanceObjectMap& objYYYY = *(EarthView::World::Graphic::CInstanceObjectMap*) pObjXXXX;
				EarthView::World::Graphic::CInstanceObject* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObject*  _stdcall EarthView_World_Graphic_CInstanceObjectMap_get_CInstanceObject_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceObject* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CInstanceObjectMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceObjectMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObjectMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObjectMap* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceObject*  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_createInstance_CInstanceObject(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceObject* objXXXX = ptrNativeObject->createInstance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_destroyInstance_ev_bool_CInstanceObject(void *pObjectXXXX, _in EarthView::World::Graphic::CInstanceObject* obj )
			{
				EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->destroyInstance(obj);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_destroyAllInstances_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				ptrNativeObject->destroyAllInstances();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_getNumInstanceObjects_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumInstanceObjects();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_getNumInstanceBatches_ev_uint32_ev_uint16(void *pObjectXXXX, _in ev_uint16 submeshIndex )
			{
				const EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNumInstanceBatches(submeshIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CInstanceBatch*  _stdcall EarthView_World_Graphic_CInstanceObjectCreator_getInstanceBatch_CInstanceBatch_ev_uint16_ev_uint32(void *pObjectXXXX, _in ev_uint16 submeshIndex, _in ev_uint32 instanceBatchIndex )
			{
				const EarthView::World::Graphic::CInstanceObjectCreator* ptrNativeObject = (EarthView::World::Graphic::CInstanceObjectCreator*) pObjectXXXX;
				EarthView::World::Graphic::CInstanceBatch* objXXXX = ptrNativeObject->getInstanceBatch(submeshIndex, instanceBatchIndex);
				return objXXXX;
			}
		}
	}
}
