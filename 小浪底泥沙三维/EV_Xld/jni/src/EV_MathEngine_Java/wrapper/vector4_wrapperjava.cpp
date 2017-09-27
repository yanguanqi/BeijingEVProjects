/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/vector4.h"
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4_set_1y_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					pObjectX->y = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_get_1z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->z);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4_set_1z_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					pObjectX->z = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_get_1w_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->w);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4_set_1w_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					pObjectX->w = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4_set_1x_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*)pObjXXXX;
					pObjectX->x = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Vector4_toDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					ev_int32 __values1 = pObjectX->toDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_Vector4_fromDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					ev_int32 __values1 = pObjectX->fromDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4_swap_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CVector4 &other = *(EarthView::World::Spatial::Math::CVector4*) other_j;
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const ev_size_t i = (ev_size_t) i_j;
					Real __values1 = pObjectX[i];
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					Real* __values1 = pObjectX->ptr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorAssign_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rkVector = *(EarthView::World::Spatial::Math::CVector4*) rkVector_j;
					pObjectX = rkVector;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorAssign_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					pObjectX = fScalar;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorEquals_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rkVector = *(EarthView::World::Spatial::Math::CVector4*) rkVector_j;
					ev_bool __values1 = (pObjectX == rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorNotEquals_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rkVector = *(EarthView::World::Spatial::Math::CVector4*) rkVector_j;
					ev_bool __values1 = (pObjectX != rkVector);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorAssign_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rhs = *(EarthView::World::Spatial::Math::CVector3*) rhs_j;
					pObjectX = rhs;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorPlus_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rkVector = *(EarthView::World::Spatial::Math::CVector4*) rkVector_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX + (rkVector);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorMinus_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rkVector = *(EarthView::World::Spatial::Math::CVector4*) rkVector_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX - (rkVector);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX * (fScalar);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorMultiply_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rhs = *(EarthView::World::Spatial::Math::CVector4*) rhs_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX * (rhs);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorDivide_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX / (fScalar);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorDivide_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &rhs = *(EarthView::World::Spatial::Math::CVector4*) rhs_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX / (rhs);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorPlus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					const Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX + (rhs);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_OperatorMinus_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble rhs_j )
				{
					EarthView::World::Spatial::Math::CVector4& pObjectX = *(EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					Real rhs = (Real) rhs_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX - (rhs);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Vector4_dotProduct_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector4 &vec = *(EarthView::World::Spatial::Math::CVector4*) vec_j;
					const 					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					Real __values1 = pObjectX->dotProduct(vec);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector4_isNaN_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CVector4 *pObjectX = (EarthView::World::Spatial::Math::CVector4*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNaN();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CVector4& __values1 = EarthView::World::Spatial::Math::CVector4::ZERO;
					EarthView::World::Spatial::Math::CVector4* returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_push_1back_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::Math::CVector4 &t = *(EarthView::World::Spatial::Math::CVector4*) t_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4List_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4List_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_insert_1ev_1uint32_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::Math::CVector4 &t = *(EarthView::World::Spatial::Math::CVector4*) t_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Vector4List_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4List_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::Math::Vector4List& pObjectX = *(EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4List_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Vector4List_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Vector4List_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::Vector4List *pObjectX = (EarthView::World::Spatial::Math::Vector4List*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
