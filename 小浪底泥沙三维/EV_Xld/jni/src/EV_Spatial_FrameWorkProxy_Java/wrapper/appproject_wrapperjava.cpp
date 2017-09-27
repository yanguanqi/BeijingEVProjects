/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appproject.h"
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
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppProject_open_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filepath_j)
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
				EarthView::World::Utilities::AppProject *pObjectX = (EarthView::World::Utilities::AppProject*) pObjXXXX;
				bool __values1 = pObjectX->open(filepath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilities_AppProject_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::AppProject *pObjectX = (EarthView::World::Utilities::AppProject*) pObjXXXX;
				pObjectX->close();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppProject_create_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::AppProject *pObjectX = (EarthView::World::Utilities::AppProject*) pObjXXXX;
				bool __values1 = pObjectX->create();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppProject_save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Utilities::AppProject *pObjectX = (EarthView::World::Utilities::AppProject*) pObjXXXX;
				bool __values1 = pObjectX->save();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_utilities_AppProject_saveAs_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filepath_j)
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
				EarthView::World::Utilities::AppProject *pObjectX = (EarthView::World::Utilities::AppProject*) pObjXXXX;
				bool __values1 = pObjectX->saveAs(filepath);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
