/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tileutilityenums.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileUnitsTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TUT_UNKNOWN,
					TUT_DEGREE,
					TUT_METER,
					TUT_RADIAN
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVOriginPositionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					OPT_UNKNOWN,
					OPT_LEFTTOP,
					OPT_LEFTLOW,
					OPT_RIGHTTOP,
					OPT_RIGHTLOW
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
		}
	}
}
