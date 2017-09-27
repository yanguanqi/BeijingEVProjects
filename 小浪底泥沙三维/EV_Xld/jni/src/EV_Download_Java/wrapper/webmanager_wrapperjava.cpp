/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/webmanager.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Download::CWebManager& __values1 = EarthView::World::Spatial::Download::CWebManager::getSingleton();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Download::CWebManager* __values1 = EarthView::World::Spatial::Download::CWebManager::getSingletonPtr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebManager_getWebServiceConnection_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j, jstring url_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* url_ch = (const ev_char*)__env->GetStringUTFChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringUTFChars(url_j, (const char *)url_ch);
					#else
					const ev_wchar* url_ch = (const ev_wchar*)__env->GetStringChars(url_j,JNI_FALSE);
					const EVString url = url_ch;
					__env->ReleaseStringChars(url_j, (const jchar *)url_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					EarthView::World::Spatial::Download::CWebServiceConnection* __values1 = pObjectX->getWebServiceConnection(name, url);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebManager_setConnectOutTime_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint outtime_j)
				{
					ev_int32 outtime = (ev_int32) outtime_j;
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					pObjectX->setConnectOutTime(outtime);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_WebManager_getConnectOutTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getConnectOutTime();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_download_WebManager_setAutoConnectInterval_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint interval_j)
				{
					ev_int32 interval = (ev_int32) interval_j;
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					pObjectX->setAutoConnectInterval(interval);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_download_WebManager_getAutoConnectInterval_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getAutoConnectInterval();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_download_WebManager_installServicePlugin_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginFile_j, jstring host_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pluginFile_ch = (const ev_char*)__env->GetStringUTFChars(pluginFile_j,JNI_FALSE);
					const EVString pluginFile = pluginFile_ch;
					__env->ReleaseStringUTFChars(pluginFile_j, (const char *)pluginFile_ch);
					#else
					const ev_wchar* pluginFile_ch = (const ev_wchar*)__env->GetStringChars(pluginFile_j,JNI_FALSE);
					const EVString pluginFile = pluginFile_ch;
					__env->ReleaseStringChars(pluginFile_j, (const jchar *)pluginFile_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* host_ch = (const ev_char*)__env->GetStringUTFChars(host_j,JNI_FALSE);
					const EVString host = host_ch;
					__env->ReleaseStringUTFChars(host_j, (const char *)host_ch);
					#else
					const ev_wchar* host_ch = (const ev_wchar*)__env->GetStringChars(host_j,JNI_FALSE);
					const EVString host = host_ch;
					__env->ReleaseStringChars(host_j, (const jchar *)host_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					ev_bool __values1 = pObjectX->installServicePlugin(pluginFile, host);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebManager_getConnectionImpPlugin_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginFile_j, jstring serverHost_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pluginFile_ch = (const ev_char*)__env->GetStringUTFChars(pluginFile_j,JNI_FALSE);
					const EVString pluginFile = pluginFile_ch;
					__env->ReleaseStringUTFChars(pluginFile_j, (const char *)pluginFile_ch);
					#else
					const ev_wchar* pluginFile_ch = (const ev_wchar*)__env->GetStringChars(pluginFile_j,JNI_FALSE);
					const EVString pluginFile = pluginFile_ch;
					__env->ReleaseStringChars(pluginFile_j, (const jchar *)pluginFile_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* serverHost_ch = (const ev_char*)__env->GetStringUTFChars(serverHost_j,JNI_FALSE);
					const EVString serverHost = serverHost_ch;
					__env->ReleaseStringUTFChars(serverHost_j, (const char *)serverHost_ch);
					#else
					const ev_wchar* serverHost_ch = (const ev_wchar*)__env->GetStringChars(serverHost_j,JNI_FALSE);
					const EVString serverHost = serverHost_ch;
					__env->ReleaseStringChars(serverHost_j, (const jchar *)serverHost_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					EarthView::World::Spatial::Download::ConnectionImpPlugin* __values1 = pObjectX->getConnectionImpPlugin(pluginFile, serverHost);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_WebManager_getPluginPath_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring serverHost_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* serverHost_ch = (const ev_char*)__env->GetStringUTFChars(serverHost_j,JNI_FALSE);
					const EVString serverHost = serverHost_ch;
					__env->ReleaseStringUTFChars(serverHost_j, (const char *)serverHost_ch);
					#else
					const ev_wchar* serverHost_ch = (const ev_wchar*)__env->GetStringChars(serverHost_j,JNI_FALSE);
					const EVString serverHost = serverHost_ch;
					__env->ReleaseStringChars(serverHost_j, (const jchar *)serverHost_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					EVString __values1 = pObjectX->getPluginPath(serverHost);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_download_WebManager_getPluginsInfo_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginsFolder_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pluginsFolder_ch = (const ev_char*)__env->GetStringUTFChars(pluginsFolder_j,JNI_FALSE);
					const EVString pluginsFolder = pluginsFolder_ch;
					__env->ReleaseStringUTFChars(pluginsFolder_j, (const char *)pluginsFolder_ch);
					#else
					const ev_wchar* pluginsFolder_ch = (const ev_wchar*)__env->GetStringChars(pluginsFolder_j,JNI_FALSE);
					const EVString pluginsFolder = pluginsFolder_ch;
					__env->ReleaseStringChars(pluginsFolder_j, (const jchar *)pluginsFolder_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					EarthView::World::Core::StringVector __values1 = pObjectX->getPluginsInfo(pluginsFolder);
					EarthView::World::Core::StringVector *returnvalues = new EarthView::World::Core::StringVector(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_download_WebManager_getPluginPathByPluginName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* pluginName_ch = (const ev_char*)__env->GetStringUTFChars(pluginName_j,JNI_FALSE);
					const EVString pluginName = pluginName_ch;
					__env->ReleaseStringUTFChars(pluginName_j, (const char *)pluginName_ch);
					#else
					const ev_wchar* pluginName_ch = (const ev_wchar*)__env->GetStringChars(pluginName_j,JNI_FALSE);
					const EVString pluginName = pluginName_ch;
					__env->ReleaseStringChars(pluginName_j, (const jchar *)pluginName_ch);
					#endif
					EarthView::World::Spatial::Download::CWebManager *pObjectX = (EarthView::World::Spatial::Download::CWebManager*) pObjXXXX;
					EVString __values1 = pObjectX->getPluginPathByPluginName(pluginName);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
			}
		}
	}
}
