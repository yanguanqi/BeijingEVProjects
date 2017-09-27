/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceeventobject.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback)(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback)();
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CDataSourceEventObjectProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject
				{
				private:
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback;
				public:
					CDataSourceEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceEventObject(pList)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual void onDeleteDataSource(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onDeleteDataSource(pe);
					}
					virtual void onCreateDataSource(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onCreateDataSource(pe);
					}
					virtual void onOpenDataSource(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onOpenDataSource(pe);
					}
					virtual void onCloseDataSource(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onCloseDataSource(pe);
					}
					virtual void onCreateDataset(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onCreateDataset(pe);
					}
					virtual void onOpenDataset(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onOpenDataset(pe);
					}
					virtual void onCloseDataset(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onCloseDataset(pe);
					}
					virtual void onCloseAllDatasets(_in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback(pe);
						}
						else
							return this->CDataSourceEventObject::onCloseAllDatasets(pe);
					}
					virtual void onImportData()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback();
						}
						else
							return this->CDataSourceEventObject::onImportData();
					}
					virtual void onExportData()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback();
						}
						else
							return this->CDataSourceEventObject::onExportData();
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CDataSourceEventObject::onEvent(e);
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->CDataSourceEventObject::onTimerEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->CDataSourceEventObject::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(CDataSourceEventObjectProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_deleteDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onDeleteDataSource(pe);
					else
						ptrNativeObject->onDeleteDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onDeleteDataSource_void_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onDeleteDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _inout void* fields, _in ev_bool isTemplate, _in ev_int32 coordSysType, _in ev_int32 coordSys )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createModelDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, *(EarthView::World::Spatial::GeoDataset::CFields*)fields, isTemplate, coordSysType, coordSys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in ev_int32 coordsys )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createEffectDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, coordsys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in const int& type, _in const ev_int32& coordSys, _inout void* fields )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createVectorDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, (EarthView::World::Spatial::Geometry::EVGeometryType&)type, coordSys, *(EarthView::World::Spatial::GeoDataset::CFields*)fields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createKmlDataset_ev_bool_CDataSourceURL_EVString(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createKmlDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_addKmlDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _inout void* datasource, _inout void* dataset )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addKmlDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)datasource, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in int sourcetype, _in int datasettype )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)sourcetype, (EarthView::World::Spatial::GeoDataset::EVDatasetType)datasettype);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(void *pObjectXXXX, _in const void* datasourceURL, _in int datasourcetype )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)datasourcetype);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataSource_void_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->createDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataSource(pe);
					else
						ptrNativeObject->onCreateDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataSource_void_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_openDataSource_void_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->openDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataSource(pe);
					else
						ptrNativeObject->onOpenDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataSource_void_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataSource_ev_bool_CDataSourceActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataSource(pe);
					else
						ptrNativeObject->onCloseDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataSource_void_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataSource(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_createDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->createDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataset(pe);
					else
						ptrNativeObject->onCreateDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCreateDataset_void_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCreateDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataset(pe);
					else
						ptrNativeObject->onOpenDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onOpenDataset_void_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onOpenDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeDataset_void_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataset(pe);
					else
						ptrNativeObject->onCloseDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseDataset_void_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseDataset(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_closeAllDatasets_void_CDataSourceActiveEvent_EVDataSourceType(void *pObjectXXXX, _in const void* dataSourceEvent, _in const int dataSourceType )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)dataSourceType);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseAllDatasets(pe);
					else
						ptrNativeObject->onCloseAllDatasets(pe);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCloseAllDatasets_void_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onCloseAllDatasets(pe);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_importData_void_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->importData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onImportData();
					else
						ptrNativeObject->onImportData();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onImportData_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onImportData();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_exportData_void_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->exportData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onExportData();
					else
						ptrNativeObject->onExportData();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onExportData_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onExportData();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					if (dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject::onEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					CDataSourceEventObjectProxy* ptr = dynamic_cast<CDataSourceEventObjectProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceEventObject*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceEventObject_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
