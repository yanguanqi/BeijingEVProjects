/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/mesheffectref.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setAliasName_void_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setAliasName(aliasName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getAliasName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setInfoID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 infoID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setInfoID(infoID);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getInfoID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getInfoID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setMeshID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setMeshID(meshID);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getMeshID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMeshID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setEffectID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 effectID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setEffectID(effectID);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getEffectID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEffectID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setType_void_EVMeshAttachMentType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getType_EVMeshAttachMentType(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EVMeshAttachMentType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setBoneName_void_EVString(void *pObjectXXXX, _in char* boneName )
				{
					EarthView::World::Core::ev_string boneName1 = boneName;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setBoneName(boneName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getBoneName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getBoneName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getOffSetPosition_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getOffSetPosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setOffSetPosition_void_CVector3(void *pObjectXXXX, _in void* offSetPosition )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setOffSetPosition(*(EarthView::World::Spatial::Math::CVector3*)offSetPosition);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getRotate_CQuaternion(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getRotate();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setRotate_void_CQuaternion(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setRotate(*(EarthView::World::Spatial::Math::CQuaternion*)val);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_getScale_CVector3(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfo_setScale_void_CVector3(void *pObjectXXXX, _in void* scale )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*) pObjectXXXX;
					ptrNativeObject->setScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_push_back_void_CMeshEffectRefInfo(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_front_CMeshEffectRefInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_back_CMeshEffectRefInfo(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_insert_void_ev_uint32_CMeshEffectRefInfo(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_OperatorIndex_CMeshEffectRefInfo_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector& objYYYY = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& objXXXX = objYYYY[n];
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_at_CMeshEffectRefInfo_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo& objXXXX = ptrNativeObject->at(n);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefInfoVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getMeshEffectRefInfos_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getBindModelMeshEffectRefInfos_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindModelMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getBindEffectMeshEffectRefInfos_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindEffectMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getBindLightMeshEffectRefInfos_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindLightMeshEffectRefInfos(meshID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getMeshEffectRefInfo_CMeshEffectRefInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 evID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo objXXXX = ptrNativeObject->getMeshEffectRefInfo(evID);
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_insertMeshEffectRefInfo_ev_uint32_CMeshEffectRefInfo(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* info )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->insertMeshEffectRefInfo(info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteMeshEffectRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteMeshEffectRef(meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteBindModelMeshEffectRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteBindModelMeshEffectRef(meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteBindLightMeshEffectRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteBindLightMeshEffectRef(meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteBindEffectMeshEffectRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteBindEffectMeshEffectRef(meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteBindMeshRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 BindID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteBindMeshRef(BindID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_deleteRef_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 evID )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteRef(evID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_clearTable_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_updateMeshEffectRefPosition_ev_bool_ev_uint32_CVector3_CQuaternion_CVector3(void *pObjectXXXX, _in ev_uint32 evId, _in void* offSetPosition, _in void* rotate, _in void* scale )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMeshEffectRefPosition(evId, *(EarthView::World::Spatial::Math::CVector3*)offSetPosition, *(EarthView::World::Spatial::Math::CQuaternion*)rotate, *(EarthView::World::Spatial::Math::CVector3*)scale);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_checkAliasName_ev_uint32_EVString_ev_uint32(void *pObjectXXXX, _in const char* aliasName, _in ev_uint32 modelId )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->checkAliasName(aliasName1, modelId);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_updateMeshEffectRefAliasName_ev_bool_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 evId, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMeshEffectRefAliasName(evId, aliasName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_updateMeshLightRefProperty_ev_bool_ev_uint32_EVString(void *pObjectXXXX, _in ev_uint32 evId, _in const char* propertyStr )
				{
					EarthView::World::Core::ev_string propertyStr1 = propertyStr;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateMeshLightRefProperty(evId, propertyStr1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_checkMeshEffectRefTable_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ptrNativeObject->checkMeshEffectRefTable();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_getMaxMeshEffectRefID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMaxMeshEffectRefID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshEffectRefManager_initMeshInsPos_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshEffectRefManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->initMeshInsPos();
					return objXXXX;
				}
			}
		}
	}
}
