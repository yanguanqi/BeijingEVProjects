/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/quaternion.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_swap_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CQuaternion &other = *(EarthView::World::Spatial::Math::CQuaternion*) other_j;
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong i_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const ev_size_t i = (ev_size_t) i_j;
					Real __values1 = pObjectX[i];
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_ptr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real* __values1 = pObjectX->ptr();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_FromRotationMatrix_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kRot_j)
				{
					const EarthView::World::Spatial::Math::CMatrix3 &kRot = *(EarthView::World::Spatial::Math::CMatrix3*) kRot_j;
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->FromRotationMatrix(kRot);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_ToRotationMatrix_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kRot_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &kRot = *(EarthView::World::Spatial::Math::CMatrix3*) kRot_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->ToRotationMatrix(kRot);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_FromAngleAxis_1CRadian_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfAngle_j, jlong rkAxis_j)
				{
					const EarthView::World::Spatial::Math::CRadian &rfAngle = *(EarthView::World::Spatial::Math::CRadian*) rfAngle_j;
					const EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->FromAngleAxis(rfAngle, rkAxis);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_ToAngleAxis_1CRadian_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfAngle_j, jlong rkAxis_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfAngle = *(EarthView::World::Spatial::Math::CRadian*) rfAngle_j;
					EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->ToAngleAxis(rfAngle, rkAxis);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_ToAngleAxis_1CDegree_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dAngle_j, jlong rkAxis_j)
				{
					EarthView::World::Spatial::Math::CDegree &dAngle = *(EarthView::World::Spatial::Math::CDegree*) dAngle_j;
					EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->ToAngleAxis(dAngle, rkAxis);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_FromAxes_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xAxis_j, jlong yAxis_j, jlong zAxis_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &xAxis = *(EarthView::World::Spatial::Math::CVector3*) xAxis_j;
					const EarthView::World::Spatial::Math::CVector3 &yAxis = *(EarthView::World::Spatial::Math::CVector3*) yAxis_j;
					const EarthView::World::Spatial::Math::CVector3 &zAxis = *(EarthView::World::Spatial::Math::CVector3*) zAxis_j;
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->FromAxes(xAxis, yAxis, zAxis);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_ToAxes_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xAxis_j, jlong yAxis_j, jlong zAxis_j)
				{
					EarthView::World::Spatial::Math::CVector3 &xAxis = *(EarthView::World::Spatial::Math::CVector3*) xAxis_j;
					EarthView::World::Spatial::Math::CVector3 &yAxis = *(EarthView::World::Spatial::Math::CVector3*) yAxis_j;
					EarthView::World::Spatial::Math::CVector3 &zAxis = *(EarthView::World::Spatial::Math::CVector3*) zAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					pObjectX->ToAxes(xAxis, yAxis, zAxis);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_xAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->xAxis();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_yAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->yAxis();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_zAxis_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->zAxis();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorAssign_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkQ_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					pObjectX = rkQ;
					EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorPlus_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkQ_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX + (rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorMinus_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkQ_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX - (rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorMultiply_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkQ_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX * (rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX * (fScalar);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorEquals_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rhs = *(EarthView::World::Spatial::Math::CQuaternion*) rhs_j;
					ev_bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorNotEquals_1CQuaternion(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CQuaternion &rhs = *(EarthView::World::Spatial::Math::CQuaternion*) rhs_j;
					ev_bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_Dot_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkQ_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real __values1 = pObjectX->Dot(rkQ);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_Norm_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real __values1 = pObjectX->Norm();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_normalise_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					Real __values1 = pObjectX->normalise();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Inverse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->Inverse();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_UnitInverse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->UnitInverse();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Exp_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->Exp();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Log_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->Log();
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_OperatorMultiply_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CQuaternion& pObjectX = *(EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (rkVector);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getRoll_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reprojectAxis_j)
				{
					ev_bool reprojectAxis = (ev_bool) reprojectAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getRoll(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getRoll_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getRoll();
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getPitch_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reprojectAxis_j)
				{
					ev_bool reprojectAxis = (ev_bool) reprojectAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getPitch(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getPitch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getPitch();
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getYaw_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean reprojectAxis_j)
				{
					ev_bool reprojectAxis = (ev_bool) reprojectAxis_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getYaw(reprojectAxis);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_getYaw_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX->getYaw();
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Quaternion_ev_1equals_1CQuaternion_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j, jlong tolerance_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &rhs = *(EarthView::World::Spatial::Math::CQuaternion*) rhs_j;
					const EarthView::World::Spatial::Math::CRadian &tolerance = *(EarthView::World::Spatial::Math::CRadian*) tolerance_j;
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					ev_bool __values1 = pObjectX->equals(rhs, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Slerp_1Real_1CQuaternion_1CQuaternion_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkQ_j, jboolean shortestPath_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					ev_bool shortestPath = (ev_bool) shortestPath_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::Slerp(fT, rkP, rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Slerp_1Real_1CQuaternion_1CQuaternion(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkQ_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::Slerp(fT, rkP, rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_SlerpExtraSpins_1Real_1CQuaternion_1CQuaternion_1ev_1int32(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkQ_j, jint iExtraSpins_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					ev_int32 iExtraSpins = (ev_int32) iExtraSpins_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::SlerpExtraSpins(fT, rkP, rkQ, iExtraSpins);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_Intermediate_1CQuaternion_1CQuaternion_1CQuaternion_1CQuaternion_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong rkQ0_j, jlong rkQ1_j, jlong rkQ2_j, jlong rka_j, jlong rkB_j)
				{
					const EarthView::World::Spatial::Math::CQuaternion &rkQ0 = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ0_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ1 = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ1_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ2 = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ2_j;
					EarthView::World::Spatial::Math::CQuaternion &rka = *(EarthView::World::Spatial::Math::CQuaternion*) rka_j;
					EarthView::World::Spatial::Math::CQuaternion &rkB = *(EarthView::World::Spatial::Math::CQuaternion*) rkB_j;
					EarthView::World::Spatial::Math::CQuaternion::Intermediate(rkQ0, rkQ1, rkQ2, rka, rkB);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Squad_1Real_1CQuaternion_1CQuaternion_1CQuaternion_1CQuaternion_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkA_j, jlong rkB_j, jlong rkQ_j, jboolean shortestPath_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkA = *(EarthView::World::Spatial::Math::CQuaternion*) rkA_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkB = *(EarthView::World::Spatial::Math::CQuaternion*) rkB_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					ev_bool shortestPath = (ev_bool) shortestPath_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::Squad(fT, rkP, rkA, rkB, rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_Squad_1Real_1CQuaternion_1CQuaternion_1CQuaternion_1CQuaternion(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkA_j, jlong rkB_j, jlong rkQ_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkA = *(EarthView::World::Spatial::Math::CQuaternion*) rkA_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkB = *(EarthView::World::Spatial::Math::CQuaternion*) rkB_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::Squad(fT, rkP, rkA, rkB, rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_nlerp_1Real_1CQuaternion_1CQuaternion_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkQ_j, jboolean shortestPath_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					ev_bool shortestPath = (ev_bool) shortestPath_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::nlerp(fT, rkP, rkQ, shortestPath);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_nlerp_1Real_1CQuaternion_1CQuaternion(JNIEnv *__env , jclass __clazz, jdouble fT_j, jlong rkP_j, jlong rkQ_j)
				{
					Real fT = (Real) fT_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkP = *(EarthView::World::Spatial::Math::CQuaternion*) rkP_j;
					const EarthView::World::Spatial::Math::CQuaternion &rkQ = *(EarthView::World::Spatial::Math::CQuaternion*) rkQ_j;
					EarthView::World::Spatial::Math::CQuaternion __values1 = EarthView::World::Spatial::Math::CQuaternion::nlerp(fT, rkP, rkQ);
					EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1ms_1fEpsilon_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CQuaternion::ms_fEpsilon);
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = EarthView::World::Spatial::Math::CQuaternion::ZERO;
					EarthView::World::Spatial::Math::CQuaternion* returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1IDENTITY_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CQuaternion& __values1 = EarthView::World::Spatial::Math::CQuaternion::IDENTITY;
					EarthView::World::Spatial::Math::CQuaternion* returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_set_1x_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					pObjectX->x = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_set_1y_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					pObjectX->y = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->z);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_set_1z_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					pObjectX->z = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Quaternion_get_1w_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->w);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Quaternion_set_1w_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*)pObjXXXX;
					pObjectX->w = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Quaternion_isNaN_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CQuaternion *pObjectX = (EarthView::World::Spatial::Math::CQuaternion*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNaN();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
