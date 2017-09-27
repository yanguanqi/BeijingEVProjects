/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddataexchange/spatial2ddataexchangeexports.h"
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
			namespace Convertor
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_convertor_EVDataDriverTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						DDT_Unknown,
						DDT_EarthView,
						DDT_EarthView2,
						DDT_Shapefile,
						DDT_MapInfo,
						DDT_FileRaster,
						DDT_DBRaster
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_convertor_EVDataFormatTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						DataFormat_EV_Sqlite,
						DataFormat_EV_Odbc,
						DataFormat_EV_Oracle,
						DataFormat_ESRI_Shp,
						DataFormat_MI_TAB,
						DataFormat_MI_MIF,
						DataFormat_GeoTiff,
						DataFormat_Image
					};
					jintArray array = __env->NewIntArray(8);
					__env->SetIntArrayRegion(array, 0, 8, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_convertor_EVDatasetDimensionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						DatasetDimension_XY,
						DatasetDimension_XYZ,
						DatasetDimension_XYZM,
						DatasetDimension_XYM,
						DatasetDimension_Default
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
			}
		}
	}
}
