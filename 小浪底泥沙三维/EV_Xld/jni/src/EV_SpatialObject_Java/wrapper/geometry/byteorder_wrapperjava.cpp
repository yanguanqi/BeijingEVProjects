/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/byteorder.h"
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
			namespace Geometry
			{
				namespace Utility
				{
					extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geometry_utility_EVBitOrderTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
					{
						jint enum_values[] = {
							BOT_BIGENDIAN_XDR,
							BOT_LITTLEENDIAN_NDR
						};
						jintArray array = __env->NewIntArray(2);
						__env->SetIntArrayRegion(array, 0, 2, enum_values);
						return array;
					}
				}
			}
		}
	}
}
