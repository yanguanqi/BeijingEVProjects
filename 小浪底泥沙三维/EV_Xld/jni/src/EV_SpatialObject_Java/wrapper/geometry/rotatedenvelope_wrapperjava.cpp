/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/rotatedenvelope.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_geometry_RotatedEnvelope_getEnvelope_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CRotatedEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* __values1 = pObjectX->getEnvelope();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_geometry_RotatedEnvelope_getRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Geometry::CRotatedEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getRotation();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_geometry_RotatedEnvelope_setRotation_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble value_j)
				{
					ev_real64 value = (ev_real64) value_j;
					EarthView::World::Spatial::Geometry::CRotatedEnvelope *pObjectX = (EarthView::World::Spatial::Geometry::CRotatedEnvelope*) pObjXXXX;
					pObjectX->setRotation(value);
				}
			}
		}
	}
}
