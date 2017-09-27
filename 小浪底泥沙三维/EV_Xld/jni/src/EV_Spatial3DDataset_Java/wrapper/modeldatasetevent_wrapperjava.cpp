/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldatasetevent.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_setEventType_1EntityDatasetEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint evtype_j)
				{
					EarthView::World::Spatial3D::Dataset::EntityDatasetEvent evtype = (EarthView::World::Spatial3D::Dataset::EntityDatasetEvent) evtype_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->setEventType(evtype);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_getEventType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::EntityDatasetEvent __values1 = pObjectX->getEventType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_setOperationType_1EntityDatasetOperType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint evtype_j)
				{
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType evtype = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) evtype_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->setOperationType(evtype);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_getOperationType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType __values1 = pObjectX->getOperationType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_setFeature_1IFeature(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong f_j)
				{
					const EarthView::World::Spatial::GeoDataset::IFeature *f = (const EarthView::World::Spatial::GeoDataset::IFeature*) f_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->setFeature(f);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_getFeature_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFeature* __values1 = pObjectX->getFeature();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_setNotifyOthersFlag_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->setNotifyOthersFlag(flag);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_getNotifyOthersFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getNotifyOthersFlag();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_getCommitID_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cacheID_j, jlong dbID_j)
				{
					ev_uint32 &cacheID = *(ev_uint32*) cacheID_j;
					ev_uint32 &dbID = *(ev_uint32*) dbID_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->getCommitID(cacheID, dbID);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelDatasetEditEvent_setCommitID_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cacheID_j, jlong dbID_j)
				{
					ev_uint32 cacheID = (ev_uint32) cacheID_j;
					ev_uint32 dbID = (ev_uint32) dbID_j;
					EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent *pObjectX = (EarthView::World::Spatial3D::Dataset::CModelDatasetEditEvent*) pObjXXXX;
					pObjectX->setCommitID(cacheID, dbID);
				}
			}
		}
	}
}
