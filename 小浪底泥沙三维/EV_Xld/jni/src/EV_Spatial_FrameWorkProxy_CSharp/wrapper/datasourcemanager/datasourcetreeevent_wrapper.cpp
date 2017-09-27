/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourcetreeevent.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap &objXXXX = ptrNativeObject->groupStringInterface;
					EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_DataSourcePropertyData_groupStringInterface( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData*)pObjectXXXX)->groupStringInterface = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*)value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->datasourceName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_ModelManageData_datasourceName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData*)pObjectXXXX)->datasourceName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->datasourceName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourceName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjectXXXX)->datasourceName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath( void *pObjectXXXX )
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->datasourcePath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_EffectManageData_datasourcePath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData*)pObjectXXXX)->datasourcePath = value1;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getActionType_ActionType(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ActionType objXXXX = ptrNativeObject->getActionType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getModelManageData_ModelManageData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData objXXXX = ptrNativeObject->getModelManageData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::ModelManageData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getEffectManageData_EffectManageData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData objXXXX = ptrNativeObject->getEffectManageData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::EffectManageData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_getPropertyData_DataSourcePropertyData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData objXXXX = ptrNativeObject->getPropertyData();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData *pXXXX = new EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent::DataSourcePropertyData(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_DataSourceManager_DataSourceTreeEvent_data_DataSourceTreeEventData(void *pObjectXXXX )
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent* ptrNativeObject = (EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEvent*) pObjectXXXX;
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData& objXXXX = ptrNativeObject->data();
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceTreeEventData *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
			}
		}
	}
}
