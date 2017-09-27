/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "dataanalyst/dataanalystenum.h"
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
			namespace GeoCorretion
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_geocorretion_RectifyModelTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RM_Polynomial_1,
						RM_Polynomial_2,
						RM_Polynomial_3,
						RM_Scale,
						RM_Translation,
						RM_Unknown
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_geocorretion_ResampleTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RS_Nearest,
						RS_Bilenear,
						RS_Cubic,
						RS_UnKnown
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
			}
		}
	}
}
