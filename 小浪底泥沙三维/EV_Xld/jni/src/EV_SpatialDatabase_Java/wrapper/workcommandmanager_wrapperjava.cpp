/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/workcommandmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_canRedo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canRedo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_canUndo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->canUndo();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_getCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* __values1 = pObjectX->getCommand(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_getUndoLimit_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getUndoLimit();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_setUndoLimit_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong limit_j)
				{
					ev_uint32 limit = (ev_uint32) limit_j;
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					pObjectX->setUndoLimit(limit);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_redo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* __values1 = pObjectX->redo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_undo_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* __values1 = pObjectX->undo();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_beginMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					pObjectX->beginMacro();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_endMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					pObjectX->endMacro();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_isInMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isInMacro();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_abortMacro_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					pObjectX->abortMacro();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_getCurrentIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCurrentIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_push_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CWorkCommand* __values1 = pObjectX->push();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_WorkCommandManager_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CWorkCommandManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CWorkCommandManager*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
