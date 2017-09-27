/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "chart/s57info.h"
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
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getChartFieldType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVChartDataType __values1 = pObjectX->getChartFieldType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getClassCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getClassCode();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getAcronym_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getAcronym();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getDescribe_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getDescribe();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getAttributeNum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getAttributeNum();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getAttributeName_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					const EVString __values1 = pObjectX->getAttributeName(index);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getAttributeFieldRef_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->getAttributeFieldRef(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartClassInfo_getAttributeFieldsRef_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartClassInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartClassInfo*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* __values1 = pObjectX->getAttributeFieldsRef();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartAttributeInfo_getCode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getCode();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartAttributeInfo_getAcronym_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getAcronym();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartAttributeInfo_getDescribe_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getDescribe();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_geodataset_ChartAttributeInfo_getType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::EVChartAttributeType __values1 = pObjectX->getType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_ChartAttributeInfo_createField_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::GeoDataset::CChartAttributeInfo *pObjectX = (EarthView::World::Spatial::GeoDataset::CChartAttributeInfo*) pObjXXXX;
					EarthView::World::Spatial::GeoDataset::IField* __values1 = pObjectX->createField();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getStaticInstance_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::GeoDataset::CS57Info* __values1 = EarthView::World::Spatial::GeoDataset::CS57Info::getStaticInstance();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getChartAttributeInfo_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint code_j)
				{
					ev_int32 code = (ev_int32) code_j;
					EarthView::World::Spatial::GeoDataset::CS57Info *pObjectX = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* __values1 = pObjectX->getChartAttributeInfo(code);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getChartAttributeInfo_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong name_j)
				{
					const ev_char *name = (const ev_char*) name_j;
					EarthView::World::Spatial::GeoDataset::CS57Info *pObjectX = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartAttributeInfo* __values1 = pObjectX->getChartAttributeInfo(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getChartClassInfo_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint code_j)
				{
					ev_int32 code = (ev_int32) code_j;
					EarthView::World::Spatial::GeoDataset::CS57Info *pObjectX = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* __values1 = pObjectX->getChartClassInfo(code);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getChartClassInfo_1ev_1char(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong name_j)
				{
					const ev_char *name = (const ev_char*) name_j;
					EarthView::World::Spatial::GeoDataset::CS57Info *pObjectX = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjXXXX;
					const EarthView::World::Spatial::GeoDataset::CChartClassInfo* __values1 = pObjectX->getChartClassInfo(name);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geodataset_S57Info_getClassName_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint code_j)
				{
					ev_int32 code = (ev_int32) code_j;
					EarthView::World::Spatial::GeoDataset::CS57Info *pObjectX = (EarthView::World::Spatial::GeoDataset::CS57Info*) pObjXXXX;
					const ev_char* __values1 = pObjectX->getClassName(code);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
