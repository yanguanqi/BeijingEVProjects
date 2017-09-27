/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/spacialval_calculator.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jlong JNICALL Java_global_EvMathEngineGlobal_closest2ExpN_1ev_1uint32(JNIEnv *__env, jclass __clazz, jlong val_j)
{
	ev_uint32 val = (ev_uint32) val_j;
	ev_uint32 __values1 = closest2ExpN(val);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_EvMathEngineGlobal_closestHOrL2ExpN_1ev_1uint32_1ev_1bool(JNIEnv *__env, jclass __clazz, jlong val_j, jboolean isLarger_j)
{
	ev_uint32 val = (ev_uint32) val_j;
	ev_bool isLarger = (ev_bool) isLarger_j;
	ev_uint32 __values1 = closestHOrL2ExpN(val, isLarger);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
