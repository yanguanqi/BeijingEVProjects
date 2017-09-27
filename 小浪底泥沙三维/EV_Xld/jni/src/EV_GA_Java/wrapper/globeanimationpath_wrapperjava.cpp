/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeanimationpath.h"
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
			namespace Controls
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_get_1mlatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mlatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_set_1mlatitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					pObjectX->mlatitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_get_1mlongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mlongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_set_1mlongitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					pObjectX->mlongitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_get_1mHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_set_1mHeading_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					pObjectX->mHeading = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_get_1maltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->maltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_set_1maltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					pObjectX->maltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_get_1mtilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mtilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationControlPoint_set_1mtilt_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*)pObjXXXX;
					pObjectX->mtilt = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_push_1ev_1real64_1CGlobeAnimationControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j, jlong val_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint &val = *(EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) val_j;
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->push(key, val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_exist_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->exist(key);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_OperatorIndex_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble key_j )
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& pObjectX = *(EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& __values1 = pObjectX[key];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_get_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint& __values1 = pObjectX->get(key);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_erase_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble key_j)
				{
					const ev_real64 key = (const ev_real64) key_j;
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					pObjectX->erase(key);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_AnimationControlPointMap_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CAnimationControlPointMap *pObjectX = (EarthView::World::Spatial3D::Controls::CAnimationControlPointMap*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_00024LOOPMODEHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGlobeAnimationPath::lOOP,
						CGlobeAnimationPath::NOLOOP
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_insert_1ev_1real64_1CGlobeAnimationControlPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jlong controlPoint_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint controlPoint = *(EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint*) controlPoint_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					pObjectX->insert(time, controlPoint);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getFirstTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getFirstTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getEndTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getEndTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getPeriod_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getPeriod();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getControlPointCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getControlPointCount();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_setVelocity_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble velocity_j)
				{
					ev_real64 velocity = (ev_real64) velocity_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					pObjectX->setVelocity(velocity);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getVelocity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getVelocity();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getInterpolaterdControlPoint_1ev_1real64_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j, jboolean isEven_j)
				{
					ev_real64 time = (ev_real64) time_j;
					ev_bool isEven = (ev_bool) isEven_j;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint __values1 = pObjectX->getInterpolaterdControlPoint(time, isEven);
					EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint *returnvalues = new EarthView::World::Spatial3D::Controls::CGlobeAnimationControlPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeAnimationPath_getControlPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeAnimationPath *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeAnimationPath*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CAnimationControlPointMap& __values1 = pObjectX->getControlPoints();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
