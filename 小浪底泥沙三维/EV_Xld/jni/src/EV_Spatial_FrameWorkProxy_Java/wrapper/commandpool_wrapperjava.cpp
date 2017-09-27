/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/commandpool.h"
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
			}
		}
	}
}
extern "C" JNIEXPORT void JNICALL Java_global_CommandPool_connect_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
	CCommandPool *pObjectX = (CCommandPool*) pObjXXXX;
	pObjectX->connect(ref_ctrl);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_CommandPool_getCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
{
	ev_uint32 type = (ev_uint32) type_j;
	CCommandPool *pObjectX = (CCommandPool*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->getCommand(type);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_CommandPool_addCommand_1ICommand(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_cmd_j)
{
	EarthView::World::Spatial::SystemUI::ICommand *ref_cmd = (EarthView::World::Spatial::SystemUI::ICommand*) ref_cmd_j;
	CCommandPool *pObjectX = (CCommandPool*) pObjXXXX;
	pObjectX->addCommand(ref_cmd);
}
extern "C" JNIEXPORT void JNICALL Java_global_CommandPool_removeCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong type_j)
{
	ev_uint32 type = (ev_uint32) type_j;
	CCommandPool *pObjectX = (CCommandPool*) pObjXXXX;
	pObjectX->removeCommand(type);
}
