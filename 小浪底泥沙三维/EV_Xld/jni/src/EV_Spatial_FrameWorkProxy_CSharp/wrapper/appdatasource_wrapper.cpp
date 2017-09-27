/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_openDataSource_bool_EVString_DataSourceOption(void *pObjectXXXX, _in const char* aliasName, _in const void* option )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->openDataSource(aliasName1, *(EarthView::World::Utilities::DataSourceOption*)option);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Utilities_AppDataSource_getDataSource_IDataSource_EVString_DataSourceType(void *pObjectXXXX, _in const char* dataSourceAliasName, _in int type )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				const EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSource(dataSourceAliasName1, (EarthView::World::Utilities::AppDataSource::DataSourceType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_closeDataSource_bool_EVString(void *pObjectXXXX, _in const char* aliasName )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->closeDataSource(aliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_deleteDataSource_bool_EVString(void *pObjectXXXX, _in const char* aliasName )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->deleteDataSource(aliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_createDataSource_bool_EVString_DataSourceOption(void *pObjectXXXX, _in const char* aliasName, _in const void* option )
			{
				EarthView::World::Core::ev_string aliasName1 = aliasName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->createDataSource(aliasName1, *(EarthView::World::Utilities::DataSourceOption*)option);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_createDataset_bool_EVString_EVString_DatasetOption(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName, _in const void* option )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->createDataset(dataSourceAliasName1, datasetName1, *(EarthView::World::Utilities::DatasetOption*)option);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppDataSource_deleteDataset_bool_EVString_EVString(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->deleteDataset(dataSourceAliasName1, datasetName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Utilities_AppDataSource_openDataset_IDataset_EVString_EVString(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName )
			{
				EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
				EarthView::World::Core::ev_string datasetName1 = datasetName;
				EarthView::World::Utilities::AppDataSource* ptrNativeObject = (EarthView::World::Utilities::AppDataSource*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(dataSourceAliasName1, datasetName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Utilities_AppDataSource_getLastErrorString_EVString( )
			{
				EVString objXXXX = EarthView::World::Utilities::AppDataSource::getLastErrorString();
				return objXXXX.makeBuffer();
			}
		}
	}
}
