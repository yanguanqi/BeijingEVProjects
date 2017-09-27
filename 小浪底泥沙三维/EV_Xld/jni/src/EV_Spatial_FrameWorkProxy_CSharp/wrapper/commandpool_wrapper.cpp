/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/commandpool.h"
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
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
			}
		}
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CCommandPool_connect_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CCommandPool* ptrNativeObject = (CCommandPool*) pObjectXXXX;
	ptrNativeObject->connect(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CCommandPool_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
{
	CCommandPool* ptrNativeObject = (CCommandPool*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(type);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CCommandPool_addCommand_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
{
	CCommandPool* ptrNativeObject = (CCommandPool*) pObjectXXXX;
	ptrNativeObject->addCommand(ref_cmd);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CCommandPool_removeCommand_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
{
	CCommandPool* ptrNativeObject = (CCommandPool*) pObjectXXXX;
	ptrNativeObject->removeCommand(type);
}
