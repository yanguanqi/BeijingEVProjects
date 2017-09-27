/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/controlevent.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CControlEvent_setControl_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::CControlEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CControlEvent*) pObjectXXXX;
					ptrNativeObject->setControl(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall EarthView_World_Spatial_SystemUI_CControlEvent_getControl_ISpatialControl(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CControlEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CControlEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getControl();
					return objXXXX;
				}
			}
		}
	}
}
