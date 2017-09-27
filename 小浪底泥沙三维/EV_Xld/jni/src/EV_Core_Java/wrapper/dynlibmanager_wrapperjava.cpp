/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dynlibmanager.h"
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
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DynLibManager_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CDynLibManager& __values1 = EarthView::World::Core::CDynLibManager::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DynLibManager_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CDynLibManager* __values1 = EarthView::World::Core::CDynLibManager::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DynLibManager_load_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
				#else
				const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
				const EVString filename = filename_ch;
				__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
				#endif
				EarthView::World::Core::CDynLibManager *pObjectX = (EarthView::World::Core::CDynLibManager*) pObjXXXX;
				EarthView::World::Core::CDynLib* __values1 = pObjectX->load(filename);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DynLibManager_unload_1CDynLib(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lib_j)
			{
				EarthView::World::Core::CDynLib *lib = (EarthView::World::Core::CDynLib*) lib_j;
				EarthView::World::Core::CDynLibManager *pObjectX = (EarthView::World::Core::CDynLibManager*) pObjXXXX;
				pObjectX->unload(lib);
			}
		}
	}
}
