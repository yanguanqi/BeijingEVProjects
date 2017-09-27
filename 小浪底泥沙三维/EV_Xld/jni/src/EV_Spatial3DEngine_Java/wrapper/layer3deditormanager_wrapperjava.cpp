/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/layer3deditormanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager* __values1 = EarthView::World::Spatial3D::CLayer3DEditorManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager::releaseSingleton();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_getModelLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->getModelLayerEditor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_getEffectLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->getEffectLayerEditor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_getMeshxgLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->getMeshxgLayerEditor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_createModelLayerEditor_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CLayer3DEditorManager *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjXXXX;
				EarthView::World::Spatial3D::CLayer3DEditor* __values1 = pObjectX->createModelLayerEditor();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Layer3DEditorManager_destoryModelLayerEditor_1CLayer3DEditor(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pEditor_j)
			{
				EarthView::World::Spatial3D::CLayer3DEditor *pEditor = (EarthView::World::Spatial3D::CLayer3DEditor*) pEditor_j;
				EarthView::World::Spatial3D::CLayer3DEditorManager *pObjectX = (EarthView::World::Spatial3D::CLayer3DEditorManager*) pObjXXXX;
				pObjectX->destoryModelLayerEditor(pEditor);
			}
		}
	}
}
