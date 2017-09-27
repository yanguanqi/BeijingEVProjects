/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/pagerect.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageRect_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_left_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->left();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_top_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->top();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_right_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->right();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_bottom_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->bottom();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_setLeft_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
			{
				ev_real64 pos = (ev_real64) pos_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->setLeft(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_setTop_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
			{
				ev_real64 pos = (ev_real64) pos_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->setTop(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_setRight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
			{
				ev_real64 pos = (ev_real64) pos_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->setRight(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_setBottom_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
			{
				ev_real64 pos = (ev_real64) pos_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->setBottom(pos);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_moveCenter_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->moveCenter(x, y);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
			{
				ev_real64 dx = (ev_real64) dx_j;
				ev_real64 dy = (ev_real64) dy_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->translate(dx, dy);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_setRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				ev_real64 w = (ev_real64) w_j;
				ev_real64 h = (ev_real64) h_j;
				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->setRect(x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_getRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong w_j, jlong h_j)
			{
				ev_real64 *x = (ev_real64*) x_j;
				ev_real64 *y = (ev_real64*) y_j;
				ev_real64 *w = (ev_real64*) w_j;
				ev_real64 *h = (ev_real64*) h_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->getRect(x, y, w, h);
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_display_PageRect_getCoords_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x1_j, jlong y1_j, jlong x2_j, jlong y2_j)
			{
				ev_real64 *x1 = (ev_real64*) x1_j;
				ev_real64 *y1 = (ev_real64*) y1_j;
				ev_real64 *x2 = (ev_real64*) x2_j;
				ev_real64 *y2 = (ev_real64*) y2_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				pObjectX->getCoords(x1, y1, x2, y2);
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->width();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_display_PageRect_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				ev_real64 __values1 = pObjectX->height();
				jdouble __values1_j = (jdouble)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageRect_contains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				bool __values1 = pObjectX->contains(x, y);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageRect_contains_1ev_1real64_1ev_1real64_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jboolean proper_j)
			{
				ev_real64 x = (ev_real64) x_j;
				ev_real64 y = (ev_real64) y_j;
				bool proper = (bool) proper_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				bool __values1 = pObjectX->contains(x, y, proper);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageRect_unite_1CPageRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				const EarthView::World::Display::CPageRect &r = *(EarthView::World::Display::CPageRect*) r_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->unite(r);
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageRect_united_1CPageRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Display::CPageRect &other = *(EarthView::World::Display::CPageRect*) other_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->united(other);
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageRect_intersect_1CPageRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				const EarthView::World::Display::CPageRect &r = *(EarthView::World::Display::CPageRect*) r_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->intersect(r);
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_display_PageRect_intersected_1CPageRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
			{
				const EarthView::World::Display::CPageRect &other = *(EarthView::World::Display::CPageRect*) other_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				EarthView::World::Display::CPageRect __values1 = pObjectX->intersected(other);
				EarthView::World::Display::CPageRect *returnvalues = new EarthView::World::Display::CPageRect(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_display_PageRect_intersects_1CPageRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
			{
				const EarthView::World::Display::CPageRect &r = *(EarthView::World::Display::CPageRect*) r_j;
				const 				EarthView::World::Display::CPageRect *pObjectX = (EarthView::World::Display::CPageRect*) pObjXXXX;
				bool __values1 = pObjectX->intersects(r);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
		}
	}
}
