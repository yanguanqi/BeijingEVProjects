/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceactiveevent.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_push_back_void_CDatasetActiveEvent(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_front_CDatasetActiveEvent(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& objXXXX = ptrNativeObject->front();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_back_CDatasetActiveEvent(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& objXXXX = ptrNativeObject->back();
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_insert_void_ev_uint32_CDatasetActiveEvent(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_OperatorIndex_CDatasetActiveEvent_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr& objYYYY = *(EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& objXXXX = objYYYY[n];
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_at_CDatasetActiveEvent_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& objXXXX = ptrNativeObject->at(n);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DatasetActiveEventArr_clear_void(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getDatasetActiveEventArr_DatasetActiveEventArr(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr& objXXXX = ptrNativeObject->getDatasetActiveEventArr();
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getDatasetActiveEvent_CDatasetActiveEvent_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& objXXXX = ptrNativeObject->getDatasetActiveEvent(name1);
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_dataSourceURL_CDataSourceURL(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& objXXXX = ptrNativeObject->dataSourceURL();
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_setDataSourceURL_void_CDataSourceURL(void *pObjectXXXX, _in const void* url )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->setDataSourceURL(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*)url);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_addDatasetActiveEvent_void_CDatasetActiveEvent(void *pObjectXXXX, _inout void* datasetActiveEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->addDatasetActiveEvent(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)datasetActiveEvent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_removeDatasetActiveEvent_void_CDatasetActiveEvent(void *pObjectXXXX, _inout void* datasetActiveEvent )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->removeDatasetActiveEvent(*(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent*)datasetActiveEvent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getResponseState_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResponseState();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_setResponseState_void_ev_bool(void *pObjectXXXX, _in ev_bool state )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->setResponseState(state);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getErrorMessage_EVString(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getErrorMessage();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_setErrorMessage_void_EVString(void *pObjectXXXX, _in const char* msg )
				{
					EarthView::World::Core::ev_string msg1 = msg;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					ptrNativeObject->setErrorMessage(msg1);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_CDataSourceActiveEvent_getState_DataSourceState(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent::DataSourceState objXXXX = ptrNativeObject->getState();
					return (int)objXXXX;
				}
			}
		}
	}
}
