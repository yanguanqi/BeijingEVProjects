/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modeleffectmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
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
			}
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDNum_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getIDNum();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllIDS_CObjectIDList(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList objXXXX = ptrNativeObject->getAllIDS();
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pXXXX = new EarthView::World::Spatial3D::Dataset::CObjectIDList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getAllUserType_StringVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getAllUserType();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByUserType_CObjectIDList_EVString(void *pObjectXXXX, _in const char* userType )
				{
					EarthView::World::Core::ev_string userType1 = userType;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList objXXXX = ptrNativeObject->getIDSByUserType(userType1);
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pXXXX = new EarthView::World::Spatial3D::Dataset::CObjectIDList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getIDSByMeshName_CObjectIDList_EVString(void *pObjectXXXX, _in const char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CObjectIDList objXXXX = ptrNativeObject->getIDSByMeshName(meshName1);
					EarthView::World::Spatial3D::Dataset::CObjectIDList *pXXXX = new EarthView::World::Spatial3D::Dataset::CObjectIDList(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getMeshNameByID_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getMeshNameByID(id);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_createModel_CModelBaseObject_ev_uint32_ev_bool(void *pObjectXXXX, _in ev_uint32 id, _in ev_bool bRemoveParentNode )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->createModel(id, bRemoveParentNode);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_destoryModel_ev_bool_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->destoryModel(pModel);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_saveMaterialEditting_ev_bool_CModelBaseObject_CMaterialPtr(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* pModel, _in const void* matPtr )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveMaterialEditting(pModel, *(EarthView::World::Graphic::CMaterialPtr*)matPtr);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CUserTypeTree*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelEffectManager_getRootTree_CUserTypeTree(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CUserTypeTree* objXXXX = ptrNativeObject->getRootTree();
					return objXXXX;
				}
			}
		}
	}
}
