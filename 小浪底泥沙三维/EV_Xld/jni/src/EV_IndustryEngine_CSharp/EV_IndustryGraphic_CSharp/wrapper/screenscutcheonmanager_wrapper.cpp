/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheonmanager.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_push_ev_bool_EVString_CScreenScutcheon(void *pObjectXXXX, _in const char* key, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*& val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				const EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_OperatorIndex_CScreenScutcheon_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap& objYYYY = *(EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_get_CScreenScutcheon_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_clear_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_OperatorIndex_CScreenScutcheon_EVString(void *pObjXXXX, _in const char* name )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager& objYYYY = *(EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = objYYYY[name];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_getScutcheon_CScreenScutcheon_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = ptrNativeObject->getScutcheon(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_destoryScutcheon_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				ptrNativeObject->destoryScutcheon(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_destoryAll_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				ptrNativeObject->destoryAll();
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_createScutcheon_CScreenScutcheon_EVString_EVString_CGlobeControl(void *pObjectXXXX, _in const char* name, _in const char* templateName, _in EarthView::World::Spatial3D::Controls::CGlobeControl* control )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string templateName1 = templateName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = ptrNativeObject->createScutcheon(name1, templateName1, control);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_exist_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->exist(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_getSingleton_CScreenScutcheonManager( )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager& objXXXX = EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager::getSingleton();
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_getSingletonPtr_CScreenScutcheonManager( )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* objXXXX = EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_getScutcheonMap_CScutcheonMap_CGlobeControl(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* control )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap objXXXX = ptrNativeObject->getScutcheonMap(control);
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap *pXXXX = new EarthView::IndustryEngine::IndustryGraphic::CScutcheonMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonManager_setVisible_void_bool(void *pObjectXXXX, _in const bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonManager*) pObjectXXXX;
				ptrNativeObject->setVisible(value);
			}
		}
	}
}
