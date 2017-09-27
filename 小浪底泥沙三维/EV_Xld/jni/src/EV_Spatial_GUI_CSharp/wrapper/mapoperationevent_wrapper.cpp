/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/mapoperationevent.h"
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapOperationEvent_setMap_void_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_map )
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjectXXXX;
					ptrNativeObject->setMap(ref_map);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_SystemUI_CMapOperationEvent_getMap_IMap(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CMapOperationEvent_setLayer_void_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* ref_layer )
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjectXXXX;
					ptrNativeObject->setLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CMapOperationEvent_getLayer_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer();
					return objXXXX;
				}
			}
		}
	}
}
