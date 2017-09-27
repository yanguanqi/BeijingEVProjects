/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/mapactiveevent.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_setControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					pObjectX->setControl(ref_ctrl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_getControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_map = (EarthView::World::Spatial::Atlas::IMap*) ref_map_j;
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					pObjectX->setMap(ref_map);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CMapActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_MapLayersAddedEvent_getFlag_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getFlag();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayersAddedEvent_setFlag_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean flag_j)
				{
					ev_bool flag = (ev_bool) flag_j;
					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjXXXX;
					pObjectX->setFlag(flag);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_MapLayersAddedEvent_getMap_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::IMap* __values1 = pObjectX->getMap();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_MapLayersAddedEvent_setMap_1IMap(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_map_j)
				{
					EarthView::World::Spatial::Atlas::IMap *ref_map = (EarthView::World::Spatial::Atlas::IMap*) ref_map_j;
					EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CMapLayersAddedEvent*) pObjXXXX;
					pObjectX->setMap(ref_map);
				}
			}
		}
	}
}
