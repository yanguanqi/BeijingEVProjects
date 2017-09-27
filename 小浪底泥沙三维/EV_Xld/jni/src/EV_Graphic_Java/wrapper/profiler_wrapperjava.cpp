/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/profiler.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ProfileGroupMaskHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PROF_USER_DEFAULT,
					PROF_ALL,
					PROF_GENERAL,
					PROF_CULLING,
					PROF_RENDERING
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Profiler_getSingleton_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CProfiler& __values1 = EarthView::World::Graphic::CProfiler::getSingleton();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Profiler_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Graphic::CProfiler* __values1 = EarthView::World::Graphic::CProfiler::getSingletonPtr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_beginProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->beginProfile(profileName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_beginProfile_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j, jlong groupID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				ev_uint32 groupID = (ev_uint32) groupID_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->beginProfile(profileName, groupID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_endProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->endProfile(profileName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_endProfile_1EVString_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j, jlong groupID_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				ev_uint32 groupID = (ev_uint32) groupID_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->endProfile(profileName, groupID);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setEnabled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean enabled_j)
			{
				ev_bool enabled = (ev_bool) enabled_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setEnabled(enabled);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Profiler_getEnabled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->getEnabled();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_enableProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->enableProfile(profileName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_disableProfile_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->disableProfile(profileName);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setProfileGroupMask_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong mask_j)
			{
				ev_uint32 mask = (ev_uint32) mask_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setProfileGroupMask(mask);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Profiler_getProfileGroupMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getProfileGroupMask();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Profiler_watchForMax_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->watchForMax(profileName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Profiler_watchForMin_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->watchForMin(profileName);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Profiler_watchForLimit_1EVString_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j, jdouble limit_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				Real limit = (Real) limit_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->watchForLimit(profileName, limit);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Profiler_watchForLimit_1EVString_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring profileName_j, jdouble limit_j, jboolean greaterThan_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* profileName_ch = (const ev_char*)__env->GetStringUTFChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringUTFChars(profileName_j, (const char *)profileName_ch);
				#else
				const ev_wchar* profileName_ch = (const ev_wchar*)__env->GetStringChars(profileName_j,JNI_FALSE);
				const EVString profileName = profileName_ch;
				__env->ReleaseStringChars(profileName_j, (const jchar *)profileName_ch);
				#endif
				Real limit = (Real) limit_j;
				ev_bool greaterThan = (ev_bool) greaterThan_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_bool __values1 = pObjectX->watchForLimit(profileName, limit, greaterThan);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_logResults_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->logResults();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->reset();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_Profiler_00024DisplayModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CProfiler::DISPLAY_PERCENTAGE,
					CProfiler::DISPLAY_MILLISECONDS
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setDisplayMode_1DisplayMode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint d_j)
			{
				EarthView::World::Graphic::CProfiler::DisplayMode d = (EarthView::World::Graphic::CProfiler::DisplayMode) d_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setDisplayMode(d);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_Profiler_getDisplayMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				EarthView::World::Graphic::CProfiler::DisplayMode __values1 = pObjectX->getDisplayMode();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setUpdateDisplayFrequency_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong freq_j)
			{
				ev_uint32 freq = (ev_uint32) freq_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setUpdateDisplayFrequency(freq);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_Profiler_getUpdateDisplayFrequency_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getUpdateDisplayFrequency();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setOverlayDimensions_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble width_j, jdouble height_j)
			{
				Real width = (Real) width_j;
				Real height = (Real) height_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setOverlayDimensions(width, height);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Profiler_setOverlayPosition_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble left_j, jdouble top_j)
			{
				Real left = (Real) left_j;
				Real top = (Real) top_j;
				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				pObjectX->setOverlayPosition(left, top);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Profiler_getOverlayWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				Real __values1 = pObjectX->getOverlayWidth();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Profiler_getOverlayHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				Real __values1 = pObjectX->getOverlayHeight();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Profiler_getOverlayLeft_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				Real __values1 = pObjectX->getOverlayLeft();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Profiler_getOverlayTop_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CProfiler *pObjectX = (EarthView::World::Graphic::CProfiler*) pObjXXXX;
				Real __values1 = pObjectX->getOverlayTop();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
