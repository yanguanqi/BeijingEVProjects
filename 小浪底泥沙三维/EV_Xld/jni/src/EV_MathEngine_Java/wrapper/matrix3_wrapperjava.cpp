/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/matrix3.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_swap_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &other = *(EarthView::World::Spatial::Math::CMatrix3*) other_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->swap(other);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong iRow_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_size_t iRow = (ev_size_t) iRow_j;
					Real* __values1 = pObjectX[iRow];
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_GetColumn_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong iCol_j)
				{
					ev_size_t iCol = (ev_size_t) iCol_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->GetColumn(iCol);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_SetColumn_1ev_1size_1t_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong iCol_j, jlong vec_j)
				{
					ev_size_t iCol = (ev_size_t) iCol_j;
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->SetColumn(iCol, vec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromAxes_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong xAxis_j, jlong yAxis_j, jlong zAxis_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &xAxis = *(EarthView::World::Spatial::Math::CVector3*) xAxis_j;
					const EarthView::World::Spatial::Math::CVector3 &yAxis = *(EarthView::World::Spatial::Math::CVector3*) yAxis_j;
					const EarthView::World::Spatial::Math::CVector3 &zAxis = *(EarthView::World::Spatial::Math::CVector3*) zAxis_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromAxes(xAxis, yAxis, zAxis);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorAssign_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					pObjectX = rkMatrix;
					EarthView::World::Spatial::Math::CMatrix3& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorEquals_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					ev_bool __values1 = (pObjectX == rkMatrix);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorNotEquals_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					ev_bool __values1 = (pObjectX != rkMatrix);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorPlus_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX + (rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorMinus_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX - (rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorMultiply_1CMatrix3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkMatrix_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CMatrix3 &rkMatrix = *(EarthView::World::Spatial::Math::CMatrix3*) rkMatrix_j;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX * (rkMatrix);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorMultiply_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rkVector_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3 &rkVector = *(EarthView::World::Spatial::Math::CVector3*) rkVector_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX * (rkVector);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble fScalar_j )
				{
					EarthView::World::Spatial::Math::CMatrix3& pObjectX = *(EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					Real fScalar = (Real) fScalar_j;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX * (fScalar);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_Transpose_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->Transpose();
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_Inverse_1CMatrix3_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkInverse_j, jdouble fTolerance_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &rkInverse = *(EarthView::World::Spatial::Math::CMatrix3*) rkInverse_j;
					Real fTolerance = (Real) fTolerance_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->Inverse(rkInverse, fTolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_Inverse_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkInverse_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &rkInverse = *(EarthView::World::Spatial::Math::CMatrix3*) rkInverse_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->Inverse(rkInverse);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_Inverse_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble fTolerance_j)
				{
					Real fTolerance = (Real) fTolerance_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->Inverse(fTolerance);
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_Inverse_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					EarthView::World::Spatial::Math::CMatrix3 __values1 = pObjectX->Inverse();
					EarthView::World::Spatial::Math::CMatrix3 *returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Matrix3_Determinant_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					Real __values1 = pObjectX->Determinant();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_SingularValueDecomposition_1CMatrix3_1CVector3_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkL_j, jlong rkS_j, jlong rkR_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &rkL = *(EarthView::World::Spatial::Math::CMatrix3*) rkL_j;
					EarthView::World::Spatial::Math::CVector3 &rkS = *(EarthView::World::Spatial::Math::CVector3*) rkS_j;
					EarthView::World::Spatial::Math::CMatrix3 &rkR = *(EarthView::World::Spatial::Math::CMatrix3*) rkR_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->SingularValueDecomposition(rkL, rkS, rkR);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_SingularValueComposition_1CMatrix3_1CVector3_1CMatrix3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkL_j, jlong rkS_j, jlong rkR_j)
				{
					const EarthView::World::Spatial::Math::CMatrix3 &rkL = *(EarthView::World::Spatial::Math::CMatrix3*) rkL_j;
					const EarthView::World::Spatial::Math::CVector3 &rkS = *(EarthView::World::Spatial::Math::CVector3*) rkS_j;
					const EarthView::World::Spatial::Math::CMatrix3 &rkR = *(EarthView::World::Spatial::Math::CMatrix3*) rkR_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->SingularValueComposition(rkL, rkS, rkR);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_Orthonormalize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->Orthonormalize();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_QDUDecomposition_1CMatrix3_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkQ_j, jlong rkD_j, jlong rkU_j)
				{
					EarthView::World::Spatial::Math::CMatrix3 &rkQ = *(EarthView::World::Spatial::Math::CMatrix3*) rkQ_j;
					EarthView::World::Spatial::Math::CVector3 &rkD = *(EarthView::World::Spatial::Math::CVector3*) rkD_j;
					EarthView::World::Spatial::Math::CVector3 &rkU = *(EarthView::World::Spatial::Math::CVector3*) rkU_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->QDUDecomposition(rkQ, rkD, rkU);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Matrix3_SpectralNorm_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					Real __values1 = pObjectX->SpectralNorm();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToAngleAxis_1CVector3_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkAxis_j, jlong rfAngle_j)
				{
					EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					EarthView::World::Spatial::Math::CRadian &rfAngle = *(EarthView::World::Spatial::Math::CRadian*) rfAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->ToAngleAxis(rkAxis, rfAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToAngleAxis_1CVector3_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkAxis_j, jlong rfAngle_j)
				{
					EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					EarthView::World::Spatial::Math::CDegree &rfAngle = *(EarthView::World::Spatial::Math::CDegree*) rfAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->ToAngleAxis(rkAxis, rfAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromAngleAxis_1CVector3_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rkAxis_j, jlong fRadians_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkAxis = *(EarthView::World::Spatial::Math::CVector3*) rkAxis_j;
					const EarthView::World::Spatial::Math::CRadian &fRadians = *(EarthView::World::Spatial::Math::CRadian*) fRadians_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromAngleAxis(rkAxis, fRadians);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesXYZ_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesXYZ(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesXZY_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesXZY(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesYXZ_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesYXZ(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesYZX_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesYZX(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesZXY_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesZXY(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_ToEulerAnglesZYX_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rfYAngle_j, jlong rfPAngle_j, jlong rfRAngle_j)
				{
					EarthView::World::Spatial::Math::CRadian &rfYAngle = *(EarthView::World::Spatial::Math::CRadian*) rfYAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfPAngle = *(EarthView::World::Spatial::Math::CRadian*) rfPAngle_j;
					EarthView::World::Spatial::Math::CRadian &rfRAngle = *(EarthView::World::Spatial::Math::CRadian*) rfRAngle_j;
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->ToEulerAnglesZYX(rfYAngle, rfPAngle, rfRAngle);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesXYZ_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesXYZ(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesXZY_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesXZY(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesYXZ_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesYXZ(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesYZX_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesYZX(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesZXY_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesZXY(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_FromEulerAnglesZYX_1CRadian_1CRadian_1CRadian(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fYAngle_j, jlong fPAngle_j, jlong fRAngle_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fYAngle = *(EarthView::World::Spatial::Math::CRadian*) fYAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fPAngle = *(EarthView::World::Spatial::Math::CRadian*) fPAngle_j;
					const EarthView::World::Spatial::Math::CRadian &fRAngle = *(EarthView::World::Spatial::Math::CRadian*) fRAngle_j;
					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->FromEulerAnglesZYX(fYAngle, fPAngle, fRAngle);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_EigenSolveSymmetric_1Real_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong afEigenvalue_j, jlongArray akEigenvector_j)
				{
					Real afEigenvalue[3];
					for (int i = 0; i<3; i++)
					{
						afEigenvalue[i] = *(Real*)afEigenvalue_j;
						afEigenvalue_j++;
					}
					EarthView::World::Spatial::Math::CVector3 *akEigenvector[3] ;
					jlong akEigenvector_lon[3];
					__env->GetLongArrayRegion(akEigenvector_j,0,3,akEigenvector_lon);
					for (int i=0; i<3; i++)
					{
						akEigenvector[i] = (EarthView::World::Spatial::Math::CVector3*)akEigenvector_lon[i];
					}
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					pObjectX->EigenSolveSymmetric(afEigenvalue, akEigenvector);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Matrix3_TensorProduct_1CVector3_1CVector3_1CMatrix3(JNIEnv *__env , jclass __clazz, jlong rkU_j, jlong rkV_j, jlong rkProduct_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &rkU = *(EarthView::World::Spatial::Math::CVector3*) rkU_j;
					const EarthView::World::Spatial::Math::CVector3 &rkV = *(EarthView::World::Spatial::Math::CVector3*) rkV_j;
					EarthView::World::Spatial::Math::CMatrix3 &rkProduct = *(EarthView::World::Spatial::Math::CMatrix3*) rkProduct_j;
					EarthView::World::Spatial::Math::CMatrix3::TensorProduct(rkU, rkV, rkProduct);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Matrix3_hasScale_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CMatrix3 *pObjectX = (EarthView::World::Spatial::Math::CMatrix3*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasScale();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Matrix3_get_1EPSILON_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMatrix3::EPSILON);
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_get_1ZERO_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix3& __values1 = EarthView::World::Spatial::Math::CMatrix3::ZERO;
					EarthView::World::Spatial::Math::CMatrix3* returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Matrix3_get_1IDENTITY_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CMatrix3& __values1 = EarthView::World::Spatial::Math::CMatrix3::IDENTITY;
					EarthView::World::Spatial::Math::CMatrix3* returnvalues = new EarthView::World::Spatial::Math::CMatrix3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
