/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/datasourcehelper.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_openDatasource_ev_bool_CDataSourceUrl(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->openDatasource(*(EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_createDatasource_ev_bool_CDataSourceUrl(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createDatasource(*(EarthView::World::Spatial3D::DataExchange::CDataSourceUrl*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CModelDataSource*  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_getDatasource_CModelDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CModelDataSource* objXXXX = ptrNativeObject->getDatasource();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_setDatasource_void_CModelDataSource(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CModelDataSource* ref_pSource )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ptrNativeObject->setDatasource(ref_pSource);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_openDatasetByName_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->openDatasetByName(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_deleteData_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteData();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_clearDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_clearModelDatabase_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearModelDatabase();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_isExistModelDatabase_ev_bool_EVString(void *pObjectXXXX, _in char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExistModelDatabase(meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_isExistModelInDataset_ev_bool_EVString(void *pObjectXXXX, _in char* meshName )
				{
					EarthView::World::Core::ev_string meshName1 = meshName;
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isExistModelInDataset(meshName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_openModelDatabase_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->openModelDatabase();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEntityDataset*  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_getDataset_CEntityDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEntityDataset* objXXXX = ptrNativeObject->getDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_getModelDatabase_CMeshTemplateDataset(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* objXXXX = ptrNativeObject->getModelDatabase();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_DataExchange_CDatasourceHelper_closeDateset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::DataExchange::CDatasourceHelper* ptrNativeObject = (EarthView::World::Spatial3D::DataExchange::CDatasourceHelper*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDateset();
					return objXXXX;
				}
			}
		}
	}
}
