/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/workcommand.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CBaseObject*  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommand_getData_CBaseObject(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::CWorkCommand* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommand*) pObjectXXXX;
					EarthView::World::Core::CBaseObject* objXXXX = ptrNativeObject->getData();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CWorkCommand_setData_void_CBaseObject(void *pObjectXXXX, _in EarthView::World::Core::CBaseObject* ref_data )
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommand* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CWorkCommand*) pObjectXXXX;
					ptrNativeObject->setData(ref_data);
				}
			}
		}
	}
}
