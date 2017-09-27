/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/mapoperationevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapOperationEvent_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_map = (EarthView::World::Spatial::Atlas::IMap*) ref_map_j;
					EarthView::World::Spatial::SystemUI::CMapOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjXXXX;
					pObjectX->setMap(ref_map);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapOperationEvent_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapOperationEvent_setLayer_1ILayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j)
				{
					EarthView::World::Spatial::Atlas::ILayer *ref_layer = (EarthView::World::Spatial::Atlas::ILayer*) ref_layer_j;
					EarthView::World::Spatial::SystemUI::CMapOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjXXXX;
					pObjectX->setLayer(ref_layer);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapOperationEvent_getLayer_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CMapOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapOperationEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ILayer* __values1 = pObjectX->getLayer();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
