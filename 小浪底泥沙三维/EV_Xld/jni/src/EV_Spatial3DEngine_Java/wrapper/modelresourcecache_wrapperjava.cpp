/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelresourcecache.h"
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
			namespace ModelManager
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialPriority_addItem_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjXXXX;
					pObjectX->addItem(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialPriority_removeItem_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjXXXX;
					pObjectX->removeItem(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialPriority_getPriorityItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getPriorityItem();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialPriority_updatePriority_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialPriority *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialPriority*) pObjXXXX;
					pObjectX->updatePriority(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_lock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->lock();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_unlock_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->unlock();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_setGroupName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring group_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* group_ch = (const ev_char*)__env->GetStringUTFChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringUTFChars(group_j, (const char *)group_ch);
					#else
					const ev_wchar* group_ch = (const ev_wchar*)__env->GetStringChars(group_j,JNI_FALSE);
					const EVString group = group_ch;
					__env->ReleaseStringChars(group_j, (const jchar *)group_ch);
					#endif
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->setGroupName(group);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_setMaterialCacheSize_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong size_j)
				{
					ev_uint32 size = (ev_uint32) size_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->setMaterialCacheSize(size);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_getMaterialCacheSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getMaterialCacheSize();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_hasMaterialCache_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelID_j)
				{
					ev_uint32 modelID = (ev_uint32) modelID_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasMaterialCache(modelID);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_addMaterial_1ev_1uint32_1MaterialPtrVector(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelID_j, jlong matPtrVec_j)
				{
					ev_uint32 modelID = (ev_uint32) modelID_j;
					const EarthView::World::Spatial3D::MaterialPtrVector &matPtrVec = *(EarthView::World::Spatial3D::MaterialPtrVector*) matPtrVec_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->addMaterial(modelID, matPtrVec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_removeMaterial_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelID_j)
				{
					ev_uint32 modelID = (ev_uint32) modelID_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->removeMaterial(modelID);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_removeAllMaterial_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->removeAllMaterial();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_MaterialResourceCache_unloadMaterial_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong modelID_j)
				{
					ev_uint32 modelID = (ev_uint32) modelID_j;
					EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache *pObjectX = (EarthView::World::Spatial3D::ModelManager::CMaterialResourceCache*) pObjXXXX;
					pObjectX->unloadMaterial(modelID);
				}
			}
		}
	}
}
