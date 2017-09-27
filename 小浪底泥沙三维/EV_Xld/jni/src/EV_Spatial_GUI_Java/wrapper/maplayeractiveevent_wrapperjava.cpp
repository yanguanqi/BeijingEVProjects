/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/maplayeractiveevent.h"
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
		namespace Spatial
		{
			namespace SystemUI
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_map = (EarthView::World::Spatial::Atlas::IMap*) ref_map_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setMap(ref_map);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getParentGroupLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getParentGroupLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setParentGroupLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_grouplayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_grouplayer = (EarthView::World::Spatial::Atlas::ILayer*) ref_grouplayer_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setParentGroupLayer(ref_grouplayer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getHoverParentGroupLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getHoverParentGroupLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setHoverParentGroupLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong hoverGroupLayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *hoverGroupLayer = (EarthView::World::Spatial::Atlas::ILayer*) hoverGroupLayer_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setHoverParentGroupLayer(hoverGroupLayer);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getOldIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getOldIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_getNewIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getNewIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setOldIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setOldIndex(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setNewIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setNewIndex(index);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_isUpdateCache_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->isUpdateCache();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setUpdateCache_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean update_j)
				{
					ev_bool update = (ev_bool) update_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setUpdateCache(update);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_isBatch_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->isBatch();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayerActiveEvent_setBatch_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean batch_j)
				{
					ev_bool batch = (ev_bool) batch_j;
					EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayerActiveEvent*) pObjXXXX;
					pObjectX->setBatch(batch);
				}
			}
		}
	}
}
