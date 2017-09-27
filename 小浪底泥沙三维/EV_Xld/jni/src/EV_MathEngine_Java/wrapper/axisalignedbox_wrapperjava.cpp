/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/axisalignedbox.h"
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
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_00024ExtentHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CAxisAlignedBox::EXTENT_NULL,
						CAxisAlignedBox::EXTENT_FINITE,
						CAxisAlignedBox::EXTENT_INFINITE
					};
					jintArray array = __env->NewIntArray(3);
					__env->SetIntArrayRegion(array, 0, 3, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_00024CornerEnumHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CAxisAlignedBox::FAR_LEFT_BOTTOM,
						CAxisAlignedBox::FAR_LEFT_TOP,
						CAxisAlignedBox::FAR_RIGHT_TOP,
						CAxisAlignedBox::FAR_RIGHT_BOTTOM,
						CAxisAlignedBox::NEAR_RIGHT_BOTTOM,
						CAxisAlignedBox::NEAR_LEFT_BOTTOM,
						CAxisAlignedBox::NEAR_LEFT_TOP,
						CAxisAlignedBox::NEAR_RIGHT_TOP
					};
					jintArray array = __env->NewIntArray(8);
					__env->SetIntArrayRegion(array, 0, 8, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_OperatorAssign_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& pObjectX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) rhs_j;
					pObjectX = rhs;
					EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_toDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_int32 __values1 = pObjectX->toDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_fromDataStream_1CDataStream(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong dataStream_j)
				{
					EarthView::World::Core::CDataStream &dataStream = *(EarthView::World::Core::CDataStream*) dataStream_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_int32 __values1 = pObjectX->fromDataStream(dataStream);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getMinimum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getMinimum();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getMaximum_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getMaximum();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMinimum_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMinimum(vec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMinimum_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					Real x = (Real) x_j;
					Real y = (Real) y_j;
					Real z = (Real) z_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMinimum(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMinimumX_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
				{
					Real x = (Real) x_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMinimumX(x);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMinimumY_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble y_j)
				{
					Real y = (Real) y_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMinimumY(y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMinimumZ_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble z_j)
				{
					Real z = (Real) z_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMinimumZ(z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMaximum_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong vec_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &vec = *(EarthView::World::Spatial::Math::CVector3*) vec_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMaximum(vec);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMaximum_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					Real x = (Real) x_j;
					Real y = (Real) y_j;
					Real z = (Real) z_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMaximum(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMaximumX_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j)
				{
					Real x = (Real) x_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMaximumX(x);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMaximumY_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble y_j)
				{
					Real y = (Real) y_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMaximumY(y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setMaximumZ_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble z_j)
				{
					Real z = (Real) z_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setMaximumZ(z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setExtents_1CVector3_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong min_j, jlong max_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &min = *(EarthView::World::Spatial::Math::CVector3*) min_j;
					const EarthView::World::Spatial::Math::CVector3 &max = *(EarthView::World::Spatial::Math::CVector3*) max_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setExtents(min, max);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setExtents_1Real_1Real_1Real_1Real_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble mx_j, jdouble my_j, jdouble mz_j, jdouble Mx_j, jdouble My_j, jdouble Mz_j)
				{
					Real mx = (Real) mx_j;
					Real my = (Real) my_j;
					Real mz = (Real) mz_j;
					Real Mx = (Real) Mx_j;
					Real My = (Real) My_j;
					Real Mz = (Real) Mz_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setExtents(mx, my, mz, Mx, My, Mz);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getAllCorners_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlongArray pCorner_j)
				{
					EarthView::World::Spatial::Math::CVector3 *pCorner[8] ;
					jlong pCorner_lon[8];
					__env->GetLongArrayRegion(pCorner_j,0,8,pCorner_lon);
					for (int i=0; i<8; i++)
					{
						pCorner[i] = (EarthView::World::Spatial::Math::CVector3*)pCorner_lon[i];
					}
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->getAllCorners(pCorner);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getCorner_1CornerEnum(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint cornerToGet_j)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox::CornerEnum cornerToGet = (EarthView::World::Spatial::Math::CAxisAlignedBox::CornerEnum) cornerToGet_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCorner(cornerToGet);
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_merge_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rhs_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) rhs_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->merge(rhs);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_merge_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &point = *(EarthView::World::Spatial::Math::CVector3*) point_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->merge(point);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_transform_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong matrix_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &matrix = *(EarthView::World::Spatial::Math::CMatrix4*) matrix_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->transform(matrix);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_transformAffine_1CMatrix4(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong m_j)
				{
					const EarthView::World::Spatial::Math::CMatrix4 &m = *(EarthView::World::Spatial::Math::CMatrix4*) m_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->transformAffine(m);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setNull();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->isNull();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_isFinite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->isFinite();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_setInfinite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->setInfinite();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_isInfinite_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->isInfinite();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_intersects_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong b2_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &b2 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) b2_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(b2);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_intersection_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong b2_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &b2 = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) b2_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					EarthView::World::Spatial::Math::CAxisAlignedBox __values1 = pObjectX->intersection(b2);
					EarthView::World::Spatial::Math::CAxisAlignedBox *returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_volume_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					Real __values1 = pObjectX->volume();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_scale_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong s_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &s = *(EarthView::World::Spatial::Math::CVector3*) s_j;
					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					pObjectX->scale(s);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_intersects_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong s_j)
				{
					const EarthView::World::Spatial::Math::CSphere &s = *(EarthView::World::Spatial::Math::CSphere*) s_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(s);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_intersects_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
				{
					const EarthView::World::Spatial::Math::CPlane &p = *(EarthView::World::Spatial::Math::CPlane*) p_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(p);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_intersects_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(v);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getCenter();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getSize();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_getHalfSize_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					EarthView::World::Spatial::Math::CVector3 __values1 = pObjectX->getHalfSize();
					EarthView::World::Spatial::Math::CVector3 *returnvalues = new EarthView::World::Spatial::Math::CVector3(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_contains_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->contains(v);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_distance_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					Real __values1 = pObjectX->distance(v);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_distance2_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					Real __values1 = pObjectX->distance2(v);
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_contains_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &other = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) other_j;
					const 					EarthView::World::Spatial::Math::CAxisAlignedBox *pObjectX = (EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					ev_bool __values1 = pObjectX->contains(other);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_OperatorEquals_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& pObjectX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) rhs_j;
					ev_bool __values1 = (pObjectX == rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_OperatorNotEquals_1CAxisAlignedBox(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::Math::CAxisAlignedBox& pObjectX = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) pObjXXXX;
					const EarthView::World::Spatial::Math::CAxisAlignedBox &rhs = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) rhs_j;
					ev_bool __values1 = (pObjectX != rhs);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_get_1BOX_1NULL_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = EarthView::World::Spatial::Math::CAxisAlignedBox::BOX_NULL;
					EarthView::World::Spatial::Math::CAxisAlignedBox* returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_AxisAlignedBox_get_1BOX_1INFINITE_1void(JNIEnv *__env, jclass __clazz)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox& __values1 = EarthView::World::Spatial::Math::CAxisAlignedBox::BOX_INFINITE;
					EarthView::World::Spatial::Math::CAxisAlignedBox* returnvalues = new EarthView::World::Spatial::Math::CAxisAlignedBox(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
