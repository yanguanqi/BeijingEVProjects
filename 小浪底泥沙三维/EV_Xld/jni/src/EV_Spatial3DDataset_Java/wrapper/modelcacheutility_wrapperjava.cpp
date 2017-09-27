/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modelcacheutility.h"
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_clearDataset_1EVString_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jboolean bTemplDataset_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					ev_bool bTemplDataset = (ev_bool) bTemplDataset_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::clearDataset(datasourceName, datasetName, bTemplDataset);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_writeDatasetModel_1EVString_1EVString_1EVString_1IFeature_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong pMeshFeature_j, jlong thumbTextures_j, jlong origTextures_j, jlong cubeTextures_j, jlong materials_j, jlong progs_j, jlong gpus_j, jlong skeletons_j, jlong animation_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &thumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) thumbTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &cubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) cubeTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &materials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) materials_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &progs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) progs_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &gpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) gpus_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &skeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) skeletons_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &animation = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) animation_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeDatasetModel(datasourceName, datasetName, octCode, pMeshFeature, thumbTextures, origTextures, cubeTextures, materials, progs, gpus, skeletons, animation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_writeTemplDBModel_1EVString_1EVString_1EVString_1IFeature_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong pMeshFeature_j, jlong thumbTextures_j, jlong origTextures_j, jlong cubeTextures_j, jlong materials_j, jlong progs_j, jlong gpus_j, jlong skeletons_j, jlong animation_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &thumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) thumbTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &cubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) cubeTextures_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &materials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) materials_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &progs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) progs_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &gpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) gpus_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &skeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) skeletons_j;
					const EarthView::World::Spatial3D::Dataset::FeatureVector &animation = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) animation_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplDBModel(datasourceName, datasetName, octCode, pMeshFeature, thumbTextures, origTextures, cubeTextures, materials, progs, gpus, skeletons, animation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_writeTemplEntity_1EVString_1EVString_1EVString_1IFeature(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring code_j, jlong pMeshFeature_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplEntity(datasourceName, datasetName, code, pMeshFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_deleteDatasetModel_1EVString_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteDatasetModel(datasourceName, datasetName, octCode, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_deleteTemplDBModel_1EVString_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteTemplDBModel(datasourceName, datasetName, octCode, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_deleteTemplEntity_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jlong id_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::deleteTemplEntity(datasourceName, datasetName, id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_updateDatasetEntityInfo_1EVString_1EVString_1EVString_1IFeature(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong pMeshFeature_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateDatasetEntityInfo(datasourceName, datasetName, octCode, pMeshFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_updateTemplDatasetEntityInfo_1EVString_1EVString_1EVString_1IFeature(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong pMeshFeature_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateTemplDatasetEntityInfo(datasourceName, datasetName, octCode, pMeshFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_updateTemplDBInfo_1EVString_1EVString_1IFeature(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jlong pMeshFeature_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					const EarthView::World::Spatial::GeoDataset::IFeature *pMeshFeature = (const EarthView::World::Spatial::GeoDataset::IFeature*) pMeshFeature_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateTemplDBInfo(datasourceName, datasetName, pMeshFeature);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readDatasetModel_1CEntityDataset_1EVString_1ev_1uint32_1IFeature_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jstring octCode_j, jlong id_j, jlong pMeshFeature_j, jlong thumbTextures_j, jlong origTextures_j, jlong cubeTextures_j, jlong materials_j, jlong progs_j, jlong gpus_j, jlong skeletons_j, jlong animation_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset *pDataset = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pDataset_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::IFeature *&pMeshFeature = *(EarthView::World::Spatial::GeoDataset::IFeature**) pMeshFeature_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &thumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) thumbTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &origTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &cubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) cubeTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &materials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) materials_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &progs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) progs_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &gpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) gpus_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &skeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) skeletons_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &animation = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) animation_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetModel(pDataset, octCode, id, pMeshFeature, thumbTextures, origTextures, cubeTextures, materials, progs, gpus, skeletons, animation);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readTemplDBModel_1CMeshTemplateDataset_1EVString_1EVString_1EVString_1ev_1uint32_1IFeature_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector_1FeatureVector(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong id_j, jlong pMeshFeature_j, jlong thumbTextures_j, jlong origTextures_j, jlong cubeTextures_j, jlong materials_j, jlong progs_j, jlong gpus_j, jlong skeletons_j, jlong animatio_j)
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset *pDataset = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pDataset_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::GeoDataset::IFeature *&pMeshFeature = *(EarthView::World::Spatial::GeoDataset::IFeature**) pMeshFeature_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &thumbTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) thumbTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &origTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &cubeTextures = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) cubeTextures_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &materials = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) materials_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &progs = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) progs_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &gpus = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) gpus_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &skeletons = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) skeletons_j;
					EarthView::World::Spatial3D::Dataset::FeatureVector &animatio = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) animatio_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplDBModel(pDataset, datasourceName, datasetName, octCode, id, pMeshFeature, thumbTextures, origTextures, cubeTextures, materials, progs, gpus, skeletons, animatio);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readTemplEntity_1CEntityDataset_1ev_1uint32_1EVString(JNIEnv *__env , jclass __clazz, jlong pDataset_j, jlong id_j, jstring code_j)
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset *pDataset = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pDataset_j;
					ev_uint32 id = (ev_uint32) id_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* code_ch = (const ev_char*)__env->GetStringUTFChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringUTFChars(code_j, (const char *)code_ch);
					#else
					const ev_wchar* code_ch = (const ev_wchar*)__env->GetStringChars(code_j,JNI_FALSE);
					const EVString code = code_ch;
					__env->ReleaseStringChars(code_j, (const jchar *)code_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::IFeature* __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplEntity(pDataset, id, code);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readDatasetModelOrigTexture_1EVString_1EVString_1EVString_1FeatureVector_1TextureStreamVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong origFeatureVec_j, jlong imgTextures_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origFeatureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origFeatureVec_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector &imgTextures = *(EarthView::World::Spatial3D::Dataset::TextureStreamVector*) imgTextures_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetModelOrigTexture(datasourceName, datasetName, octCode, origFeatureVec, imgTextures);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readTemplDatasetOrigTexture_1EVString_1EVString_1EVString_1FeatureVector_1TextureStreamVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong origFeatureVec_j, jlong texStreams_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origFeatureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origFeatureVec_j;
					EarthView::World::Spatial3D::Dataset::TextureStreamVector &texStreams = *(EarthView::World::Spatial3D::Dataset::TextureStreamVector*) texStreams_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplDatasetOrigTexture(datasourceName, datasetName, octCode, origFeatureVec, texStreams);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readMeshTemplID_1EVString_1EVString_1ev_1uint32(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jlong meshInstID_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					ev_uint32 meshInstID = (ev_uint32) meshInstID_j;
					ev_uint32 __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readMeshTemplID(datasourceName, datasetName, meshInstID);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readDatasetAniDataStream_1EVString_1EVString_1EVString_1ev_1uint32_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong meshID_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readDatasetAniDataStream(datasourceName, datasetName, octCode, meshID, stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_readTemplAniDataStream_1EVString_1EVString_1ev_1uint32_1MemoryDataStreamPtr(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jlong meshID_j, jlong stream_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					ev_uint32 meshID = (ev_uint32) meshID_j;
					EarthView::World::Core::MemoryDataStreamPtr &stream = *(EarthView::World::Core::MemoryDataStreamPtr*) stream_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::readTemplAniDataStream(datasourceName, datasetName, meshID, stream);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_writeDatasetModelOrigTexture_1EVString_1EVString_1EVString_1FeatureVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong origFeatureVec_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origFeatureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origFeatureVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeDatasetModelOrigTexture(datasourceName, datasetName, octCode, origFeatureVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_writeTemplDatasetOrigTexture_1EVString_1EVString_1EVString_1FeatureVector(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jstring octCode_j, jlong origFeatureVec_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* octCode_ch = (const ev_char*)__env->GetStringUTFChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringUTFChars(octCode_j, (const char *)octCode_ch);
					#else
					const ev_wchar* octCode_ch = (const ev_wchar*)__env->GetStringChars(octCode_j,JNI_FALSE);
					const EVString octCode = octCode_ch;
					__env->ReleaseStringChars(octCode_j, (const jchar *)octCode_ch);
					#endif
					const EarthView::World::Spatial3D::Dataset::FeatureVector &origFeatureVec = *(EarthView::World::Spatial3D::Dataset::FeatureVector*) origFeatureVec_j;
					ev_bool __values1 = EarthView::World::Spatial3D::Dataset::CModelCacheUtility::writeTemplDatasetOrigTexture(datasourceName, datasetName, octCode, origFeatureVec);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_dataset_ModelCacheUtility_updateAltitudeMode_1EVString_1EVString_1EVDatasetType_1EVAltitudeMode_1ev_1real64(JNIEnv *__env , jclass __clazz, jstring datasourceName_j, jstring datasetName_j, jint type_j, jint altitudeMode_j, jdouble altitudeValue_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::EVDatasetType type = (EarthView::World::Spatial::GeoDataset::EVDatasetType) type_j;
					EarthView::World::Spatial::Utility::EVAltitudeMode altitudeMode = (EarthView::World::Spatial::Utility::EVAltitudeMode) altitudeMode_j;
					ev_real64 altitudeValue = (ev_real64) altitudeValue_j;
					EarthView::World::Spatial3D::Dataset::CModelCacheUtility::updateAltitudeMode(datasourceName, datasetName, type, altitudeMode, altitudeValue);
				}
			}
		}
	}
}
