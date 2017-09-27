/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/modeleffectdbmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall Get_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow( void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->mpRenderWindow;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3DProxy_CModelEffectDBManager_mpRenderWindow( void *pObjectXXXX, EarthView::World::Graphic::CRenderWindow*  value )
			{
				((EarthView::World::Spatial3DProxy::CModelEffectDBManager*)pObjectXXXX)->mpRenderWindow = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_setModelDataSource_void_CModelDataSource(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pDatasource )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->setModelDataSource(ref_pDatasource);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* src, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in ev_bool bClear, _in ev_bool bCoverOrInstead )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->import(src, dest, listener, bClear, bCoverOrInstead);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_ev_bool_ev_bool_ModelIdAndNameMap(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* src, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in ev_bool bClear, _in ev_bool bCoverOrInstead, _inout void* idAndNameMap )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->import(src, dest, listener, bClear, bCoverOrInstead, *(EarthView::World::Spatial3D::ModelIdAndNameMap*)idAndNameMap);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* src, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in void* modelIDVec, _in const void* typeCodesVec, _in const void* effectInfoVec, _in ev_bool bClear, _in ev_bool bCoverOrInstead )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->import(src, dest, listener, *(EarthView::World::Core::IntVector*)modelIDVec, *(EarthView::World::Core::StringVector*)typeCodesVec, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)effectInfoVec, bClear, bCoverOrInstead);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_import_ev_bool_CModelDataSource_CModelDataSource_CModelPublishToolListener_IntVector_StringVector_CEffectInfoVector_ev_bool_ev_bool_ModelIdAndNameMap(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* src, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* dest, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in void* modelIDVec, _in const void* typeCodesVec, _in const void* effectInfoVec, _in ev_bool bClear, _in ev_bool bCoverOrInstead, _inout void* idAndNameMap )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->import(src, dest, listener, *(EarthView::World::Core::IntVector*)modelIDVec, *(EarthView::World::Core::StringVector*)typeCodesVec, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)effectInfoVec, bClear, bCoverOrInstead, *(EarthView::World::Spatial3D::ModelIdAndNameMap*)idAndNameMap);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool(void *pObjectXXXX, _in const char* dataFolder, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource, _in EarthView::World::Graphic::CSceneManager* mgr, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in ev_bool bClear, _in ev_bool bCoverOrInstead, _in ev_bool bCompositorSubmesh, _in const char* userTypeNodecode, _in ev_bool isLeftHand )
			{
				EarthView::World::Core::ev_string dataFolder1 = dataFolder;
				EarthView::World::Core::ev_string userTypeNodecode1 = userTypeNodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->importModelDBFromLocalFiles(dataFolder1, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode1, isLeftHand);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* dataFolder, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource, _in EarthView::World::Graphic::CSceneManager* mgr, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in ev_bool bClear, _in ev_bool bCoverOrInstead, _in ev_bool bCompositorSubmesh, _in const char* userTypeNodecode, _in ev_bool isLeftHand, _in ev_bool doubleSideLight )
			{
				EarthView::World::Core::ev_string dataFolder1 = dataFolder;
				EarthView::World::Core::ev_string userTypeNodecode1 = userTypeNodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->importModelDBFromLocalFiles(dataFolder1, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode1, isLeftHand, doubleSideLight);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_importModelDBFromLocalFiles_ev_bool_EVString_CModelDataSource_CSceneManager_CModelPublishToolListener_ev_bool_ev_bool_ev_bool_EVString_ev_bool_ModelIdAndNameMap(void *pObjectXXXX, _in const char* dataFolder, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* pModelDBDataSource, _in EarthView::World::Graphic::CSceneManager* mgr, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener, _in ev_bool bClear, _in ev_bool bCoverOrInstead, _in ev_bool bCompositorSubmesh, _in const char* userTypeNodecode, _in ev_bool isLeftHand, _inout void* idAndNameMap )
			{
				EarthView::World::Core::ev_string dataFolder1 = dataFolder;
				EarthView::World::Core::ev_string userTypeNodecode1 = userTypeNodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->importModelDBFromLocalFiles(dataFolder1, pModelDBDataSource, mgr, listener, bClear, bCoverOrInstead, bCompositorSubmesh, userTypeNodecode1, isLeftHand, *(EarthView::World::Spatial3D::ModelIdAndNameMap*)idAndNameMap);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearModelTemplDataSource_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->clearModelTemplDataSource();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopImport_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->stopImport();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_stopModelFileImport_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->stopModelFileImport();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelFileImport_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->destroyModelFileImport();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getRootUserType_CUserTypeInfo(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->getRootUserType();
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectRootUserType_ev_bool_CEffectUserTypeInfo(void *pObjectXXXX, _out void* rootUserTypeInfo )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEffectRootUserType(*(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo*)rootUserTypeInfo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getChildUserType_ev_bool_EVString_CUserTypeInfoList(void *pObjectXXXX, _in const char* nodeCode, _out void* typeList )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getChildUserType(nodeCode1, *(EarthView::World::Spatial3D::Dataset::CUserTypeInfoList*)typeList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectInfos_ev_bool_CEffectInfoVector(void *pObjectXXXX, _out void* vec )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEffectInfos(*(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectChildUserType_ev_bool_EVString_CEffectUserTypeInfoVector(void *pObjectXXXX, _in const char* nodeCode, _out void* typeList )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEffectChildUserType(nodeCode1, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfoVector*)typeList);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_createUserType_CUserTypeInfo_EVString_EVString_IFields(void *pObjectXXXX, _in const char* parentnodeCode, _in const char* nwType, _in EarthView::World::Spatial::GeoDataset::IFields* pFilds )
			{
				EarthView::World::Core::ev_string parentnodeCode1 = parentnodeCode;
				EarthView::World::Core::ev_string nwType1 = nwType;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->createUserType(parentnodeCode1, nwType1, pFilds);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteUserType_ev_bool_EVString(void *pObjectXXXX, _in const char* nodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteUserType(nodeCode1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_clearUserType_ev_bool_EVString(void *pObjectXXXX, _in const char* nodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->clearUserType(nodeCode1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteMesh_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 MeshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteMesh(MeshID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_findUserType_CUserTypeInfo_EVString(void *pObjectXXXX, _in const char* nodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->findUserType(nodeCode1);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_changeType_ev_bool_EVString_ev_uint32_EVString(void *pObjectXXXX, _in const char* nodeCode, _in ev_uint32 id, _in const char* nwNodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Core::ev_string nwNodeCode1 = nwNodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->changeType(nodeCode1, id, nwNodeCode1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExist_ev_bool_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isExist(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getMeshName(meshID);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshTemplateName_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getMeshTemplateName(meshID);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameType_ev_bool_EVString_EVString(void *pObjectXXXX, _inout char*& nodecode, _inout char*& nwTypename )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Core::ev_string nwTypename1 = nwTypename;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renameType(nodecode1, nwTypename1);
				nodecode=nodecode1.makeBuffer();nwTypename=nwTypename1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameMeshName_ev_bool_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 meshID, _inout char*& nwMeshname )
			{
				EarthView::World::Core::ev_string nwMeshname1 = nwMeshname;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renameMeshName(meshID, nwMeshname1);
				nwMeshname=nwMeshname1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_renameAttachComponent_ev_bool_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 evid, _in ev_int32 mainModelId, _in const char* nwComponentName )
			{
				EarthView::World::Core::ev_string nwComponentName1 = nwComponentName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renameAttachComponent(evid, mainModelId, nwComponentName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDs_IntVector_EVString(void *pObjectXXXX, _in const char* nodecode )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getObjectIDs(nodecode1);
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getObjectIDAndNames_void_EVString_ModelIdAndNameMap(void *pObjectXXXX, _in const char* nodecode, _out void* idAndNameMap )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->getObjectIDAndNames(nodecode1, *(EarthView::World::Spatial3D::ModelIdAndNameMap*)idAndNameMap);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_IntVector_EVString(void *pObjectXXXX, _in const char* nodecode )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getEffectObjectIDs(nodecode1);
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getEffectObjectIDs_void_EVString_CEffectInfoVector(void *pObjectXXXX, _in const char* nodecode, _out void* vec )
			{
				EarthView::World::Core::ev_string nodecode1 = nodecode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->getEffectObjectIDs(nodecode1, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)vec);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshID_ev_int32_EVString(void *pObjectXXXX, _in const char* meshName )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMeshID(meshName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeDesc_CUserTypeInfo_EVString(void *pObjectXXXX, _in const char* desc )
			{
				EarthView::World::Core::ev_string desc1 = desc;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->getModelUserTypeByNodeDesc(desc1);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelUserTypeByNodeCode_CUserTypeInfo_EVString(void *pObjectXXXX, _in const char* nodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo objXXXX = ptrNativeObject->getModelUserTypeByNodeCode(nodeCode1);
				EarthView::World::Spatial3D::Dataset::CUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CUserTypeInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTypeFields_ev_bool_EVString_CFields(void *pObjectXXXX, _in const char* nodeCode, _out EarthView::World::Spatial::GeoDataset::CFields* flds )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAttrTypeFields(nodeCode1, flds);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getMeshAttr_CPropertySet_EVString_ev_uint32(void *pObjectXXXX, _in const char* nodeCode, _in ev_uint32 meshID )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::CPropertySet objXXXX = ptrNativeObject->getMeshAttr(nodeCode1, meshID);
				EarthView::World::Spatial::GeoDataset::CPropertySet *pXXXX = new EarthView::World::Spatial::GeoDataset::CPropertySet(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateAttrTypeFields_ev_bool_EVString_CFields(void *pObjectXXXX, _in const char* typeName, _in EarthView::World::Spatial::GeoDataset::CFields* flds )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateAttrTypeFields(typeName1, flds);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMeshAttr_ev_bool_EVString_ev_uint32_CPropertySet(void *pObjectXXXX, _in const char* nodeCode, _in ev_uint32 meshID, _in EarthView::World::Spatial::GeoDataset::CPropertySet* vals )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateMeshAttr(nodeCode1, meshID, vals);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getModelInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3_EVString(void *pObjectXXXX, _in ev_uint32 id, _out void* quater, _out void* position, _out void* scale, _out char*& nodeCode )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getModelInfoFromDB(id, *(EarthView::World::Spatial::Math::CVector3*)quater, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CVector3*)scale, nodeCode1);
				nodeCode=nodeCode1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttachInfoFromDB_ev_bool_ev_uint32_CVector3_CVector3_CVector3(void *pObjectXXXX, _in ev_uint32 id, _out void* quater, _out void* position, _out void* scale )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getAttachInfoFromDB(id, *(EarthView::World::Spatial::Math::CVector3*)quater, *(EarthView::World::Spatial::Math::CVector3*)position, *(EarthView::World::Spatial::Math::CVector3*)scale);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_isExistBindID_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 mainID, _in ev_int32 BindID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isExistBindID(mainID, BindID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* nodeCode, _in ev_int32 copyID )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->copyModel(nodeCode1, copyID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModel_ev_bool_EVString_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in const char* nodeCode, _in ev_int32 copyID, _inout ev_int32& newID, _inout char*& newName )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->copyModel(nodeCode1, copyID, newID, newName1);
				newName=newName1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32(void *pObjectXXXX, _in const char* nodeCode, _in ev_int32 copyID )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->copyModelAndBindInfo(nodeCode1, copyID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_copyModelAndBindInfo_ev_bool_EVString_ev_int32_ev_int32_EVString(void *pObjectXXXX, _in const char* nodeCode, _in ev_int32 copyID, _inout ev_int32& newID, _inout char*& newName )
			{
				EarthView::World::Core::ev_string nodeCode1 = nodeCode;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->copyModelAndBindInfo(nodeCode1, copyID, newID, newName1);
				newName=newName1.makeBuffer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableNames_StringVector(void *pObjectXXXX )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getAttrTableNames();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getAttrTableFileds_void_EVString_CFields(void *pObjectXXXX, _in const char* typeName, _out EarthView::World::Spatial::GeoDataset::CFields* flds )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ptrNativeObject->getAttrTableFileds(typeName1, flds);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_EVString(void *pObjectXXXX, _in int modelType, _in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* meshName )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->createModelObject((EarthView::World::Spatial3D::ModelType)modelType, pSceneManager, meshName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_createModelObject_CModelBaseObject_ModelType_CSceneManager_ev_uint32(void *pObjectXXXX, _in int modelType, _in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->createModelObject((EarthView::World::Spatial3D::ModelType)modelType, pSceneManager, meshID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyModelObject_ev_bool_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->destroyModelObject(pModel);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneManager, _in const char* effectName )
			{
				EarthView::World::Core::ev_string effectName1 = effectName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->createEffect(pSceneManager, effectName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_createEffect_CEffect_CSceneManager_ev_uint32(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneManager, _in ev_uint32 effectId )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->createEffect(pSceneManager, effectId);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_destroyEffect_ev_bool_CEffect(void *pObjectXXXX, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->destroyEffect(effect);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedInfo_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindedInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedModelInfo_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindedModelInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedEffectInfo_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindedEffectInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_getBindedLightInfo_CMeshEffectRefInfoVector_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector objXXXX = ptrNativeObject->getBindedLightInfo(meshID);
				EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfoVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_insertBindedInfo_ev_bool_ev_uint32_CMeshEffectRefInfo(void *pObjectXXXX, _in ev_uint32 meshID, _in EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* info )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->insertBindedInfo(meshID, info);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfoByEVID_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 evID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteBindedInfoByEVID(evID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedInfo_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteBindedInfo(meshID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedModelInfo_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteBindedModelInfo(meshID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_deleteBindedEffectInfo_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deleteBindedEffectInfo(meshID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtSubEntity_CModelBaseObject_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedMeshID, _in ev_uint32 subEntityIndex, _in const void* mat4 )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->bindModelAtSubEntity(pMainObj, bindedMeshID, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtBone_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedMeshID, _in const char* boneName, _in const void* mat4 )
			{
				EarthView::World::Core::ev_string boneName1 = boneName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->bindModelAtBone(pMainObj, bindedMeshID, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindModelAtNode_CModelBaseObject_CModelBaseObject_ev_uint32_EVString_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedMeshID, _in const char* nodeName, _in const void* mat4 )
			{
				EarthView::World::Core::ev_string nodeName1 = nodeName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->bindModelAtNode(pMainObj, bindedMeshID, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtSubEntity_CEffect_CModelBaseObject_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedEffectID, _in ev_uint32 subEntityIndex, _in const void* mat4 )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->bindEffectAtSubEntity(pMainObj, bindedEffectID, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindLightAtSubEntity_ev_int32_CModelBaseObject_CLight_ev_uint32_ev_uint32_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Graphic::CLight* l, _in ev_uint32 bindedLightID, _in ev_uint32 subEntityIndex, _in const void* mat4 )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->bindLightAtSubEntity(pMainObj, l, bindedLightID, subEntityIndex, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtBone_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedEffectID, _in const char* boneName, _in const void* mat4 )
			{
				EarthView::World::Core::ev_string boneName1 = boneName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->bindEffectAtBone(pMainObj, bindedEffectID, boneName1, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_bindEffectAtNode_CEffect_CModelBaseObject_ev_uint32_EVString_CMatrix4(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindedEffectID, _in const char* nodeName, _in const void* mat4 )
			{
				EarthView::World::Core::ev_string nodeName1 = nodeName;
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->bindEffectAtNode(pMainObj, bindedEffectID, nodeName1, *(EarthView::World::Spatial::Math::CMatrix4*)mat4);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryModel_ev_bool_CModelBaseObject_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pBindedObj )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->unBindAndDestoryModel(pMainObj, pBindedObj);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryEffect_ev_bool_CModelBaseObject_CEffect(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Spatial3D::EffectManager::CEffect* pBindedObj )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->unBindAndDestoryEffect(pMainObj, pBindedObj);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_unBindAndDestoryLight_ev_bool_CModelBaseObject_CLight_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Graphic::CLight* pBindedObj, _in ev_uint32 bindID )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->unBindAndDestoryLight(pMainObj, pBindedObj, bindID);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedModelPosition_ev_bool_CModelBaseObject_CModelBaseObject_CVector3_CVector3_CVector3(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pBindedObj, _in const void* pos, _in const void* scale, _in const void* rotate )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateBindedModelPosition(pMainObj, pBindedObj, *(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedEffectPosition_ev_bool_CModelBaseObject_CEffect_CVector3_CVector3_CVector3(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in EarthView::World::Spatial3D::EffectManager::CEffect* pBindedObj, _in const void* pos, _in const void* scale, _in const void* rotate )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateBindedEffectPosition(pMainObj, pBindedObj, *(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightPosition_ev_bool_CModelBaseObject_ev_uint32_CVector3_CVector3_CVector3(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in ev_uint32 bindID, _in const void* pos, _in const void* scale, _in const void* rotate )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateBindedLightPosition(pMainObj, bindID, *(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateBindedLightProperty_ev_bool_ev_uint32_CLight(void *pObjectXXXX, _in ev_uint32 bindID, _in EarthView::World::Graphic::CLight* l )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateBindedLightProperty(bindID, l);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMainModelLocalMatrix_ev_bool_CModelBaseObject_CVector3_CVector3_CVector3(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pMainObj, _in const void* pos, _in const void* scale, _in const void* rotate )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateMainModelLocalMatrix(pMainObj, *(EarthView::World::Spatial::Math::CVector3*)pos, *(EarthView::World::Spatial::Math::CVector3*)scale, *(EarthView::World::Spatial::Math::CVector3*)rotate);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3DProxy_CModelEffectDBManager_updateMaterial_ev_bool_CModelBaseObject_CMaterialPtr_StringVector_StringVector(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel, _inout void* matPtr, _in const void* replacedTextures, _in const void* newTextureFilesPath )
			{
				EarthView::World::Spatial3DProxy::CModelEffectDBManager* ptrNativeObject = (EarthView::World::Spatial3DProxy::CModelEffectDBManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->updateMaterial(pModel, *(EarthView::World::Graphic::CMaterialPtr*)matPtr, *(EarthView::World::Core::StringVector*)replacedTextures, *(EarthView::World::Core::StringVector*)newTextureFilesPath);
				return objXXXX;
			}
		}
	}
}
