/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdatabase/datasetlockmanager.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager* __values1 = EarthView::World::Spatial::GeoDataset::CDatasetLockManager::getSingleton();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_releaseSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager::releaseSingleton();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_lockDataset_1CSqlDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j, jstring datasetname_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->lockDataset(db, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_lockDataset_1IFileDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IFileDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IFileDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->lockDataset(pDataSource, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_unlockDataset_1CSqlDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j, jstring datasetname_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->unlockDataset(db, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_unlockDataset_1CSqlDatabase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->unlockDataset(db);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_unlockDataset_1IFileDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetName_j)
				{
					EarthView::World::Spatial::GeoDataset::IFileDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IFileDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
					#else
					const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
					const EVString datasetName = datasetName_ch;
					__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->unlockDataset(pDataSource, datasetName);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_breakDatasetLock_1CSqlDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j, jstring datasetname_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->breakDatasetLock(db, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_isDatasetLocked_1CSqlDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j, jstring datasetname_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetLocked(db, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_isDatasetLocked_1IFileDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetname_j)
				{
					EarthView::World::Spatial::GeoDataset::IFileDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IFileDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetLocked(pDataSource, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_isDatasetLockedBySelf_1CSqlDatabase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j, jstring datasetname_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetLockedBySelf(db, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_isDatasetLockedBySelf_1IFileDataSource_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pDataSource_j, jstring datasetname_j)
				{
					EarthView::World::Spatial::GeoDataset::IFileDataSource *pDataSource = (EarthView::World::Spatial::GeoDataset::IFileDataSource*) pDataSource_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* datasetname_ch = (const ev_char*)__env->GetStringUTFChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringUTFChars(datasetname_j, (const char *)datasetname_ch);
					#else
					const ev_wchar* datasetname_ch = (const ev_wchar*)__env->GetStringChars(datasetname_j,JNI_FALSE);
					const EVString datasetname = datasetname_ch;
					__env->ReleaseStringChars(datasetname_j, (const jchar *)datasetname_ch);
					#endif
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isDatasetLockedBySelf(pDataSource, datasetname);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_queryAllLockInfo_1CSqlDatabase(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong db_j)
				{
					EarthView::World::Core::Database::CSqlDatabase &db = *(EarthView::World::Core::Database::CSqlDatabase*) db_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector __values1 = pObjectX->queryAllLockInfo(db);
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *returnvalues = new EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockManager_lockerName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDatasetLockManager *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockManager*) pObjXXXX;
					const EVString& __values1 = pObjectX->lockerName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_get_1mDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mDatasetName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_set_1mDatasetName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mDatasetName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_get_1mGuid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mGuid;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_set_1mGuid_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mGuid = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_get_1mTypeName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mTypeName;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_set_1mTypeName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->mTypeName = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_get_1mEVID_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mEVID);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_set_1mEVID_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					pObjectX->mEVID = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_get_1mType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfo_set_1mType_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*)pObjXXXX;
					pObjectX->mType = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_push_1back_1CDatasetLockInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo &t = *(EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) t_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_insert_1ev_1uint32_1CDatasetLockInfo(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfo &t = *(EarthView::World::Spatial::GeoDataset::CDatasetLockInfo*) t_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geodataset_DatasetLockInfoVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector *pObjectX = (EarthView::World::Spatial::GeoDataset::CDatasetLockInfoVector*) pObjXXXX;
					pObjectX->reserve(count);
				}
			}
		}
	}
}
