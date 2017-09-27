/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/serverconnection.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerConnection_getURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				const EVString& __values1 = pObjectX->getURL();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerConnection_getUserName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				const EVString& __values1 = pObjectX->getUserName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerConnection_getConnectionName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				const EVString& __values1 = pObjectX->getConnectionName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_ServerConnection_getServerPluginFile_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				const EVString& __values1 = pObjectX->getServerPluginFile();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_ServerConnection_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				const EarthView::World::Spatial::EVServerConnectionType __values1 = pObjectX->getType();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerConnection_setURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
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
				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				pObjectX->setURL(url);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerConnection_setUserName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				pObjectX->setUserName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerConnection_setPassword_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring password_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* password_ch = (const ev_char*)__env->GetStringUTFChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringUTFChars(password_j, (const char *)password_ch);
				#else
				const ev_wchar* password_ch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringChars(password_j, (const jchar *)password_ch);
				#endif
				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				pObjectX->setPassword(password);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerConnection_setConnectionName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				pObjectX->setConnectionName(name);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_ServerConnection_setServerPluginFile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring pluginfile_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pluginfile_ch = (const ev_char*)__env->GetStringUTFChars(pluginfile_j,JNI_FALSE);
				const EVString pluginfile = pluginfile_ch;
				__env->ReleaseStringUTFChars(pluginfile_j, (const char *)pluginfile_ch);
				#else
				const ev_wchar* pluginfile_ch = (const ev_wchar*)__env->GetStringChars(pluginfile_j,JNI_FALSE);
				const EVString pluginfile = pluginfile_ch;
				__env->ReleaseStringChars(pluginfile_j, (const jchar *)pluginfile_ch);
				#endif
				EarthView::World::Spatial::CServerConnection *pObjectX = (EarthView::World::Spatial::CServerConnection*) pObjXXXX;
				pObjectX->setServerPluginFile(pluginfile);
			}
		}
	}
}
