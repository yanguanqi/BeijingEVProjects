/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "cachemanager/cachemanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_CacheManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CacheManager& __values1 = EarthView::World::Spatial::CacheManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_CacheManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CacheManager* __values1 = EarthView::World::Spatial::CacheManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_setCacheManageInterval_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint interval_j)
			{
				ev_int32 interval = (ev_int32) interval_j;
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->setCacheManageInterval(interval);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_CacheManager_getCacheManageInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getCacheManageInterval();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_setCacheUpdateListenURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
				const EVString url = url_ch;
				__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
				#else
				const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
				const EVString url = url_ch;
				__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
				#endif
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->setCacheUpdateListenURL(url);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_CacheManager_getCacheUpdateListenURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCacheUpdateListenURL();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_setCacheMaxSize_1ev_1uint64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong maxsize_j)
			{
				ev_uint64 maxsize = *(ev_uint64*) maxsize_j;
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->setCacheMaxSize(maxsize);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_CacheManager_getCacheMaxSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->getCacheMaxSize();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_loadConfig_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->loadConfig();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_saveConfig_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->saveConfig();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_manageLocalCacheData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->manageLocalCacheData();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_setCacheRootDir_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring cacheRootDir_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* cacheRootDir_ch = (const ev_char*)__env->GetStringUTFChars(cacheRootDir_j,JNI_FALSE);
				const EVString cacheRootDir = cacheRootDir_ch;
				__env->ReleaseStringUTFChars(cacheRootDir_j, (const char *)cacheRootDir_ch);
				#else
				const ev_wchar* cacheRootDir_ch = (const ev_wchar*)__env->GetStringChars(cacheRootDir_j,JNI_FALSE);
				const EVString cacheRootDir = cacheRootDir_ch;
				__env->ReleaseStringChars(cacheRootDir_j, (const jchar *)cacheRootDir_ch);
				#endif
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->setCacheRootDir(cacheRootDir);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_CacheManager_getCacheRootDir_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				const EVString& __values1 = pObjectX->getCacheRootDir();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_CacheManager_deleteCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_int32 __values1 = pObjectX->deleteCache();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_start_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->start();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_start_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean workable_j)
			{
				ev_bool workable = (ev_bool) workable_j;
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->start(workable);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_isWorking_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isWorking();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_stop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->stop();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_pauseWork_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->pauseWork();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_CacheManager_continueWork_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				pObjectX->continueWork();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_isPaused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->isPaused();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_CacheManager_clearVectorTileCache_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring datasetName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* datasetName_ch = (const ev_char*)__env->GetStringUTFChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringUTFChars(datasetName_j, (const char *)datasetName_ch);
				#else
				const ev_wchar* datasetName_ch = (const ev_wchar*)__env->GetStringChars(datasetName_j,JNI_FALSE);
				const EVString datasetName = datasetName_ch;
				__env->ReleaseStringChars(datasetName_j, (const jchar *)datasetName_ch);
				#endif
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_bool __values1 = pObjectX->clearVectorTileCache(datasetName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_CacheManager_getCurrentCacheSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CacheManager *pObjectX = (EarthView::World::Spatial::CacheManager*) pObjXXXX;
				ev_uint64 __values1 = pObjectX->getCurrentCacheSize();
				EarthView::World::Core::ev_string __values1_ch;
				__values1_ch<<__values1;
				jstring __values1_j = __env->NewStringUTF(__values1_ch.getString());
				return __values1_j;
			}
		}
	}
}
