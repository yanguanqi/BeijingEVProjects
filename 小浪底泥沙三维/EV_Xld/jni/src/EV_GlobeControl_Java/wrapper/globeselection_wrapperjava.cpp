/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globeselection.h"
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
		namespace Spatial3D
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
		namespace Spatial3D
		{
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_getLayerCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getLayerCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_add_1IGlobeLayer_1ILayerSelection(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_layer_j, jlong ref_selection_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *ref_layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) ref_layer_j;
				EarthView::World::Spatial::Atlas::ILayerSelection *ref_selection = (EarthView::World::Spatial::Atlas::ILayerSelection*) ref_selection_j;
				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				ev_bool __values1 = pObjectX->add(ref_layer, ref_selection);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_remove_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				ev_bool __values1 = pObjectX->remove(layer);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				pObjectX->clear();
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_exist_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
				const 				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				ev_bool __values1 = pObjectX->exist(layer);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_get_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
			{
				ev_uint32 index = (ev_uint32) index_j;
				const 				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* __values1 = pObjectX->get(index);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_GlobeSelection_get_1IGlobeLayer(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong layer_j)
			{
				EarthView::World::Spatial3D::Atlas::IGlobeLayer *layer = (EarthView::World::Spatial3D::Atlas::IGlobeLayer*) layer_j;
				const 				EarthView::World::Spatial3D::CGlobeSelection *pObjectX = (EarthView::World::Spatial3D::CGlobeSelection*) pObjXXXX;
				EarthView::World::Spatial::Atlas::ILayerSelection* __values1 = pObjectX->get(layer);
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
		}
	}
}
