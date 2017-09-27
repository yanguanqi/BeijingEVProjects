/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasetoption.h"
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_create_DatasetOption_Create(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DatasetOption* ptrNativeObject = (EarthView::World::Utilities::DatasetOption*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption_Create& objXXXX = ptrNativeObject->create();
				EarthView::World::Utilities::DatasetOption_Create *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_db_DatasetOption_Create_DB(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DatasetOption_Create* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption_Create_DB& objXXXX = ptrNativeObject->db();
				EarthView::World::Utilities::DatasetOption_Create_DB *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_file_DatasetOption_Create_File(void *pObjectXXXX )
			{
				EarthView::World::Utilities::DatasetOption_Create* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption_Create_File& objXXXX = ptrNativeObject->file();
				EarthView::World::Utilities::DatasetOption_Create_File *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_int(void *pObjectXXXX, _in const void* fields, _in int geoType, _in int espg )
			{
				EarthView::World::Utilities::DatasetOption_Create_DB* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption& objXXXX = ptrNativeObject->vector(*(EarthView::World::Spatial::GeoDataset::CFields*)fields, geoType, espg);
				EarthView::World::Utilities::DatasetOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_DB_vector_DatasetOption_CFields_int_EVString(void *pObjectXXXX, _in const void* fields, _in int geoType, _in char* wktCoordsys )
			{
				EarthView::World::Core::ev_string wktCoordsys1 = wktCoordsys;
				EarthView::World::Utilities::DatasetOption_Create_DB* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption& objXXXX = ptrNativeObject->vector(*(EarthView::World::Spatial::GeoDataset::CFields*)fields, geoType, wktCoordsys1);
				EarthView::World::Utilities::DatasetOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_DB_model_DatasetOption_CFields_ModelDatasetType_int(void *pObjectXXXX, _in const void* fields, _in int modelDatasetType, _in int espg )
			{
				EarthView::World::Utilities::DatasetOption_Create_DB* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption& objXXXX = ptrNativeObject->model(*(EarthView::World::Spatial::GeoDataset::CFields*)fields, (EarthView::World::Utilities::ModelDatasetType)modelDatasetType, espg);
				EarthView::World::Utilities::DatasetOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_DB_effect_DatasetOption_int(void *pObjectXXXX, _in int espg )
			{
				EarthView::World::Utilities::DatasetOption_Create_DB* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create_DB*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption& objXXXX = ptrNativeObject->effect(espg);
				EarthView::World::Utilities::DatasetOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Utilities_DatasetOption_Create_File_kml_DatasetOption_KMLDatasetType(void *pObjectXXXX, _in int kmlDatasetType )
			{
				EarthView::World::Utilities::DatasetOption_Create_File* ptrNativeObject = (EarthView::World::Utilities::DatasetOption_Create_File*) pObjectXXXX;
				EarthView::World::Utilities::DatasetOption& objXXXX = ptrNativeObject->kml((EarthView::World::Utilities::KMLDatasetType)kmlDatasetType);
				EarthView::World::Utilities::DatasetOption *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
		}
	}
}
