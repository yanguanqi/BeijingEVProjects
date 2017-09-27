/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/evfeatureclassdriverregister.h"
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
		namespace Spatial
		{
			namespace GeoDataset
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
			namespace VectorFileParser
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*  _stdcall EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getRegisterDrivers_EVFeatureClassDriverRegister( )
				{
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister* objXXXX = EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister::getRegisterDrivers();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_openDataset_IDataset_IFileDataSource_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFileDataSource* pDataSource, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(pDataSource, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_EVRegisterDriver_void_CFeatureClassDriver(void *pObjectXXXX, _in EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* pDriver )
				{
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjectXXXX;
					ptrNativeObject->EVRegisterDriver(pDriver);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver*  _stdcall EarthView_World_Spatial_VectorFileParser_EVFeatureClassDriverRegister_getDriverByName_CFeatureClassDriver_EVString(void *pObjectXXXX, _in const char* driverName )
				{
					EarthView::World::Core::ev_string driverName1 = driverName;
					EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::EVFeatureClassDriverRegister*) pObjectXXXX;
					EarthView::World::Spatial::VectorFileParser::CFeatureClassDriver* objXXXX = ptrNativeObject->getDriverByName(driverName1);
					return objXXXX;
				}
			}
		}
	}
}
