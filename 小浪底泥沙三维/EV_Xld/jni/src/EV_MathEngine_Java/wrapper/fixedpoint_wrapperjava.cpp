/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/fixedpoint.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_get_1m_1intPart_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CFixedPoint *pObjectX = (EarthView::World::Spatial::Math::CFixedPoint*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->m_intPart);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_FixedPoint_set_1m_1intPart_1ev_1int64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::Math::CFixedPoint *pObjectX = (EarthView::World::Spatial::Math::CFixedPoint*)pObjXXXX;
					pObjectX->m_intPart = (ev_int64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorAssign_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real32 val = (ev_real32) val_j;
					pObjectX = val;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorAssign_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real64 val = (ev_real64) val_j;
					pObjectX = val;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorAssign_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_int32 val = (ev_int32) val_j;
					pObjectX = val;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorAssign_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					pObjectX = val;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorNegative_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = ( -pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPosivate_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint& __values1 = ( +pObjectX);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlus_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX + (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlus_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX + (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlus_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real64 val = (ev_real64) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX + (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlus_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_int32 val = (ev_int32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX + (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinus_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX - (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinus_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX - (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinus_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real64 val = (ev_real64) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX - (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinus_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_int32 val = (ev_int32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX - (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMultiply_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX * (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMultiply_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX * (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMultiply_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real64 val = (ev_real64) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX * (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMultiply_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_int32 val = (ev_int32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX * (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorDivide_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX / (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorDivide_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real32 val = (ev_real32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX / (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorDivide_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_real64 val = (ev_real64) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX / (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorDivide_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const ev_int32 val = (ev_int32) val_j;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX / (val);
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorConvertionev_1real32_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 __values1 = pObjectX ;
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorConvertionev_1real64_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 __values1 = pObjectX ;
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorConvertionev_1int32_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 __values1 = pObjectX ;
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlusLeftIncrease_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					++pObjectX;
					return (jlong)pObjXXXX;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinusLeftDecrease_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					--pObjectX;
					return (jlong)pObjXXXX;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorPlusRightIncrease_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint _j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX++;
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorMinusRightDecrease_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint _j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					EarthView::World::Spatial::Math::CFixedPoint __values1 = pObjectX--;
					EarthView::World::Spatial::Math::CFixedPoint *returnvalues = new EarthView::World::Spatial::Math::CFixedPoint(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorEquals_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX == val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorEquals_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX == val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorEquals_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX == val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorEquals_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX == val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorNotEquals_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX != val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorNotEquals_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX != val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorNotEquals_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX != val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorNotEquals_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX != val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThan_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX > val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThan_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX > val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThan_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX > val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThan_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX > val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThan_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX < val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThan_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX < val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThan_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX < val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThan_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX < val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThanOrEqual_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX >= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThanOrEqual_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX >= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThanOrEqual_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX >= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorGreaterThanOrEqual_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX >= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThanOrEqual_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real32 val = (ev_real32) val_j;
					ev_bool __values1 = (pObjectX <= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThanOrEqual_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_real64 val = (ev_real64) val_j;
					ev_bool __values1 = (pObjectX <= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThanOrEqual_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					ev_int32 val = (ev_int32) val_j;
					ev_bool __values1 = (pObjectX <= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_FixedPoint_OperatorLessThanOrEqual_1CFixedPoint(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong val_j )
				{
					EarthView::World::Spatial::Math::CFixedPoint& pObjectX = *(EarthView::World::Spatial::Math::CFixedPoint*) pObjXXXX;
					const EarthView::World::Spatial::Math::CFixedPoint &val = *(EarthView::World::Spatial::Math::CFixedPoint*) val_j;
					ev_bool __values1 = (pObjectX <= val);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
