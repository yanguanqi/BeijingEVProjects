/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/datasourcemanager/datasourceurl.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_setURL_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring url_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					pObjectX->setURL(url);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_getURL_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					EVString __values1 = pObjectX->getURL();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_medium_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					const EVString& __values1 = pObjectX->medium();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_connectParameter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					const EVString& __values1 = pObjectX->connectParameter();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_getAliasName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					const EVString& __values1 = pObjectX->getAliasName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURL_setAliasName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strAliasName_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* strAliasName_ch = (const ev_char*)__env->GetStringUTFChars(strAliasName_j,JNI_FALSE);
					const EVString strAliasName = strAliasName_ch;
					__env->ReleaseStringUTFChars(strAliasName_j, (const char *)strAliasName_ch);
					#else
					const ev_wchar* strAliasName_ch = (const ev_wchar*)__env->GetStringChars(strAliasName_j,JNI_FALSE);
					const EVString strAliasName = strAliasName_ch;
					__env->ReleaseStringChars(strAliasName_j, (const jchar *)strAliasName_ch);
					#endif
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) pObjXXXX;
					pObjectX->setAliasName(strAliasName);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1sourcetype_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->sourcetype;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1sourcetype_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->sourcetype = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1connectpath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->connectpath;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1connectpath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->connectpath = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1username_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->username;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1username_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->username = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1password_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->password;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1password_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->password = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1sourcename_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->sourcename;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1sourcename_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->sourcename = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1ip_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->ip;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1ip_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->ip = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1port_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->port;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1port_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->port = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1dbtype_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->dbtype;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1dbtype_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->dbtype = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1serviceplugin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					EarthView::World::Core::ev_wstring __values1_ch = pObjectX->serviceplugin;
					jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1serviceplugin_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
					pObjectX->serviceplugin = __values1_ch;
					__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_get_1serverType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->serverType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLStruct_set_1serverType_1WebServerType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *pObjectX = (EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*)pObjXXXX;
					pObjectX->serverType = (EarthView::World::Utilities::WebServerType)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLTool_createFileDataSourceUrl_1CDataSourceURLStruct(JNIEnv *__env , jclass __clazz, jlong urlStruct_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct &urlStruct = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct*) urlStruct_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::createFileDataSourceUrl(urlStruct);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLTool_parseDataSourceUrl_1EVString(JNIEnv *__env , jclass __clazz, jstring url_j)
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::parseDataSourceUrl(url);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_frameworkproxy_datasourcemanager_DataSourceURLTool_parseDataSourceUrl_1CDataSourceURL(JNIEnv *__env , jclass __clazz, jlong url_j)
				{
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL &url = *(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL*) url_j;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct __values1 = EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLTool::parseDataSourceUrl(url);
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct *returnvalues = new EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
