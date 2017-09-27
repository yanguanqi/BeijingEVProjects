/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/usertypemanager.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_setNodeCode_void_EVString(void *pObjectXXXX, _in char* nodeCode )
				{
					EarthView::World::Core::ev_string nodeCode1 = nodeCode;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setNodeCode(nodeCode1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_getNodeCode_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getNodeCode();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_setUserType_void_EVString(void *pObjectXXXX, _in char* userType )
				{
					EarthView::World::Core::ev_string userType1 = userType;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setUserType(userType1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_getUserType_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getUserType();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_setDescript_void_EVString(void *pObjectXXXX, _in char* desc )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					ptrNativeObject->setDescript(desc1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfo_getDescript_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getDescript();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_setParent_void_CUserTypeTree(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CUserTypeTree* ref_parent )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					ptrNativeObject->setParent(ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeTree*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_getParent_CUserTypeTree(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* objXXXX = ptrNativeObject->getParent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeTree*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_addChild_CUserTypeTree(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* objXXXX = ptrNativeObject->addChild();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_getChildNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getChildNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeTree*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_getChild_CUserTypeTree_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* objXXXX = ptrNativeObject->getChild(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_getInfo_CUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo* objXXXX = ptrNativeObject->getInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeTree_deleteChild_ev_bool_CUserTypeTree(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CUserTypeTree* Child )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeTree*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteChild(Child);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_push_back_void_CUserTypeInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_front_CUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_back_CUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_insert_void_ev_uint32_CUserTypeInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_OperatorIndex_CUserTypeInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList& objYYYY = *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_at_CUserTypeInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeInfoList_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeInfoList* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_push_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* key, _in char* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Core::ev_string val1 = val;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_OperatorAssign_NodecodeAndTypeMap_NodecodeAndTypeMap(void *pObjXXXX, _in const void* other )
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& objXXXX = *((EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*)other;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_OperatorIndex_EVString_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap& objYYYY = *(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjXXXX;
					EVString& objXXXX = objYYYY[key];
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_get_EVString_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					EVString& objXXXX = ptrNativeObject->get(key1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_NodecodeAndTypeMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_createType_CUserTypeInfo_EVString_EVString_IFields(void *pObjectXXXX, _in const char* parentNodeCode, _in const char* newType, _in EarthView::World::Spatial::GeoDataset::IFields* pFlds )
				{
					EarthView::World::Core::ev_string parentNodeCode1 = parentNodeCode;
					EarthView::World::Core::ev_string newType1 = newType;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->createType(parentNodeCode1, newType1, pFlds);
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_deleteType_ev_bool_EVString(void *pObjectXXXX, _in const char* nodeCode )
				{
					EarthView::World::Core::ev_string nodeCode1 = nodeCode;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteType(nodeCode1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_queryByNodeCode_ev_bool_EVString_CUserTypeInfo(void *pObjectXXXX, _in const char* nodeCode, _out void* info )
				{
					EarthView::World::Core::ev_string nodeCode1 = nodeCode;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->queryByNodeCode(nodeCode1, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_queryByNodeDesc_ev_bool_EVString_CUserTypeInfo(void *pObjectXXXX, _in const char* desc, _out void* info )
				{
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->queryByNodeDesc(desc1, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_queryByType_ev_bool_EVString_CUserTypeInfoList(void *pObjectXXXX, _in const char* type, _out void* infos )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->queryByType(type1, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*)infos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getRootType_CUserTypeInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->getRootType();
					EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getChildType_void_EVString_CUserTypeInfoList(void *pObjectXXXX, _in const char* nodeCode, _inout void* typeInfoList )
				{
					EarthView::World::Core::ev_string nodeCode1 = nodeCode;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ptrNativeObject->getChildType(nodeCode1, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*)typeInfoList);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_updateTypeDesc_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* nodeCode, _in const char* desc )
				{
					EarthView::World::Core::ev_string nodeCode1 = nodeCode;
					EarthView::World::Core::ev_string desc1 = desc;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateTypeDesc(nodeCode1, desc1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getTypeFilds_ev_bool_EVString_CFields(void *pObjectXXXX, _in const char* nodecode, _out EarthView::World::Spatial::GeoDataset::CFields* flds )
				{
					EarthView::World::Core::ev_string nodecode1 = nodecode;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTypeFilds(nodecode1, flds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_isExistType_ev_bool_EVString(void *pObjectXXXX, _in const char* type )
				{
					EarthView::World::Core::ev_string type1 = type;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExistType(type1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_updateType_ev_bool_EVString_CFields(void *pObjectXXXX, _in const char* typeName, _in EarthView::World::Spatial::GeoDataset::CFields* flds )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateType(typeName1, flds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_deleteTypeField_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* typeName, _in ev_int32 meshID )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteTypeField(typeName1, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_addTypeField_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* typeName, _in ev_int32 meshID )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addTypeField(typeName1, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getTypeTableName_ev_int32_StringVector(void *pObjectXXXX, _inout void* tables )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getTypeTableName(*(EarthView::World::Core::StringVector*)tables);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getTableFields_ev_int32_EVString_IFields(void *pObjectXXXX, _in const char* tab, _out EarthView::World::Spatial::GeoDataset::IFields* flds )
				{
					EarthView::World::Core::ev_string tab1 = tab;
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getTableFields(tab1, flds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CUserTypeManager_getNodeCodeAndTypeMap_ev_int32_NodecodeAndTypeMap(void *pObjectXXXX, _inout void* nodecodeandtypemap )
				{
					EarthView::World::Spatial3D::Dataset::CUserTypeManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CUserTypeManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getNodeCodeAndTypeMap(*(EarthView::World::Spatial3D::Dataset::NodecodeAndTypeMap*)nodecodeandtypemap);
					return objXXXX;
				}
			}
		}
	}
}
