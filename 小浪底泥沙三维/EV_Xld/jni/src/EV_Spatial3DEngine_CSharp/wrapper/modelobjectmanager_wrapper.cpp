/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
		}
		namespace Spatial3D
		{
			namespace Dataset
			{
			}
			namespace Atlas
			{
			}
		}
		namespace Spatial
		{
			namespace Octree
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
		namespace Core
		{
		}
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
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectManager_findVisibleObjects_void_CCamera(void *pObjectXXXX, _in EarthView::World::Graphic::CCamera* camera )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjectXXXX;
					ptrNativeObject->findVisibleObjects(camera);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectManager_addLayer_void_CEntityLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CEntityLayer* ref_layer )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjectXXXX;
					ptrNativeObject->addLayer(ref_layer);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectManager_removeLayer_void_CEntityLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::CEntityLayer* layer )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjectXXXX;
					ptrNativeObject->removeLayer(layer);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectManager_getNumLayer_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNumLayer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CEntityLayer*  _stdcall EarthView_World_Spatial3D_ModelManager_CModelObjectManager_getLayer_CEntityLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::CEntityLayer* objXXXX = ptrNativeObject->getLayer(index);
					return objXXXX;
				}
			}
		}
	}
}
