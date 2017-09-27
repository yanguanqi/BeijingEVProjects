/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/sceneactiveevent.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_getScene_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IScene* __values1 = pObjectX->getScene();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_setScene_1IScene(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IScene *ref_map = (EarthView::World::Spatial::Atlas::IScene*) ref_map_j;
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					pObjectX->setScene(ref_map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
				{
					#if EV_PLATFORM == EV_PLATFORM_ANDROID
					const ev_char* name_ch = (const ev_char*)__env->GetStringUTFChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringUTFChars(name_j, (const char *)name_ch);
					#else
					const ev_wchar* name_ch = (const ev_wchar*)__env->GetStringChars(name_j,JNI_FALSE);
					const EVString name = name_ch;
					__env->ReleaseStringChars(name_j, (const jchar *)name_ch);
					#endif
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					const EVString& __values1 = pObjectX->getName();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_SceneActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CSceneActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CSceneActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
			}
		}
	}
}
