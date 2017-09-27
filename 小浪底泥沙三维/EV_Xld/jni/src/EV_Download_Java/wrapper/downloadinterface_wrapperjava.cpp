/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/downloadinterface.h"
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
			namespace Download
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_instance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Download::CDownloadInterface& __values1 = EarthView::World::Spatial::Download::CDownloadInterface::instance();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j)
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
					void *&pData = *(void**) pData_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j, jlong retCode_j)
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
					void *&pData = *(void**) pData_j;
					ev_int32 &retCode = *(ev_int32*) retCode_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData, retCode);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j, jlong retCode_j, jlong responseTime_j)
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
					void *&pData = *(void**) pData_j;
					ev_int32 &retCode = *(ev_int32*) retCode_j;
					ev_int32 &responseTime = *(ev_int32*) responseTime_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData, retCode, responseTime);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j, jlong timeout_ms_j)
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
					void *&pData = *(void**) pData_j;
					ev_uint32 timeout_ms = (ev_uint32) timeout_ms_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData, timeout_ms);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void_1ev_1uint32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j, jlong timeout_ms_j, jlong retCode_j)
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
					void *&pData = *(void**) pData_j;
					ev_uint32 timeout_ms = (ev_uint32) timeout_ms_j;
					ev_int32 &retCode = *(ev_int32*) retCode_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData, timeout_ms, retCode);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_httpGet_1EVString_1void_1ev_1uint32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jlong pData_j, jlong timeout_ms_j, jlong retCode_j, jlong responseTime_j)
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
					void *&pData = *(void**) pData_j;
					ev_uint32 timeout_ms = (ev_uint32) timeout_ms_j;
					ev_int32 &retCode = *(ev_int32*) retCode_j;
					ev_int32 &responseTime = *(ev_int32*) responseTime_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->httpGet(url, pData, timeout_ms, retCode, responseTime);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_releaseHttpGetData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pData_j)
				{
					void *&pData = *(void**) pData_j;
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					pObjectX->releaseHttpGetData(pData);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_DownloadInterface_init_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Download::CDownloadInterface *pObjectX = (EarthView::World::Spatial::Download::CDownloadInterface*) pObjXXXX;
					pObjectX->init();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Urlspeedmanager_addUrl_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
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
					EarthView::World::Spatial::Download::URLSpeedManager *pObjectX = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjXXXX;
					pObjectX->addUrl(url);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Urlspeedmanager_getMaxSpeedUrl_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong url_j, jlong speed_j)
				{
					EVString &url = *(EVString*) url_j;
					ev_int32 &speed = *(ev_int32*) speed_j;
					EarthView::World::Spatial::Download::URLSpeedManager *pObjectX = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjXXXX;
					pObjectX->getMaxSpeedUrl(url, speed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Urlspeedmanager_getMinSpeedUrl_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong url_j, jlong speed_j)
				{
					EVString &url = *(EVString*) url_j;
					ev_int32 &speed = *(ev_int32*) speed_j;
					EarthView::World::Spatial::Download::URLSpeedManager *pObjectX = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjXXXX;
					pObjectX->getMinSpeedUrl(url, speed);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_Urlspeedmanager_updateUrlSpeed_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jint lastReqSpeed_j)
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
					ev_int32 lastReqSpeed = (ev_int32) lastReqSpeed_j;
					EarthView::World::Spatial::Download::URLSpeedManager *pObjectX = (EarthView::World::Spatial::Download::URLSpeedManager*) pObjXXXX;
					pObjectX->updateUrlSpeed(url, lastReqSpeed);
				}
			}
		}
	}
}
