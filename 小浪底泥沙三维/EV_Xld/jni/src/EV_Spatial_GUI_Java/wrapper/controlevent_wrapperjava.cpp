/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/controlevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_ControlEvent_setControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
				{
					EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
					EarthView::World::Spatial::SystemUI::CControlEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CControlEvent*) pObjXXXX;
					pObjectX->setControl(ref_ctrl);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_ControlEvent_getControl_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CControlEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CControlEvent*) pObjXXXX;
					EarthView::World::Spatial::Atlas::ISpatialControl* __values1 = pObjectX->getControl();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
			}
		}
	}
}
