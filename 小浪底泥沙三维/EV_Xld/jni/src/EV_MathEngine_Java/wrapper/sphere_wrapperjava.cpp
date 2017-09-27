/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/sphere.h"
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
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_math_Sphere_getRadius_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					Real __values1 = pObjectX->getRadius();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Sphere_setRadius_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble radius_j)
				{
					Real radius = (Real) radius_j;
					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					pObjectX->setRadius(radius);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_math_Sphere_getCenter_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					const EarthView::World::Spatial::Math::CVector3& __values1 = pObjectX->getCenter();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Sphere_setCenter_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong center_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &center = *(EarthView::World::Spatial::Math::CVector3*) center_j;
					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					pObjectX->setCenter(center);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Sphere_intersects_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong s_j)
				{
					const EarthView::World::Spatial::Math::CSphere &s = *(EarthView::World::Spatial::Math::CSphere*) s_j;
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(s);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Sphere_intersects_1CAxisAlignedBox(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong box_j)
				{
					const EarthView::World::Spatial::Math::CAxisAlignedBox &box = *(EarthView::World::Spatial::Math::CAxisAlignedBox*) box_j;
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(box);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Sphere_intersects_1CPlane(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong plane_j)
				{
					const EarthView::World::Spatial::Math::CPlane &plane = *(EarthView::World::Spatial::Math::CPlane*) plane_j;
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(plane);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_math_Sphere_intersects_1CVector3(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong v_j)
				{
					const EarthView::World::Spatial::Math::CVector3 &v = *(EarthView::World::Spatial::Math::CVector3*) v_j;
					const 					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					ev_bool __values1 = pObjectX->intersects(v);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_Sphere_merge_1CSphere(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong oth_j)
				{
					const EarthView::World::Spatial::Math::CSphere &oth = *(EarthView::World::Spatial::Math::CSphere*) oth_j;
					EarthView::World::Spatial::Math::CSphere *pObjectX = (EarthView::World::Spatial::Math::CSphere*) pObjXXXX;
					pObjectX->merge(oth);
				}
			}
		}
	}
}
