/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/dualquaternion.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
			{
				EarthView::World::Graphic::CDualQuaternion& pObjectX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const ev_size_t i = (ev_size_t) i_j;
				Real __values1 = pObjectX[i];
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DualQuaternion_OperatorAssign_1CDualQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkQ_j )
			{
				EarthView::World::Graphic::CDualQuaternion& pObjectX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const EarthView::World::Graphic::CDualQuaternion &rkQ = *(EarthView::World::Graphic::CDualQuaternion*) rkQ_j;
				pObjectX = rkQ;
				EarthView::World::Graphic::CDualQuaternion& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DualQuaternion_OperatorEquals_1CDualQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CDualQuaternion& pObjectX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const EarthView::World::Graphic::CDualQuaternion &rhs = *(EarthView::World::Graphic::CDualQuaternion*) rhs_j;
				ev_bool __values1 = (pObjectX == rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DualQuaternion_OperatorNotEquals_1CDualQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
			{
				EarthView::World::Graphic::CDualQuaternion& pObjectX = *(EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				const EarthView::World::Graphic::CDualQuaternion &rhs = *(EarthView::World::Graphic::CDualQuaternion*) rhs_j;
				ev_bool __values1 = (pObjectX != rhs);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_DualQuaternion_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				Real* __values1 = pObjectX->ptr();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_swap_1CDualQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				EarthView::World::Graphic::CDualQuaternion &other = *(EarthView::World::Graphic::CDualQuaternion*) other_j;
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				pObjectX->swap(other);
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_DualQuaternion_isNaN_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNaN();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_fromRotationTranslation_1CQuaternion_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jlong trans_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				const EarthView::World::Spatial::Math::CVector3 &trans = *(EarthView::World::Spatial::Math::CVector3*) trans_j;
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				pObjectX->fromRotationTranslation(q, trans);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_toRotationTranslation_1CQuaternion_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong q_j, jlong translation_j)
			{
				EarthView::World::Spatial::Math::CQuaternion &q = *(EarthView::World::Spatial::Math::CQuaternion*) q_j;
				EarthView::World::Spatial::Math::CVector3 &translation = *(EarthView::World::Spatial::Math::CVector3*) translation_j;
				const 				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				pObjectX->toRotationTranslation(q, translation);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_fromTransformationMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kTrans_j)
			{
				const EarthView::World::Spatial::Math::CMatrix4 &kTrans = *(EarthView::World::Spatial::Math::CMatrix4*) kTrans_j;
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				pObjectX->fromTransformationMatrix(kTrans);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_toTransformationMatrix_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kTrans_j)
			{
				EarthView::World::Spatial::Math::CMatrix4 &kTrans = *(EarthView::World::Spatial::Math::CMatrix4*) kTrans_j;
				const 				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*) pObjXXXX;
				pObjectX->toTransformationMatrix(kTrans);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->x);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1x_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->x = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->y);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1y_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->y = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->z);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1z_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->z = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1dw_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dw);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1dw_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->dw = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1dx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dx);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1dx_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->dx = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1dy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dy);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1dy_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->dy = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1dz_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->dz);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1dz_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->dz = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_DualQuaternion_get_1w_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->w);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_DualQuaternion_set_1w_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::CDualQuaternion *pObjectX = (EarthView::World::Graphic::CDualQuaternion*)pObjXXXX;
				pObjectX->w = (Real)__values1_j;
			}
		}
	}
}
