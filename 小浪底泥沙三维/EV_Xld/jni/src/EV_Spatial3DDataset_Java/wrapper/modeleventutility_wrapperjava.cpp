/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeleventutility.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendStopRenderEvent_1IDataset(JNIEnv *__env , jclass __clazz, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendStopRenderEvent(pDataset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendStartRenderEvent_1IDataset(JNIEnv *__env , jclass __clazz, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendStartRenderEvent(pDataset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendRefreshAllModelEvent_1IDataset(JNIEnv *__env , jclass __clazz, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendRefreshAllModelEvent(pDataset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendUpdateModelEvent_1IDataset_1IFeature_1EntityDatasetOperType(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jlong info_j, jint operType_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *info = (const EarthView::World::Spatial::GeoDataset::IFeature*) info_j;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) operType_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateModelEvent(pDataset, info, operType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendUpdateAltitudeEvent_1IDataset(JNIEnv *__env , jclass __clazz, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateAltitudeEvent(pDataset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendUpdateOctreeEvent_1IDataset_1IFeature_1EntityDatasetOperType(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jlong info_j, jint operType_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					const EarthView::World::Spatial::GeoDataset::IFeature *info = (const EarthView::World::Spatial::GeoDataset::IFeature*) info_j;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) operType_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendUpdateOctreeEvent(pDataset, info, operType);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendRefreshOctreeEvent_1IDataset(JNIEnv *__env , jclass __clazz, jlong pDataset_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendRefreshOctreeEvent(pDataset);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelEventUtility_sendCommitIDEvent_1IDataset_1EntityDatasetOperType_1ev_1uint32_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jint operType_j, jlong cacheID_j, jlong dbID_j)
				{
					EarthView::World::Spatial::GeoDataset::IDataset *pDataset = (EarthView::World::Spatial::GeoDataset::IDataset*) pDataset_j;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType operType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType) operType_j;
					ev_uint32 cacheID = (ev_uint32) cacheID_j;
					ev_uint32 dbID = (ev_uint32) dbID_j;
					EarthView::World::Spatial3D::Dataset::CModelEventUtility::sendCommitIDEvent(pDataset, operType, cacheID, dbID);
				}
			}
		}
	}
}
