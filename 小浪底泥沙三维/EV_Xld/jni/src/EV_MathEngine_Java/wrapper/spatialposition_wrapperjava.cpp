/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/spatialposition.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_setPos_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					double x = (double) x_j;
					double y = (double) y_j;
					double z = (double) z_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->setPos(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_getPos_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j)
				{
					double &x = *(double*) x_j;
					double &y = *(double*) y_j;
					double &z = *(double*) z_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->getPos(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_setScale_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j)
				{
					double x = (double) x_j;
					double y = (double) y_j;
					double z = (double) z_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->setScale(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_getScale_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j)
				{
					double &x = *(double*) x_j;
					double &y = *(double*) y_j;
					double &z = *(double*) z_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->getScale(x, y, z);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_setRotation_1double_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble z_j, jdouble w_j)
				{
					double x = (double) x_j;
					double y = (double) y_j;
					double z = (double) z_j;
					double w = (double) w_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->setRotation(x, y, z, w);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_math_SpatialPosition_getRotation_1double_1double_1double_1double(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong z_j, jlong w_j)
				{
					double &x = *(double*) x_j;
					double &y = *(double*) y_j;
					double &z = *(double*) z_j;
					double &w = *(double*) w_j;
					EarthView::World::Spatial::Math::CSpatialPosition *pObjectX = (EarthView::World::Spatial::Math::CSpatialPosition*) pObjXXXX;
					pObjectX->getRotation(x, y, z, w);
				}
			}
		}
	}
}
