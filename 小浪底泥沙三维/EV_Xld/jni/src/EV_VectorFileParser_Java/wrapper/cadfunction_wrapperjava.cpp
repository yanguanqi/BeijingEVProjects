/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/cadfunction.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jlong JNICALL Java_global_EvVectorFileParserGlobal_ACGetColorTable_1void(JNIEnv *__env, jclass __clazz)
{
	const ev_uint8* __values1 = ACGetColorTable();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jstring JNICALL Java_global_EvVectorFileParserGlobal_ACTextUnescape_1ev_1char(JNIEnv *__env, jclass __clazz, jlong pszRawInput_j)
{
	const ev_char *pszRawInput = (const ev_char*) pszRawInput_j;
	const EVString __values1 = ACTextUnescape(pszRawInput);
	EarthView::World::Core::ev_wstring valuesw1 = __values1;
	jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
	return __values1_j;
}
