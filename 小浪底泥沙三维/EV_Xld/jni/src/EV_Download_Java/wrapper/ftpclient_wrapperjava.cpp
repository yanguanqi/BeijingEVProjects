/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/ftpclient.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jstring JNICALL Java_global_Ftpclient_pwd_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	EVString __values1 = pObjectX->pwd();
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Ftpclient_dir_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	EarthView::World::Core::CStringArray __values1 = pObjectX->dir();
	EarthView::World::Core::CStringArray *returnvalues = new EarthView::World::Core::CStringArray(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Ftpclient_cd_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring param_j)
{
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* param_ch = (const ev_char*)__env->GetStringUTFChars(param_j,JNI_FALSE);
	const EVString param = param_ch;
	__env->ReleaseStringUTFChars(param_j, (const char *)param_ch);
	#else
	const ev_wchar* param_ch = (const ev_wchar*)__env->GetStringChars(param_j,JNI_FALSE);
	const EVString param = param_ch;
	__env->ReleaseStringChars(param_j, (const jchar *)param_ch);
	#endif
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	ev_bool __values1 = pObjectX->cd(param);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_Ftpclient_get_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j, jint fileformat_j)
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
	ev_int32 fileformat = (ev_int32) fileformat_j;
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	EarthView::World::Core::MemoryDataStreamPtr __values1 = pObjectX->get(filename, fileformat);
	EarthView::World::Core::MemoryDataStreamPtr *returnvalues = new EarthView::World::Core::MemoryDataStreamPtr(__values1);
	((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
	jlong __values1_j = (jlong) returnvalues;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_Ftpclient_put_1MemoryDataStreamPtr_1EVString_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong data_j, jstring filename_j, jint fileformat_j)
{
	EarthView::World::Core::MemoryDataStreamPtr data = *(EarthView::World::Core::MemoryDataStreamPtr*) data_j;
	#if EV_PLATFORM == EV_PLATFORM_ANDROID
	const ev_char* filename_ch = (const ev_char*)__env->GetStringUTFChars(filename_j,JNI_FALSE);
	const EVString filename = filename_ch;
	__env->ReleaseStringUTFChars(filename_j, (const char *)filename_ch);
	#else
	const ev_wchar* filename_ch = (const ev_wchar*)__env->GetStringChars(filename_j,JNI_FALSE);
	const EVString filename = filename_ch;
	__env->ReleaseStringChars(filename_j, (const jchar *)filename_ch);
	#endif
	ev_int32 fileformat = (ev_int32) fileformat_j;
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	ev_int32 __values1 = pObjectX->put(data, filename, fileformat);
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_Ftpclient_remove_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring filename_j)
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
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	ev_bool __values1 = pObjectX->remove(filename);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jint JNICALL Java_global_Ftpclient_errorCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	FTPClient *pObjectX = (FTPClient*) pObjXXXX;
	ev_int32 __values1 = pObjectX->errorCode();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
