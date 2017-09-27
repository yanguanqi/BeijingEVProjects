/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/editevent.h"
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
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_SystemUI_CDatasetEditEvent_getDataset_IDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CDatasetEditEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CDatasetEditEvent*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_SystemUI_CLayerEditingEvent_getEditingLayer_ILayer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CLayerEditingEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CLayerEditingEvent*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getEditingLayer();
					return objXXXX;
				}
			}
		}
	}
}
