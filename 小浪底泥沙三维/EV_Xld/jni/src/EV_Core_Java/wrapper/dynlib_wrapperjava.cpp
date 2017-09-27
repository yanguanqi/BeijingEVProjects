/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dynlib.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DynLib_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDynLib *pObjectX = (EarthView::World::Core::CDynLib*) pObjXXXX;
				pObjectX->load();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_DynLib_unload_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CDynLib *pObjectX = (EarthView::World::Core::CDynLib*) pObjXXXX;
				pObjectX->unload();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DynLib_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CDynLib *pObjectX = (EarthView::World::Core::CDynLib*) pObjXXXX;
				const EVString& __values1 = pObjectX->getName();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_DynLib_getSymbol_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strName_ch = (const ev_char*)__env->GetStringUTFChars(strName_j,JNI_FALSE);
				const EVString strName = strName_ch;
				__env->ReleaseStringUTFChars(strName_j, (const char *)strName_ch);
				#else
				const ev_wchar* strName_ch = (const ev_wchar*)__env->GetStringChars(strName_j,JNI_FALSE);
				const EVString strName = strName_ch;
				__env->ReleaseStringChars(strName_j, (const jchar *)strName_ch);
				#endif
				const 				EarthView::World::Core::CDynLib *pObjectX = (EarthView::World::Core::CDynLib*) pObjXXXX;
				void* __values1 = pObjectX->getSymbol(strName);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
