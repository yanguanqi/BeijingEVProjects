/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelbindinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace ModelManager
			{
			}
			namespace EffectManager
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
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::EffectManager::CEffect*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_EffectObject_mpEffect( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObject*) pObjectXXXX;
					EarthView::World::Spatial3D::EffectManager::CEffect* objXXXX = ptrNativeObject->mpEffect;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_EffectObject_mpEffect( void *pObjectXXXX, EarthView::World::Spatial3D::EffectManager::CEffect*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjectXXXX)->mpEffect = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_EffectObject_mRefInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::EffectObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo &objXXXX = ptrNativeObject->mRefInfo;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_EffectObject_mRefInfo( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::EffectObject*)pObjectXXXX)->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_ModelObject_mpModel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObject*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->mpModel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_ModelObject_mpModel( void *pObjectXXXX, EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjectXXXX)->mpModel = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_ModelObject_mRefInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::ModelObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo &objXXXX = ptrNativeObject->mRefInfo;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_ModelObject_mRefInfo( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::ModelObject*)pObjectXXXX)->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLight*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LightObject_mpLight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LightObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObject*) pObjectXXXX;
					EarthView::World::Graphic::CLight* objXXXX = ptrNativeObject->mpLight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LightObject_mpLight( void *pObjectXXXX, EarthView::World::Graphic::CLight*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LightObject*)pObjectXXXX)->mpLight = value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_LightObject_mRefInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LightObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo &objXXXX = ptrNativeObject->mRefInfo;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_LightObject_mRefInfo( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::LightObject*)pObjectXXXX)->mRefInfo = *(EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRibbonTrail*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_RibbonTrailObject_mpTrail( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*) pObjectXXXX;
					EarthView::World::Graphic::CRibbonTrail* objXXXX = ptrNativeObject->mpTrail;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_RibbonTrailObject_mpTrail( void *pObjectXXXX, EarthView::World::Graphic::CRibbonTrail*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjectXXXX)->mpTrail = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*  _stdcall Get_EarthView_World_Spatial3D_ModelManager_RibbonTrailObject_mpRefInfo( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo* objXXXX = ptrNativeObject->mpRefInfo;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_ModelManager_RibbonTrailObject_mpRefInfo( void *pObjectXXXX, EarthView::World::Spatial3D::Dataset::CMeshEffectRefInfo*  value )
				{
					((EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)pObjectXXXX)->mpRefInfo = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_push_ev_bool_EVString_RibbonTrailObject(void *pObjectXXXX, _in const char* key, _in void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObject*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_OperatorIndex_RibbonTrailObject_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_get_RibbonTrailObject_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject& objXXXX = ptrNativeObject->get(key1);
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_RibbonTrailObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_push_ev_bool_EVString_EffectObject(void *pObjectXXXX, _in const char* key, _in void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Spatial3D::ModelManager::EffectObject*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_OperatorIndex_EffectObject_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObject& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::ModelManager::EffectObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_get_EffectObject_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObject& objXXXX = ptrNativeObject->get(key1);
					EarthView::World::Spatial3D::ModelManager::EffectObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_push_ev_bool_EVString_LightObject(void *pObjectXXXX, _in const char* key, _in void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Spatial3D::ModelManager::LightObject*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_OperatorIndex_LightObject_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::LightObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObject& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::ModelManager::LightObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_get_LightObject_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObject& objXXXX = ptrNativeObject->get(key1);
					EarthView::World::Spatial3D::ModelManager::LightObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LightObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_push_ev_bool_EVString_EffectObjectMap(void *pObjectXXXX, _in const char* key, _in EarthView::World::Spatial3D::ModelManager::EffectObjectMap*& val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::EffectObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_OperatorIndex_EffectObjectMap_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::EffectObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_get_EffectObjectMap_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::EffectObjectMap* objXXXX = ptrNativeObject->get(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_EffectBindedObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::EffectBindedObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_push_ev_bool_EVString_ModelObject(void *pObjectXXXX, _in const char* key, _in void* val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, *(EarthView::World::Spatial3D::ModelManager::ModelObject*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_OperatorIndex_ModelObject_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObject& objXXXX = objYYYY[key];
					EarthView::World::Spatial3D::ModelManager::ModelObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_get_ModelObject_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObject& objXXXX = ptrNativeObject->get(key1);
					EarthView::World::Spatial3D::ModelManager::ModelObject *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_push_ev_bool_EVString_ModelObjectMap(void *pObjectXXXX, _in const char* key, _in EarthView::World::Spatial3D::ModelManager::ModelObjectMap*& val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::ModelObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_OperatorIndex_ModelObjectMap_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::ModelObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_get_ModelObjectMap_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::ModelObjectMap* objXXXX = ptrNativeObject->get(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_ModelBindedObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::ModelBindedObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_push_ev_bool_EVString_LightObjectMap(void *pObjectXXXX, _in const char* key, _in EarthView::World::Spatial3D::ModelManager::LightObjectMap*& val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LightObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_OperatorIndex_LightObjectMap_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap& objYYYY = *(EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::LightObjectMap*  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_get_LightObjectMap_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::LightObjectMap* objXXXX = ptrNativeObject->get(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_ModelManager_LightBindedObjectMap_getKeys_StringVector(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::LightBindedObjectMap*) pObjectXXXX;
					EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
					EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
