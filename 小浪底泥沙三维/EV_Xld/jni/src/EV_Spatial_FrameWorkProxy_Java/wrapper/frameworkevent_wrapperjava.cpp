/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/frameworkevent.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jintArray JNICALL Java_global_FrameworkEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
{
	jint enum_values[] = {
		FET_EventTypeStart_DataSourceManager,
		FET_CreateDataSourceRequest,
		FET_CreateDataSourceResponse,
		FET_DeleteDataSourceRequest,
		FET_DeleteDataSourceResponse,
		FET_OpenDataSourceRequest,
		FET_OpenDataSourceResponse,
		FET_CloseDataSourceRequest,
		FET_CloseDataSourceResponse,
		FET_GetOpenedDataSourceArrResponse,
		FET_OpenDataSetRequest,
		FET_OpenDataSetResponse,
		FET_CreateDataSetRequest,
		FET_CreateDataSetResponse,
		FET_CloseDataSetRequest,
		FET_CloseDataSetResponse,
		FET_RemoveDataSourceRequest,
		FET_RemoveDataSourceResponse,
		FET_ImportDataSourceRequest,
		FET_ImportDataSourceResponse,
		FET_ExportDataSourceRequest,
		FET_ExportDataSourceResponse,
		FET_EventTypeEnd_DataSourceManager
	};
	jintArray array = __env->NewIntArray(23);
	__env->SetIntArrayRegion(array, 0, 23, enum_values);
	return array;
}
