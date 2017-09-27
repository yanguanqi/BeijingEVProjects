/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector3.h"
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_set_1y_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					pObjectX->y = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->z);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_set_1z_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					pObjectX->z = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_set_1x_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*)pObjXXXX;
					pObjectX->x = (Real)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_swap_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CVector3 &other = *(EarthView::World::Spatial::Math::CVector3*) other_j;
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const ev_size_t i = (ev_size_t) i_j;
					Real __values1 = pObjectX[i];
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real* __values1 = pObjectX->ptr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorAssign_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					pObjectX = rkVector;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorAssign_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScaler_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const Real fScaler = (Real) fScaler_j;
					pObjectX = fScaler;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorEquals_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					ev_bool __values1 = (pObjectX == rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorNotEquals_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					ev_bool __values1 = (pObjectX != rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorPlus_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX + (rkVector);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorMinus_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX - (rkVector);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (fScalar);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorMultiply_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (rhs);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorDivide_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX / (fScalar);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorDivide_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX / (rhs);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorPlus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX + (rhs);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorMinus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX - (rhs);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_length_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->length();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_squaredLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->squaredLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_distance_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->distance(rhs);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_squaredDistance_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->squaredDistance(rhs);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_dotProduct_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->dotProduct(vec);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_absDotProduct_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->absDotProduct(vec);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector3_normalise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					Real __values1 = pObjectX->normalise();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_crossProduct_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkVector_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->crossProduct(rkVector);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_midPoint_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->midPoint(vec);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorLessThan_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					ev_bool __values1 = (pObjectX < rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_OperatorGreaterThan_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector3& pObjectX = *(EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					ev_bool __values1 = (pObjectX > rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_makeFloor_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmp_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &cmp = *(EarthView::World::Spatial::Math::CVector3*) cmp_j;
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					pObjectX->makeFloor(cmp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3_makeCeil_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmp_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &cmp = *(EarthView::World::Spatial::Math::CVector3*) cmp_j;
					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					pObjectX->makeCeil(cmp);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_perpendicular_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->perpendicular();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_randomDeviant_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->randomDeviant(angle);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_randomDeviant_1CRadian_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong angle_j, jlong up_j)
				{
					const EarthView::World::Spatial::Math::CRadian &angle = *(EarthView::World::Spatial::Math::CRadian*) angle_j;
					const EarthView::World::Spatial::Math::CVector3 &up = *(EarthView::World::Spatial::Math::CVector3*) up_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->randomDeviant(angle, up);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_angleBetween_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &dest = *(EarthView::World::Spatial::Math::CVector3*) dest_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->angleBetween(dest);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_getRotationTo_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j, jlong fallbackAxis_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &dest = *(EarthView::World::Spatial::Math::CVector3*) dest_j;
					const EarthView::World::Spatial::Math::CVector3 &fallbackAxis = *(EarthView::World::Spatial::Math::CVector3*) fallbackAxis_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getRotationTo(dest, fallbackAxis);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_getRotationTo_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dest_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &dest = *(EarthView::World::Spatial::Math::CVector3*) dest_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->getRotationTo(dest);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_isZeroLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->isZeroLength();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_normalisedCopy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->normalisedCopy();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_reflect_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong normal_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->reflect(normal);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_positionEquals_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->positionEquals(rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_positionEquals_1CVector3_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j, jdouble tolerance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					Real tolerance = (Real) tolerance_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->positionEquals(rhs, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_positionCloses_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->positionCloses(rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_positionCloses_1CVector3_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j, jdouble tolerance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					Real tolerance = (Real) tolerance_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->positionCloses(rhs, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_directionEquals_1CVector3_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j, jlong tolerance_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					const EarthView::World::Spatial::Math::CRadian &tolerance = *(EarthView::World::Spatial::Math::CRadian*) tolerance_j;
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->directionEquals(rhs, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3_isNaN_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNaN();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_primaryAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector3 *pObjectX = (EarthView::World::Spatial::Math::CVector3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->primaryAxis();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::ZERO;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1UNIT_1X_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::UNIT_X;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1UNIT_1Y_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::UNIT_Y;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1UNIT_1Z_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::UNIT_Z;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1NEGATIVE_1UNIT_1X_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_X;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1NEGATIVE_1UNIT_1Y_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_Y;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1NEGATIVE_1UNIT_1Z_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::NEGATIVE_UNIT_Z;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3_get_1UNIT_1SCALE_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector3& __values1 = EarthView::World::Spatial::Math::CVector3::UNIT_SCALE;
					EarthView::World::Spatial::Math::CVector3* returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_push_1back_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CVector3 &t = *(EarthView::World::Spatial::Math::CVector3*) t_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_VertexList_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_VertexList_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_insert_1ev_1uint32_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::CVector3 &t = *(EarthView::World::Spatial::Math::CVector3*) t_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_insert_1ev_1uint32_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong other_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::VertexList other = *(EarthView::World::Spatial::Math::VertexList*) other_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->insert(pos, other);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_VertexList_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_VertexList_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Math::VertexList& pObjectX = *(EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_VertexList_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_VertexList_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_VertexList_swap_1VertexList(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					EarthView::World::Spatial::Math::VertexList &rhs = *(EarthView::World::Spatial::Math::VertexList*) rhs_j;
					EarthView::World::Spatial::Math::VertexList *pObjectX = (EarthView::World::Spatial::Math::VertexList*) pObjXXXX;
					pObjectX->swap(rhs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3List_push_1back_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CVector3 &t = *(EarthView::World::Spatial::Math::CVector3*) t_j;
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3List_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3List_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3List_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector3List_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector3List_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3List_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector3List_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector3List *pObjectX = (EarthView::World::Spatial::Math::Vector3List*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
