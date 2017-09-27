/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendersystem_def.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jintArray JNICALL Java_global_TexCoordCalcMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
{
	jint enum_values[] = {
		TEXCALC_NONE,
		TEXCALC_ENVIRONMENT_MAP,
		TEXCALC_ENVIRONMENT_MAP_PLANAR,
		TEXCALC_ENVIRONMENT_MAP_REFLECTION,
		TEXCALC_ENVIRONMENT_MAP_NORMAL,
		TEXCALC_PROJECTIVE_TEXTURE
	};
	jintArray array = __env->NewIntArray(6);
	__env->SetIntArrayRegion(array, 0, 6, enum_values);
	return array;
}
extern "C" JNIEXPORT jintArray JNICALL Java_global_StencilOperationHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
{
	jint enum_values[] = {
		SOP_KEEP,
		SOP_ZERO,
		SOP_REPLACE,
		SOP_INCREMENT,
		SOP_DECREMENT,
		SOP_INCREMENT_WRAP,
		SOP_DECREMENT_WRAP,
		SOP_INVERT
	};
	jintArray array = __env->NewIntArray(8);
	__env->SetIntArrayRegion(array, 0, 8, enum_values);
	return array;
}
