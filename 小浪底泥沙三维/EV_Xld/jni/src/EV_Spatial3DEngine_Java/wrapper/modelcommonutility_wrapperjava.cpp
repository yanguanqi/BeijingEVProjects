/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/modelcommonutility.h"
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
			namespace Dataset
			{
			}
		}
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1start_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex_start();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1hasNextRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex_hasNextRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1execNextRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex_execNextRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex_save();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_rebuildSpatialIndex_1stop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean commitFlag_j)
				{
					ev_bool commitFlag = (ev_bool) commitFlag_j;
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->rebuildSpatialIndex_stop(commitFlag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j, jdouble altitudeVal_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeVal = (ev_real64) altitudeVal_j;
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex(altitudeMode, altitudeVal);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1start_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint altitudeMode_j, jdouble altitudeVal_j)
				{
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeVal = (ev_real64) altitudeVal_j;
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex_start(altitudeMode, altitudeVal);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1hasNextRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex_hasNextRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1execNextRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex_execNextRecord();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex_save();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_updateSpatialIndex_1stop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean commitFlag_j)
				{
					ev_bool commitFlag = (ev_bool) commitFlag_j;
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility *pObjectX = (EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility*) pObjXXXX;
					ev_bool __values1 = pObjectX->updateSpatialIndex_stop(commitFlag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_modelmanager_ModelDatasetSpatialUtility_getTransformAfterChangeAltitude_1CAxisAlignedBox_1CMatrix4_1CMatrix4_1EVAltitudeMode_1ev_1real64_1ev_1real64_1CMatrix4_1CMatrix4(JNIEnv *__env , jclass __clazz, jlong meshBound_j, jlong meshModelDBMatrix_j, jlong sceneMatrix_j, jint altitudeMode_j, jdouble altitudeVal_j, jdouble dem_j, jlong outSceneMatrix_j, jlong outBoundMatrix_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &meshBound = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) meshBound_j;
					const EarthView::World::Spatial::Math::CMatrix4 &meshModelDBMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) meshModelDBMatrix_j;
					const EarthView::World::Spatial::Math::CMatrix4 &sceneMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) sceneMatrix_j;
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeVal = (ev_real64) altitudeVal_j;
					ev_real64 dem = (ev_real64) dem_j;
					EarthView::World::Spatial::Math::CMatrix4 &outSceneMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) outSceneMatrix_j;
					EarthView::World::Spatial::Math::CMatrix4 &outBoundMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) outBoundMatrix_j;
					EarthView::World::Spatial3D::ModelManager::CModelDatasetSpatialUtility::getTransformAfterChangeAltitude(meshBound, meshModelDBMatrix, sceneMatrix, altitudeMode, altitudeVal, dem, outSceneMatrix, outBoundMatrix);
				}
			}
		}
	}
}
