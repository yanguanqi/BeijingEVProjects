/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/layoutactiveevent.h"
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
			namespace SystemUI
			{
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_getID_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getID();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_setID_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					pObjectX->setID(id);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_setControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					pObjectX->setControl(ref_ctrl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_getControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_getPageLayout_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					EarthView::World::Spatial::Carto::IPageLayout* __values1 = pObjectX->getPageLayout();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_setPageLayout_1IPageLayout(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_pageLayout_j)
				{
					EarthView::World::Spatial::Carto::IPageLayout *ref_pageLayout = (EarthView::World::Spatial::Carto::IPageLayout*) ref_pageLayout_j;
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					pObjectX->setPageLayout(ref_pageLayout);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_setName_1EVString(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jstring name_j)
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
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					pObjectX->setName(name);
				}
				extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_getName_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					EVString __values1 = pObjectX->getName();
					EarthView::World::Core::ev_wstring valuesw1 = __values1;
					jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_getResponseState_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getResponseState();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutActiveEvent_setResponseState_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean state_j)
				{
					ev_bool state = (ev_bool) state_j;
					EarthView::World::Spatial::SystemUI::CLayoutActiveEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutActiveEvent*) pObjXXXX;
					pObjectX->setResponseState(state);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_LayoutOperationEvent_setElement_1IElement(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pElement_j)
				{
					EarthView::World::Spatial::Carto::IElement *pElement = (EarthView::World::Spatial::Carto::IElement*) pElement_j;
					EarthView::World::Spatial::SystemUI::CLayoutOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutOperationEvent*) pObjXXXX;
					pObjectX->setElement(pElement);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_LayoutOperationEvent_getElement_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CLayoutOperationEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CLayoutOperationEvent*) pObjXXXX;
					EarthView::World::Spatial::Carto::IElement* __values1 = pObjectX->getElement();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
