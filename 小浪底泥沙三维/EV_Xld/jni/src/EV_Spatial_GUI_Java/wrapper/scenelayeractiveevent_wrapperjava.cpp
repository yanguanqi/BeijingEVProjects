/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/scenelayeractiveevent.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_scene_j)
				{
					EarthView::World::Spatial::Atlas::IScene *ref_scene = (EarthView::World::Spatial::Atlas::IScene*) ref_scene_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setScene(ref_scene);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getParentGroupLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getParentGroupLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setParentGroupLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_grouplayer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_grouplayer = (EarthView::World::Spatial::Atlas::ILayer*) ref_grouplayer_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setParentGroupLayer(ref_grouplayer);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getOldIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getOldIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_getNewIndex_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getNewIndex();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setOldIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setOldIndex(index);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneLayerActiveEvent_setNewIndex_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint index_j)
				{
					ev_int32 index = (ev_int32) index_j;
					EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneLayerActiveEvent*) pObjXXXX;
					pObjectX->setNewIndex(index);
				}
			}
		}
	}
}
