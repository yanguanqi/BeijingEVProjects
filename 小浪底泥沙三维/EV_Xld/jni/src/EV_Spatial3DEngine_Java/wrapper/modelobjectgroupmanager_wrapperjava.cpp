/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelobjectgroupmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager* __values1 = EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager::releaseSingleton();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_createObjectManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pSceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *ref_pSceneManager = (EarthView::World::Graphic::CSceneManager*) ref_pSceneManager_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* __values1 = pObjectX->createObjectManager(ref_pSceneManager);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_destroyObjectManager_1CSceneManager(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					pObjectX->destroyObjectManager(pSceneManager);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_destroyAllObjectManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					pObjectX->destroyAllObjectManager();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_getNumObjectManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getNumObjectManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_getObjectManager_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CModelObjectManager* __values1 = pObjectX->getObjectManager(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_getLoadWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getLoadWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelObjectGroupManager_getUnloadWorkQueue_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelObjectGroupManager*) pObjXXXX;
					EarthView::World::Core::CWorkQueue* __values1 = pObjectX->getUnloadWorkQueue();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
