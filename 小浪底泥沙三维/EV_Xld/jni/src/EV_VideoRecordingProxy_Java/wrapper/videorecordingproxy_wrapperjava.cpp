/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "videorecordingproxy/videorecordingproxy.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace UtilityTools
		{
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilitytools_VideoRecording_startRecordAsync_1EVString_1Rect_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filePath_j, jlong rectRegion_j, jint framerate_j, jboolean bHighQuality_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* filePath_ch = (const ev_char*)__env->GetStringUTFChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringUTFChars(filePath_j, (const char *)filePath_ch);
				#else
				const ev_wchar* filePath_ch = (const ev_wchar*)__env->GetStringChars(filePath_j,JNI_FALSE);
				const EVString filePath = filePath_ch;
				__env->ReleaseStringChars(filePath_j, (const jchar *)filePath_ch);
				#endif
				const EarthView::World::Graphic::Rect &rectRegion = *(EarthView::World::Graphic::Rect*) rectRegion_j;
				ev_int32 framerate = (ev_int32) framerate_j;
				ev_bool bHighQuality = (ev_bool) bHighQuality_j;
				EarthView::World::UtilityTools::VideoRecording *pObjectX = (EarthView::World::UtilityTools::VideoRecording*) pObjXXXX;
				pObjectX->startRecordAsync(filePath, rectRegion, framerate, bHighQuality);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_utilitytools_VideoRecording_stopRecord_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::UtilityTools::VideoRecording *pObjectX = (EarthView::World::UtilityTools::VideoRecording*) pObjXXXX;
				pObjectX->stopRecord();
			}
		}
	}
}
