/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/frustum_def.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_OrientationModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					OR_DEGREE_0,
					OR_DEGREE_90,
					OR_DEGREE_180,
					OR_DEGREE_270,
					OR_PORTRAIT,
					OR_LANDSCAPERIGHT,
					OR_LANDSCAPELEFT
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_ProjectionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					PT_ORTHOGRAPHIC,
					PT_PERSPECTIVE
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_graphic_FrustumPlaneHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FRUSTUM_PLANE_NEAR,
					FRUSTUM_PLANE_FAR,
					FRUSTUM_PLANE_LEFT,
					FRUSTUM_PLANE_RIGHT,
					FRUSTUM_PLANE_TOP,
					FRUSTUM_PLANE_BOTTOM
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
		}
	}
}
