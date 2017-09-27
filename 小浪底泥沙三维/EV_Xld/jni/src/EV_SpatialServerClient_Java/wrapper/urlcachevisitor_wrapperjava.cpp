/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/urlcachevisitor.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_instance_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor& __values1 = EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor::instance();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_addUsingCacheURL_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jstring servername_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* servername_ch = (const ev_char*)__env->GetStringUTFChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringUTFChars(servername_j, (const char *)servername_ch);
				#else
				const ev_wchar* servername_ch = (const ev_wchar*)__env->GetStringChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringChars(servername_j, (const jchar *)servername_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pObjectX = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjXXXX;
				pObjectX->addUsingCacheURL(url, servername);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_removeUsingCacheURL_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jstring servername_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* servername_ch = (const ev_char*)__env->GetStringUTFChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringUTFChars(servername_j, (const char *)servername_ch);
				#else
				const ev_wchar* servername_ch = (const ev_wchar*)__env->GetStringChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringChars(servername_j, (const jchar *)servername_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pObjectX = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjXXXX;
				pObjectX->removeUsingCacheURL(url, servername);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_isUsingCacheURL_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jstring servername_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* servername_ch = (const ev_char*)__env->GetStringUTFChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringUTFChars(servername_j, (const char *)servername_ch);
				#else
				const ev_wchar* servername_ch = (const ev_wchar*)__env->GetStringChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringChars(servername_j, (const jchar *)servername_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pObjectX = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjXXXX;
				ev_bool __values1 = pObjectX->isUsingCacheURL(url, servername);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_readURLListFromCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pObjectX = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjXXXX;
				EarthView::World::Core::StringVector __values1 = pObjectX->readURLListFromCache();
				EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_Evspatialserverurlcachevisitor_writeURLToCache_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jstring servername_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* servername_ch = (const ev_char*)__env->GetStringUTFChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringUTFChars(servername_j, (const char *)servername_ch);
				#else
				const ev_wchar* servername_ch = (const ev_wchar*)__env->GetStringChars(servername_j,JNI_FALSE);
				const EVString servername = servername_ch;
				__env->ReleaseStringChars(servername_j, (const jchar *)servername_ch);
				#endif
				EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor *pObjectX = (EarthView::World::Spatial::CEVSpatialServerURLCacheVisitor*) pObjXXXX;
				pObjectX->writeURLToCache(url, servername);
			}
		}
	}
}
