/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/popupmenuevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_PopUpMenuEvent_setDisplayPos_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble x_j, jdouble y_j)
				{
					ev_real64 x = (ev_real64) x_j;
					ev_real64 y = (ev_real64) y_j;
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjXXXX;
					pObjectX->setDisplayPos(x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_PopUpMenuEvent_addCommand_1ICommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cmd_j)
				{
					EarthView::World::Spatial::SystemUI::ICommand *ref_cmd = (EarthView::World::Spatial::SystemUI::ICommand*) ref_cmd_j;
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjXXXX;
					pObjectX->addCommand(ref_cmd);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_PopUpMenuEvent_getDisplayPos_1ev_1real64_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong x_j, jlong y_j)
				{
					ev_real64 *x = (ev_real64*) x_j;
					ev_real64 *y = (ev_real64*) y_j;
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjXXXX;
					pObjectX->getDisplayPos(x, y);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_PopUpMenuEvent_getCommandCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjXXXX;
					ev_uint32 __values1 = pObjectX->getCommandCount();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_PopUpMenuEvent_getCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
				{
					ev_uint32 index = (ev_uint32) index_j;
					const 					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->getCommand(index);
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
