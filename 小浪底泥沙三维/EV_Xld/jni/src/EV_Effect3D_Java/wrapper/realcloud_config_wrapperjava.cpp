/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "effect3d/realcloud_config.h"
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
			namespace Math
			{
			}
			namespace Effect3D
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_effect3d_CloudTreeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CLOUDNW,
						CLOUDNE,
						CLOUDSW,
						CLOUDSE,
						CLOUDLEFT,
						CLOUDRIGHT
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
			}
		}
	}
}
