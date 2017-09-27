/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/ray.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Ray_setOrigin_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong origin_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &origin = *(EarthView::World::Spatial::Math::CVector3*) origin_j;
					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					pObjectX->setOrigin(origin);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_getOrigin_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getOrigin();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Ray_setDirection_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dir_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &dir = *(EarthView::World::Spatial::Math::CVector3*) dir_j;
					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					pObjectX->setDirection(dir);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_getDirection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getDirection();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_getPoint_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
				{
					Real t = (Real) t_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPoint(t);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_getPoint_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getPoint(point);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble t_j )
				{
					EarthView::World::Spatial::Math::CRay& pObjectX = *(EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					Real t = (Real) t_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (t);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_intersects_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
				{
					const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(p);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_intersects_1CPlaneBoundedVolume(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
				{
					const EarthView::World::Spatial::Math::CPlaneBoundedVolume &p = *(EarthView::World::Spatial::Math::CPlaneBoundedVolume*) p_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(p);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_intersects_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong s_j)
				{
					const EarthView::World::Spatial::Math::CSphere &s = *(EarthView::World::Spatial::Math::CSphere*) s_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(s);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_intersects_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(box);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Ray_intersects_1CVector3_1CVector3_1CMatrix4_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong startPt_j, jlong endPt_j, jlong vpvMatrix_j, jlong piexlTolerance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &startPt = *(EarthView::World::Spatial::Math::CVector3*) startPt_j;
					const EarthView::World::Spatial::Math::CVector3 &endPt = *(EarthView::World::Spatial::Math::CVector3*) endPt_j;
					const EarthView::World::Spatial::Math::CMatrix4 &vpvMatrix = *(EarthView::World::Spatial::Math::CMatrix4*) vpvMatrix_j;
					ev_uint32 piexlTolerance = (ev_uint32) piexlTolerance_j;
					const 					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = pObjectX->intersects(startPt, endPt, vpvMatrix, piexlTolerance);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Ray_mul_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					pObjectX->mul(matrix);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Ray_devide_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					EarthView::World::Spatial::Math::CRay *pObjectX = (EarthView::World::Spatial::Math::CRay*) pObjXXXX;
					pObjectX->devide(matrix);
				}
			}
		}
	}
}
