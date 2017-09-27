/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcetreeeventdata.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_setType_void_ActionType(void *pObjectXXXX, _in int t )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					ptrNativeObject->setType((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType)t);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_getType_ActionType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_typ( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType objXXXX = ptrNativeObject->typ;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_typ( void *pObjectXXXX, int  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjectXXXX)->typ = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_effectManageData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData &objXXXX = ptrNativeObject->effectManageData;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_effectManageData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjectXXXX)->effectManageData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_modelManageData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData &objXXXX = ptrNativeObject->modelManageData;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_modelManageData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjectXXXX)->modelManageData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_propertyData( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData &objXXXX = ptrNativeObject->propertyData;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEventData_propertyData( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData*)pObjectXXXX)->propertyData = *(EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*)value;
				}
			}
		}
	}
}
