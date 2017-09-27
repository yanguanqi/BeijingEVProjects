/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/WIN32/timerimp.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Timer_setOption_1EVString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring strKey_j, jlong pValue_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* strKey_ch = (const ev_char*)__env->GetStringUTFChars(strKey_j,JNI_FALSE);
				const EVString strKey = strKey_ch;
				__env->ReleaseStringUTFChars(strKey_j, (const char *)strKey_ch);
				#else
				const ev_wchar* strKey_ch = (const ev_wchar*)__env->GetStringChars(strKey_j,JNI_FALSE);
				const EVString strKey = strKey_ch;
				__env->ReleaseStringChars(strKey_j, (const jchar *)strKey_ch);
				#endif
				const void *pValue = (const void*) pValue_j;
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				ev_bool __values1 = pObjectX->setOption(strKey, pValue);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Timer_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Timer_getMilliseconds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMilliseconds();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Timer_getMicroseconds_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMicroseconds();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Timer_getMillisecondsCPU_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMillisecondsCPU();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Timer_getMicrosecondsCPU_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CTimer *pObjectX = (EarthView::World::Graphic::CTimer*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getMicrosecondsCPU();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
