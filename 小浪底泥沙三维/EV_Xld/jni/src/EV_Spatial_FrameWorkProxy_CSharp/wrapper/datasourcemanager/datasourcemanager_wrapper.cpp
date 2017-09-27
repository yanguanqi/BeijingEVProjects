/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcemanager.h"
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
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_push_back_void_CDataSourceActiveEvent(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_front_CDataSourceActiveEvent(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& objXXXX = ptrNativeObject->front();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_back_CDataSourceActiveEvent(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& objXXXX = ptrNativeObject->back();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_insert_void_ev_uint32_CDataSourceActiveEvent(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_OperatorIndex_CDataSourceActiveEvent_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objYYYY = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& objXXXX = objYYYY[n];
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_at_CDataSourceActiveEvent_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& objXXXX = ptrNativeObject->at(n);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceActiveEventArr_clear_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_push_back_void_CDataSourceURLStruct(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_front_CDataSourceURLStruct(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& objXXXX = ptrNativeObject->front();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_back_CDataSourceURLStruct(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& objXXXX = ptrNativeObject->back();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_insert_void_ev_uint32_CDataSourceURLStruct(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_OperatorIndex_CDataSourceURLStruct_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr& objYYYY = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& objXXXX = objYYYY[n];
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_at_CDataSourceURLStruct_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& objXXXX = ptrNativeObject->at(n);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceURLStructArr_clear_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback)(_in const void* datasourceURL);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback)(_in const void* datasourceURL);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback)(_in const void* datasourceURL);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback)(_in const void* dataSourceEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback)(_in const void* dataSourceEvent, _in const void* dataSetEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback)(_in const void* dataSourceEvent, _in const void* dataSetEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback)(_in const void* dataSourceEvent, _in const void* dataSetEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback)(_in const void* dataSourceEvent, _in const int dataSourceType);
				typedef char*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback)(_in char*& aliasName);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback)(_in const void* dataSourceEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback)(_in const void* dataSourceEvent, _in const void* dataSetEvent);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback)(_in const void* dataSourceEvent, _in const void* dataSetEvent);
				typedef const void*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback)();
				typedef void*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback)();
				typedef const void*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback)(_in const void* datasourceURL);
				typedef const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback)();
				typedef const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback)();
				class CDataSourceManagerProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager
				{
				private:
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback;
				public:
					CDataSourceManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourceManager(pList)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback = pCallback;
					}
					virtual ev_bool createDataSource(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback(&datasourceURL);
							return returnValue;
						}
						else
							return this->CDataSourceManager::createDataSource(datasourceURL);
					}
					virtual ev_bool deleteDataSource(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback(&datasourceURL);
							return returnValue;
						}
						else
							return this->CDataSourceManager::deleteDataSource(datasourceURL);
					}
					virtual ev_bool openDataSource(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback(&datasourceURL);
							return returnValue;
						}
						else
							return this->CDataSourceManager::openDataSource(datasourceURL);
					}
					virtual ev_bool closeDataSource(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback(&dataSourceEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::closeDataSource(dataSourceEvent);
					}
					virtual ev_bool openDataset(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback(&dataSourceEvent, &dataSetEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::openDataset(dataSourceEvent, dataSetEvent);
					}
					virtual ev_bool createDataset(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback(&dataSourceEvent, &dataSetEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::createDataset(dataSourceEvent, dataSetEvent);
					}
					virtual ev_bool closeDataset(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback(&dataSourceEvent, &dataSetEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::closeDataset(dataSourceEvent, dataSetEvent);
					}
					virtual ev_bool closeAllDatasets(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback(&dataSourceEvent, (int)dataSourceType);
							return returnValue;
						}
						else
							return this->CDataSourceManager::closeAllDatasets(dataSourceEvent, dataSourceType);
					}
					virtual EVString getDataSourceName(_in const EVString& aliasName)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* aliasName_Char = aliasName.makeBuffer();
							EVString returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback(aliasName_Char);
							return returnValue;
						}
						else
							return this->CDataSourceManager::getDataSourceName(aliasName);
					}
					virtual ev_bool closeAllDatasets(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback(&dataSourceEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::closeAllDatasets(dataSourceEvent);
					}
					virtual ev_bool importData(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback(&dataSourceEvent, &dataSetEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::importData(dataSourceEvent, dataSetEvent);
					}
					virtual ev_bool exportData(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, _in const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback(&dataSourceEvent, &dataSetEvent);
							return returnValue;
						}
						else
							return this->CDataSourceManager::exportData(dataSourceEvent, dataSetEvent);
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& returnValue = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*)m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback();
							return returnValue;
						}
						else
							return this->CDataSourceManager::getDataSourceActiveEventArr();
					}
					virtual EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getInternalDataSourceActiveEventArr()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& returnValue = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*)m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback();
							return returnValue;
						}
						else
							return this->CDataSourceManager::getInternalDataSourceActiveEventArr();
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr(_in const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& returnValue = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr*)m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback(&datasourceURL);
							return returnValue;
						}
						else
							return this->CDataSourceManager::getDataSourceActiveEventArr(datasourceURL);
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* getDataSourcePropertyStringInterfacePtr()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
					}
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* getDataSetPropertyStringInterfacePtr()
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback();
							return returnValue;
						}
						else
							return this->CDataSourceManager::getDataSetPropertyStringInterfacePtr();
					}
				};
				REGISTER_FACTORY_CLASS(CDataSourceManagerProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingleton_CDataSourceManager( )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager& objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getSingleton();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getSingletonPtr_CDataSourceManager( )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataSource_ev_bool_CDataSourceURL_NoVirtual(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::deleteDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataSource_ev_bool_CDataSourceURL_NoVirtual(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::deleteDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->openDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataSource_ev_bool_CDataSourceURL_NoVirtual(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createModelDataset_ev_bool_CDataSourceURL_EVString_CFields_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _inout void* fields, _in ev_bool isTemplate, _in ev_int32 coordSysType, _in ev_int32 coordSys )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createModelDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, *(EarthView::World::Spatial::GeoDataset::CFields*)fields, isTemplate, coordSysType, coordSys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createEffectDataset_ev_bool_CDataSourceURL_EVString_ev_int32(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in ev_int32 coordsys )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createEffectDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, coordsys);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_ev_int32_CFields(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in const int& type, _in const ev_int32& coordSys, _inout void* attrFields )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createVectorDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, (EarthView::World::Spatial::Geometry::EVGeometryType&)type, coordSys, *(EarthView::World::Spatial::GeoDataset::CFields*)attrFields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createVectorDataset_ev_bool_CDataSourceURL_EVString_EVGeometryType_EVString_CFields(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in const int& type, _in const char* wktCoordSys, _inout void* attrFields )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::Core::ev_string wktCoordSys1 = wktCoordSys;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createVectorDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, (EarthView::World::Spatial::Geometry::EVGeometryType&)type, wktCoordSys1, *(EarthView::World::Spatial::GeoDataset::CFields*)attrFields);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createKmlDataset_ev_bool_CDataSourceURL_EVString(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->createKmlDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_addKmlDataset_ev_bool_CDataSourceURL_EVString(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetPath )
				{
					EarthView::World::Core::ev_string datasetPath1 = datasetPath;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addKmlDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetPath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceURL_EVString_EVDataSourceType_EVDatasetType(void *pObjectXXXX, _in const void* datasourceURL, _in const char* datasetName, _in int sourcetype, _in int datasettype )
				{
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, datasetName1, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)sourcetype, (EarthView::World::Spatial::GeoDataset::EVDatasetType)datasettype);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceURL_EVDataSourceType(void *pObjectXXXX, _in const void* datasourceURL, _in int datasourcetype )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)datasourcetype);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceArr_DataSourceURLStructArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr objXXXX = ptrNativeObject->getDBDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getFileDataSourceArr_DataSourceURLStructArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr objXXXX = ptrNativeObject->getFileDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getWebDataSourceArr_DataSourceURLStructArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr objXXXX = ptrNativeObject->getWebDataSourceArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataSource_ev_bool_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataSource(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->openDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_openDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::openDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_createDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::createDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeDataset_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeDataset(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(void *pObjectXXXX, _in const void* dataSourceEvent, _in const int dataSourceType )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)dataSourceType);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)dataSourceType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_EVDataSourceType_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const int dataSourceType )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, (EarthView::World::Spatial::GeoDataset::EVDataSourceType)dataSourceType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceName(aliasName1);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDataSourceName(aliasName1);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceName_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* aliasName )
				{
					EarthView::World::Core::ev_string aliasName1 = aliasName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceName(aliasName1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_closeAllDatasets_ev_bool_CDataSourceActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::closeAllDatasets(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::importData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->importData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_importData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::importData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::exportData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->exportData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_exportData_ev_bool_CDataSourceActiveEvent_CDatasetActiveEvent_NoVirtual(void *pObjectXXXX, _in const void* dataSourceEvent, _in const void* dataSetEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::exportData(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*)dataSourceEvent, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)dataSetEvent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr();
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->getDataSourceActiveEventArr();
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr();
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getInternalDataSourceActiveEventArr();
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->getInternalDataSourceActiveEventArr();
						EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getInternalDataSourceActiveEventArr_DataSourceActiveEventArr_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getInternalDataSourceActiveEventArr();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->getDataSourceActiveEventArr(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
						const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourceActiveEventArr_DataSourceActiveEventArr_CDataSourceURL_NoVirtual(void *pObjectXXXX, _in const void* datasourceURL )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourceActiveEventArr(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)datasourceURL);
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_sendActiveEvent_void_CEvent(_in EarthView::World::Core::CEvent* pEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::sendActiveEvent(pEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showModelManager_void_EVString(void *pObjectXXXX, _in const char* dataSourceName )
				{
					EarthView::World::Core::ev_string dataSourceName1 = dataSourceName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ptrNativeObject->showModelManager(dataSourceName1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showEffectManager_void_EVString(void *pObjectXXXX, _in const char* dataSourceName )
				{
					EarthView::World::Core::ev_string dataSourceName1 = dataSourceName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ptrNativeObject->showEffectManager(dataSourceName1);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_copyDataSetTo_ev_int32_EVString_EVString_EVString(void *pObjectXXXX, _in const char* sourceSourceName, _in const char* dsName, _in const char* targetSourceName )
				{
					EarthView::World::Core::ev_string sourceSourceName1 = sourceSourceName;
					EarthView::World::Core::ev_string dsName1 = dsName;
					EarthView::World::Core::ev_string targetSourceName1 = targetSourceName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->copyDataSetTo(sourceSourceName1, dsName1, targetSourceName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_setLastErrorString_void_EVString(void *pObjectXXXX, _in const char* error )
				{
					EarthView::World::Core::ev_string error1 = error;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ptrNativeObject->setLastErrorString(error1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getLastErrorString_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getLastErrorString();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getModelDataSourcePath_EVString_EVString(void *pObjectXXXX, _in const char* modelDataSourceName )
				{
					EarthView::World::Core::ev_string modelDataSourceName1 = modelDataSourceName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getModelDataSourcePath(modelDataSourceName1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDBDataSourceURL_CDataSourceURL_EVString(void *pObjectXXXX, _in const char* datasourcename )
				{
					EarthView::World::Core::ev_string datasourcename1 = datasourcename;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL objXXXX = ptrNativeObject->getDBDataSourceURL(datasourcename1);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_deleteDataset_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* dataSourceAliasName, _in const char* datasetName )
				{
					EarthView::World::Core::ev_string dataSourceAliasName1 = dataSourceAliasName;
					EarthView::World::Core::ev_string datasetName1 = datasetName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteDataset(dataSourceAliasName1, datasetName1);
					return objXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CDataSourcePropertyStringInterfaceProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface
				{
				private:
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback;
				public:
					CDataSourcePropertyStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSourcePropertyStringInterface(pList)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CDataSourcePropertyStringInterface::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CDataSourcePropertyStringInterface::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CDataSourcePropertyStringInterface::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDataSourcePropertyStringInterface::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CDataSourcePropertyStringInterface::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CDataSourcePropertyStringInterfaceProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CDataSourcePropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSourcePropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CDataSourcePropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSourcePropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CDataSourcePropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSourcePropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString_Callback* pCallback )
				{
					CDataSourcePropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSourcePropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CDataSourcePropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSourcePropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSourcePropertyStringInterface_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback)(_in char*& name, _in char*& value);
				typedef ev_bool  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback)(_in char*& name, _in ev_bool readOnly, _in ev_bool enable);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback)(_in const void* paramList);
				typedef char*  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback)(_in char*& name);
				typedef void  ( _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback)(_in EarthView::World::Core::CStringInterface* dest);
				class CDataSetPropertyStringInterfaceProxy : public EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface
				{
				private:
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback;
					EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback;
				public:
					CDataSetPropertyStringInterfaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CDataSetPropertyStringInterface(pList)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback = NULL;
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface(EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback)
					{
						m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback = pCallback;
					}
					virtual ev_bool setParameter(_in const EVString& name, _in const EVString& value)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							char* value_Char = value.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback(name_Char, value_Char);
							return returnValue;
						}
						else
							return this->CDataSetPropertyStringInterface::setParameter(name, value);
					}
					virtual ev_bool setParameter(_in const EVString& name, _in ev_bool readOnly, _in ev_bool enable)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback(name_Char, readOnly, enable);
							return returnValue;
						}
						else
							return this->CDataSetPropertyStringInterface::setParameter(name, readOnly, enable);
					}
					virtual void setParameterList(_in const EarthView::World::Core::CommonStringPairList& paramList)
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback(&paramList);
						}
						else
							return this->CDataSetPropertyStringInterface::setParameterList(paramList);
					}
					virtual EVString getParameter(_in const EVString& name) const
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EVString returnValue = m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CDataSetPropertyStringInterface::getParameter(name);
					}
					virtual void copyParametersTo(_in EarthView::World::Core::CStringInterface* dest) const
					{
						if(m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback(dest);
						}
						else
							return this->CDataSetPropertyStringInterface::copyParametersTo(dest);
					}
				};
				REGISTER_FACTORY_CLASS(CDataSetPropertyStringInterfaceProxy);
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString_Callback* pCallback )
				{
					CDataSetPropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSetPropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool_Callback* pCallback )
				{
					CDataSetPropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSetPropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameter_ev_bool_EVString_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList_Callback* pCallback )
				{
					CDataSetPropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSetPropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_setParameterList_void_CommonStringPairList(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString_Callback* pCallback )
				{
					CDataSetPropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSetPropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_getParameter_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface_Callback* pCallback )
				{
					CDataSetPropertyStringInterfaceProxy* ptr = dynamic_cast<CDataSetPropertyStringInterfaceProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_CDataSetPropertyStringInterface_copyParametersTo_void_CStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
						return objXXXX;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* objXXXX = ptrNativeObject->getDataSourcePropertyStringInterfacePtr();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSourcePropertyStringInterfacePtr_CDataSourcePropertyStringInterface_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSourcePropertyStringInterfacePtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					if (dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*)ptrNativeObject) != NULL)
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSetPropertyStringInterfacePtr();
						return objXXXX;
					}
					else
					{
						const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* objXXXX = ptrNativeObject->getDataSetPropertyStringInterfacePtr();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface( void *pObjectXXXX, EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_Callback* pCallback )
				{
					CDataSourceManagerProxy* ptr = dynamic_cast<CDataSourceManagerProxy*>((EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_getDataSetPropertyStringInterfacePtr_CDataSetPropertyStringInterface_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* objXXXX = ptrNativeObject->EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::getDataSetPropertyStringInterfacePtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSourceProperty_void_EVString_SelectedDataSourceType(void *pObjectXXXX, _in const char* datasourcename, _in int datasourcetype )
				{
					EarthView::World::Core::ev_string datasourcename1 = datasourcename;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ptrNativeObject->showDataSourceProperty(datasourcename1, (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType)datasourcetype);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_showDataSetProperty_void_EVString_SelectedDataSourceType_EVString(void *pObjectXXXX, _in const char* datasourcename, _in int datasourcetype, _in const char* datasetname )
				{
					EarthView::World::Core::ev_string datasourcename1 = datasourcename;
					EarthView::World::Core::ev_string datasetname1 = datasetname;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager*) pObjectXXXX;
					ptrNativeObject->showDataSetProperty(datasourcename1, (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType)datasourcetype, datasetname1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strDatasetType_EVString_EVDatasetType(_in int type )
				{
					EVString objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::strDatasetType((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceManager_strCoordSys_EVString_ev_int32_ev_int32(_in ev_int32 coordSys, _in ev_int32 type )
				{
					EVString objXXXX = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::strCoordSys(coordSys, type);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
