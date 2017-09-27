/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectorlayerbackgroundqueuemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getSingletonPtr_CVectorLayerBackgroundQueueManager( )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* objXXXX = EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getExtensionWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getExtensionWorkQueue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getDBLabelWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getDBLabelWorkQueue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getWebOctreeLabelWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWebOctreeLabelWorkQueue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getWebLabelWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWebLabelWorkQueue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_Atlas_CVectorLayerBackgroundQueueManager_getWebExtensionWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWebExtensionWorkQueue();
					return objXXXX;
				}
			}
		}
	}
}
