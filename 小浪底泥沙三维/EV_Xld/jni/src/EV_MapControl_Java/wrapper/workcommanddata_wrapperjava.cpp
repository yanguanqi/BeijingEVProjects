/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/workcommanddata.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_controls_EVEditingOperationTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EOT_Unknown,
						EOT_AddPoint,
						EOT_MoveVertex,
						EOT_MoveGeometryPart,
						EOT_MoveGeometry,
						EOT_InsertVertex,
						EOT_DeleteVertex,
						EOT_DeletePart,
						EOT_ChangeGeometry,
						EOT_ChangeAttribute,
						EOT_AddFeature,
						EOT_DeleteFeature,
						EOT_MultiOperation
					};
					jintArray array = __env->NewIntArray(13);
					__env->SetIntArrayRegion(array, 0, 13, enum_values);
					return array;
				}
			}
		}
	}
}
