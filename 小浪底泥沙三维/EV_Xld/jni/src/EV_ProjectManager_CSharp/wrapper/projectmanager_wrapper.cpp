/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "projectmanager/projectmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			namespace Database
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
			namespace Display
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
			namespace Utility
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback)(_in char*& tips, _in ev_uint8 percent);
				class IProjectManagerListenerProxy : public EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener
				{
				private:
					EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback* m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback;
					EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback* m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback;
					EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback* m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback;
					EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback* m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback;
				public:
					IProjectManagerListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : IProjectManagerListener(pList)
					{
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void(EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void(EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool(EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8(EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback = pCallback;
					}
					virtual void onProjectFilePreLoaded()
					{
						if(m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback();
						}
						else
							return this->IProjectManagerListener::onProjectFilePreLoaded();
					}
					virtual void onProjectFileLoaded()
					{
						if(m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback();
						}
						else
							return this->IProjectManagerListener::onProjectFileLoaded();
					}
					virtual ev_bool isProjectFileCanLoad()
					{
						if(m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IProjectManagerListener::isProjectFileCanLoad();
					}
					virtual void onProjectLoadingProcessChanged(_in const EVString& tips, _in ev_uint8 percent)
					{
						if(m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback != NULL && this->isCustomExtend())
						{
							char* tips_Char = tips.makeBuffer();
							m_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback(tips_Char, percent);
						}
						else
							return this->IProjectManagerListener::onProjectLoadingProcessChanged(tips, percent);
					}
				};
				REGISTER_FACTORY_CLASS(IProjectManagerListenerProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					if (dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFilePreLoaded();
					else
						ptrNativeObject->onProjectFilePreLoaded();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_Callback* pCallback )
				{
					IProjectManagerListenerProxy* ptr = dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFilePreLoaded_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFilePreLoaded();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					if (dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFileLoaded();
					else
						ptrNativeObject->onProjectFileLoaded();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_Callback* pCallback )
				{
					IProjectManagerListenerProxy* ptr = dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectFileLoaded_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectFileLoaded();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					if (dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::isProjectFileCanLoad();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isProjectFileCanLoad();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_Callback* pCallback )
				{
					IProjectManagerListenerProxy* ptr = dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_isProjectFileCanLoad_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::isProjectFileCanLoad();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8(void *pObjectXXXX, _in const char* tips, _in ev_uint8 percent )
				{
					EarthView::World::Core::ev_string tips1 = tips;
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					if (dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectLoadingProcessChanged(tips1, percent);
					else
						ptrNativeObject->onProjectLoadingProcessChanged(tips1, percent);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_Callback* pCallback )
				{
					IProjectManagerListenerProxy* ptr = dynamic_cast<IProjectManagerListenerProxy*>((EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_IProjectManagerListener_onProjectLoadingProcessChanged_void_EVString_ev_uint8_NoVirtual(void *pObjectXXXX, _in const char* tips, _in ev_uint8 percent )
				{
					EarthView::World::Core::ev_string tips1 = tips;
					EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener::onProjectLoadingProcessChanged(tips1, percent);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSingleton_CProjectManager( )
				{
					EarthView::World::Spatial::Utility::CProjectManager& objXXXX = EarthView::World::Spatial::Utility::CProjectManager::getSingleton();
					EarthView::World::Spatial::Utility::CProjectManager *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Utility::CProjectManager*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSingletonPtr_CProjectManager( )
				{
					EarthView::World::Spatial::Utility::CProjectManager* objXXXX = EarthView::World::Spatial::Utility::CProjectManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setSymbolListener_void_ISymbolListener(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbolListener* ref_pListener )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setSymbolListener(ref_pListener);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbolListener*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSymbolListener_ISymbolListener(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbolListener* objXXXX = ptrNativeObject->getSymbolListener();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setMapFactory_void_IMapFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMapFactory* ref_pFactory )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setMapFactory(ref_pFactory);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMapFactory*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getMapFactory_IMapFactory(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMapFactory* objXXXX = ptrNativeObject->getMapFactory();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setSceneFactory_void_ISceneFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISceneFactory* ref_pFactory )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setSceneFactory(ref_pFactory);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISceneFactory*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSceneFactory_ISceneFactory(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ISceneFactory* objXXXX = ptrNativeObject->getSceneFactory();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_load_ev_int32_EVString(void *pObjectXXXX, _in const char* strPrjFilePath )
				{
					EarthView::World::Core::ev_string strPrjFilePath1 = strPrjFilePath;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->load(strPrjFilePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_autoLoad_ev_int32_EVString_ev_bool(void *pObjectXXXX, _in const char* strPrjFilePath, _in ev_bool isDefaultPro )
				{
					EarthView::World::Core::ev_string strPrjFilePath1 = strPrjFilePath;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->autoLoad(strPrjFilePath1, isDefaultPro);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_isLoading_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isLoading();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_canRenew_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->canRenew();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_renew_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->renew();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_save_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->save();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_autoSave_ev_bool_EVString(void *pObjectXXXX, _in const char* strPrjFilePath )
				{
					EarthView::World::Core::ev_string strPrjFilePath1 = strPrjFilePath;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->autoSave(strPrjFilePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_saveAs_ev_bool_EVString(void *pObjectXXXX, _in const char* strPrjFilePath )
				{
					EarthView::World::Core::ev_string strPrjFilePath1 = strPrjFilePath;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveAs(strPrjFilePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_isProjectChanged_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isProjectChanged();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setProjectChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setProjectChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getDataSourceCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getDataSourceCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addDataSource_ev_bool_EVString_IDataSource(void *pObjectXXXX, _in const char* strName, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_ds )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addDataSource(strName1, ref_ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existDataSource_ev_bool_EVString(void *pObjectXXXX, _in const char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existDataSource(strName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getDataSource_IDataSource_EVString(void *pObjectXXXX, _in const char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSource(strName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getDataSource_IDataSource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSource(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setDataSource_ev_bool_EVString_IDataSource(void *pObjectXXXX, _in const char* strName, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_ds )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setDataSource(strName1, ref_ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeDataSource_ev_bool_EVString(void *pObjectXXXX, _in const char* strName )
				{
					EarthView::World::Core::ev_string strName1 = strName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeDataSource(strName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_clearDataSource_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearDataSource();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setDataSourceChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setDataSourceChanged();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setSymbolFactory_void_ISymbolFactory(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbolFactory* pFactory )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setSymbolFactory(pFactory);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbolFactory*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSymbolFactory_ISymbolFactory(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbolFactory* objXXXX = ptrNativeObject->getSymbolFactory();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSymbolCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSymbolCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addSymbol_ev_bool_EVString_ISymbol(void *pObjectXXXX, _in const char* strID, _in EarthView::World::Spatial::Display::ISymbol* sym )
				{
					EarthView::World::Core::ev_string strID1 = strID;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addSymbol(strID1, sym);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existSymbol_ev_bool_EVString(void *pObjectXXXX, _in const char* strID )
				{
					EarthView::World::Core::ev_string strID1 = strID;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existSymbol(strID1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existImageInAnySymbol_ev_bool_EVString(void *pObjectXXXX, _in const char* strImageID )
				{
					EarthView::World::Core::ev_string strImageID1 = strImageID;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existImageInAnySymbol(strImageID1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSymbol_ISymbol_EVString(void *pObjectXXXX, _in const char* strID )
				{
					EarthView::World::Core::ev_string strID1 = strID;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(strID1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSymbol_ISymbol_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getSymbol(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setSymbol_ev_bool_EVString_ISymbol(void *pObjectXXXX, _in const char* strID, _in EarthView::World::Spatial::Display::ISymbol* sym )
				{
					EarthView::World::Core::ev_string strID1 = strID;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setSymbol(strID1, sym);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeSymbol_ev_bool_EVString(void *pObjectXXXX, _in const char* strID )
				{
					EarthView::World::Core::ev_string strID1 = strID;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeSymbol(strID1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_clearSymbol_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearSymbol();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getMapCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMapCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addMap_ev_bool_IMap(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* ref_pMap )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addMap(ref_pMap);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getMap_IMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IMap*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getMap_IMap_EVString(void *pObjectXXXX, _in const char* strMapName )
				{
					EarthView::World::Core::ev_string strMapName1 = strMapName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IMap* objXXXX = ptrNativeObject->getMap(strMapName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_renameMap_void_IMap_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IMap* pMap, _in const char* newName )
				{
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->renameMap(pMap, newName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existMap_ev_bool_EVString(void *pObjectXXXX, _in const char* strMapName )
				{
					EarthView::World::Core::ev_string strMapName1 = strMapName;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existMap(strMapName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeMap_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeMap(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeMap_ev_bool_EVString(void *pObjectXXXX, _in const char* strMapName )
				{
					EarthView::World::Core::ev_string strMapName1 = strMapName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeMap(strMapName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_clearMap_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->clearMap();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setCurrentMap_ev_bool_EVString(void *pObjectXXXX, _in const char* strMapName )
				{
					EarthView::World::Core::ev_string strMapName1 = strMapName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCurrentMap(strMapName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getCurrentMap_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getCurrentMap();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setMapChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setMapChanged();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setSceneChanged_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setSceneChanged();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getSceneCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getSceneCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addScene_ev_bool_IScene(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::IScene* ref_pScene )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addScene(ref_pScene);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getScene_IScene_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::IScene*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getScene_IScene_EVString(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::IScene* objXXXX = ptrNativeObject->getScene(strSceneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existScene_ev_bool_EVString(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existScene(strSceneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeScene_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeScene(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeScene_ev_bool_EVString(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeScene(strSceneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_clearScene_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->clearScene();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addLayout_ev_bool_IPageLayout(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPageLayout* ref_layout )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addLayout(ref_layout);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getLayoutCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getLayoutCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getLayout_IPageLayout_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->getLayout(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Carto::IPageLayout*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getLayout_IPageLayout_EVString(void *pObjectXXXX, _in const char* strLayoutName )
				{
					EarthView::World::Core::ev_string strLayoutName1 = strLayoutName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* objXXXX = ptrNativeObject->getLayout(strLayoutName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_renameLayout_void_IPageLayout_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Carto::IPageLayout* pLayout, _in const char* newName )
				{
					EarthView::World::Core::ev_string newName1 = newName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->renameLayout(pLayout, newName1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_existLayout_ev_bool_EVString(void *pObjectXXXX, _in const char* strLayoutName )
				{
					EarthView::World::Core::ev_string strLayoutName1 = strLayoutName;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existLayout(strLayoutName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeLayout_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayout(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeLayout_ev_bool_EVString(void *pObjectXXXX, _in const char* strLayoutName )
				{
					EarthView::World::Core::ev_string strLayoutName1 = strLayoutName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeLayout(strLayoutName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_clearLayout_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->clearLayout();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setCurrentLayout_ev_bool_EVString(void *pObjectXXXX, _in const char* strLayoutName )
				{
					EarthView::World::Core::ev_string strLayoutName1 = strLayoutName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCurrentLayout(strLayoutName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getCurrentLayout_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getCurrentLayout();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setCurrentScene_ev_bool_EVString(void *pObjectXXXX, _in const char* strSceneName )
				{
					EarthView::World::Core::ev_string strSceneName1 = strSceneName;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->setCurrentScene(strSceneName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getCurrentScene_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getCurrentScene();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Utility_CProjectManager_setExtension_void_EVString(void *pObjectXXXX, _in const char* NodeTxt )
				{
					EarthView::World::Core::ev_string NodeTxt1 = NodeTxt;
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ptrNativeObject->setExtension(NodeTxt1);
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getExtension_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getExtension();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getProjectFilePath_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getProjectFilePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getRelativePathReferToProjectPath_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* fullpath, _inout char*& relpath )
				{
					EarthView::World::Core::ev_string fullpath1 = fullpath;
					EarthView::World::Core::ev_string relpath1 = relpath;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getRelativePathReferToProjectPath(fullpath1, relpath1);
					relpath=relpath1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Utility_CProjectManager_getFullPathReferToProjectPath_EVString_EVString(void *pObjectXXXX, _in const char* relpath )
				{
					EarthView::World::Core::ev_string relpath1 = relpath;
					const EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFullPathReferToProjectPath(relpath1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_addListener_ev_bool_IProjectManagerListener(void *pObjectXXXX, _in EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* ref_listener )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addListener(ref_listener);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Utility_CProjectManager_removeListener_ev_bool_IProjectManagerListener(void *pObjectXXXX, _in EarthView::World::Spatial::Utility::CProjectManager::IProjectManagerListener* listener )
				{
					EarthView::World::Spatial::Utility::CProjectManager* ptrNativeObject = (EarthView::World::Spatial::Utility::CProjectManager*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeListener(listener);
					return objXXXX;
				}
			}
		}
	}
}
