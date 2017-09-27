/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterdatasetenume.h"
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
			namespace Raster
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_raster_EVAccessHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_READONLY,
						EV_UPDATE
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_raster_EVDataSetFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						RT_JPG,
						RT_PNG,
						RT_BMP,
						RT_TIF,
						RT_IMG,
						RT_MEM
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial2d_raster_EVResampleMethodHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EVR_NearestNeighbour,
						EVR_Bilinear,
						EVR_Cubic,
						EVR_CubicSpline,
						EVR_Lanczos,
						EVR_GPUNearestNeighbour,
						EVR_GPUCubic
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
			}
		}
	}
}
