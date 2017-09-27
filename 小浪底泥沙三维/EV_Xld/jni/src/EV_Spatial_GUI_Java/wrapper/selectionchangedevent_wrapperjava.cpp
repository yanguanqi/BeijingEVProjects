/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/selectionchangedevent.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_getSpatialControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getSpatialControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_setSpatialControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_control_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_control = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_control_j;
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					pObjectX->setSpatialControl(ref_control);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_getLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getLayerCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_getLayer_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_addLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->addLayer(ref_layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_removeLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->removeLayer(layer);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_existLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *layer = (EarthView::World::Spatial::Atlas::ILayer*) layer_j;
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->existLayer(layer);
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SelectionChangedEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CSelectionChangedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSelectionChangedEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
			}
		}
	}
}
