/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/guieventhandlers.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_push_1back_1CGUIEventHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventHandler *&t = *(EarthView::World::Spatial3D::Controls::CGUIEventHandler**) t_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler*& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler*& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_insert_1ev_1uint32_1CGUIEventHandler(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler *&t = *(EarthView::World::Spatial3D::Controls::CGUIEventHandler**) t_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers& pObjectX = *(EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler*& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGUIEventHandler*& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventhandlers_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::GUIEventHandlers *pObjectX = (EarthView::World::Spatial3D::Controls::GUIEventHandlers*) pObjXXXX;
					pObjectX->clear();
				}
			}
		}
	}
}
