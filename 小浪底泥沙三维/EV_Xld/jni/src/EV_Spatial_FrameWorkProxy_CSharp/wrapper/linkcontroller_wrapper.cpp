/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/linkcontroller.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
extern "C" EV_DLL_EXPORT  CLinkController*  _stdcall CLinkController_getSingletonPtr_CLinkController( )
{
	CLinkController* objXXXX = CLinkController::getSingletonPtr();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_isActive_ev_bool(void *pObjectXXXX )
{
	const CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->isActive();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinkController_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool active )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ptrNativeObject->setActive(active);
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CLinkController_getCount_ev_uint32(void *pObjectXXXX )
{
	const CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->getCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_addControl_ev_bool_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->addControl(ref_ctrl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_removeControl_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->removeControl(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_removeControl_ev_bool_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->removeControl(ctrl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_isExist_ev_bool_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->isExist(ctrl);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinkController_clear_void(void *pObjectXXXX )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ptrNativeObject->clear();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinkController_load_void(void *pObjectXXXX )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ptrNativeObject->load();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinkController_save_void(void *pObjectXXXX )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ptrNativeObject->save();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CLinkController_setRotation_void_ev_bool(void *pObjectXXXX, _in ev_bool r )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ptrNativeObject->setRotation(r);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CLinkController_isRotation_ev_bool(void *pObjectXXXX )
{
	CLinkController* ptrNativeObject = (CLinkController*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->isRotation();
	return objXXXX;
}
