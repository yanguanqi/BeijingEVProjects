/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "videorecordingproxy/videoplayer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace Video
{
	extern "C" JNIEXPORT jboolean JNICALL Java_com_video_VideoPlayer_hasAudioStream_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_bool __values1 = pObjectX->hasAudioStream();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_playVideo_1EVString_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j, jboolean bPlayLoop_j)
	{
		#if EV_PLATFORM == EV_PLATFORM_ANDROID
		const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
		const EVString resourceName = resourceName_ch;
		__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
		#else
		const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
		const EVString resourceName = resourceName_ch;
		__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
		#endif
		ev_bool bPlayLoop = (ev_bool) bPlayLoop_j;
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->playVideo(resourceName, bPlayLoop);
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_playVideo_1EVString_1CTexturePtr_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring resourceName_j, jlong texturePtr_j, jboolean bPlayLoop_j)
	{
		#if EV_PLATFORM == EV_PLATFORM_ANDROID
		const ev_char* resourceName_ch = (const ev_char*)__env->GetStringUTFChars(resourceName_j,JNI_FALSE);
		const EVString resourceName = resourceName_ch;
		__env->ReleaseStringUTFChars(resourceName_j, (const char *)resourceName_ch);
		#else
		const ev_wchar* resourceName_ch = (const ev_wchar*)__env->GetStringChars(resourceName_j,JNI_FALSE);
		const EVString resourceName = resourceName_ch;
		__env->ReleaseStringChars(resourceName_j, (const jchar *)resourceName_ch);
		#endif
		EarthView::World::Graphic::CTexturePtr &texturePtr = *(EarthView::World::Graphic::CTexturePtr*) texturePtr_j;
		ev_bool bPlayLoop = (ev_bool) bPlayLoop_j;
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->playVideo(resourceName, texturePtr, bPlayLoop);
	}
	extern "C" JNIEXPORT jdouble JNICALL Java_com_video_VideoPlayer_getCurrentTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_real64 __values1 = pObjectX->getCurrentTime();
		jdouble __values1_j = (jdouble)__values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT jdouble JNICALL Java_com_video_VideoPlayer_getDuration_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_real64 __values1 = pObjectX->getDuration();
		jdouble __values1_j = (jdouble)__values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_seek_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
	{
		ev_real64 time = (ev_real64) time_j;
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->seek(time);
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_play_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->play();
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_pause_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->pause();
	}
	extern "C" JNIEXPORT jboolean JNICALL Java_com_video_VideoPlayer_isPaused_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_bool __values1 = pObjectX->isPaused();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT jboolean JNICALL Java_com_video_VideoPlayer_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_bool __values1 = pObjectX->update();
		jboolean __values1_j = (jboolean)__values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT void JNICALL Java_com_video_VideoPlayer_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		pObjectX->close();
	}
	extern "C" JNIEXPORT jstring JNICALL Java_com_video_VideoPlayer_getTextureName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		EVString __values1 = pObjectX->getTextureName();
		EarthView::World::Core::ev_wstring valuesw1 = __values1;
		jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
		return __values1_j;
	}
	extern "C" JNIEXPORT jlong JNICALL Java_com_video_VideoPlayer_getVideoWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_uint32 __values1 = pObjectX->getVideoWidth();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
	extern "C" JNIEXPORT jlong JNICALL Java_com_video_VideoPlayer_getVideoHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
	{
		Video::VideoPlayer *pObjectX = (Video::VideoPlayer*) pObjXXXX;
		ev_uint32 __values1 = pObjectX->getVideoHeight();
		jlong __values1_j = (jlong) __values1;
		return __values1_j;
	}
}
