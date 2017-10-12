/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorcache/evvectorcache_api.h"
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
			namespace VectorCache
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheTemplateModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheTemplateMode_WGS84,
						VectorCacheTemplateMode_Mercator
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheGeometryTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheGeometryType_Unknown,
						VectorCacheGeometryType_Point,
						VectorCacheGeometryType_Polyline,
						VectorCacheGeometryType_Polygon
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheProcessHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheProcess_Process_Ready,
						VectorCacheProcess_Process_Clip,
						VectorCacheProcess_Process_Create,
						VectorCacheProcess_Process_PreCreate,
						VectorCacheProcess_Process_AllDone
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCachePauseTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCachePauseType_UnDone,
						VectorCachePauseType_Stop,
						VectorCachePauseType_Restart
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheDataFormatHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheDataFormat_Unknown,
						VectorCacheDataFormat_SQLITE3_UNCOMPRESSED,
						VectorCacheDataFormat_SQLITE3_COMPRESSED_7Z
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheFieldTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheFieldType_Unknown,
						VectorCacheFieldType_Int32,
						VectorCacheFieldType_Long,
						VectorCacheFieldType_Real64,
						VectorCacheFieldType_String,
						VectorCacheFieldType_Bool,
						VectorCacheFieldType_Binary
					};
					jintArray array = __env->NewIntArray(7);
					__env->SetIntArrayRegion(array, 0, 7, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheProcessResultHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheProcessResult_Ok,
						VectorCacheProcessResult_Error_Template,
						VectorCacheProcessResult_Error_TempFileNotExists,
						VectorCacheProcessResult_Error_TempFileAlreadyExists,
						VectorCacheProcessResult_Error_ResultFolderExists,
						VectorCacheProcessResult_Error_FileAlreadyExists,
						VectorCacheProcessResult_Error_CacheFormat,
						VectorCacheProcessResult_Error_MinRange,
						VectorCacheProcessResult_Error_MaxRange,
						VectorCacheProcessResult_Error_RangeChange,
						VectorCacheProcessResult_Error_NoFileName,
						VectorCacheProcessResult_Error_SavePathInvalid,
						VectorCacheProcessResult_Error_TableNameError,
						VectorCacheProcessResult_Error_NoSavedPath,
						VectorCacheProcessResult_Error_DataTime,
						VectorCacheProcessResult_Error_NoTotalNum,
						VectorCacheProcessResult_Error_CacheRect,
						VectorCacheProcessResult_Error_TemplateTypeNotSupport,
						VectorCacheProcessResult_Error_ClipLevel,
						VectorCacheProcessResult_Error_SubTileNum,
						VectorCacheProcessResult_Error_UnitType,
						VectorCacheProcessResult_Error_FirstTileSpace,
						VectorCacheProcessResult_Error_OrientPosition,
						VectorCacheProcessResult_Error_DevisionInfo,
						VectorCacheProcessResult_Error_FolderNameTooLong,
						VectorCacheProcessResult_Error_GeometryNotSupport,
						VectorCacheProcessResult_Error_OutOfCacheRect,
						VectorCacheProcessResult_Error_ClipError,
						VectorCacheProcessResult_Error_7zCompress,
						VectorCacheProcessResult_Error_WriteETM,
						VectorCacheProcessResult_Error_ETMExists,
						VectorCacheProcessResult_Error_ProcessInfoNotGiven,
						VectorCacheProcessResult_Error_DatabaseName,
						VectorCacheProcessResult_Error_AttributeLevel,
						VectorCacheProcessResult_Error_BasicParamAbsent,
						VectorCacheProcessResult_Error_NoDataToMakeCache,
						VectorCacheProcessResult_Error_ProcessInfo,
						VectorCacheProcessResult_Error_CoordinateSystemNotSupport,
						VectorCacheProcessResult_Error_CoordinateExtension,
						VectorCacheProcessResult_Stop
					};
					jintArray array = __env->NewIntArray(40);
					__env->SetIntArrayRegion(array, 0, 40, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheOrientPositionHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheOrientPosition_Unknown,
						VectorCacheOrientPosition_Left_Up,
						VectorCacheOrientPosition_Left_Bottom,
						VectorCacheOrientPosition_Right_Up,
						VectorCacheOrientPosition_Right_Bottom,
						VectorCacheOrientPosition_Center
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_vectorcache_EVVectorCacheUnitTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						VectorCacheUnitType_Unknown,
						VectorCacheUnitType_Degree,
						VectorCacheUnitType_Radian
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_Create(JNIEnv *__env, jclass __clazz)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = new EarthView::World::Spatial::VectorCache::GeoRect();
					return (jlong) pObjectX;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					delete pObjectX;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_get_1xMin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->xMin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_set_1xMin_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					pObjectX->xMin = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_get_1yMin_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->yMin);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_set_1yMin_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					pObjectX->yMin = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_get_1xMax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->xMax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_set_1xMax_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					pObjectX->xMax = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_get_1yMax_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->yMax);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_vectorcache_GeoRect_set_1yMax_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::VectorCache::GeoRect *pObjectX = (EarthView::World::Spatial::VectorCache::GeoRect*)pObjXXXX;
					pObjectX->yMax = (ev_real64)__values1_j;
				}
			}
		}
	}
}
