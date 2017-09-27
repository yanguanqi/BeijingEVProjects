/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/chartexports.h"
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
			namespace GeoDataset
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartProjectionDefHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CPD_ALA,
						CPD_AZA,
						CPD_AZD,
						CPD_GNO,
						CPD_HOM,
						CPD_LCC,
						CPD_LEA,
						CPD_MER,
						CPD_OME,
						CPD_ORT,
						CPD_PST,
						CPD_POL,
						CPD_TME,
						CPD_OST
					};
					jintArray array = __env->NewIntArray(14);
					__env->SetIntArrayRegion(array, 0, 14, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartGeomTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGT_Chart_Unknown,
						CGT_Chart_Point,
						CGT_Chart_Line,
						CGT_Chart_Area,
						CGT_Chart_Collection
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartPrimitiveHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CP_UNKNOWN,
						CP_Point,
						CP_Line,
						CP_Area,
						CP_Collection
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartAttributeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CAT_UNKNOWN,
						CAT_E,
						CAT_L,
						CAT_F,
						CAT_I,
						CAT_A,
						CAT_S
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CFT_UNKNOWN,
						CFT_M,
						CFT_CA,
						CFT_G,
						CFT_C,
						CFT_F,
						CFT_N,
						CFT_S
					};
					jintArray array = __env->NewIntArray(8);
					__env->SetIntArrayRegion(array, 0, 8, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_geodataset_EVChartOperatorTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						COT_Unknown,
						COT_File000
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
			}
		}
	}
}
