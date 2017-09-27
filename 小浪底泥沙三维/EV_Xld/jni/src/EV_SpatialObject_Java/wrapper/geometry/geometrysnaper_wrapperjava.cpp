/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geometrysnaper.h"
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
				namespace Operator
				{
					extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geometry_operator_EVGeometrySnapTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
					{
						jint enum_values[] = {
							GST_UNKNOWN,
							GST_VERTEX,
							GST_SEGMENT
						};
						jintArray array = __env->NewIntArray(3);
						__env->SetIntArrayRegion(array, 0, 3, enum_values);
						return array;
					}
				}
			}
		}
	}
}
