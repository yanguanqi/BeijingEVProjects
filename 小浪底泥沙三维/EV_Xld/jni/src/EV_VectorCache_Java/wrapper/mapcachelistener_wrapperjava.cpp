/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/mapcachelistener.h"
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
			namespace MapCache
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_setStop_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean stop_j)
				{
					ev_bool stop = (ev_bool) stop_j;
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->setStop(stop);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_getStop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->getStop();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_incrementFinishNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->incrementFinishNum();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_setFinishNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
				{
					ev_uint32 num = (ev_uint32) num_j;
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->setFinishNum(num);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_getFinishNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getFinishNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_setTotalNum_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong num_j)
				{
					ev_uint32 num = (ev_uint32) num_j;
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->setTotalNum(num);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_getTotalNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getTotalNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_setErrorMessage_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring str_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* str_ch = (const ev_char*)__env->GetStringUTFChars(str_j,JNI_FALSE);
					const EVString str = str_ch;
					__env->ReleaseStringUTFChars(str_j, (const char *)str_ch);
					#else
					const ev_wchar* str_ch = (const ev_wchar*)__env->GetStringChars(str_j,JNI_FALSE);
					const EVString str = str_ch;
					__env->ReleaseStringChars(str_j, (const jchar *)str_ch);
					#endif
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->setErrorMessage(str);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_getErrorMessage_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					EVString __values1 = pObjectX->getErrorMessage();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_getClipFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					ev_bool __values1 = pObjectX->getClipFlag();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_setClipFlag_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->setClipFlag(flag);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_ev_1clone_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					EarthView::World::Spatial::MapCache::CMapCacheListener* __values1 = pObjectX->clone();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_mapcache_MapCacheListener_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::MapCache::CMapCacheListener *pObjectX = (EarthView::World::Spatial::MapCache::CMapCacheListener*) pObjXXXX;
					pObjectX->reset();
				}
			}
		}
	}
}
