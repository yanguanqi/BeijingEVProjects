/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeloctreemanager.h"
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
			namespace Dataset
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasourceModelOctreeManager_1CSqlDatabase_1EVString_1CAxisAlignedBox_1ev_1uint32_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong db_j, jstring datasourceName_j, jlong box_j, jlong maxDepth_j, jboolean autoInit_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManager(db, datasourceName, box, maxDepth, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasourceModelOctreeManagerWithCache_1CSqlDatabase_1EVString_1CAxisAlignedBox_1ev_1uint32_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong db_j, jstring datasourceName_j, jlong box_j, jlong maxDepth_j, jstring cacheFolder_j, jboolean autoInit_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cacheFolder_ch = (const ev_char*)__env->GetStringUTFChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringUTFChars(cacheFolder_j, (const char *)cacheFolder_ch);
					#else
					const ev_wchar* cacheFolder_ch = (const ev_wchar*)__env->GetStringChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringChars(cacheFolder_j, (const jchar *)cacheFolder_ch);
					#endif
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManagerWithCache(db, datasourceName, box, maxDepth, cacheFolder, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasourceModelOctreeManager_1EVString_1EVString_1CAxisAlignedBox_1ev_1uint32_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring web_j, jstring datasourceName_j, jlong box_j, jlong maxDepth_j, jboolean autoInit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* web_ch = (const ev_char*)__env->GetStringUTFChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringUTFChars(web_j, (const char *)web_ch);
					#else
					const ev_wchar* web_ch = (const ev_wchar*)__env->GetStringChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringChars(web_j, (const jchar *)web_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManager(web, datasourceName, box, maxDepth, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasourceModelOctreeManagerWithCache_1EVString_1EVString_1CAxisAlignedBox_1ev_1uint32_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring web_j, jstring datasourceName_j, jlong box_j, jlong maxDepth_j, jstring cacheFolder_j, jboolean autoInit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* web_ch = (const ev_char*)__env->GetStringUTFChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringUTFChars(web_j, (const char *)web_ch);
					#else
					const ev_wchar* web_ch = (const ev_wchar*)__env->GetStringChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringChars(web_j, (const jchar *)web_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasourceName_ch = (const ev_char*)__env->GetStringUTFChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringUTFChars(datasourceName_j, (const char *)datasourceName_ch);
					#else
					const ev_wchar* datasourceName_ch = (const ev_wchar*)__env->GetStringChars(datasourceName_j,JNI_FALSE);
					const EVString datasourceName = datasourceName_ch;
					__env->ReleaseStringChars(datasourceName_j, (const jchar *)datasourceName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cacheFolder_ch = (const ev_char*)__env->GetStringUTFChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringUTFChars(cacheFolder_j, (const char *)cacheFolder_ch);
					#else
					const ev_wchar* cacheFolder_ch = (const ev_wchar*)__env->GetStringChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringChars(cacheFolder_j, (const jchar *)cacheFolder_ch);
					#endif
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasourceModelOctreeManagerWithCache(web, datasourceName, box, maxDepth, cacheFolder, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasetModelOctreeManager_1CSqlDatabase_1EVString_1CAxisAlignedBox_1ev_1uint32_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong db_j, jstring datasetAliasName_j, jlong box_j, jlong maxDepth_j, jboolean autoInit_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetAliasName_ch = (const ev_char*)__env->GetStringUTFChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringUTFChars(datasetAliasName_j, (const char *)datasetAliasName_ch);
					#else
					const ev_wchar* datasetAliasName_ch = (const ev_wchar*)__env->GetStringChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringChars(datasetAliasName_j, (const jchar *)datasetAliasName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManager(db, datasetAliasName, box, maxDepth, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasetModelOctreeManagerWithCache_1CSqlDatabase_1EVString_1CAxisAlignedBox_1ev_1uint32_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong db_j, jstring datasetAliasName_j, jlong box_j, jlong maxDepth_j, jstring cacheFolder_j, jboolean autoInit_j)
				{
					const EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetAliasName_ch = (const ev_char*)__env->GetStringUTFChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringUTFChars(datasetAliasName_j, (const char *)datasetAliasName_ch);
					#else
					const ev_wchar* datasetAliasName_ch = (const ev_wchar*)__env->GetStringChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringChars(datasetAliasName_j, (const jchar *)datasetAliasName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cacheFolder_ch = (const ev_char*)__env->GetStringUTFChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringUTFChars(cacheFolder_j, (const char *)cacheFolder_ch);
					#else
					const ev_wchar* cacheFolder_ch = (const ev_wchar*)__env->GetStringChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringChars(cacheFolder_j, (const jchar *)cacheFolder_ch);
					#endif
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(db, datasetAliasName, box, maxDepth, cacheFolder, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasetModelOctreeManager_1EVString_1EVString_1CAxisAlignedBox_1ev_1uint32_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring web_j, jstring datasetAliasName_j, jlong box_j, jlong maxDepth_j, jboolean autoInit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* web_ch = (const ev_char*)__env->GetStringUTFChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringUTFChars(web_j, (const char *)web_ch);
					#else
					const ev_wchar* web_ch = (const ev_wchar*)__env->GetStringChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringChars(web_j, (const jchar *)web_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetAliasName_ch = (const ev_char*)__env->GetStringUTFChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringUTFChars(datasetAliasName_j, (const char *)datasetAliasName_ch);
					#else
					const ev_wchar* datasetAliasName_ch = (const ev_wchar*)__env->GetStringChars(datasetAliasName_j,JNI_FALSE);
					const EVString datasetAliasName = datasetAliasName_ch;
					__env->ReleaseStringChars(datasetAliasName_j, (const jchar *)datasetAliasName_ch);
					#endif
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManager(web, datasetAliasName, box, maxDepth, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasetModelOctreeManagerWithCache_1EVString_1CEVSpatialServer_1CEVBaseModelDataset_1CAxisAlignedBox_1ev_1uint32_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring web_j, jlong pNetServer_j, jlong pNetDataset_j, jlong box_j, jlong maxDepth_j, jstring cacheFolder_j, jboolean autoInit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* web_ch = (const ev_char*)__env->GetStringUTFChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringUTFChars(web_j, (const char *)web_ch);
					#else
					const ev_wchar* web_ch = (const ev_wchar*)__env->GetStringChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringChars(web_j, (const jchar *)web_ch);
					#endif
					EarthView::World::Spatial::CEVSpatialServer *pNetServer = (EarthView::World::Spatial::CEVSpatialServer*) pNetServer_j;
					EarthView::World::Spatial::CEVBaseModelDataset *pNetDataset = (EarthView::World::Spatial::CEVBaseModelDataset*) pNetDataset_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cacheFolder_ch = (const ev_char*)__env->GetStringUTFChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringUTFChars(cacheFolder_j, (const char *)cacheFolder_ch);
					#else
					const ev_wchar* cacheFolder_ch = (const ev_wchar*)__env->GetStringChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringChars(cacheFolder_j, (const jchar *)cacheFolder_ch);
					#endif
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(web, pNetServer, pNetDataset, box, maxDepth, cacheFolder, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_dataset_ModelOctreeManager_newDatasetModelOctreeManagerWithCache_1EVString_1CEVSpatialServer_1CEVBaseModelDataset_1CEVBaseModelLayerInfo_1CAxisAlignedBox_1ev_1uint32_1EVString_1ev_1bool(JNIEnv *__env , jclass __clazz, jstring web_j, jlong pNetServer_j, jlong pNetDataset_j, jlong pNetDatasetInfo_j, jlong box_j, jlong maxDepth_j, jstring cacheFolder_j, jboolean autoInit_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* web_ch = (const ev_char*)__env->GetStringUTFChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringUTFChars(web_j, (const char *)web_ch);
					#else
					const ev_wchar* web_ch = (const ev_wchar*)__env->GetStringChars(web_j,JNI_FALSE);
					const EVString web = web_ch;
					__env->ReleaseStringChars(web_j, (const jchar *)web_ch);
					#endif
					EarthView::World::Spatial::CEVSpatialServer *pNetServer = (EarthView::World::Spatial::CEVSpatialServer*) pNetServer_j;
					EarthView::World::Spatial::CEVBaseModelDataset *pNetDataset = (EarthView::World::Spatial::CEVBaseModelDataset*) pNetDataset_j;
					EarthView::World::Spatial::CEVBaseModelLayerInfo *pNetDatasetInfo = (EarthView::World::Spatial::CEVBaseModelLayerInfo*) pNetDatasetInfo_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_uint32 maxDepth = (ev_uint32) maxDepth_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* cacheFolder_ch = (const ev_char*)__env->GetStringUTFChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringUTFChars(cacheFolder_j, (const char *)cacheFolder_ch);
					#else
					const ev_wchar* cacheFolder_ch = (const ev_wchar*)__env->GetStringChars(cacheFolder_j,JNI_FALSE);
					const EVString cacheFolder = cacheFolder_ch;
					__env->ReleaseStringChars(cacheFolder_j, (const jchar *)cacheFolder_ch);
					#endif
					ev_bool autoInit = (ev_bool) autoInit_j;
					EarthView::World::Spatial3D::Dataset::CModelOctreeManager* __values1 = EarthView::World::Spatial3D::Dataset::CModelOctreeManager::newDatasetModelOctreeManagerWithCache(web, pNetServer, pNetDataset, pNetDatasetInfo, box, maxDepth, cacheFolder, autoInit);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
