/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/lodobjectfactory.h"
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
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObjectFactory_getFactory_CLodObjectFactory_CSceneManager(_in EarthView::World::Graphic::CSceneManager* pSceneManager )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* objXXXX = EarthView::World::Spatial3D::ModelManager::CLodObjectFactory::getFactory(pSceneManager);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObjectFactory_releaseFactory_void_CLodObjectFactory(_in EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* factory )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory::releaseFactory(factory);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObjectFactory_getSceneManager_CSceneManager(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjectXXXX;
					EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CMeshxObject*  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObjectFactory_createMeshxObject_CMeshxObject_EVString_EVString(void *pObjectXXXX, _in const char* file, _in const char* group )
				{
					EarthView::World::Core::ev_string file1 = file;
					EarthView::World::Core::ev_string group1 = group;
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjectXXXX;
					EarthView::World::Spatial3D::ModelManager::CMeshxObject* objXXXX = ptrNativeObject->createMeshxObject(file1, group1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CLodObjectFactory_destroyObject_void_CLodObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CLodObject* obj )
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjectXXXX;
					ptrNativeObject->destroyObject(obj);
				}
			}
		}
	}
}
