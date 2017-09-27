/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/utilitycalculator.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_UtilityCalculator_screensizefix_1scale_1CVector3_1CCamera(JNIEnv *__env , jclass __clazz, jlong nodePos_j, jlong cam_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &nodePos = *(EarthView::World::Spatial::Math::CVector3*) nodePos_j;
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				Real __values1 = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(nodePos, cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_UtilityCalculator_screensizefix_1scale_1CVector3_1CCamera_1Real(JNIEnv *__env , jclass __clazz, jlong nodePos_j, jlong cam_j, jlong node2camDis_j)
			{
				const EarthView::World::Spatial::Math::CVector3 &nodePos = *(EarthView::World::Spatial::Math::CVector3*) nodePos_j;
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				Real &node2camDis = *(Real*) node2camDis_j;
				Real __values1 = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(nodePos, cam, node2camDis);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_UtilityCalculator_screensizefix_1scale_1Real_1CCamera(JNIEnv *__env , jclass __clazz, jdouble distance_j, jlong cam_j)
			{
				Real distance = (Real) distance_j;
				EarthView::World::Graphic::CCamera *cam = (EarthView::World::Graphic::CCamera*) cam_j;
				Real __values1 = EarthView::World::Graphic::CUtilityCalculator::screensizefix_scale(distance, cam);
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
		}
	}
}
