/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapsnapper.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_get_1mnTolerance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mnTolerance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_set_1mnTolerance_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					pObjectX->mnTolerance = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_get_1mbSnapVertex_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbSnapVertex);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_set_1mbSnapVertex_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					pObjectX->mbSnapVertex = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_get_1mbSnapEdge_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbSnapEdge);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_SnapAttributes_set_1mbSnapEdge_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial2D::Controls::CSnapAttributes *pObjectX = (EarthView::World::Spatial2D::Controls::CSnapAttributes*)pObjXXXX;
					pObjectX->mbSnapEdge = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getSnappedPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& __values1 = pObjectX->getSnappedPoint();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getBeforePoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& __values1 = pObjectX->getBeforePoint();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getAfterPoint_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					const EarthView::World::Spatial::Geometry::CPoint& __values1 = pObjectX->getAfterPoint();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_isVertex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->isVertex();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_isOnEdge_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOnEdge();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_isAbove_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->isAbove();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getFeatureId_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getFeatureId();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_isSketchSnapped_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					ev_bool __values1 = pObjectX->isSketchSnapped();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getSnappedPart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getSnappedPart();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_SnappedResult_getSnappedEditingObject_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CSnappedResult *pObjectX = (EarthView::World::Spatial2D::Controls::CSnappedResult*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CEditingObject* __values1 = pObjectX->getSnappedEditingObject();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_open_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->open();
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_isOpen_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->isOpen();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_close_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->close();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_addLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->addLayer(ref_layer);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_removeLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->removeLayer(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_insertLayer_1ev_1uint32_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j, jlong layer_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->insertLayer(index, layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_getSnapLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getSnapLayerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_getLayerSnapAttributes_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CSnapAttributes* __values1 = pObjectX->getLayerSnapAttributes(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_getSketchSnapAttributes_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CSnapAttributes* __values1 = pObjectX->getSketchSnapAttributes();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_snap_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble dx_j, jdouble dy_j)
				{
					ev_real64 dx = (ev_real64) dx_j;
					ev_real64 dy = (ev_real64) dy_j;
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					ev_bool __values1 = pObjectX->snap(dx, dy);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_getSnappedResult_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					EarthView::World::Spatial2D::Controls::CSnappedResult* __values1 = pObjectX->getSnappedResult();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_getSnapSymbol_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					const EarthView::World::Spatial::Display::ISymbol* __values1 = pObjectX->getSnapSymbol();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_setSnapSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong symbol_j)
				{
					const EarthView::World::Spatial::Display::ISymbol *symbol = (const EarthView::World::Spatial::Display::ISymbol*) symbol_j;
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->setSnapSymbol(symbol);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial2d_controls_MapSnapper_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial2D::Controls::CMapSnapper *pObjectX = (EarthView::World::Spatial2D::Controls::CMapSnapper*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
