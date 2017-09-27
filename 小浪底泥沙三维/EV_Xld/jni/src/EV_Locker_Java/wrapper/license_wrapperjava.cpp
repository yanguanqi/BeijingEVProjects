/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "locker/license.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace License
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_license_EVLicenseResultHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LR_INIT_SUCCESS,
					LR_INIT_FAIL,
					LR_INIT_HAS_MODULE,
					LR_UNINIT_SUCCESS,
					LR_UNINIT_FAIL,
					LR_UNINIT_NOT_MODULE
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_license_EVLicenseStatusTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LS_NOT_MODULE,
					LS_VALID,
					LS_INVALID,
					LS_EXPIRED,
					LS_NOT_LICENSE,
					LS_NOT_KEY
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_license_EVLicenseModuleHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					LM_UNKNOWN,
					LM_EV_GLOBECLIENT_RUNTIME,
					LM_EV_GLOBE_SDK_RUNTIME,
					LM_EV_GLOBECLIENT_DEVELOPE,
					LM_EV_GLOBE_SDK_DEVELOPE,
					LM_EV_GLOBE_DESKTOP,
					LM_EV_SERVER,
					LM_EV_WEBPLUGIN,
					LM_EV_CREATOR,
					LM_EV_CUSTOM
				};
				jintArray array = __env->NewIntArray(10);
				__env->SetIntArrayRegion(array, 0, 10, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_license_License_initialize_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				EarthView::World::License::EVLicenseResult __values1 = pObjectX->initialize(module, value);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_license_License_uninitialize_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				EarthView::World::License::EVLicenseResult __values1 = pObjectX->uninitialize(module, value);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_license_License_getModuleStatus_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				EarthView::World::License::EVLicenseStatusType __values1 = pObjectX->getModuleStatus(module, value);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_license_License_getExpiredDate_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				EVString __values1 = pObjectX->getExpiredDate(module, value);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_license_License_isOffical_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				ev_bool __values1 = pObjectX->isOffical(module, value);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_license_License_getModuleError_1EVLicenseModule_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint module_j, jstring value_j)
			{
				EarthView::World::License::EVLicenseModule module = (EarthView::World::License::EVLicenseModule) module_j;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* value_ch = (const ev_char*)__env->GetStringUTFChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringUTFChars(value_j, (const char *)value_ch);
				#else
				const ev_wchar* value_ch = (const ev_wchar*)__env->GetStringChars(value_j,JNI_FALSE);
				const EVString value = value_ch;
				__env->ReleaseStringChars(value_j, (const jchar *)value_ch);
				#endif
				EarthView::World::License::CLicense *pObjectX = (EarthView::World::License::CLicense*) pObjXXXX;
				EVString __values1 = pObjectX->getModuleError(module, value);
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_license_WebLicense_getModuleStatus_1EVString_1EVString_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring ip_j, jstring port_j, jstring module_j)
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
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* port_ch = (const ev_char*)__env->GetStringUTFChars(port_j,JNI_FALSE);
				const EVString port = port_ch;
				__env->ReleaseStringUTFChars(port_j, (const char *)port_ch);
				#else
				const ev_wchar* port_ch = (const ev_wchar*)__env->GetStringChars(port_j,JNI_FALSE);
				const EVString port = port_ch;
				__env->ReleaseStringChars(port_j, (const jchar *)port_ch);
				#endif
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* module_ch = (const ev_char*)__env->GetStringUTFChars(module_j,JNI_FALSE);
				const EVString module = module_ch;
				__env->ReleaseStringUTFChars(module_j, (const char *)module_ch);
				#else
				const ev_wchar* module_ch = (const ev_wchar*)__env->GetStringChars(module_j,JNI_FALSE);
				const EVString module = module_ch;
				__env->ReleaseStringChars(module_j, (const jchar *)module_ch);
				#endif
				EarthView::World::License::CWebLicense *pObjectX = (EarthView::World::License::CWebLicense*) pObjXXXX;
				EarthView::World::License::EVLicenseStatusType __values1 = pObjectX->getModuleStatus(ip, port, module);
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
		}
	}
}
