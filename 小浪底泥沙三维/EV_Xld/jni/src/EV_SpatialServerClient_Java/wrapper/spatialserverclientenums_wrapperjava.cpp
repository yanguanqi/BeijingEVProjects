/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/spatialserverclientenums.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVServerConnectionTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SCE_UNKNOWN,
					SCE_OGC_SERVER_WMS,
					SCE_OGC_SERVER_WMTS,
					SCE_OGC_SERVER_WFS,
					SCE_EV_SERVER
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVServerInfoTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SIT_UNKNOWN,
					SIT_OGC_SERVER_WMS,
					SIT_OGC_SERVER_WMTS,
					SIT_OGC_SERVER_WFS,
					SIT_EV_SERVER
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVServerLayerInfoTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					SLIE_UNKNOWN,
					SLIE_OGC_WMS,
					SLIE_OGC_WMTS,
					SLIE_OGC_WFS,
					SLIE_EV_WMT,
					SLIE_EV_WMTS,
					SLIE_EV_WMT_EX
				};
				jintArray array = __env->NewIntArray(7);
				__env->SetIntArrayRegion(array, 0, 7, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_EVWebServiceTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					WST_EV_UNKNOWN,
					WST_EV_WMTS,
					WST_EV_WMS,
					WST_EV_WFS,
					WST_EV_GlobeService,
					WST_EV_GeoCodeService,
					WST_EV_GeometryService,
					WST_EV_WebMetadataService,
					WST_UpdateService,
					WST_OGC_WMTS,
					WST_OGC_WMS,
					WST_OGC_WFS,
					WST_EV_MultimediaService,
					WST_EV_OBQ,
					WST_EV_CatalogService,
					WST_EV_MESHX,
					WST_EV_MESHXG,
					WST_EV_MODELService,
					WST_EV_Vector3DService,
					WST_EV_LAS
				};
				jintArray array = __env->NewIntArray(20);
				__env->SetIntArrayRegion(array, 0, 20, enum_values);
				return array;
			}
		}
	}
}
