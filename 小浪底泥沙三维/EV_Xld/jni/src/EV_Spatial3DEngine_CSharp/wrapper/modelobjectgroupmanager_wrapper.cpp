/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectgroupmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_getSingletonPtr_CModelObjectGroupManager( )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* objXXXX = EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelObjectManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_createObjectManager_CModelObjectManager_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* ref_pSceneManager )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* objXXXX = ptrNativeObject->createObjectManager(ref_pSceneManager);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_destroyObjectManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneManager )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					ptrNativeObject->destroyObjectManager(pSceneManager);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_destroyAllObjectManager_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					ptrNativeObject->destroyAllObjectManager();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_getNumObjectManager_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNumObjectManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelObjectManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_getObjectManager_CModelObjectManager_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* objXXXX = ptrNativeObject->getObjectManager(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_getLoadWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getLoadWorkQueue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectGroupManager_getUnloadWorkQueue_CWorkQueue(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjectXXXX;
					EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getUnloadWorkQueue();
					return objXXXX;
				}
			}
		}
	}
}
