/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapeagleeye.h"
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
			namespace Display
			{
			}
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_setRectSymbol_1CLineSymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::CLineSymbol *symbol = (const EarthView::World::Spatial::Display::CLineSymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					pObjectX->setRectSymbol(symbol);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_getRectSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					const EarthView::World::Spatial::Display::CLineSymbol* __values1 = pObjectX->getRectSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_setIdleLayers_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jint count_j)
				{
					ev_int32 *index = (ev_int32*) index_j;
					ev_int32 count = (ev_int32) count_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					pObjectX->setIdleLayers(index, count);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_onMouseDown_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMouseDown(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_onMouseMove_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMouseMove(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_onMouseUp_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j, jint shift_j, jint x_j, jint y_j)
				{
					ev_int32 button = (ev_int32) button_j;
					ev_int32 shift = (ev_int32) shift_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMouseUp(button, shift, x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_onMouseWheel_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint delta_j, jint x_j, jint y_j, jint flag_j)
				{
					ev_int32 delta = (ev_int32) delta_j;
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 flag = (ev_int32) flag_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					ev_bool __values1 = pObjectX->onMouseWheel(delta, x, y, flag);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapEagleEye_onResize_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint width_j, jint height_j)
				{
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial2D::Controls::CMapEagleEye *pObjectX = (EarthView::World::Spatial2D::Controls::CMapEagleEye*) pObjXXXX;
					ev_bool __values1 = pObjectX->onResize(width, height);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
