/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/altitudemode.h"
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
			namespace Utility
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_utility_EVAltitudeModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						AM_UNKNOW,
						AM_Absolute_WithSceneHeight,
						AM_ClampToGround,
						AM_RelativeToGround,
						AM_ClampToSeaFloor,
						AM_RelativeToSeaFloor,
						AM_Absolute
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
			}
		}
	}
}
