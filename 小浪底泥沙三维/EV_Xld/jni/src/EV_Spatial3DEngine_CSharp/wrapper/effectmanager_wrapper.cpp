/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/effectmanager.h"
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
		namespace Plugin
		{
			namespace ParticleFX
			{
			}
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
		namespace Core
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
			namespace EffectManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffectManager*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_getSingletonPtr_CEffectManager( )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* objXXXX = EarthView::World::Spatial3D::EffectManager::CEffectManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_clearEffectAll_ev_bool_CSqlDatabase(void *pObjectXXXX, _in const void* db )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearEffectAll(*(EarthView::World::Core::Database::CSqlDatabase*)db);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_existEffect_ev_bool_CEffectDataSource_EVString_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* src, _in const char* effectName, _out ev_uint32& effectId )
				{
					EarthView::World::Core::ev_string effectName1 = effectName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existEffect(src, effectName1, effectId);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_import_ev_int32_CEffectInfo_CEffectDataSource_CEffectDataSource_ev_bool_CModelPublishToolListener(void *pObjectXXXX, _inout void* info, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* src, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* dest, _in ev_bool isOverwrite, _in EarthView::World::Spatial3D::CModelPublishToolListener* listener )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->import(*(EarthView::World::Spatial3D::Dataset::CEffectInfo*)info, src, dest, isOverwrite, listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_copyNewEffect_CEffectInfo_CEffectDataSource_ev_uint32_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource, _in ev_uint32 effectId, _in const char* newName )
				{
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->copyNewEffect(datasource, effectId, newName1);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_createUserType_CEffectUserTypeInfo_CEffectDataSource_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource, _in char* parentCode, _in char* newUserTypeName )
				{
					EarthView::World::Core::ev_string parentCode1 = parentCode;
					EarthView::World::Core::ev_string newUserTypeName1 = newUserTypeName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo objXXXX = ptrNativeObject->createUserType(datasource, parentCode1, newUserTypeName1);
					EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectUserTypeInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_importFromScript_ev_bool_CEffectDataSource_EVString_EVString_CStringArray_CStringArray(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* userTypeCode, _in const char* folder, _out void* successScriptNames, _out void* errorArray )
				{
					EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
					EarthView::World::Core::ev_string folder1 = folder;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->importFromScript(ds, userTypeCode1, folder1, *(EarthView::World::Core::CStringArray*)successScriptNames, *(EarthView::World::Core::CStringArray*)errorArray);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_renameParticleScript_EVString_EVString_EVString_EVString(void *pObjectXXXX, _in const char* script, _in const char* oldName, _in const char* newName )
				{
					EarthView::World::Core::ev_string script1 = script;
					EarthView::World::Core::ev_string oldName1 = oldName;
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->renameParticleScript(script1, oldName1, newName1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_createNewEffect_CEffectInfo_CEffectDataSource_EVString_EVString_EffectType_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* datasource, _in const char* name, _in const char* userTypeCode, _in int type, _in ev_uint32 parentEffectId )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->createNewEffect(datasource, name1, userTypeCode1, (EarthView::World::Spatial3D::Dataset::EffectType)type, parentEffectId);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_renameUserType_ev_bool_CEffectDataSource_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* code, _in const char* newName )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->renameUserType(ds, code1, newName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBlendEffect_ev_bool_CEffectDataSource_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* code, _in const char* newName )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->renameBlendEffect(ds, code1, newName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_renameBEChild_ev_bool_CEffectDataSource_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* code, _in const char* newName )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->renameBEChild(ds, code1, newName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_renameSingleEffect_ev_bool_CEffectDataSource_EVString_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* code, _in const char* newName )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->renameSingleEffect(ds, code1, newName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteUserType_ev_bool_CEffectDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in const char* code )
				{
					EarthView::World::Core::ev_string code1 = code;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteUserType(ds, code1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_deleteEffect_ev_bool_CEffectDataSource_ev_uint32_ev_uint32_EffectType(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in ev_uint32 parentEffectId, _in ev_uint32 effectId, _in int type )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteEffect(ds, parentEffectId, effectId, (EarthView::World::Spatial3D::Dataset::EffectType)type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in ev_uint32 editEffectId, _in ev_uint32 dragEffectId )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->addEffectToBlendEffect(ds, editEffectId, dragEffectId);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_addEffectToBlendEffect_CEffectInfo_CEffectDataSource_ev_uint32_CEffectInfo(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in ev_uint32 editEffectId, _in void* effectInfo )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInfo objXXXX = ptrNativeObject->addEffectToBlendEffect(ds, editEffectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfo*)effectInfo);
					EarthView::World::Spatial3D::Dataset::CEffectInfo *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInfo(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffect_ev_bool_CEffectDataSource_CEffect(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in EarthView::World::Spatial3D::EffectManager::CEffect* effect )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveEffect(ds, effect);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in ev_uint32 effectId )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveEffectMaterial(ds, effectId);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_saveEffectMaterial_ev_bool_CEffectDataSource_CMaterialPtr_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _in void* matPtr, _in ev_uint32 resourceId )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveEffectMaterial(ds, *(EarthView::World::Graphic::CMaterialPtr*)matPtr, resourceId);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_findDiscontinuousID_EVString_CEffectDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* effectDatasource, _in const char* userTypeCode )
				{
					EarthView::World::Core::ev_string userTypeCode1 = userTypeCode;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->findDiscontinuousID(effectDatasource, userTypeCode1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_bulidUserTypeTree_void_CEffectDataSource_CEffectUserTypeTree(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEffectDataSource* ds, _out void* tree )
				{
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					ptrNativeObject->bulidUserTypeTree(ds, *(EarthView::World::Spatial3D::Dataset::CEffectUserTypeTree*)tree);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_EffectManager_CEffectManager_serialize_EVString_CParticleSystem_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CParticleSystem* ps, _in char* psName )
				{
					EarthView::World::Core::ev_string psName1 = psName;
					EarthView::World::Spatial3D::EffectManager::CEffectManager* ptrNativeObject = (EarthView::World::Spatial3D::EffectManager::CEffectManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->serialize(ps, psName1);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
