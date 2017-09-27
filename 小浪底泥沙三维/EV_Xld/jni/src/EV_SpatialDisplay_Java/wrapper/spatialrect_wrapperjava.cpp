/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialrect.h"
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
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->isNull();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_isEmpty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->isEmpty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->isValid();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_normalized_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->normalized();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_left_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->left();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_top_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->top();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_right_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->right();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_bottom_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->bottom();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_x_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->x();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_y_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->y();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setLeft_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setLeft(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setTop_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setTop(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setRight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setRight(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setBottom_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setBottom(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setX_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setX(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setY_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setY(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_moveLeft_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->moveLeft(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_moveTop_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->moveTop(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_moveRight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->moveRight(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_moveBottom_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble pos_j)
				{
					ev_real64 pos = (ev_real64) pos_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->moveBottom(pos);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_translate_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->translate(dx, dy);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_translated_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->translated(dx, dy);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_moveTo_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble t_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 t = (ev_real64) t_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->moveTo(x, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j, jdouble w_j, jdouble h_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					ev_real64 w = (ev_real64) w_j;
					ev_real64 h = (ev_real64) h_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setRect(x, y, w, h);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_getRect_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j, jlong w_j, jlong h_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					ev_real64 *w = (ev_real64*) w_j;
					ev_real64 *h = (ev_real64*) h_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->getRect(x, y, w, h);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setCoords_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
				{
					ev_real64 x1 = (ev_real64) x1_j;
					ev_real64 y1 = (ev_real64) y1_j;
					ev_real64 x2 = (ev_real64) x2_j;
					ev_real64 y2 = (ev_real64) y2_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setCoords(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_getCoords_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x1_j, jlong y1_j, jlong x2_j, jlong y2_j)
				{
					ev_real64 *x1 = (ev_real64*) x1_j;
					ev_real64 *y1 = (ev_real64*) y1_j;
					ev_real64 *x2 = (ev_real64*) x2_j;
					ev_real64 *y2 = (ev_real64*) y2_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->getCoords(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_adjust_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
				{
					ev_real64 x1 = (ev_real64) x1_j;
					ev_real64 y1 = (ev_real64) y1_j;
					ev_real64 x2 = (ev_real64) x2_j;
					ev_real64 y2 = (ev_real64) y2_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->adjust(x1, y1, x2, y2);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_adjusted_1ev_1real64_1ev_1real64_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x1_j, jdouble y1_j, jdouble x2_j, jdouble y2_j)
				{
					ev_real64 x1 = (ev_real64) x1_j;
					ev_real64 y1 = (ev_real64) y1_j;
					ev_real64 x2 = (ev_real64) x2_j;
					ev_real64 y2 = (ev_real64) y2_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->adjusted(x1, y1, x2, y2);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_width_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->width();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_display_SpatialRect_height_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					ev_real64 __values1 = pObjectX->height();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setWidth_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble w_j)
				{
					ev_real64 w = (ev_real64) w_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setWidth(w);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_display_SpatialRect_setHeight_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble h_j)
				{
					ev_real64 h = (ev_real64) h_j;
					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					pObjectX->setHeight(h);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_contains_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->contains(x, y);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_contains_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &r = *(EarthView::World::Spatial::Display::CSpatialRect*) r_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->contains(r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_unite_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &r = *(EarthView::World::Spatial::Display::CSpatialRect*) r_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->unite(r);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_united_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &other = *(EarthView::World::Spatial::Display::CSpatialRect*) other_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->united(other);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_intersect_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &r = *(EarthView::World::Spatial::Display::CSpatialRect*) r_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->intersect(r);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_display_SpatialRect_intersected_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong other_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &other = *(EarthView::World::Spatial::Display::CSpatialRect*) other_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->intersected(other);
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_display_SpatialRect_intersects_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong r_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &r = *(EarthView::World::Spatial::Display::CSpatialRect*) r_j;
					const 					EarthView::World::Spatial::Display::CSpatialRect *pObjectX = (EarthView::World::Spatial::Display::CSpatialRect*) pObjXXXX;
					bool __values1 = pObjectX->intersects(r);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
			}
		}
	}
}
