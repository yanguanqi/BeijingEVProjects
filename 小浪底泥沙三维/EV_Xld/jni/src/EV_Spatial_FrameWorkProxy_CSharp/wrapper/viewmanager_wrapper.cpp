/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/viewmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
		namespace Spatial3D
		{
			namespace Controls
			{
			}
		}
	}
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openGlobe_CControlSpace_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* windowHandle )
{
	EarthView::World::Core::ev_string name1 = name;
	EarthView::World::Core::ev_string windowHandle1 = windowHandle;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openGlobe(name1, windowHandle1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openGlobe_CControlSpace_EVString_ev_uint32_ev_uint32_EVString(void *pObjectXXXX, _in const char* name, _in ev_uint32 winWidth, _in ev_uint32 winHeight, _in const char* windowHandle )
{
	EarthView::World::Core::ev_string name1 = name;
	EarthView::World::Core::ev_string windowHandle1 = windowHandle;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openGlobe(name1, winWidth, winHeight, windowHandle1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openGlobe_CControlSpace_EVString_EVString_ev_uint32(void *pObjectXXXX, _in const char* name, _in const char* windowHandle, _in ev_uint32 toolbarEnabled )
{
	EarthView::World::Core::ev_string name1 = name;
	EarthView::World::Core::ev_string windowHandle1 = windowHandle;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openGlobe(name1, windowHandle1, toolbarEnabled);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  int  _stdcall CViewManager_getViewType_ViewType_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CViewManager::ViewType objXXXX = ptrNativeObject->getViewType(name1);
	return (int)objXXXX;
}
extern "C" EV_DLL_EXPORT  int  _stdcall CViewManager_getActiveViewType_ViewType(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CViewManager::ViewType objXXXX = ptrNativeObject->getActiveViewType();
	return (int)objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CViewManager_closeGlobe_void_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ptrNativeObject->closeGlobe(name1);
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openMap_CControlSpace_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openMap(name1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openMap_CControlSpace_EVString_ev_uint32(void *pObjectXXXX, _in const char* name, _in ev_uint32 toolbarEnabled )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openMap(name1, toolbarEnabled);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CViewManager_closeMap_void_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ptrNativeObject->closeMap(name1);
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_openLayout_CControlSpace_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->openLayout(name1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CViewManager_closeLayout_void_EVString(void *pObjectXXXX, _in const char* name )
{
	EarthView::World::Core::ev_string name1 = name;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ptrNativeObject->closeLayout(name1);
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_getActiveControlSpace_CControlSpace(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->getActiveControlSpace();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_getLastActiveControlSpace_CControlSpace(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->getLastActiveControlSpace();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CViewManager_getActiveControlName_EVString(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getActiveControlName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CViewManager_getLastActiveControlName_EVString(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->getLastActiveControlName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall CViewManager_getActiveSpatialControl_ISpatialControl(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getActiveSpatialControl();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall CViewManager_getLastActiveSpatialControl_ISpatialControl(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getLastActiveSpatialControl();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall CViewManager_getSpatialControlByName_ISpatialControl_EVString(void *pObjectXXXX, _in const char* spatialControlName )
{
	EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getSpatialControlByName(spatialControlName1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_getControlSpaceByName_CControlSpace_EVString(void *pObjectXXXX, _in const char* spatialControlName )
{
	EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->getControlSpaceByName(spatialControlName1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  CControlSpace*  _stdcall CViewManager_getControlSpaceByControl_CControlSpace_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	CControlSpace* objXXXX = ptrNativeObject->getControlSpaceByControl(ctrl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CViewManager_setActiveSpatialControl_ev_bool_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* spatialControl )
{
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->setActiveSpatialControl(spatialControl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CViewManager_setActiveSpatialControl_ev_bool_EVString(void *pObjectXXXX, _in const char* spatialControlName )
{
	EarthView::World::Core::ev_string spatialControlName1 = spatialControlName;
	CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->setActiveSpatialControl(spatialControlName1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CViewManager_getControlCount_ev_int32(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->getControlCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CViewManager_getMapControlCount_ev_int32(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->getMapControlCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CViewManager_getGlobeControlCount_ev_int32(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->getGlobeControlCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CViewManager_getLayoutControlCount_ev_int32(void *pObjectXXXX )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->getLayoutControlCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall CViewManager_getControl_ISpatialControl_int(void *pObjectXXXX, _in int index )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getControl(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CViewManager_isSpatialExists_ev_bool_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	const CViewManager* ptrNativeObject = (CViewManager*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->isSpatialExists(ctrl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void*  _stdcall CViewManager_getSingleton_CViewManager( )
{
	CViewManager& objXXXX = CViewManager::getSingleton();
	CViewManager *pXXXX = &objXXXX;
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  CViewManager*  _stdcall CViewManager_getSingletonPtr_CViewManager( )
{
	CViewManager* objXXXX = CViewManager::getSingletonPtr();
	return objXXXX;
}
