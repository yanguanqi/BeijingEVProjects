/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmlcachemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_getSingletonPtr_CKmlCacheManager( )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* objXXXX = EarthView::World::Spatial3D::KmlManager::CKmlCacheManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlPicCache_MemoryDataStreamPtr_EVString(void *pObjectXXXX, _in const char* picPath )
				{
					EarthView::World::Core::ev_string picPath1 = picPath;
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->genKmlPicCache(picPath1);
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlOrKmzCache_EVString_EVString(void *pObjectXXXX, _in const char* kmlPath )
				{
					EarthView::World::Core::ev_string kmlPath1 = kmlPath;
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->genKmlOrKmzCache(kmlPath1);
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlCacheManager_genKmlModelCache_EVString_EVString_CSceneManager(void *pObjectXXXX, _in const char* modelPath, _in EarthView::World::Graphic::CSceneManager* sceneMgr )
				{
					EarthView::World::Core::ev_string modelPath1 = modelPath;
					EarthView::World::Spatial3D::KmlManager::CKmlCacheManager* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlCacheManager*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->genKmlModelCache(modelPath1, sceneMgr);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
