/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rectangle.h"
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
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Rectangle_get_1left_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->left);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rectangle_set_1left_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				pObjectX->left = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Rectangle_get_1top_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->top);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rectangle_set_1top_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				pObjectX->top = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Rectangle_get_1right_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->right);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rectangle_set_1right_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				pObjectX->right = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_graphic_Rectangle_get_1bottom_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				jdouble __values1_j = (jdouble)(pObjectX->bottom);
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_graphic_Rectangle_set_1bottom_1Real(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
			{
				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*)pObjXXXX;
				pObjectX->bottom = (Real)__values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_graphic_Rectangle_inside_1Real_1Real(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				Real x = (Real) x_j;
				Real y = (Real) y_j;
				const 				EarthView::World::Graphic::Rectangle *pObjectX = (EarthView::World::Graphic::Rectangle*) pObjXXXX;
				ev_bool __values1 = pObjectX->inside(x, y);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
