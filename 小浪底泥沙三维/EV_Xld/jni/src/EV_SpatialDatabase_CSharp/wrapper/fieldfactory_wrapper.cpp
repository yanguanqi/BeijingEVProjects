/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/fieldfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_GeoDataset_CFieldFactory_createField_IField_CDataStream(_inout void* stream )
				{
					EarthView::World::Spatial::GeoDataset::IField* objXXXX = EarthView::World::Spatial::GeoDataset::CFieldFactory::createField(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
			}
		}
	}
}
