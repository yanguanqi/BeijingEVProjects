/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataexchange/spatial3ddataexchange_config.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace DataExchange
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataexchange_EVModelDataDriverTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						MDDT_Unknown,
						MDDT_MESHFILE,
						MDDT_EarthView
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataexchange_EVModelDataExchangeOperateModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_MDEOM_UNKNOWN,
						EV_MDEOM_WRITE,
						EV_MDEOM_READ
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_dataexchange_EVModelDataExchangeErrorHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						EV_MDEE_UNKNOWN,
						EV_MDEE_PARSE_ERROR,
						EV_MDEE_PARSE_SUCCESS,
						EV_MODE_IMPORT_ERROR,
						EV_MODE_IMPORT_SUCCESS,
						EV_MODE_OPEN_DREVER_ERROR,
						EV_MODE_OPEN_DRIVER_SUCCESS
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
			}
		}
	}
}
