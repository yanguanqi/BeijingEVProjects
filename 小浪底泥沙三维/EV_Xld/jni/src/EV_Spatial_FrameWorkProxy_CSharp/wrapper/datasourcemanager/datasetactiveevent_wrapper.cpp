/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasetactiveevent.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getDatasetName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDatasetName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setDatasetName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setDatasetName(name1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getDataSourceName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getDataSourceName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setDataSourceName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setDataSourceName(name1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getSourceType_EVDataSourceType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType objXXXX = ptrNativeObject->getSourceType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setSourceType_void_EVDataSourceType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setSourceType((EarthView::World::Spatial::GeoDataset::EVDataSourceType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setDatasetType_void_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setModelDatasetAttrFilds_void_CFields(void *pObjectXXXX, _inout void* fields )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setModelDatasetAttrFilds(*(EarthView::World::Spatial::GeoDataset::CFields*)fields);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setVectorDatasetAttrFilds_void_CFields(void *pObjectXXXX, _inout void* fields )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setVectorDatasetAttrFilds(*(EarthView::World::Spatial::GeoDataset::CFields*)fields);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CFields*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getModelDatasetAttrFilds_CFields(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CFields* objXXXX = ptrNativeObject->getModelDatasetAttrFilds();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setVectorDatasetInfo_void_EVGeometryType_ev_int32(void *pObjectXXXX, _in int type, _in ev_int32 coordSys )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setVectorDatasetInfo((EarthView::World::Spatial::Geometry::EVGeometryType)type, coordSys);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setVectorDatasetInfo_void_EVGeometryType_EVString(void *pObjectXXXX, _in int type, _in char* wktCoordSys )
				{
					EarthView::World::Core::ev_string wktCoordSys1 = wktCoordSys;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setVectorDatasetInfo((EarthView::World::Spatial::Geometry::EVGeometryType)type, wktCoordSys1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getVectorDatasetInfo_void_EVGeometryType_ev_int32(void *pObjectXXXX, _inout int& type, _inout ev_int32& coordSys )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->getVectorDatasetInfo((EarthView::World::Spatial::Geometry::EVGeometryType&)type, coordSys);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getVectorDatasetInfo_void_EVGeometryType_EVString(void *pObjectXXXX, _inout int& type, _inout char*& wktCoordSys )
				{
					EarthView::World::Core::ev_string wktCoordSys1 = wktCoordSys;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->getVectorDatasetInfo((EarthView::World::Spatial::Geometry::EVGeometryType&)type, wktCoordSys1);
					wktCoordSys=wktCoordSys1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::CFields*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getVectorDatasetAttrFilds_CFields(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::CFields* objXXXX = ptrNativeObject->getVectorDatasetAttrFilds();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setModelDatasetType_void_ev_bool(void *pObjectXXXX, _in ev_bool isModelTemplateDataset )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setModelDatasetType(isModelTemplateDataset);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getModelDatasetType_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getModelDatasetType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setModelDatasetCoordSys_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 type, _in ev_int32 coordSys )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setModelDatasetCoordSys(type, coordSys);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setCoordianteSystemName_void_EVString(void *pObjectXXXX, _inout char*& name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setCoordianteSystemName(name1);
					name=name1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getCoordianteSystemName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getCoordianteSystemName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getModelDatasetCoordSysType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getModelDatasetCoordSysType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getModelDatasetGeoCSType_EVWellKnownGeoCSType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVWellKnownGeoCSType objXXXX = ptrNativeObject->getModelDatasetGeoCSType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getModelDatasetProjCSType_EVWellKnownProjCSType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVWellKnownProjCSType objXXXX = ptrNativeObject->getModelDatasetProjCSType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getCoordSys_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getCoordSys();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getWKTCoordSys_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getWKTCoordSys();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_setErrorMsg_void_EVString(void *pObjectXXXX, _in const char* msg )
				{
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					ptrNativeObject->setErrorMsg(msg1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDatasetActiveEvent_getErrorMsg_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getErrorMsg();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
