/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "tileutility/tilepathenums.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileDataTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TDT_UNKNOWN,
					TDT_IMAGE,
					TDT_VECTOR,
					TDT_DEM
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTilePathTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TPT_UNKNOWN,
					TPT_FILE,
					TPT_DATABASE_1_0
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileModeTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TMT_UNKNOWN,
					TMT_WGS84,
					TMT_WEBMERCATOR,
					TMT_GUTANG
				};
				jintArray array = __env->NewIntArray(4);
				__env->SetIntArrayRegion(array, 0, 4, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileNameTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TNT_UNKNOWN,
					TNT_LEVEL,
					TNT_ROW,
					TNT_COL,
					TNT_ROW_COL,
					TNT_LEVEL_ROW_COL
				};
				jintArray array = __env->NewIntArray(6);
				__env->SetIntArrayRegion(array, 0, 6, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileNameFlushTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TNFT_UNKNOWN,
					TNFT_FLUSH_LEFT,
					TNFT_FLUSH_RIGHT
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVTileNameFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					TNF_UNKNOWN,
					TNF_DECIMAL,
					TNF_HEX
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
		}
	}
}
