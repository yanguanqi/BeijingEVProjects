/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/matrix4.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_swap_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CMatrix4 &other = *(EarthView::World::Spatial::Math::CMatrix4*) other_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong iRow_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					ev_size_t iRow = (ev_size_t) iRow_j;
					Real* __values1 = pObjectX[iRow];
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_concatenate_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m2_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->concatenate(m2);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMultiply_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong m2_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX * (m2);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMultiply_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong v_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (v);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMultiply_1CVector4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong v_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector4 &v = *(EarthView::World::Spatial::Math::CVector4*) v_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX * (v);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMultiply_1CPlane(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong p_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
					EarthView::World::Spatial::Math::CPlane __values1 = pObjectX * (p);
					EarthView::World::Spatial::Math::CPlane *returnvalues = new EarthView::World::Spatial::Math::CPlane(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorPlus_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong m2_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX + (m2);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMinus_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong m2_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX - (m2);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorEquals_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong m2_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					ev_bool __values1 = (pObjectX == m2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorNotEquals_1CMatrix4(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong m2_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					ev_bool __values1 = (pObjectX != m2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorAssign_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong mat3_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &mat3 = *(EarthView::World::Spatial::Math::CMatrix3*) mat3_j;
					pObjectX = mat3;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_transpose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->transpose();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_setTrans_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->setTrans(v);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_getTrans_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getTrans();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_makeTrans_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->makeTrans(v);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_makeTrans_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble tx_j, jdouble ty_j, jdouble tz_j)
				{
					Real tx = (Real) tx_j;
					Real ty = (Real) ty_j;
					Real tz = (Real) tz_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->makeTrans(tx, ty, tz);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_getTrans_1CVector3(JNIEnv *__env , jclass __clazz, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMatrix4::getTrans(v);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_getTrans_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble t_x_j, jdouble t_y_j, jdouble t_z_j)
				{
					Real t_x = (Real) t_x_j;
					Real t_y = (Real) t_y_j;
					Real t_z = (Real) t_z_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMatrix4::getTrans(t_x, t_y, t_z);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_setScale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->setScale(v);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_getScale_1CVector3(JNIEnv *__env , jclass __clazz, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMatrix4::getScale(v);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_getScale_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble s_x_j, jdouble s_y_j, jdouble s_z_j)
				{
					Real s_x = (Real) s_x_j;
					Real s_y = (Real) s_y_j;
					Real s_z = (Real) s_z_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMatrix4::getScale(s_x, s_y, s_z);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_extract3x3Matrix_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m3x3_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &m3x3 = *(EarthView::World::Spatial::Math::CMatrix3*) m3x3_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->extract3x3Matrix(m3x3);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix4_hasScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix4_hasNegativeScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasNegativeScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_get_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m00_j, jlong m01_j, jlong m02_j, jlong m03_j, jlong m10_j, jlong m11_j, jlong m12_j, jlong m13_j, jlong m20_j, jlong m21_j, jlong m22_j, jlong m23_j, jlong m30_j, jlong m31_j, jlong m32_j, jlong m33_j)
				{
					Real &m00 = *(Real*) m00_j;
					Real &m01 = *(Real*) m01_j;
					Real &m02 = *(Real*) m02_j;
					Real &m03 = *(Real*) m03_j;
					Real &m10 = *(Real*) m10_j;
					Real &m11 = *(Real*) m11_j;
					Real &m12 = *(Real*) m12_j;
					Real &m13 = *(Real*) m13_j;
					Real &m20 = *(Real*) m20_j;
					Real &m21 = *(Real*) m21_j;
					Real &m22 = *(Real*) m22_j;
					Real &m23 = *(Real*) m23_j;
					Real &m30 = *(Real*) m30_j;
					Real &m31 = *(Real*) m31_j;
					Real &m32 = *(Real*) m32_j;
					Real &m33 = *(Real*) m33_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->get(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_set_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble m00_j, jdouble m01_j, jdouble m02_j, jdouble m03_j, jdouble m10_j, jdouble m11_j, jdouble m12_j, jdouble m13_j, jdouble m20_j, jdouble m21_j, jdouble m22_j, jdouble m23_j, jdouble m30_j, jdouble m31_j, jdouble m32_j, jdouble m33_j)
				{
					Real m00 = (Real) m00_j;
					Real m01 = (Real) m01_j;
					Real m02 = (Real) m02_j;
					Real m03 = (Real) m03_j;
					Real m10 = (Real) m10_j;
					Real m11 = (Real) m11_j;
					Real m12 = (Real) m12_j;
					Real m13 = (Real) m13_j;
					Real m20 = (Real) m20_j;
					Real m21 = (Real) m21_j;
					Real m22 = (Real) m22_j;
					Real m23 = (Real) m23_j;
					Real m30 = (Real) m30_j;
					Real m31 = (Real) m31_j;
					Real m32 = (Real) m32_j;
					Real m33 = (Real) m33_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->set(m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_extractQuaternion_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->extractQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = EarthView::World::Spatial::Math::CMatrix4::ZERO;
					EarthView::World::Spatial::Math::CMatrix4* returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_get_1ZEROAFFINE_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = EarthView::World::Spatial::Math::CMatrix4::ZEROAFFINE;
					EarthView::World::Spatial::Math::CMatrix4* returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_get_1IDENTITY_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = EarthView::World::Spatial::Math::CMatrix4::IDENTITY;
					EarthView::World::Spatial::Math::CMatrix4* returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_get_1CLIPSPACE2DTOIMAGESPACE_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix4& __values1 = EarthView::World::Spatial::Math::CMatrix4::CLIPSPACE2DTOIMAGESPACE;
					EarthView::World::Spatial::Math::CMatrix4* returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble scalar_j )
				{
					EarthView::World::Spatial::Math::CMatrix4& pObjectX = *(EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					Real scalar = (Real) scalar_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX * (scalar);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_adjoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->adjoint();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Matrix4_determinant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					Real __values1 = pObjectX->determinant();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_inverse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->inverse();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_makeTransform_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j, jlong scale_j, jlong orientation_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->makeTransform(position, scale, orientation);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_makeInverseTransform_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j, jlong scale_j, jlong orientation_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
					const EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->makeInverseTransform(position, scale, orientation);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix4_decomposition_1CVector3_1CVector3_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong position_j, jlong scale_j, jlong orientation_j)
				{
					EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
					EarthView::World::Spatial::Math::CVector3 &scale = *(EarthView::World::Spatial::Math::CVector3*) scale_j;
					EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					pObjectX->decomposition(position, scale, orientation);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix4_isAffine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAffine();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_inverseAffine_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->inverseAffine();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_concatenateAffine_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m2_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &m2 = *(EarthView::World::Spatial::Math::CMatrix4*) m2_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->concatenateAffine(m2);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_transformAffine_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->transformAffine(v);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_transformAffine_1CVector4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector4 &v = *(EarthView::World::Spatial::Math::CVector4*) v_j;
					const 					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector4 __values1 = pObjectX->transformAffine(v);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix4_toMatrix4f_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CMatrix4 *pObjectX = (EarthView::World::Spatial::Math::CMatrix4*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = pObjectX->toMatrix4f();
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
