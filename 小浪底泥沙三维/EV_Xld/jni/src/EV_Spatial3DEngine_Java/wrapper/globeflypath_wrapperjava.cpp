/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/globeflypath.h"
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
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_FlyModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					FirstPersonMode,
					ThirdPersonMode,
					AnimationMode
				};
				jintArray array = __env->NewIntArray(3);
				__env->SetIntArrayRegion(array, 0, 3, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_push_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jdouble val_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				ev_real64 val = (ev_real64) val_j;
				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_exist_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_OperatorIndex_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint key_j )
			{
				EarthView::World::Spatial3D::CAngleDistanceMap& pObjectX = *(EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				const ev_int32 key = (const ev_int32) key_j;
				ev_real64& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_get_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_real64& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_erase_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
			{
				const ev_int32 key = (const ev_int32) key_j;
				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_AngleDistanceMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CAngleDistanceMap *pObjectX = (EarthView::World::Spatial3D::CAngleDistanceMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TimeRatePair_get_1mfirst_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePair *pObjectX = (EarthView::World::Spatial3D::CTimeRatePair*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mfirst);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePair_set_1mfirst_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CTimeRatePair *pObjectX = (EarthView::World::Spatial3D::CTimeRatePair*)pObjXXXX;
				pObjectX->mfirst = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_TimeRatePair_get_1msecond_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePair *pObjectX = (EarthView::World::Spatial3D::CTimeRatePair*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->msecond);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePair_set_1msecond_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CTimeRatePair *pObjectX = (EarthView::World::Spatial3D::CTimeRatePair*)pObjXXXX;
				pObjectX->msecond = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_push_1back_1CTimeRatePair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CTimeRatePair &t = *(EarthView::World::Spatial3D::CTimeRatePair*) t_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_insert_1ev_1uint32_1CTimeRatePair(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CTimeRatePair &t = *(EarthView::World::Spatial3D::CTimeRatePair*) t_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CTimeRatePairList& pObjectX = *(EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CTimeRatePair& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				EarthView::World::Spatial3D::CTimeRatePair& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRatePairList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRatePairList *pObjectX = (EarthView::World::Spatial3D::CTimeRatePairList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_push_1back_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				ev_real64 t = (ev_real64) t_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRateList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_real64& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRateList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_real64& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_insert_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jdouble t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				ev_real64 t = (ev_real64) t_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_TimeRateList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRateList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CTimeRateList& pObjectX = *(EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				ev_real64& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRateList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_real64& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_TimeRateList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_TimeRateList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CTimeRateList *pObjectX = (EarthView::World::Spatial3D::CTimeRateList*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_Flyparam_00024AltitudeModeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CFLyParam::RelativeToGround,
					CFLyParam::ClampedToGround,
					CFLyParam::RelativeToSeaFloor,
					CFLyParam::RelativeToOBQ,
					CFLyParam::Absolute
				};
				jintArray array = __env->NewIntArray(5);
				__env->SetIntArrayRegion(array, 0, 5, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mDstAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mDstAltitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mDstAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mDstAltitude = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mAltitudeChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mAltitudeChanged);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mAltitudeChanged_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mAltitudeChanged = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mobserveDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mobserveDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mobserveDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mobserveDistance = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mtilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mtilt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mtilt_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mtilt = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mspeed_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mspeed);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mspeed_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mspeed = (ev_int32)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1misFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->misFile);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1misFile_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->misFile = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mismodelWithEffect_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mismodelWithEffect);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mismodelWithEffect_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mismodelWithEffect = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mmodelFile_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mmodelFile;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mmodelFile_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mmodelFile = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mdataSourceName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mdataSourceName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mdataSourceName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mdataSourceName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mentityDatasetName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mentityDatasetName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mentityDatasetName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mentityDatasetName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mentityName_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mentityName;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mentityName_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mentityName = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mentityId_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mentityId);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mentityId_1int(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mentityId = (int)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mmodelChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mmodelChanged);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mmodelChanged_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mmodelChanged = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mmodelScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mmodelScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mmodelScale_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mmodelScale = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mpreRotationX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mpreRotationX);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mpreRotationX_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mpreRotationX = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mpreRotationY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mpreRotationY);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mpreRotationY_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mpreRotationY = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mpreRotationZ_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jfloat __values1_j = (jfloat)(pObjectX->mpreRotationZ);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mpreRotationZ_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mpreRotationZ = (ev_real32)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mlineColor_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mlineColor);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mlineColor_1CColourValue(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mlineColor = *(EarthView::World::Graphic::CColourValue*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mlineColorChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mlineColorChanged);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mlineColorChanged_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mlineColorChanged = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mlockHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mlockHeading);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mlockHeading_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mlockHeading = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mlockTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mlockTilt);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mlockTilt_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mlockTilt = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mlockObserveDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mlockObserveDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mlockObserveDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mlockObserveDistance = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mrenderRoute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mrenderRoute);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mrenderRoute_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mrenderRoute = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1msmoothRoute_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->msmoothRoute);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1msmoothRoute_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->msmoothRoute = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1msmoothRouteChanged_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->msmoothRouteChanged);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1msmoothRouteChanged_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->msmoothRouteChanged = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mrenderModel_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->mrenderModel);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mrenderModel_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mrenderModel = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mflyMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mflyMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mflyMode_1FlyMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mflyMode = (EarthView::World::Spatial3D::FlyMode)__values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_Flyparam_get_1mAltitudeMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mAltitudeMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_Flyparam_set_1mAltitudeMode_1AltitudeMode(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CFLyParam *pObjectX = (EarthView::World::Spatial3D::CFLyParam*)pObjXXXX;
				pObjectX->mAltitudeMode = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)__values1_j;
			}
			extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_00024LOOPMODEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
			{
				jint enum_values[] = {
					CGlobeFlyPath::LOOP,
					CGlobeFlyPath::NOLOOP
				};
				jintArray array = __env->NewIntArray(2);
				__env->SetIntArrayRegion(array, 0, 2, enum_values);
				return array;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_start_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				ev_real64 time = (ev_real64) time_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->start(time);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_end_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->end();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getControlPointCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_int32 __values1 = pObjectX->getControlPointCount();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_addControlPoint_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
			{
				const EarthView::World::Spatial3D::CGlobeControlPoint &point = *(EarthView::World::Spatial3D::CGlobeControlPoint*) point_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->addControlPoint(point);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_removeControlPoint_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				int index = (int) index_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->removeControlPoint(index);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
				#else
				const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
				const EVString name = name_ch;
				__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->setName(name);
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EVString __values1 = pObjectX->getName();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_setLoopMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean loop_j)
			{
				ev_bool loop = (ev_bool) loop_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->setLoopMode(loop);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getLoopMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->getLoopMode();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getRadious_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getRadious();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_setRadious_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
			{
				ev_real64 radius = (ev_real64) radius_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->setRadious(radius);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_toXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				const EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->toXml(path);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_toXml_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Core::CXmlElement __values1 = pObjectX->toXml();
				EarthView::World::Core::CXmlElement *returnvalues = new EarthView::World::Core::CXmlElement(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_fromXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* path_ch = (const ev_char*)__env->GetStringUTFChars(path_j,JNI_FALSE);
				EVString path = path_ch;
				__env->ReleaseStringUTFChars(path_j, (const char *)path_ch);
				#else
				const ev_wchar* path_ch = (const ev_wchar*)__env->GetStringChars(path_j,JNI_FALSE);
				EVString path = path_ch;
				__env->ReleaseStringChars(path_j, (const jchar *)path_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->fromXml(path);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_fromXml_1CXmlElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xmlElement_j)
			{
				EarthView::World::Core::CXmlElement &xmlElement = *(EarthView::World::Core::CXmlElement*) xmlElement_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->fromXml(xmlElement);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getFlyParam_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CFLyParam& __values1 = pObjectX->getFlyParam();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap& __values1 = pObjectX->getControlPoint();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getFlyControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPointMap& __values1 = pObjectX->getFlyControlPoint();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getAngleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap __values1 = pObjectX->getAngleDistance();
				EarthView::World::Spatial3D::CAngleDistanceMap *returnvalues = new EarthView::World::Spatial3D::CAngleDistanceMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getRealAngleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CAngleDistanceMap __values1 = pObjectX->getRealAngleDistance();
				EarthView::World::Spatial3D::CAngleDistanceMap *returnvalues = new EarthView::World::Spatial3D::CAngleDistanceMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getTimeRateList_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CTimeRatePairList __values1 = pObjectX->getTimeRateList();
				EarthView::World::Spatial3D::CTimeRatePairList *returnvalues = new EarthView::World::Spatial3D::CTimeRatePairList(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_smoothRouteLine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->smoothRouteLine();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_needToSlowDown_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble timeRate_j)
			{
				ev_real64 timeRate = (ev_real64) timeRate_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				bool __values1 = pObjectX->needToSlowDown(timeRate);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_findCureControlPoint_1int(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint number_j)
			{
				int number = (int) number_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->findCureControlPoint(number);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_computeAngleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->computeAngleDistance();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_computeRealAngleDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->computeRealAngleDistance();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getInterpolaterdControlPoint_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
			{
				ev_real64 time = (ev_real64) time_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint __values1 = pObjectX->getInterpolaterdControlPoint(time);
				EarthView::World::Spatial3D::CGlobeControlPoint *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPoint(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_ComputerHead_1CGlobeControlPoint_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point1_j, jlong point2_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint &point1 = *(EarthView::World::Spatial3D::CGlobeControlPoint*) point1_j;
				EarthView::World::Spatial3D::CGlobeControlPoint &point2 = *(EarthView::World::Spatial3D::CGlobeControlPoint*) point2_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->ComputerHead(point1, point2);
				EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_setVelocity_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble velocity_j)
			{
				ev_real64 velocity = (ev_real64) velocity_j;
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				pObjectX->setVelocity(velocity);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_getAngleVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*) pObjXXXX;
				ev_real64 __values1 = pObjectX->getAngleVelocity();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mname_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				EarthView::World::Core::ev_wstring __values1_ch = pObjectX->mname;
				jstring __values1_j = __env->NewString((const jchar*)__values1_ch.getString(), __values1_ch.size());
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mname_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				const ev_wchar* __values1_ch = (const ev_wchar*)__env->GetStringChars(__values1_j,JNI_FALSE);
				pObjectX->mname = __values1_ch;
				__env->ReleaseStringChars(__values1_j,(const jchar*)__values1_ch);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mcontrolPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mcontrolPoint);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mcontrolPoint_1CGlobeControlPointMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mcontrolPoint = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mflyControlPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mflyControlPoint);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mflyControlPoint_1CGlobeControlPointMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mflyControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mLastControlPoint_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mLastControlPoint);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mLastControlPoint_1CGlobeControlPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mLastControlPoint = *(EarthView::World::Spatial3D::CGlobeControlPoint*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mangleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mangleDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mangleDistance_1CAngleDistanceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mangleDistance = *(EarthView::World::Spatial3D::CAngleDistanceMap*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mrealAngleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mrealAngleDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mrealAngleDistance_1CAngleDistanceMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mrealAngleDistance = *(EarthView::World::Spatial3D::CAngleDistanceMap*) __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mloopMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jint __values1_j = (jint)(pObjectX->mloopMode);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mloopMode_1LOOPMODE(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mloopMode = (EarthView::World::Spatial3D::CGlobeFlyPath::LOOPMODE)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mbezierStartPostion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mbezierStartPostion);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mbezierStartPostion_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mbezierStartPostion = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mbezierSmoothScale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mbezierSmoothScale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mbezierSmoothScale_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mbezierSmoothScale = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mangularVelocity_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mangularVelocity);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mangularVelocity_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mangularVelocity = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mradious_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mradious);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mradious_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mradious = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1misRun_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jboolean __values1_j = (jboolean)(pObjectX->misRun);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1misRun_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->misRun = (ev_bool)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mstartTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mstartTime);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mstartTime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mstartTime = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mflyParam_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mflyParam);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mflyParam_1CFLyParam(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mflyParam = *(EarthView::World::Spatial3D::CFLyParam*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mcontrolPointMap_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mcontrolPointMap);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mcontrolPointMap_1CControlPointMap(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mcontrolPointMap = *(EarthView::World::Spatial3D::CControlPointMap*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mtotalAngleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mtotalAngleDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mtotalAngleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mtotalAngleDistance = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mrrealTotalAngleDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mrrealTotalAngleDistance);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mrrealTotalAngleDistance_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mrrealTotalAngleDistance = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mtimeRateList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mtimeRateList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mtimeRateList_1CTimeRateList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mtimeRateList = *(EarthView::World::Spatial3D::CTimeRateList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_get_1mtimeRatePairList_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mtimeRatePairList);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPath_set_1mtimeRatePairList_1CTimeRatePairList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPath*)pObjXXXX;
				pObjectX->mtimeRatePairList = *(EarthView::World::Spatial3D::CTimeRatePairList*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPath* __values1 = pObjectX->get();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathPtr_setGlobeFlyPath_1CGlobeFlyPath(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPath *rep = (EarthView::World::Spatial3D::CGlobeFlyPath*) rep_j;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjXXXX;
				pObjectX->setGlobeFlyPath(rep);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathPtr_OperatorAssign_1CGlobeFlyPathPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& pObjectX = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeFlyPathPtr &r = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) r_j;
				pObjectX = r;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_push_1EVString_1CGlobeFlyPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j, jlong val_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPathPtr &val = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) val_j;
				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_exist_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_OperatorIndex_1EVString(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring key_j )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathMap& pObjectX = *(EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_get_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_erase_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring key_j)
			{
				#if EV_PLATFORM == EV_PLATFORM_ANDROID
				const ev_char* key_ch = (const ev_char*)__env->GetStringUTFChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringUTFChars(key_j, (const char *)key_ch);
				#else
				const ev_wchar* key_ch = (const ev_wchar*)__env->GetStringChars(key_j,JNI_FALSE);
				const EVString key = key_ch;
				__env->ReleaseStringChars(key_j, (const jchar *)key_ch);
				#endif
				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPathMap *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_push_1back_1CGlobeFlyPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathPtr &t = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) t_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->push_back(t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->pop_back();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX->front();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX->back();
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_insert_1ev_1uint32_1CGlobeFlyPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
			{
				ev_uint32 pos = (ev_uint32) pos_j;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr &t = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) t_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->insert(pos, t);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				ev_size_t pos = (ev_size_t) pos_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->remove(pos);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector& pObjectX = *(EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX[n];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
			{
				ev_size_t n = (ev_size_t) n_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeFlyPathPtr& __values1 = pObjectX->at(n);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
			{
				ev_size_t newSize = (ev_size_t) newSize_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->resize(newSize);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
			{
				ev_size_t count = (ev_size_t) count_j;
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->reserve(count);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeFlyPathVector_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeFlyPathVector *pObjectX = (EarthView::World::Spatial3D::CGlobeFlyPathVector*) pObjXXXX;
				pObjectX->clear();
			}
		}
	}
}
