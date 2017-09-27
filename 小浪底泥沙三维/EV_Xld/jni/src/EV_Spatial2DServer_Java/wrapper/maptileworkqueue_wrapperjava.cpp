/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/maptileworkqueue.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jlong JNICALL Java_global_Wmscharttileparam_Create(JNIEnv *__env, jclass __clazz)
{
	CWMSChartTileParam *pObjectX = new CWMSChartTileParam();
	return (jlong) pObjectX;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	delete pObjectX;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1srid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->srid;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1srid_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->srid = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1box_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->box;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1box_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->box = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1displayMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->displayMode;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1displayMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->displayMode = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1colorMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->colorMode;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1colorMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->colorMode = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1symbolMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->symbolMode;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1symbolMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->symbolMode = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1isoBath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->isoBath;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1isoBath_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->isoBath = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
extern "C" JNIEXPORT jstring JNICALL Java_global_Wmscharttileparam_get_1annoMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	EarthView::World::Core::ev_wstring __values1_ch = pObjectX->annoMode;
	jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_Wmscharttileparam_set_1annoMode_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
{
	CWMSChartTileParam *pObjectX = (CWMSChartTileParam*)pObjXXXX;
	const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
	pObjectX->annoMode = __values1_ch;
	__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
		}
	}
}
