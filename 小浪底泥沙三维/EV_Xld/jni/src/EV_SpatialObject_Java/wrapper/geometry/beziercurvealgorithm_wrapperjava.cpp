/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/beziercurvealgorithm.h"
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
			namespace Geometry
			{
				namespace Algorithm
				{
					extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_Create(JNIEnv *__env, jclass __clazz)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = new EarthView::World::Spatial::Geometry::Algorithm::Vertex3D();
						return (jlong) pObjectX;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						delete pObjectX;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->x);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_set_1x_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						pObjectX->x = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->y);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_set_1y_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						pObjectX->y = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_get_1z_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->z);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Vertex3D_set_1z_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Vertex3D *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Vertex3D*)pObjXXXX;
						pObjectX->z = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_Create(JNIEnv *__env, jclass __clazz)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = new EarthView::World::Spatial::Geometry::Algorithm::Bezier();
						return (jlong) pObjectX;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_Destroy(JNIEnv *__env, jclass __clazz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						delete pObjectX;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1x1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->x1);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1x1_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->x1 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1y1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->y1);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1y1_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->y1 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1z1_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->z1);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1z1_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->z1 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1x2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->x2);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1x2_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->x2 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1y2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->y2);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1y2_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->y2 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1z2_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->z2);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1z2_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->z2 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1x3_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->x3);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1x3_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->x3 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1y3_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->y3);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1y3_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->y3 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1z3_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->z3);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1z3_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->z3 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1x4_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->x4);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1x4_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->x4 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1y4_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->y4);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1y4_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->y4 = (ev_real64)__values1_j;
					}
					extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_get_1z4_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						jdouble __values1_j = (jdouble)(pObjectX->z4);
						return __values1_j;
					}
					extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_algorithm_Bezier_set_1z4_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
					{
						EarthView::World::Spatial::Geometry::Algorithm::Bezier *pObjectX = (EarthView::World::Spatial::Geometry::Algorithm::Bezier*)pObjXXXX;
						pObjectX->z4 = (ev_real64)__values1_j;
					}
				}
			}
		}
	}
}
