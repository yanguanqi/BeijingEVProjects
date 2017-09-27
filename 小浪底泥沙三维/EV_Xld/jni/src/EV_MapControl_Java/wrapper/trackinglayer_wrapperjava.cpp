/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/trackinglayer.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItemSet_count_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjXXXX;
					ev_int32 __values1 = pObjectX->count();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItemSet_item_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* __values1 = pObjectX->item(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingItemSet_isExist_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint id_j)
				{
					ev_int32 id = (ev_int32) id_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingItemSet *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingItemSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->isExist(id);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_addItem_1CTrackingItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_item_j)
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem *ref_item = (EarthView::World::Spatial2D::Controls::CTrackingItem*) ref_item_j;
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->addItem(ref_item);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_removeItem_1CTrackingItem(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong item_j)
				{
					EarthView::World::Spatial2D::Controls::CTrackingItem *item = (EarthView::World::Spatial2D::Controls::CTrackingItem*) item_j;
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->removeItem(item);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_itemAt_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* __values1 = pObjectX->itemAt(x, y);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_items_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet __values1 = pObjectX->items(rect);
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *returnvalues = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_items_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet __values1 = pObjectX->items();
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *returnvalues = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_selectedItems_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItemSet __values1 = pObjectX->selectedItems();
					EarthView::World::Spatial2D::Controls::CTrackingItemSet *returnvalues = new EarthView::World::Spatial2D::Controls::CTrackingItemSet(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_select_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					ev_bool __values1 = pObjectX->select(rect);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_foucsItem_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CTrackingItem* __values1 = pObjectX->foucsItem();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_itemsBoundingRect_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					EarthView::World::Spatial::Display::CSpatialRect __values1 = pObjectX->itemsBoundingRect();
					EarthView::World::Spatial::Display::CSpatialRect *returnvalues = new EarthView::World::Spatial::Display::CSpatialRect(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_clearSelection_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->clearSelection();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_update_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->update();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_update_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->update(rect);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_paintInterestItems_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->paintInterestItems();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_repaint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->repaint();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_TrackingLayer_repaint_1CSpatialRect(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rect_j)
				{
					const EarthView::World::Spatial::Display::CSpatialRect &rect = *(EarthView::World::Spatial::Display::CSpatialRect*) rect_j;
					EarthView::World::Spatial2D::Controls::CTrackingLayer *pObjectX = (EarthView::World::Spatial2D::Controls::CTrackingLayer*) pObjXXXX;
					pObjectX->repaint(rect);
				}
			}
		}
	}
}
