/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/plane.h"
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
			namespace Math
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_math_Plane_00024SideHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CPlane::NO_SIDE,
						CPlane::POSITIVE_SIDE,
						CPlane::NEGATIVE_SIDE,
						CPlane::BOTH_SIDE
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Plane_getSide_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkPoint = *(EarthView::World::Spatial::Math::CVector3*) rkPoint_j;
					const 					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane::Side __values1 = pObjectX->getSide(rkPoint);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Plane_getSide_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkBox_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &rkBox = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) rkBox_j;
					const 					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane::Side __values1 = pObjectX->getSide(rkBox);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Plane_getSide_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong centre_j, jlong halfSize_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &centre = *(EarthView::World::Spatial::Math::CVector3*) centre_j;
					const EarthView::World::Spatial::Math::CVector3 &halfSize = *(EarthView::World::Spatial::Math::CVector3*) halfSize_j;
					const 					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane::Side __values1 = pObjectX->getSide(centre, halfSize);
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Plane_getDistance_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkPoint = *(EarthView::World::Spatial::Math::CVector3*) rkPoint_j;
					const 					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					Real __values1 = pObjectX->getDistance(rkPoint);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Plane_redefine_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkPoint0_j, jlong rkPoint1_j, jlong rkPoint2_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkPoint0 = *(EarthView::World::Spatial::Math::CVector3*) rkPoint0_j;
					const EarthView::World::Spatial::Math::CVector3 &rkPoint1 = *(EarthView::World::Spatial::Math::CVector3*) rkPoint1_j;
					const EarthView::World::Spatial::Math::CVector3 &rkPoint2 = *(EarthView::World::Spatial::Math::CVector3*) rkPoint2_j;
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					pObjectX->redefine(rkPoint0, rkPoint1, rkPoint2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Plane_redefine_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkNormal_j, jlong rkPoint_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkNormal = *(EarthView::World::Spatial::Math::CVector3*) rkNormal_j;
					const EarthView::World::Spatial::Math::CVector3 &rkPoint = *(EarthView::World::Spatial::Math::CVector3*) rkPoint_j;
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					pObjectX->redefine(rkNormal, rkPoint);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Plane_projectVector_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->projectVector(v);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Plane_normalise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					Real __values1 = pObjectX->normalise();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Plane_get_1normal_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->normal);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Plane_set_1normal_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*)pObjXXXX;
					pObjectX->normal = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Plane_get_1d_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->d);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Plane_set_1d_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CPlane *pObjectX = (EarthView::World::Spatial::Math::CPlane*)pObjXXXX;
					pObjectX->d = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Plane_OperatorEquals_1CPlane(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CPlane& pObjectX = *(EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPlane &rhs = *(EarthView::World::Spatial::Math::CPlane*) rhs_j;
					ev_bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Plane_OperatorNotEquals_1CPlane(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CPlane& pObjectX = *(EarthView::World::Spatial::Math::CPlane*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPlane &rhs = *(EarthView::World::Spatial::Math::CPlane*) rhs_j;
					ev_bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_push_1back_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CPlane &t = *(EarthView::World::Spatial::Math::CPlane*) t_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_insert_1ev_1uint32_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::CPlane &t = *(EarthView::World::Spatial::Math::CPlane*) t_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Math::PlaneList& pObjectX = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneList_OperatorNotEquals_1PlaneList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Math::PlaneList& pObjectX = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					const EarthView::World::Spatial::Math::PlaneList &other = *(EarthView::World::Spatial::Math::PlaneList*) other_j;
					ev_bool __values1 = (pObjectX != other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_PlaneList_OperatorEquals_1PlaneList(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Math::PlaneList& pObjectX = *(EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					const EarthView::World::Spatial::Math::PlaneList &other = *(EarthView::World::Spatial::Math::PlaneList*) other_j;
					ev_bool __values1 = (pObjectX == other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_PlaneList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_PlaneList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::PlaneList *pObjectX = (EarthView::World::Spatial::Math::PlaneList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_push_1back_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CPlane &t = *(EarthView::World::Spatial::Math::CPlane*) t_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_push_1front_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CPlane &t = *(EarthView::World::Spatial::Math::CPlane*) t_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->push_front(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_pop_1front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->pop_front();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Planes_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Planes_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Planes_at_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					EarthView::World::Spatial::Math::CPlane& __values1 = pObjectX->at(pos);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_insert_1ev_1uint32_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::CPlane &t = *(EarthView::World::Spatial::Math::CPlane*) t_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_remove_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong val_j)
				{
					EarthView::World::Spatial::Math::CPlane &val = *(EarthView::World::Spatial::Math::CPlane*) val_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->remove(val);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Planes_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Planes_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Planes_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Planes *pObjectX = (EarthView::World::Spatial::Math::Planes*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
