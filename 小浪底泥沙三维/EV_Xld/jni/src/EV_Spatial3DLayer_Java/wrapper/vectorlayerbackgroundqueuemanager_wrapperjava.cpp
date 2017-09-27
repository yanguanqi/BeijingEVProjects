/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dlayer/vectorlayerbackgroundqueuemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager* __values1 = EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager::releaseSingleton();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getExtensionWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getExtensionWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getDBLabelWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getDBLabelWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getWebOctreeLabelWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWebOctreeLabelWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getWebLabelWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWebLabelWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_VectorLayerBackgroundQueueManager_getWebExtensionWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager *pObjectX = (EarthView::World::Spatial3D::Atlas::CVectorLayerBackgroundQueueManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getWebExtensionWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
