/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/webdatasourcecachemanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			namespace DataSourceManager
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_WebDataSourceCacheManager_instance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager& __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager::instance();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_WebDataSourceCacheManager_setUsingCacheURL_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jboolean isUsingCache_j)
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
					ev_bool isUsingCache = (ev_bool) isUsingCache_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjXXXX;
					pObjectX->setUsingCacheURL(url, isUsingCache);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_WebDataSourceCacheManager_isUsingCacheURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->isUsingCacheURL(url);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_WebDataSourceCacheManager_getCachedURLList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CWebDataSourceCacheManager*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getCachedURLList();
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
