/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector2.h"
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector2_set_1y_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*)pObjXXXX;
					pObjectX->y = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector2_set_1x_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*)pObjXXXX;
					pObjectX->x = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Vector2_toDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					ev_int32 __values1 = pObjectX->toDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Vector2_fromDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					ev_int32 __values1 = pObjectX->fromDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector2_swap_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CVector2 &other = *(EarthView::World::Spatial::Math::CVector2*) other_j;
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const ev_size_t i = (ev_size_t) i_j;
					Real __values1 = pObjectX[i];
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real* __values1 = pObjectX->ptr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorAssign_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					pObjectX = rkVector;
					EarthView::World::Spatial::Math::CVector2& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorAssign_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					pObjectX = fScalar;
					EarthView::World::Spatial::Math::CVector2& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorEquals_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					ev_bool __values1 = (pObjectX == rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorNotEquals_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					ev_bool __values1 = (pObjectX != rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorPlus_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX + (rkVector);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorMinus_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX - (rkVector);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX * (fScalar);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorMultiply_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX * (rhs);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorDivide_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX / (fScalar);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorDivide_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX / (rhs);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorPlus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX + (rhs);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorMinus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX - (rhs);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_length_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->length();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_squaredLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->squaredLength();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_distance_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->distance(rhs);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_squaredDistance_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->squaredDistance(rhs);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_dotProduct_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &vec = *(EarthView::World::Spatial::Math::CVector2*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->dotProduct(vec);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_normalise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->normalise();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_midPoint_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &vec = *(EarthView::World::Spatial::Math::CVector2*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->midPoint(vec);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorLessThan_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					ev_bool __values1 = (pObjectX < rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_OperatorGreaterThan_1CVector2(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector2& pObjectX = *(EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector2 &rhs = *(EarthView::World::Spatial::Math::CVector2*) rhs_j;
					ev_bool __values1 = (pObjectX > rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector2_makeFloor_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmp_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &cmp = *(EarthView::World::Spatial::Math::CVector2*) cmp_j;
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					pObjectX->makeFloor(cmp);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector2_makeCeil_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong cmp_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &cmp = *(EarthView::World::Spatial::Math::CVector2*) cmp_j;
					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					pObjectX->makeCeil(cmp);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_perpendicular_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->perpendicular();
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector2_crossProduct_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkVector_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &rkVector = *(EarthView::World::Spatial::Math::CVector2*) rkVector_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					Real __values1 = pObjectX->crossProduct(rkVector);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_randomDeviant_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble angle_j)
				{
					Real angle = (Real) angle_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->randomDeviant(angle);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_isZeroLength_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					ev_bool __values1 = pObjectX->isZeroLength();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_normalisedCopy_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->normalisedCopy();
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_reflect_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong normal_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &normal = *(EarthView::World::Spatial::Math::CVector2*) normal_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector2 __values1 = pObjectX->reflect(normal);
					EarthView::World::Spatial::Math::CVector2 *returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector2_isNaN_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNaN();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_angleBetween_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &other = *(EarthView::World::Spatial::Math::CVector2*) other_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->angleBetween(other);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_angleTo_1CVector2(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &other = *(EarthView::World::Spatial::Math::CVector2*) other_j;
					const 					EarthView::World::Spatial::Math::CVector2 *pObjectX = (EarthView::World::Spatial::Math::CVector2*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->angleTo(other);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::ZERO;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1UNIT_1X_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::UNIT_X;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1UNIT_1Y_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::UNIT_Y;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1NEGATIVE_1UNIT_1X_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::NEGATIVE_UNIT_X;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1NEGATIVE_1UNIT_1Y_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::NEGATIVE_UNIT_Y;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector2_get_1UNIT_1SCALE_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector2& __values1 = EarthView::World::Spatial::Math::CVector2::UNIT_SCALE;
					EarthView::World::Spatial::Math::CVector2* returnvalues = new EarthView::World::Spatial::Math::CVector2(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
