/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecontrolmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace RenderSystem
		{
			namespace GLES2
			{
			}
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
		namespace Spatial3D
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
			namespace Controls
			{
			}
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
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_push_ev_bool_EVString_C3DControl(void *pObjectXXXX, _in const char* key, _in EarthView::World::Spatial3D::Controls::C3DControl*& val )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->push(key1, val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->exist(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::C3DControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_OperatorIndex_C3DControl_EVString(void *pObjXXXX, _in const char* key )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlMap& objYYYY = *(EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::C3DControl* objXXXX = objYYYY[key];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::C3DControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_get_C3DControl_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::C3DControl* objXXXX = ptrNativeObject->get(key1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
				{
					EarthView::World::Core::ev_string key1 = key;
					EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ptrNativeObject->erase(key1);
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlMap_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControlMap* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlMap*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_getSingleton_CGlobeControlManager( )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager& objXXXX = EarthView::World::Spatial3D::Controls::CGlobeControlManager::getSingleton();
					EarthView::World::Spatial3D::Controls::CGlobeControlManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControlManager*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_getSingletonPtr_CGlobeControlManager( )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* objXXXX = EarthView::World::Spatial3D::Controls::CGlobeControlManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_setup_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->setup();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_setup_bool_bool(void *pObjectXXXX, _in bool externalWindowHandle )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->setup(externalWindowHandle);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_createGlobeControl_CGlobeControl_EVString_int_int_CommonStringPairList(void *pObjectXXXX, _in const char* windowName, _in int windowWidth, _in int windowHeight, _in EarthView::World::Core::CommonStringPairList* miscParams )
				{
					EarthView::World::Core::ev_string windowName1 = windowName;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->createGlobeControl(windowName1, windowWidth, windowHeight, miscParams);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_removeGlobeControl_void_EVString(void *pObjectXXXX, _in const char* globeGlobeName )
				{
					EarthView::World::Core::ev_string globeGlobeName1 = globeGlobeName;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					ptrNativeObject->removeGlobeControl(globeGlobeName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CCommonSceneControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_createCommonSceneControl_CCommonSceneControl_ev_int32_int_int(void *pObjectXXXX, _in ev_int32 windowName, _in int windowWidth, _in int windowHeight )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* objXXXX = ptrNativeObject->createCommonSceneControl(windowName, windowWidth, windowHeight);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CCommonSceneControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_createCommonSceneControl_CCommonSceneControl_EVString_int_int(void *pObjectXXXX, _in const char* windowName, _in int windowWidth, _in int windowHeight )
				{
					EarthView::World::Core::ev_string windowName1 = windowName;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CCommonSceneControl* objXXXX = ptrNativeObject->createCommonSceneControl(windowName1, windowWidth, windowHeight);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_remove3Dcontrol_void_EVString(void *pObjectXXXX, _in const char* DControlName )
				{
					EarthView::World::Core::ev_string DControlName1 = DControlName;
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					ptrNativeObject->remove3Dcontrol(DControlName1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_getGlobeControl_CGlobeControl_EVString(void *pObjectXXXX, _in const char* globeControlName )
				{
					EarthView::World::Core::ev_string globeControlName1 = globeControlName;
					const EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->getGlobeControl(globeControlName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_existGlobeControl_ev_bool_EVString(void *pObjectXXXX, _in const char* globeControlName )
				{
					EarthView::World::Core::ev_string globeControlName1 = globeControlName;
					const EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existGlobeControl(globeControlName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_existGlobeControl_ev_bool_CGlobeControl(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeControl )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existGlobeControl(globeControl);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeControlManager_frame_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeControlManager* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeControlManager*) pObjectXXXX;
					bool objXXXX = ptrNativeObject->frame();
					return objXXXX;
				}
			}
		}
	}
}
