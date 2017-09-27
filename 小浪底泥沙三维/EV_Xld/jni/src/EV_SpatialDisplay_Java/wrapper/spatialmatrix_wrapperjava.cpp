/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialmatrix.h"
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
			namespace Display
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_setMatrix_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble m11_j, jdouble m12_j, jdouble m21_j, jdouble m22_j, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 m11 = (ev_real64) m11_j;
					ev_real64 m12 = (ev_real64) m12_j;
					ev_real64 m21 = (ev_real64) m21_j;
					ev_real64 m22 = (ev_real64) m22_j;
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					pObjectX->setMatrix(m11, m12, m21, m22, dx, dy);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_m11_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->m11();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_m12_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->m12();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_m21_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->m21();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_m22_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->m22();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_dx_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->dx();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_dy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->dy();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_transform_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jlong tx_j, jlong ty_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 *tx = (ev_real64*) tx_j;
					ev_real64 *ty = (ev_real64*) ty_j;
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					pObjectX->transform(x, y, tx, ty);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_transform_1ev_1real64_1ev_1real64_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jint count_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_int32 count = (ev_int32) count_j;
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					pObjectX->transform(x, y, count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_mapRect_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->mapRect(rect);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_reset_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					pObjectX->reset();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_isIdentity_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					bool __values1 = pObjectX->isIdentity();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX->translate(dx, dy);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_scale_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble sx_j, jdouble sy_j)
				{
					ev_real64 sx = (ev_real64) sx_j;
					ev_real64 sy = (ev_real64) sy_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX->scale(sx, sy);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_shear_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble sh_j, jdouble sv_j)
				{
					ev_real64 sh = (ev_real64) sh_j;
					ev_real64 sv = (ev_real64) sv_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX->shear(sh, sv);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_rotate_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble a_j)
				{
					ev_real64 a = (ev_real64) a_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX->rotate(a);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_rotateAt_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j, jdouble x_j, jdouble y_j)
				{
					ev_real64 angle = (ev_real64) angle_j;
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX->rotateAt(angle, x, y);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_isInvertible_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					bool __values1 = pObjectX->isInvertible();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_determinant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->determinant();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_det_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					ev_real64 __values1 = pObjectX->det();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_inverted_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialMatrix *pObjectX = (EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialMatrix __values1 = pObjectX->inverted();
					EarthView::World::Spatial::Display::CSpatialMatrix *returnvalues = new EarthView::World::Spatial::Display::CSpatialMatrix(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_OperatorEquals_1CSpatialMatrix(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& pObjectX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix &o = *(EarthView::World::Spatial::Display::CSpatialMatrix*) o_j;
					bool __values1 = (pObjectX == o);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_OperatorNotEquals_1CSpatialMatrix(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& pObjectX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix &o = *(EarthView::World::Spatial::Display::CSpatialMatrix*) o_j;
					bool __values1 = (pObjectX != o);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_OperatorMultiply_1CSpatialMatrix(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& pObjectX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix &o = *(EarthView::World::Spatial::Display::CSpatialMatrix*) o_j;
					EarthView::World::Spatial::Display::CSpatialMatrix __values1 = pObjectX * (o);
					EarthView::World::Spatial::Display::CSpatialMatrix *returnvalues = new EarthView::World::Spatial::Display::CSpatialMatrix(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialMatrix_OperatorAssign_1CSpatialMatrix(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong o_j )
				{
					EarthView::World::Spatial::Display::CSpatialMatrix& pObjectX = *(EarthView::World::Spatial::Display::CSpatialMatrix*) pObjXXXX;
					const EarthView::World::Spatial::Display::CSpatialMatrix &o = *(EarthView::World::Spatial::Display::CSpatialMatrix*) o_j;
					pObjectX = o;
					EarthView::World::Spatial::Display::CSpatialMatrix& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
