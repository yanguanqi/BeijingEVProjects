/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/propertymanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_push_back_void_ev_uint32(void *pObjectXXXX, _in ev_uint32& t )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_front_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ev_uint32& objXXXX = ptrNativeObject->front();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_back_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ev_uint32& objXXXX = ptrNativeObject->back();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_insert_void_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos, _in ev_uint32& t )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->insert(pos, t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_OperatorIndex_ev_uint32_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList& objYYYY = *(EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjXXXX;
					ev_uint32& objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32&  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_at_ev_uint32_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ev_uint32& objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CObjectIDList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CObjectIDList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CObjectIDList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_createType_ev_bool_EVString_ModelPropertyType_IFields(void *pObjectXXXX, _in const char* typeName, _in int type, _in EarthView::World::Spatial::GeoDataset::IFields* ptFieldset )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createType(typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type, ptFieldset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_updateType_ev_bool_EVString_ModelPropertyType_IFields(void *pObjectXXXX, _in char* typeName, _in int type, _in EarthView::World::Spatial::GeoDataset::IFields* ptFieldset )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateType(typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type, ptFieldset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_deleteType_ev_bool_EVString_ModelPropertyType(void *pObjectXXXX, _in char* typeName, _in int type )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteType(typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_renameType_ev_bool_EVString_EVString_ModelPropertyType(void *pObjectXXXX, _inout char*& oldtypename, _inout char*& newtypename, _in int type )
				{
					EarthView::World::Core::ev_string oldtypename1 = oldtypename;
					EarthView::World::Core::ev_string newtypename1 = newtypename;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->renameType(oldtypename1, newtypename1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type);
					oldtypename=oldtypename1.makeBuffer();newtypename=newtypename1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_moveModelToType_ev_bool_ev_int32_EVString_ModelPropertyType(void *pObjectXXXX, _in ev_int32 id, _in char* typeName, _in int type )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->moveModelToType(id, typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_deleteModelID_ev_bool_ev_int32_EVString_ModelPropertyType(void *pObjectXXXX, _in ev_int32 id, _in char* typeName, _in int type )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteModelID(id, typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_getTypeList_void_ModelPropertyType_StringVector(void *pObjectXXXX, _in int type, _inout void* typeNames )
				{
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ptrNativeObject->getTypeList((EarthView::World::Spatial3D::Dataset::ModelPropertyType)type, *(EarthView::World::Core::StringVector*)typeNames);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_getFieldSet_IFields_EVString_ModelPropertyType(void *pObjectXXXX, _in char* typeName, _in int type )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldSet(typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_addObjectID_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in char* typeName, _in ev_int32 id )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addObjectID(typeName1, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_deleteObjectID_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in char* typeName, _in ev_int32 id )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteObjectID(typeName1, id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CPropertyManager_getObjectsByType_void_EVString_ModelPropertyType_CObjectIDList(void *pObjectXXXX, _in char* typeName, _in int type, _inout void* objectIDs )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CPropertyManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CPropertyManager*) pObjectXXXX;
					ptrNativeObject->getObjectsByType(typeName1, (EarthView::World::Spatial3D::Dataset::ModelPropertyType)type, *(EarthView::World::Spatial3D::Dataset::CObjectIDList*)objectIDs);
				}
			}
		}
	}
}
