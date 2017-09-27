/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/lodobjectfactory.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodObjectFactory_getFactory_1CSceneManager(JNIEnv *__env , jclass __clazz, jlong pSceneManager_j)
				{
					EarthView::World::Graphic::CSceneManager *pSceneManager = (EarthView::World::Graphic::CSceneManager*) pSceneManager_j;
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory* __values1 = EarthView::World::Spatial3D::ModelManager::CLodObjectFactory::getFactory(pSceneManager);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodObjectFactory_releaseFactory_1CLodObjectFactory(JNIEnv *__env , jclass __clazz, jlong factory_j)
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory *factory = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) factory_j;
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory::releaseFactory(factory);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodObjectFactory_getSceneManager_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjXXXX;
					EarthView::World::Graphic::CSceneManager* __values1 = pObjectX->getSceneManager();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodObjectFactory_createMeshxObject_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring file_j, jstring group_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* file_ch = (const ev_char*)__env->GetStringUTFChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringUTFChars(file_j, (const char *)file_ch);
					#else
					const ev_wchar* file_ch = (const ev_wchar*)__env->GetStringChars(file_j,JNI_FALSE);
					const EVString file = file_ch;
					__env->ReleaseStringChars(file_j, (const jchar *)file_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
					#else
					const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjXXXX;
					EarthView::World::Spatial3D::ModelManager::CMeshxObject* __values1 = pObjectX->createMeshxObject(file, group);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_LodObjectFactory_destroyObject_1CLodObject(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong obj_j)
				{
					EarthView::World::Spatial3D::ModelManager::CLodObject *obj = (EarthView::World::Spatial3D::ModelManager::CLodObject*) obj_j;
					EarthView::World::Spatial3D::ModelManager::CLodObjectFactory *pObjectX = (EarthView::World::Spatial3D::ModelManager::CLodObjectFactory*) pObjXXXX;
					pObjectX->destroyObject(obj);
				}
			}
		}
	}
}
