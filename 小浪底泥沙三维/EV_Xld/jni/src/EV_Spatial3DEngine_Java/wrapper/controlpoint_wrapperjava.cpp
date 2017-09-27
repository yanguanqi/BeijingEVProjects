/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/controlpoint.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPoint_formRollPitchYaw_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong roll_j, jlong pitch_j, jlong yaw_j)
			{
				const EarthView::World::Spatial::Math::CRadian &roll = *(EarthView::World::Spatial::Math::CRadian*) roll_j;
				const EarthView::World::Spatial::Math::CRadian &pitch = *(EarthView::World::Spatial::Math::CRadian*) pitch_j;
				const EarthView::World::Spatial::Math::CRadian &yaw = *(EarthView::World::Spatial::Math::CRadian*) yaw_j;
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				pObjectX->formRollPitchYaw(roll, pitch, yaw);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPoint_toRollPitchRaw_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong roll_j, jlong pitch_j, jlong yaw_j)
			{
				EarthView::World::Spatial::Math::CRadian &roll = *(EarthView::World::Spatial::Math::CRadian*) roll_j;
				EarthView::World::Spatial::Math::CRadian &pitch = *(EarthView::World::Spatial::Math::CRadian*) pitch_j;
				EarthView::World::Spatial::Math::CRadian &yaw = *(EarthView::World::Spatial::Math::CRadian*) yaw_j;
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				pObjectX->toRollPitchRaw(roll, pitch, yaw);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPoint_get_1mposition_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mposition);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPoint_set_1mposition_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				pObjectX->mposition = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPoint_get_1mquaternion_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mquaternion);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPoint_set_1mquaternion_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				pObjectX->mquaternion = *(EarthView::World::Spatial::Math::CQuaternion*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPoint_get_1mscale_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mscale);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPoint_set_1mscale_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CControlPoint *pObjectX = (EarthView::World::Spatial3D::CControlPoint*)pObjXXXX;
				pObjectX->mscale = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPoint_OperatorEquals_1CControlPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CControlPoint& pObjectX = *(EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CControlPoint &rhs = *(EarthView::World::Spatial3D::CControlPoint*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPoint_OperatorNotEquals_1CControlPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CControlPoint& pObjectX = *(EarthView::World::Spatial3D::CControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CControlPoint &rhs = *(EarthView::World::Spatial3D::CControlPoint*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mlatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mlatitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mlatitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mlatitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mlongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mlongitude);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mlongitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mlongitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mheading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mheading);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mheading_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mheading = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mradius_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->mradius);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mradius_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mradius = (ev_real64)__values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1myaw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->myaw);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1myaw_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->myaw = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mpitch_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mpitch);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mpitch_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mpitch = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_get_1mroll_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				jlong __values1_j = (jlong) &(pObjectX->mroll);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_set_1mroll_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*)pObjXXXX;
				pObjectX->mroll = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_transformToControlPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPoint *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPoint*) pObjXXXX;
				EarthView::World::Spatial3D::CControlPoint __values1 = pObjectX->transformToControlPoint();
				EarthView::World::Spatial3D::CControlPoint *returnvalues = new EarthView::World::Spatial3D::CControlPoint(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_OperatorEquals_1CGlobeControlPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint& pObjectX = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeControlPoint &rhs = *(EarthView::World::Spatial3D::CGlobeControlPoint*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPoint_OperatorNotEquals_1CGlobeControlPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CGlobeControlPoint& pObjectX = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pObjXXXX;
				const EarthView::World::Spatial3D::CGlobeControlPoint &rhs = *(EarthView::World::Spatial3D::CGlobeControlPoint*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_push_1ev_1real64_1CControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jlong val_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CControlPoint &val = *(EarthView::World::Spatial3D::CControlPoint*) val_j;
				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_exist_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_OperatorIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
			{
				EarthView::World::Spatial3D::CControlPointMap& pObjectX = *(EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CControlPoint& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_get_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				ev_real64 key = (ev_real64) key_j;
				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				EarthView::World::Spatial3D::CControlPoint& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_erase_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointMap_getKey_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong key_j)
			{
				ev_int32 index = (ev_int32) index_j;
				ev_real64 &key = *(ev_real64*) key_j;
				const 				EarthView::World::Spatial3D::CControlPointMap *pObjectX = (EarthView::World::Spatial3D::CControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->getKey(index, key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_push_1ev_1real64_1CGlobeControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jlong val_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CGlobeControlPoint &val = *(EarthView::World::Spatial3D::CGlobeControlPoint*) val_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->push(key, val);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_exist_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_OperatorIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap& pObjectX = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX[key];
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_get_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& __values1 = pObjectX->get(key);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_erase_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
			{
				const ev_real64 key = (const ev_real64) key_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				pObjectX->erase(key);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				ev_size_t __values1 = pObjectX->size();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->empty();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeControlPointMap_getKey_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong key_j)
			{
				ev_int32 index = (ev_int32) index_j;
				ev_real64 &key = *(ev_real64*) key_j;
				const 				EarthView::World::Spatial3D::CGlobeControlPointMap *pObjectX = (EarthView::World::Spatial3D::CGlobeControlPointMap*) pObjXXXX;
				ev_bool __values1 = pObjectX->getKey(index, key);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_insertControlPoint_1ev_1real64_1CControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jlong postion_j)
			{
				ev_real64 time = (ev_real64) time_j;
				EarthView::World::Spatial3D::CControlPoint postion = *(EarthView::World::Spatial3D::CControlPoint*) postion_j;
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				pObjectX->insertControlPoint(time, postion);
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				int __values1 = pObjectX->count();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_end_1CControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
			{
				EarthView::World::Spatial3D::CControlPoint &pos = *(EarthView::World::Spatial3D::CControlPoint*) pos_j;
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->end(pos);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_endTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong time_j)
			{
				ev_real64 &time = *(ev_real64*) time_j;
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				ev_bool __values1 = pObjectX->endTime(time);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_timeLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				ev_real64 __values1 = pObjectX->timeLength();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_getControlPointMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				EarthView::World::Spatial3D::CControlPointMap __values1 = pObjectX->getControlPointMap();
				EarthView::World::Spatial3D::CControlPointMap *returnvalues = new EarthView::World::Spatial3D::CControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_toXml_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring path_j)
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
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				pObjectX->toXml(path);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_setlocalCenter_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong localCenter_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &localCenter = *(EarthView::World::Spatial::Math::CVector3*) localCenter_j;
				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				pObjectX->setlocalCenter(localCenter);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_getLocalCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CControlPointPath *pObjectX = (EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getLocalCenter();
				EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_ControlPointPath_OperatorAssign_1CControlPointPath(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Spatial3D::CControlPointPath& pObjectX = *(EarthView::World::Spatial3D::CControlPointPath*) pObjXXXX;
				const EarthView::World::Spatial3D::CControlPointPath &rhs = *(EarthView::World::Spatial3D::CControlPointPath*) rhs_j;
				pObjectX = rhs;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GeoInterpolation_interpolation_1CGlobeControlPointMap(JNIEnv *__env , jclass __clazz, jlong controlPoints_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap controlPoints = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) controlPoints_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap __values1 = EarthView::World::Spatial3D::CGeoInterpolation::interpolation(controlPoints);
				EarthView::World::Spatial3D::CGlobeControlPointMap *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GeoInterpolation_calculateTangent_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong v1_j, jlong v2_j, jlong tangent1_j, jlong tangent2_j)
			{
				EarthView::World::Spatial::Math::CVector3 v1 = *(EarthView::World::Spatial::Math::CVector3*) v1_j;
				EarthView::World::Spatial::Math::CVector3 v2 = *(EarthView::World::Spatial::Math::CVector3*) v2_j;
				EarthView::World::Spatial::Math::CVector3 &tangent1 = *(EarthView::World::Spatial::Math::CVector3*) tangent1_j;
				EarthView::World::Spatial::Math::CVector3 &tangent2 = *(EarthView::World::Spatial::Math::CVector3*) tangent2_j;
				EarthView::World::Spatial3D::CGeoInterpolation::calculateTangent(v1, v2, tangent1, tangent2);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GeoInterpolation_getBezierCurve_1CGlobeControlPoint_1CGlobeControlPoint_1CVector3_1CVector3_1ev_1uint32(JNIEnv *__env , jclass __clazz, jlong pointA_j, jlong pointB_j, jlong controlPointA_j, jlong controlPointB_j, jlong smooth_j)
			{
				const EarthView::World::Spatial3D::CGlobeControlPoint &pointA = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pointA_j;
				const EarthView::World::Spatial3D::CGlobeControlPoint &pointB = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pointB_j;
				const EarthView::World::Spatial::Math::CVector3 &controlPointA = *(EarthView::World::Spatial::Math::CVector3*) controlPointA_j;
				const EarthView::World::Spatial::Math::CVector3 &controlPointB = *(EarthView::World::Spatial::Math::CVector3*) controlPointB_j;
				ev_uint32 smooth = (ev_uint32) smooth_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap __values1 = EarthView::World::Spatial3D::CGeoInterpolation::getBezierCurve(pointA, pointB, controlPointA, controlPointB, smooth);
				EarthView::World::Spatial3D::CGlobeControlPointMap *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GeoInterpolation_getBezierCurve_1CGlobeControlPoint_1CGlobeControlPoint_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong pointA_j, jlong pointB_j, jlong controlPointA_j, jlong controlPointB_j)
			{
				const EarthView::World::Spatial3D::CGlobeControlPoint &pointA = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pointA_j;
				const EarthView::World::Spatial3D::CGlobeControlPoint &pointB = *(EarthView::World::Spatial3D::CGlobeControlPoint*) pointB_j;
				const EarthView::World::Spatial::Math::CVector3 &controlPointA = *(EarthView::World::Spatial::Math::CVector3*) controlPointA_j;
				const EarthView::World::Spatial::Math::CVector3 &controlPointB = *(EarthView::World::Spatial::Math::CVector3*) controlPointB_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap __values1 = EarthView::World::Spatial3D::CGeoInterpolation::getBezierCurve(pointA, pointB, controlPointA, controlPointB);
				EarthView::World::Spatial3D::CGlobeControlPointMap *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GeoInterpolation_bezierInterpolation_1CGlobeControlPointMap(JNIEnv *__env , jclass __clazz, jlong controlPoints_j)
			{
				EarthView::World::Spatial3D::CGlobeControlPointMap controlPoints = *(EarthView::World::Spatial3D::CGlobeControlPointMap*) controlPoints_j;
				EarthView::World::Spatial3D::CGlobeControlPointMap __values1 = EarthView::World::Spatial3D::CGeoInterpolation::bezierInterpolation(controlPoints);
				EarthView::World::Spatial3D::CGlobeControlPointMap *returnvalues = new EarthView::World::Spatial3D::CGlobeControlPointMap(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
		}
	}
}
