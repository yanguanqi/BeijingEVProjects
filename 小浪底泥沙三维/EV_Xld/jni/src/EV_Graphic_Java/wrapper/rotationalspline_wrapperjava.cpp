/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rotationalspline.h"
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
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RotationalSpline_addPoint_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong p_j)
			{
				const EarthView::World::Spatial::Math::CQuaternion &p = *(EarthView::World::Spatial::Math::CQuaternion*) p_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				pObjectX->addPoint(p);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RotationalSpline_getPoint_1ev_1uint16(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const 				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				const EarthView::World::Spatial::Math::CQuaternion& __values1 = pObjectX->getPoint(index);
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_graphic_RotationalSpline_getNumPoints_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				ev_uint16 __values1 = pObjectX->getNumPoints();
				jint __values1_j = (jint) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RotationalSpline_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RotationalSpline_updatePoint_1ev_1uint16_1CQuaternion(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j, jlong value_j)
			{
				ev_uint16 index = (ev_uint16) index_j;
				const EarthView::World::Spatial::Math::CQuaternion &value = *(EarthView::World::Spatial::Math::CQuaternion*) value_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				pObjectX->updatePoint(index, value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RotationalSpline_interpolate_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j, jboolean useShortestPath_j)
			{
				Real t = (Real) t_j;
				ev_bool useShortestPath = (ev_bool) useShortestPath_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->interpolate(t, useShortestPath);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RotationalSpline_interpolate_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble t_j)
			{
				Real t = (Real) t_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->interpolate(t);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RotationalSpline_interpolate_1ev_1uint32_1Real_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fromIndex_j, jdouble t_j, jboolean useShortestPath_j)
			{
				ev_uint32 fromIndex = (ev_uint32) fromIndex_j;
				Real t = (Real) t_j;
				ev_bool useShortestPath = (ev_bool) useShortestPath_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->interpolate(fromIndex, t, useShortestPath);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_graphic_RotationalSpline_interpolate_1ev_1uint32_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong fromIndex_j, jdouble t_j)
			{
				ev_uint32 fromIndex = (ev_uint32) fromIndex_j;
				Real t = (Real) t_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				EarthView::World::Spatial::Math::CQuaternion __values1 = pObjectX->interpolate(fromIndex, t);
				EarthView::World::Spatial::Math::CQuaternion *returnvalues = new EarthView::World::Spatial::Math::CQuaternion(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RotationalSpline_setAutoCalculate_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean autoCalc_j)
			{
				ev_bool autoCalc = (ev_bool) autoCalc_j;
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				pObjectX->setAutoCalculate(autoCalc);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_RotationalSpline_recalcTangents_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::CRotationalSpline *pObjectX = (EarthView::World::Graphic::CRotationalSpline*) pObjXXXX;
				pObjectX->recalcTangents();
			}
		}
	}
}
