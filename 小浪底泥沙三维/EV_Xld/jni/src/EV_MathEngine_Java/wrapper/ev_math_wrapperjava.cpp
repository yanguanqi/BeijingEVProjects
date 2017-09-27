/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/ev_math.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorAssign_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const Real f = (const Real) f_j;
					pObjectX = f;
					EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorAssign_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					pObjectX = r;
					EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorAssign_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					pObjectX = d;
					EarthView::World::Spatial::Math::CRadian& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Radian_valueDegrees_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CRadian *pObjectX = (EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					Real __values1 = pObjectX->valueDegrees();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Radian_valueRadians_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CRadian *pObjectX = (EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					Real __values1 = pObjectX->valueRadians();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Radian_valueAngleUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CRadian *pObjectX = (EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					Real __values1 = pObjectX->valueAngleUnits();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorPlus_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX + (r);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorPlus_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX + (d);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorMinus_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX - (r);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorMinus_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX - (d);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					Real f = (Real) f_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX * (f);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorMultiply_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong f_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &f = *(EarthView::World::Spatial::Math::CRadian*) f_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX * (f);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorDivide_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					Real f = (Real) f_j;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX / (f);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorLessThan_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX < r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorLessThanOrEqual_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX <= r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorEquals_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX == r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorNotEquals_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX != r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorGreaterThanOrEqual_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX >= r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Radian_OperatorGreaterThan_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CRadian& pObjectX = *(EarthView::World::Spatial::Math::CRadian*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					ev_bool __values1 = (pObjectX > r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorAssign_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const Real f = (const Real) f_j;
					pObjectX = f;
					EarthView::World::Spatial::Math::CDegree& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorAssign_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					pObjectX = d;
					EarthView::World::Spatial::Math::CDegree& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorAssign_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					pObjectX = r;
					EarthView::World::Spatial::Math::CDegree& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Degree_valueDegrees_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					Real __values1 = pObjectX->valueDegrees();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Degree_valueRadians_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					Real __values1 = pObjectX->valueRadians();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Degree_valueAngleUnits_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					Real __values1 = pObjectX->valueAngleUnits();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorPlus_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX + (d);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorPlus_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX + (r);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = ( -pObjectX);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorMinus_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX - (d);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorMinus_1CRadian(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CRadian &r = *(EarthView::World::Spatial::Math::CRadian*) r_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX - (r);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorMultiply_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					Real f = (Real) f_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX * (f);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorMultiply_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong f_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &f = *(EarthView::World::Spatial::Math::CDegree*) f_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX * (f);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorDivide_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble f_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					Real f = (Real) f_j;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX / (f);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorLessThan_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX < d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorLessThanOrEqual_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX <= d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorEquals_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX == d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorNotEquals_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX != d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorGreaterThanOrEqual_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX >= d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Degree_OperatorGreaterThan_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong d_j )
				{
					EarthView::World::Spatial::Math::CDegree& pObjectX = *(EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					const EarthView::World::Spatial::Math::CDegree &d = *(EarthView::World::Spatial::Math::CDegree*) d_j;
					ev_bool __values1 = (pObjectX > d);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDms_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EVString __values1 = pObjectX->toStringDms();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLat_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EVString __values1 = pObjectX->toStringDmsLat();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLon_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CDegree *pObjectX = (EarthView::World::Spatial::Math::CDegree*) pObjXXXX;
					EVString __values1 = pObjectX->toStringDmsLon();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDms_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble degree_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					EVString __values1 = EarthView::World::Spatial::Math::CDegree::toStringDms(degree);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_fromStringDms_1EVString(JNIEnv *__env , jclass __clazz, jstring degreeString_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* degreeString_ch = (const ev_char*)__env->GetStringUTFChars(degreeString_j,JNI_FALSE);
					const EVString degreeString = degreeString_ch;
					__env->ReleaseStringUTFChars(degreeString_j, (const char *)degreeString_ch);
					#else
					const ev_wchar* degreeString_ch = (const ev_wchar*)__env->GetStringChars(degreeString_j,JNI_FALSE);
					const EVString degreeString = degreeString_ch;
					__env->ReleaseStringChars(degreeString_j, (const jchar *)degreeString_ch);
					#endif
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CDegree::fromStringDms(degreeString);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLat_1ev_1real64_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jdouble degree_j, jstring southSuffix_j, jstring northSuffix_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* southSuffix_ch = (const ev_char*)__env->GetStringUTFChars(southSuffix_j,JNI_FALSE);
					const EVString southSuffix = southSuffix_ch;
					__env->ReleaseStringUTFChars(southSuffix_j, (const char *)southSuffix_ch);
					#else
					const ev_wchar* southSuffix_ch = (const ev_wchar*)__env->GetStringChars(southSuffix_j,JNI_FALSE);
					const EVString southSuffix = southSuffix_ch;
					__env->ReleaseStringChars(southSuffix_j, (const jchar *)southSuffix_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* northSuffix_ch = (const ev_char*)__env->GetStringUTFChars(northSuffix_j,JNI_FALSE);
					const EVString northSuffix = northSuffix_ch;
					__env->ReleaseStringUTFChars(northSuffix_j, (const char *)northSuffix_ch);
					#else
					const ev_wchar* northSuffix_ch = (const ev_wchar*)__env->GetStringChars(northSuffix_j,JNI_FALSE);
					const EVString northSuffix = northSuffix_ch;
					__env->ReleaseStringChars(northSuffix_j, (const jchar *)northSuffix_ch);
					#endif
					EVString __values1 = EarthView::World::Spatial::Math::CDegree::toStringDmsLat(degree, southSuffix, northSuffix);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_fromStringDmsLat_1EVString(JNIEnv *__env , jclass __clazz, jstring LatitudeString_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* LatitudeString_ch = (const ev_char*)__env->GetStringUTFChars(LatitudeString_j,JNI_FALSE);
					const EVString LatitudeString = LatitudeString_ch;
					__env->ReleaseStringUTFChars(LatitudeString_j, (const char *)LatitudeString_ch);
					#else
					const ev_wchar* LatitudeString_ch = (const ev_wchar*)__env->GetStringChars(LatitudeString_j,JNI_FALSE);
					const EVString LatitudeString = LatitudeString_ch;
					__env->ReleaseStringChars(LatitudeString_j, (const jchar *)LatitudeString_ch);
					#endif
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CDegree::fromStringDmsLat(LatitudeString);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLat_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble degree_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					EVString __values1 = EarthView::World::Spatial::Math::CDegree::toStringDmsLat(degree);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLon_1ev_1real64_1EVString_1EVString(JNIEnv *__env , jclass __clazz, jdouble degree_j, jstring eastSuffix_j, jstring westSuffix_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* eastSuffix_ch = (const ev_char*)__env->GetStringUTFChars(eastSuffix_j,JNI_FALSE);
					const EVString eastSuffix = eastSuffix_ch;
					__env->ReleaseStringUTFChars(eastSuffix_j, (const char *)eastSuffix_ch);
					#else
					const ev_wchar* eastSuffix_ch = (const ev_wchar*)__env->GetStringChars(eastSuffix_j,JNI_FALSE);
					const EVString eastSuffix = eastSuffix_ch;
					__env->ReleaseStringChars(eastSuffix_j, (const jchar *)eastSuffix_ch);
					#endif
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* westSuffix_ch = (const ev_char*)__env->GetStringUTFChars(westSuffix_j,JNI_FALSE);
					const EVString westSuffix = westSuffix_ch;
					__env->ReleaseStringUTFChars(westSuffix_j, (const char *)westSuffix_ch);
					#else
					const ev_wchar* westSuffix_ch = (const ev_wchar*)__env->GetStringChars(westSuffix_j,JNI_FALSE);
					const EVString westSuffix = westSuffix_ch;
					__env->ReleaseStringChars(westSuffix_j, (const jchar *)westSuffix_ch);
					#endif
					EVString __values1 = EarthView::World::Spatial::Math::CDegree::toStringDmsLon(degree, eastSuffix, westSuffix);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_math_Degree_toStringDmsLon_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble degree_j)
				{
					ev_real64 degree = (ev_real64) degree_j;
					EVString __values1 = EarthView::World::Spatial::Math::CDegree::toStringDmsLon(degree);
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Degree_fromStringDmsLon_1EVString(JNIEnv *__env , jclass __clazz, jstring longitudeString_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* longitudeString_ch = (const ev_char*)__env->GetStringUTFChars(longitudeString_j,JNI_FALSE);
					const EVString longitudeString = longitudeString_ch;
					__env->ReleaseStringUTFChars(longitudeString_j, (const char *)longitudeString_ch);
					#else
					const ev_wchar* longitudeString_ch = (const ev_wchar*)__env->GetStringChars(longitudeString_j,JNI_FALSE);
					const EVString longitudeString = longitudeString_ch;
					__env->ReleaseStringChars(longitudeString_j, (const jchar *)longitudeString_ch);
					#endif
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CDegree::fromStringDmsLon(longitudeString);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Angle_OperatorConvertionCRadian_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CAngle& pObjectX = *(EarthView::World::Spatial::Math::CAngle*) pObjXXXX;
					EarthView::World::Spatial::Math::CRadian __values1 = pObjectX ;
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Angle_OperatorConvertionCDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CAngle& pObjectX = *(EarthView::World::Spatial::Math::CAngle*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX ;
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_IntersectResPair_get_1first_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::IntersectResPair *pObjectX = (EarthView::World::Spatial::Math::IntersectResPair*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->first);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_IntersectResPair_set_1first_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::Math::IntersectResPair *pObjectX = (EarthView::World::Spatial::Math::IntersectResPair*)pObjXXXX;
					pObjectX->first = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_IntersectResPair_get_1second_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::IntersectResPair *pObjectX = (EarthView::World::Spatial::Math::IntersectResPair*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->second);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_IntersectResPair_set_1second_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::Math::IntersectResPair *pObjectX = (EarthView::World::Spatial::Math::IntersectResPair*)pObjXXXX;
					pObjectX->second = (Real)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_IntersectResPair_OperatorAssign_1IntersectResPair(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
				{
					EarthView::World::Spatial::Math::IntersectResPair& pObjectX = *(EarthView::World::Spatial::Math::IntersectResPair*) pObjXXXX;
					const EarthView::World::Spatial::Math::IntersectResPair &other = *(EarthView::World::Spatial::Math::IntersectResPair*) other_j;
					pObjectX = other;
					EarthView::World::Spatial::Math::IntersectResPair& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_math_EVMath_00024AngleUnitHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CMath::AU_DEGREE,
						CMath::AU_RADIAN
					};
					jintArray array = __env->NewIntArray(2);
					__env->SetIntArrayRegion(array, 0, 2, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_IAbs_1ev_1int32(JNIEnv *__env , jclass __clazz, jint iValue_j)
				{
					ev_int32 iValue = (ev_int32) iValue_j;
					ev_int32 __values1 = EarthView::World::Spatial::Math::CMath::IAbs(iValue);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_ICeil_1ev_1real32(JNIEnv *__env , jclass __clazz, jfloat fValue_j)
				{
					ev_real32 fValue = (ev_real32) fValue_j;
					ev_int32 __values1 = EarthView::World::Spatial::Math::CMath::ICeil(fValue);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_IFloor_1ev_1real32(JNIEnv *__env , jclass __clazz, jfloat fValue_j)
				{
					ev_real32 fValue = (ev_real32) fValue_j;
					ev_int32 __values1 = EarthView::World::Spatial::Math::CMath::IFloor(fValue);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_ISign_1ev_1int32(JNIEnv *__env , jclass __clazz, jint iValue_j)
				{
					ev_int32 iValue = (ev_int32) iValue_j;
					ev_int32 __values1 = EarthView::World::Spatial::Math::CMath::ISign(iValue);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Abs_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Abs(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Abs_1CDegree(JNIEnv *__env , jclass __clazz, jlong dValue_j)
				{
					const EarthView::World::Spatial::Math::CDegree &dValue = *(EarthView::World::Spatial::Math::CDegree*) dValue_j;
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CMath::Abs(dValue);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Abs_1CRadian(JNIEnv *__env , jclass __clazz, jlong rValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &rValue = *(EarthView::World::Spatial::Math::CRadian*) rValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::Abs(rValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_ACos_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::ACos(fValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_ACos_1Real_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fValue_j, jboolean fast_j)
				{
					Real fValue = (Real) fValue_j;
					ev_bool fast = (ev_bool) fast_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::ACos(fValue, fast);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_ASin_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::ASin(fValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_ATan_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::ATan(fValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_ATan2_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble fY_j, jdouble fX_j)
				{
					Real fY = (Real) fY_j;
					Real fX = (Real) fX_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::ATan2(fY, fX);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Ceil_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Ceil(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_isNaN_1Real(JNIEnv *__env , jclass __clazz, jdouble f_j)
				{
					Real f = (Real) f_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::isNaN(f);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Cos_1CRadian_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong fValue_j, jboolean useTables_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Cos(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Cos_1CRadian(JNIEnv *__env , jclass __clazz, jlong fValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Cos(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Cos_1Real_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fValue_j, jboolean useTables_j)
				{
					Real fValue = (Real) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Cos(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Cos_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Cos(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Exp_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Exp(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Floor_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Floor(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Log_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Log(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1LOG2_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::LOG2);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Log2_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Log2(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_LogN_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble fBase_j, jdouble fValue_j)
				{
					Real fBase = (Real) fBase_j;
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::LogN(fBase, fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Pow_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble fBase_j, jdouble fExponent_j)
				{
					Real fBase = (Real) fBase_j;
					Real fExponent = (Real) fExponent_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Pow(fBase, fExponent);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sign_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sign(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Sign_1CRadian(JNIEnv *__env , jclass __clazz, jlong rValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &rValue = *(EarthView::World::Spatial::Math::CRadian*) rValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::Sign(rValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Sign_1CDegree(JNIEnv *__env , jclass __clazz, jlong dValue_j)
				{
					const EarthView::World::Spatial::Math::CDegree &dValue = *(EarthView::World::Spatial::Math::CDegree*) dValue_j;
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CMath::Sign(dValue);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sin_1CRadian_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong fValue_j, jboolean useTables_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sin(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sin_1ev_1real64(JNIEnv *__env , jclass __clazz, jdouble dValue_j)
				{
					const ev_real64 dValue = (ev_real64) dValue_j;
					ev_real64 __values1 = EarthView::World::Spatial::Math::CMath::Sin(dValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sin_1CRadian(JNIEnv *__env , jclass __clazz, jlong fValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sin(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sin_1Real_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fValue_j, jboolean useTables_j)
				{
					Real fValue = (Real) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sin(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sqr_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sqr(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Sqrt_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Sqrt(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Sqrt_1CRadian(JNIEnv *__env , jclass __clazz, jlong fValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					EarthView::World::Spatial::Math::CRadian __values1 = EarthView::World::Spatial::Math::CMath::Sqrt(fValue);
					EarthView::World::Spatial::Math::CRadian *returnvalues = new EarthView::World::Spatial::Math::CRadian(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_Sqrt_1CDegree(JNIEnv *__env , jclass __clazz, jlong fValue_j)
				{
					const EarthView::World::Spatial::Math::CDegree &fValue = *(EarthView::World::Spatial::Math::CDegree*) fValue_j;
					EarthView::World::Spatial::Math::CDegree __values1 = EarthView::World::Spatial::Math::CMath::Sqrt(fValue);
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_InvSqrt_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::InvSqrt(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_UnitRandom_1void(JNIEnv *__env , jclass __clazz)
				{
					Real __values1 = EarthView::World::Spatial::Math::CMath::UnitRandom();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_RangeRandom_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble fLow_j, jdouble fHigh_j)
				{
					Real fLow = (Real) fLow_j;
					Real fHigh = (Real) fHigh_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::RangeRandom(fLow, fHigh);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_SymmetricRandom_1void(JNIEnv *__env , jclass __clazz)
				{
					Real __values1 = EarthView::World::Spatial::Math::CMath::SymmetricRandom();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Tan_1CRadian_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong fValue_j, jboolean useTables_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Tan(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Tan_1CRadian(JNIEnv *__env , jclass __clazz, jlong fValue_j)
				{
					const EarthView::World::Spatial::Math::CRadian &fValue = *(EarthView::World::Spatial::Math::CRadian*) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Tan(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Tan_1Real_1ev_1bool(JNIEnv *__env , jclass __clazz, jdouble fValue_j, jboolean useTables_j)
				{
					Real fValue = (Real) fValue_j;
					ev_bool useTables = (ev_bool) useTables_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Tan(fValue, useTables);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Tan_1Real(JNIEnv *__env , jclass __clazz, jdouble fValue_j)
				{
					Real fValue = (Real) fValue_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Tan(fValue);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_DegreesToRadians_1Real(JNIEnv *__env , jclass __clazz, jdouble degrees_j)
				{
					Real degrees = (Real) degrees_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::DegreesToRadians(degrees);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_RadiansToDegrees_1Real(JNIEnv *__env , jclass __clazz, jdouble radians_j)
				{
					Real radians = (Real) radians_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::RadiansToDegrees(radians);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_EVMath_setAngleUnit_1AngleUnit(JNIEnv *__env , jclass __clazz, jint unit_j)
				{
					EarthView::World::Spatial::Math::CMath::AngleUnit unit = (EarthView::World::Spatial::Math::CMath::AngleUnit) unit_j;
					EarthView::World::Spatial::Math::CMath::setAngleUnit(unit);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_getAngleUnit_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::Math::CMath::AngleUnit __values1 = EarthView::World::Spatial::Math::CMath::getAngleUnit();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_AngleUnitsToRadians_1Real(JNIEnv *__env , jclass __clazz, jdouble units_j)
				{
					Real units = (Real) units_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::AngleUnitsToRadians(units);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_RadiansToAngleUnits_1Real(JNIEnv *__env , jclass __clazz, jdouble radians_j)
				{
					Real radians = (Real) radians_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::RadiansToAngleUnits(radians);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_AngleUnitsToDegrees_1Real(JNIEnv *__env , jclass __clazz, jdouble units_j)
				{
					Real units = (Real) units_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::AngleUnitsToDegrees(units);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_DegreesToAngleUnits_1Real(JNIEnv *__env , jclass __clazz, jdouble degrees_j)
				{
					Real degrees = (Real) degrees_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::DegreesToAngleUnits(degrees);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_pointInTri2D_1CVector2_1CVector2_1CVector2_1CVector2(JNIEnv *__env , jclass __clazz, jlong p_j, jlong a_j, jlong b_j, jlong c_j)
				{
					const EarthView::World::Spatial::Math::CVector2 &p = *(EarthView::World::Spatial::Math::CVector2*) p_j;
					const EarthView::World::Spatial::Math::CVector2 &a = *(EarthView::World::Spatial::Math::CVector2*) a_j;
					const EarthView::World::Spatial::Math::CVector2 &b = *(EarthView::World::Spatial::Math::CVector2*) b_j;
					const EarthView::World::Spatial::Math::CVector2 &c = *(EarthView::World::Spatial::Math::CVector2*) c_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::pointInTri2D(p, a, b, c);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_pointInTri3D_1CVector3_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong p_j, jlong a_j, jlong b_j, jlong c_j, jlong normal_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &p = *(EarthView::World::Spatial::Math::CVector3*) p_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::pointInTri3D(p, a, b, c, normal);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CPlane(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong plane_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, plane);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CSphere_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong sphere_j, jboolean discardInside_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
					ev_bool discardInside = (ev_bool) discardInside_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, sphere, discardInside);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CSphere(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong sphere_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, sphere);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CAxisAlignedBox(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, box);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CAxisAlignedBox_1Real_1Real(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong box_j, jlong d1_j, jlong d2_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					Real *d1 = (Real*) d1_j;
					Real *d2 = (Real*) d2_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, box, d1, d2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CVector3_1CVector3_1CVector3_1CVector3_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong a_j, jlong b_j, jlong c_j, jlong normal_j, jboolean positiveSide_j, jboolean negativeSide_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
					ev_bool positiveSide = (ev_bool) positiveSide_j;
					ev_bool negativeSide = (ev_bool) negativeSide_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, a, b, c, normal, positiveSide, negativeSide);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CVector3_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong a_j, jlong b_j, jlong c_j, jlong normal_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					const EarthView::World::Spatial::Math::CVector3 &normal = *(EarthView::World::Spatial::Math::CVector3*) normal_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, a, b, c, normal);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CVector3_1CVector3_1CVector3_1ev_1bool_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong a_j, jlong b_j, jlong c_j, jboolean positiveSide_j, jboolean negativeSide_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					ev_bool positiveSide = (ev_bool) positiveSide_j;
					ev_bool negativeSide = (ev_bool) negativeSide_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, a, b, c, positiveSide, negativeSide);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CVector3_1CVector3_1CVector3_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong a_j, jlong b_j, jlong c_j, jboolean positiveSide_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					ev_bool positiveSide = (ev_bool) positiveSide_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, a, b, c, positiveSide);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong a_j, jlong b_j, jlong c_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::CVector3 &a = *(EarthView::World::Spatial::Math::CVector3*) a_j;
					const EarthView::World::Spatial::Math::CVector3 &b = *(EarthView::World::Spatial::Math::CVector3*) b_j;
					const EarthView::World::Spatial::Math::CVector3 &c = *(EarthView::World::Spatial::Math::CVector3*) c_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, a, b, c);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CSphere_1CAxisAlignedBox(JNIEnv *__env , jclass __clazz, jlong sphere_j, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::intersects(sphere, box);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CPlane_1CAxisAlignedBox(JNIEnv *__env , jclass __clazz, jlong plane_j, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::intersects(plane, box);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1PlaneList_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong planes_j, jboolean normalIsOutside_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::PlaneList &planes = *(EarthView::World::Spatial::Math::PlaneList*) planes_j;
					ev_bool normalIsOutside = (ev_bool) normalIsOutside_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, planes, normalIsOutside);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CRay_1Planes_1ev_1bool(JNIEnv *__env , jclass __clazz, jlong ray_j, jlong planeList_j, jboolean normalIsOutside_j)
				{
					const EarthView::World::Spatial::Math::CRay &ray = *(EarthView::World::Spatial::Math::CRay*) ray_j;
					const EarthView::World::Spatial::Math::Planes &planeList = *(EarthView::World::Spatial::Math::Planes*) planeList_j;
					ev_bool normalIsOutside = (ev_bool) normalIsOutside_j;
					EarthView::World::Spatial::Math::IntersectResPair __values1 = EarthView::World::Spatial::Math::CMath::intersects(ray, planeList, normalIsOutside);
					EarthView::World::Spatial::Math::IntersectResPair *returnvalues = new EarthView::World::Spatial::Math::IntersectResPair(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_intersects_1CSphere_1CPlane(JNIEnv *__env , jclass __clazz, jlong sphere_j, jlong plane_j)
				{
					const EarthView::World::Spatial::Math::CSphere &sphere = *(EarthView::World::Spatial::Math::CSphere*) sphere_j;
					const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::intersects(sphere, plane);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_RealEqual_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble a_j, jdouble b_j, jdouble tolerance_j)
				{
					Real a = (Real) a_j;
					Real b = (Real) b_j;
					Real tolerance = (Real) tolerance_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::RealEqual(a, b, tolerance);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_EVMath_RealEqual_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble a_j, jdouble b_j)
				{
					Real a = (Real) a_j;
					Real b = (Real) b_j;
					ev_bool __values1 = EarthView::World::Spatial::Math::CMath::RealEqual(a, b);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_calculateTangentSpaceVector_1CVector3_1CVector3_1CVector3_1Real_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jlong position1_j, jlong position2_j, jlong position3_j, jdouble u1_j, jdouble v1_j, jdouble u2_j, jdouble v2_j, jdouble u3_j, jdouble v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &position1 = *(EarthView::World::Spatial::Math::CVector3*) position1_j;
					const EarthView::World::Spatial::Math::CVector3 &position2 = *(EarthView::World::Spatial::Math::CVector3*) position2_j;
					const EarthView::World::Spatial::Math::CVector3 &position3 = *(EarthView::World::Spatial::Math::CVector3*) position3_j;
					Real u1 = (Real) u1_j;
					Real v1 = (Real) v1_j;
					Real u2 = (Real) u2_j;
					Real v2 = (Real) v2_j;
					Real u3 = (Real) u3_j;
					Real v3 = (Real) v3_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMath::calculateTangentSpaceVector(position1, position2, position3, u1, v1, u2, v2, u3, v3);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_buildReflectionMatrix_1CPlane(JNIEnv *__env , jclass __clazz, jlong p_j)
				{
					const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMath::buildReflectionMatrix(p);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_calculateFaceNormal_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong v1_j, jlong v2_j, jlong v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v1 = *(EarthView::World::Spatial::Math::CVector3*) v1_j;
					const EarthView::World::Spatial::Math::CVector3 &v2 = *(EarthView::World::Spatial::Math::CVector3*) v2_j;
					const EarthView::World::Spatial::Math::CVector3 &v3 = *(EarthView::World::Spatial::Math::CVector3*) v3_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = EarthView::World::Spatial::Math::CMath::calculateFaceNormal(v1, v2, v3);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_calculateBasicFaceNormal_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong v1_j, jlong v2_j, jlong v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v1 = *(EarthView::World::Spatial::Math::CVector3*) v1_j;
					const EarthView::World::Spatial::Math::CVector3 &v2 = *(EarthView::World::Spatial::Math::CVector3*) v2_j;
					const EarthView::World::Spatial::Math::CVector3 &v3 = *(EarthView::World::Spatial::Math::CVector3*) v3_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMath::calculateBasicFaceNormal(v1, v2, v3);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_calculateFaceNormalWithoutNormalize_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong v1_j, jlong v2_j, jlong v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v1 = *(EarthView::World::Spatial::Math::CVector3*) v1_j;
					const EarthView::World::Spatial::Math::CVector3 &v2 = *(EarthView::World::Spatial::Math::CVector3*) v2_j;
					const EarthView::World::Spatial::Math::CVector3 &v3 = *(EarthView::World::Spatial::Math::CVector3*) v3_j;
					EarthView::World::Spatial::Math::CVector4 __values1 = EarthView::World::Spatial::Math::CMath::calculateFaceNormalWithoutNormalize(v1, v2, v3);
					EarthView::World::Spatial::Math::CVector4 *returnvalues = new EarthView::World::Spatial::Math::CVector4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_calculateBasicFaceNormalWithoutNormalize_1CVector3_1CVector3_1CVector3(JNIEnv *__env , jclass __clazz, jlong v1_j, jlong v2_j, jlong v3_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v1 = *(EarthView::World::Spatial::Math::CVector3*) v1_j;
					const EarthView::World::Spatial::Math::CVector3 &v2 = *(EarthView::World::Spatial::Math::CVector3*) v2_j;
					const EarthView::World::Spatial::Math::CVector3 &v3 = *(EarthView::World::Spatial::Math::CVector3*) v3_j;
					EarthView::World::Spatial::Math::CVector3 __values1 = EarthView::World::Spatial::Math::CMath::calculateBasicFaceNormalWithoutNormalize(v1, v2, v3);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_gaussianDistribution_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble x_j, jdouble offset_j, jdouble scale_j)
				{
					Real x = (Real) x_j;
					Real offset = (Real) offset_j;
					Real scale = (Real) scale_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x, offset, scale);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_gaussianDistribution_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble x_j, jdouble offset_j)
				{
					Real x = (Real) x_j;
					Real offset = (Real) offset_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x, offset);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_gaussianDistribution_1Real(JNIEnv *__env , jclass __clazz, jdouble x_j)
				{
					Real x = (Real) x_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::gaussianDistribution(x);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_Clamp_1Real_1Real_1Real(JNIEnv *__env , jclass __clazz, jdouble val_j, jdouble minval_j, jdouble maxval_j)
				{
					Real val = (Real) val_j;
					Real minval = (Real) minval_j;
					Real maxval = (Real) maxval_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::Clamp(val, minval, maxval);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_EVMath_Clamp_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jint val_j, jint minval_j, jint maxval_j)
				{
					ev_int32 val = (ev_int32) val_j;
					ev_int32 minval = (ev_int32) minval_j;
					ev_int32 maxval = (ev_int32) maxval_j;
					ev_int32 __values1 = EarthView::World::Spatial::Math::CMath::Clamp(val, minval, maxval);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_makeViewMatrix_1CVector3_1CQuaternion_1CMatrix4(JNIEnv *__env , jclass __clazz, jlong position_j, jlong orientation_j, jlong reflectMatrix_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
					const EarthView::World::Spatial::Math::CMatrix4 *reflectMatrix = (const EarthView::World::Spatial::Math::CMatrix4*) reflectMatrix_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMath::makeViewMatrix(position, orientation, reflectMatrix);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_EVMath_makeViewMatrix_1CVector3_1CQuaternion(JNIEnv *__env , jclass __clazz, jlong position_j, jlong orientation_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &position = *(EarthView::World::Spatial::Math::CVector3*) position_j;
					const EarthView::World::Spatial::Math::CQuaternion &orientation = *(EarthView::World::Spatial::Math::CQuaternion*) orientation_j;
					EarthView::World::Spatial::Math::CMatrix4 __values1 = EarthView::World::Spatial::Math::CMath::makeViewMatrix(position, orientation);
					EarthView::World::Spatial::Math::CMatrix4 *returnvalues = new EarthView::World::Spatial::Math::CMatrix4(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_boundingRadiusFromAABB_1CAxisAlignedBox(JNIEnv *__env , jclass __clazz, jlong aabb_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &aabb = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) aabb_j;
					Real __values1 = EarthView::World::Spatial::Math::CMath::boundingRadiusFromAABB(aabb);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1POS_1INFINITY_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::POS_INFINITY);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1NEG_1INFINITY_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::NEG_INFINITY);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1PI_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::PI);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1TWO_1PI_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::TWO_PI);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1HALF_1PI_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::HALF_PI);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1fDeg2Rad_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::fDeg2Rad);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1fRad2Deg_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::fRad2Deg);
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_EVMath_get_1EARTH_1RADIUS_1void(JNIEnv *__env, jclass __clazz)
				{
					jdouble __values1_j = (jdouble)(EarthView::World::Spatial::Math::CMath::EARTH_RADIUS);
					return __values1_j;
				}
			}
		}
	}
}
