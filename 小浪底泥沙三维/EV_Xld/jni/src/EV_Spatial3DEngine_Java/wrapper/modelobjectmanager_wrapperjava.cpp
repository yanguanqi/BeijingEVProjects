/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectManager_findVisibleObjects_1CCamera(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong camera_j)
				{
					EarthView::World::Graphic::CCamera *camera = (EarthView::World::Graphic::CCamera*) camera_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjXXXX;
					pObjectX->findVisibleObjects(camera);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectManager_addLayer_1CEntityLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *ref_layer = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) ref_layer_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjXXXX;
					pObjectX->addLayer(ref_layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectManager_removeLayer_1CEntityLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial3D::Atlas::CEntityLayer *layer = (EarthView::World::Spatial3D::Atlas::CEntityLayer*) layer_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjXXXX;
					pObjectX->removeLayer(layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectManager_getNumLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getNumLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectManager_getLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectManager*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CEntityLayer* __values1 = pObjectX->getLayer(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
