/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/evlasutility.h"
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
			namespace Atlas
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_atlas_LASCOLORTYPEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						LCT_Self,
						LCT_General,
						LCT_Elevation,
						LCT_Intensity,
						LCT_Classification,
						LCT_ReturnNumber
					};
					jintArray array = __env->NewIntArray(6);
					__env->SetIntArrayRegion(array, 0, 6, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1geoPosition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->geoPosition);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1geoPosition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->geoPosition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1elevation_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->elevation);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1elevation_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->elevation = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jshort JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1classification_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jshort __values1_j = (jshort) (pObjectX->classification);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1classification_1ev_1uint8(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jshort __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->classification = (ev_uint8)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1intensity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->intensity);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1intensity_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->intensity = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1returnNumber_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jint __values1_j = (jint) (pObjectX->returnNumber);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1returnNumber_1ev_1uint16(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->returnNumber = (ev_uint16)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_get_1color_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->color);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_set_1color_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*)pObjXXXX;
					pObjectX->color = *(EarthView::World::Graphic::CColourValue*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_OperatorLessThan_1CLasQueryResultEntry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& pObjectX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry &rhs = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) rhs_j;
					ev_bool __values1 = (pObjectX < rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResultEntry_OperatorGreaterThan_1CLasQueryResultEntry(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& pObjectX = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) pObjXXXX;
					const EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry &rhs = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) rhs_j;
					ev_bool __values1 = (pObjectX > rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_push_1back_1CLasQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry &t = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) t_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_push_1front_1CLasQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry &t = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) t_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->push_front(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->pop_front();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_insert_1ev_1uint32_1CLasQueryResultEntry(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry &t = *(EarthView::World::Spatial3D::Atlas::CLasQueryResultEntry*) t_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_atlas_LasQueryResult_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Atlas::CLasQueryResult *pObjectX = (EarthView::World::Spatial3D::Atlas::CLasQueryResult*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
