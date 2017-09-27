/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourceoption.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_utilities_WebServerTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					EarthViewServer,
					OGC_WMTS,
					OGC_WMS,
					OGC_WFS,
					Other
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOption_open_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DataSourceOption *pObjectX = (EarthView::World::Utilities::DataSourceOption*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption_Open& __values1 = pObjectX->open();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOption_create_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DataSourceOption *pObjectX = (EarthView::World::Utilities::DataSourceOption*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption_Create& __values1 = pObjectX->create();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpenDb_sqlite_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filepath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filepath_ch = (const ev_char*)__env->GetStringUTFChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringUTFChars(filepath_j, (const char *)filepath_ch);
				#else
				const ev_wchar* filepath_ch = (const ev_wchar*)__env->GetStringChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringChars(filepath_j, (const jchar *)filepath_ch);
				#endif
				EarthView::World::Utilities::DataSourceOption_Open_DB *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->sqlite(filepath);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpenDb_odbc_1EVString_1int_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ip_j, jint port_j, jstring user_j, jstring password_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ip_ch = (const ev_char*)__env->GetStringUTFChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringUTFChars(ip_j, (const char *)ip_ch);
				#else
				const ev_wchar* ip_ch = (const ev_wchar*)__env->GetStringChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringChars(ip_j, (const jchar *)ip_ch);
				#endif
				int port = (int) port_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* user_ch = (const ev_char*)__env->GetStringUTFChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringUTFChars(user_j, (const char *)user_ch);
				#else
				const ev_wchar* user_ch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringChars(user_j, (const jchar *)user_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* password_ch = (const ev_char*)__env->GetStringUTFChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringUTFChars(password_j, (const char *)password_ch);
				#else
				const ev_wchar* password_ch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringChars(password_j, (const jchar *)password_ch);
				#endif
				EarthView::World::Utilities::DataSourceOption_Open_DB *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->odbc(ip, port, user, password);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpenDb_oracle_1EVString_1int_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ip_j, jint port_j, jstring user_j, jstring password_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ip_ch = (const ev_char*)__env->GetStringUTFChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringUTFChars(ip_j, (const char *)ip_ch);
				#else
				const ev_wchar* ip_ch = (const ev_wchar*)__env->GetStringChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringChars(ip_j, (const jchar *)ip_ch);
				#endif
				int port = (int) port_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* user_ch = (const ev_char*)__env->GetStringUTFChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringUTFChars(user_j, (const char *)user_ch);
				#else
				const ev_wchar* user_ch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringChars(user_j, (const jchar *)user_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* password_ch = (const ev_char*)__env->GetStringUTFChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringUTFChars(password_j, (const char *)password_ch);
				#else
				const ev_wchar* password_ch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringChars(password_j, (const jchar *)password_ch);
				#endif
				EarthView::World::Utilities::DataSourceOption_Open_DB *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open_DB*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->oracle(ip, port, user, password);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionCreateDb_sqlite_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filepath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filepath_ch = (const ev_char*)__env->GetStringUTFChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringUTFChars(filepath_j, (const char *)filepath_ch);
				#else
				const ev_wchar* filepath_ch = (const ev_wchar*)__env->GetStringChars(filepath_j,JNI_FALSE);
				const EVString filepath = filepath_ch;
				__env->ReleaseStringChars(filepath_j, (const jchar *)filepath_ch);
				#endif
				EarthView::World::Utilities::DataSourceOption_Create_DB *pObjectX = (EarthView::World::Utilities::DataSourceOption_Create_DB*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->sqlite(filepath);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpen_db_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DataSourceOption_Open *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption_Open_DB& __values1 = pObjectX->db();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpen_file_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring dirPath_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* dirPath_ch = (const ev_char*)__env->GetStringUTFChars(dirPath_j,JNI_FALSE);
				const EVString dirPath = dirPath_ch;
				__env->ReleaseStringUTFChars(dirPath_j, (const char *)dirPath_ch);
				#else
				const ev_wchar* dirPath_ch = (const ev_wchar*)__env->GetStringChars(dirPath_j,JNI_FALSE);
				const EVString dirPath = dirPath_ch;
				__env->ReleaseStringChars(dirPath_j, (const jchar *)dirPath_ch);
				#endif
				EarthView::World::Utilities::DataSourceOption_Open *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->file(dirPath);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpen_web_1EVString_1int_1EVString_1EVString_1EVString_1WebServerType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ip_j, jint port_j, jstring user_j, jstring password_j, jstring pluginFile_j, jint serverType_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* ip_ch = (const ev_char*)__env->GetStringUTFChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringUTFChars(ip_j, (const char *)ip_ch);
				#else
				const ev_wchar* ip_ch = (const ev_wchar*)__env->GetStringChars(ip_j,JNI_FALSE);
				const EVString ip = ip_ch;
				__env->ReleaseStringChars(ip_j, (const jchar *)ip_ch);
				#endif
				int port = (int) port_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* user_ch = (const ev_char*)__env->GetStringUTFChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringUTFChars(user_j, (const char *)user_ch);
				#else
				const ev_wchar* user_ch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringChars(user_j, (const jchar *)user_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* password_ch = (const ev_char*)__env->GetStringUTFChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringUTFChars(password_j, (const char *)password_ch);
				#else
				const ev_wchar* password_ch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringChars(password_j, (const jchar *)password_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pluginFile_ch = (const ev_char*)__env->GetStringUTFChars(pluginFile_j,JNI_FALSE);
				const EVString pluginFile = pluginFile_ch;
				__env->ReleaseStringUTFChars(pluginFile_j, (const char *)pluginFile_ch);
				#else
				const ev_wchar* pluginFile_ch = (const ev_wchar*)__env->GetStringChars(pluginFile_j,JNI_FALSE);
				const EVString pluginFile = pluginFile_ch;
				__env->ReleaseStringChars(pluginFile_j, (const jchar *)pluginFile_ch);
				#endif
				EarthView::World::Utilities::WebServerType serverType = (EarthView::World::Utilities::WebServerType) serverType_j;
				EarthView::World::Utilities::DataSourceOption_Open *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->web(ip, port, user, password, pluginFile, serverType);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionOpen_web_1EVString_1EVString_1EVString_1EVString_1WebServerType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j, jstring user_j, jstring password_j, jstring pluginFile_j, jint serverType_j)
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
				const ev_char* user_ch = (const ev_char*)__env->GetStringUTFChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringUTFChars(user_j, (const char *)user_ch);
				#else
				const ev_wchar* user_ch = (const ev_wchar*)__env->GetStringChars(user_j,JNI_FALSE);
				const EVString user = user_ch;
				__env->ReleaseStringChars(user_j, (const jchar *)user_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* password_ch = (const ev_char*)__env->GetStringUTFChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringUTFChars(password_j, (const char *)password_ch);
				#else
				const ev_wchar* password_ch = (const ev_wchar*)__env->GetStringChars(password_j,JNI_FALSE);
				const EVString password = password_ch;
				__env->ReleaseStringChars(password_j, (const jchar *)password_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* pluginFile_ch = (const ev_char*)__env->GetStringUTFChars(pluginFile_j,JNI_FALSE);
				const EVString pluginFile = pluginFile_ch;
				__env->ReleaseStringUTFChars(pluginFile_j, (const char *)pluginFile_ch);
				#else
				const ev_wchar* pluginFile_ch = (const ev_wchar*)__env->GetStringChars(pluginFile_j,JNI_FALSE);
				const EVString pluginFile = pluginFile_ch;
				__env->ReleaseStringChars(pluginFile_j, (const jchar *)pluginFile_ch);
				#endif
				EarthView::World::Utilities::WebServerType serverType = (EarthView::World::Utilities::WebServerType) serverType_j;
				EarthView::World::Utilities::DataSourceOption_Open *pObjectX = (EarthView::World::Utilities::DataSourceOption_Open*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption& __values1 = pObjectX->web(url, user, password, pluginFile, serverType);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_utilities_DataSourceOptionCreate_db_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::DataSourceOption_Create *pObjectX = (EarthView::World::Utilities::DataSourceOption_Create*) pObjXXXX;
				EarthView::World::Utilities::DataSourceOption_Create_DB& __values1 = pObjectX->db();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
		}
	}
}
