/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/linkcontroller.h"
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
extern "C" JNIEXPORT jlong JNICALL Java_global_LinkController_getSingletonPtr_1void(JNIEnv *__env , jclass __clazz)
{
	CLinkController* __values1 = CLinkController::getSingletonPtr();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_isActive_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->isActive();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_LinkController_setActive_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean active_j)
{
	ev_bool active = (ev_bool) active_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	pObjectX->setActive(active);
}
extern "C" JNIEXPORT jlong JNICALL Java_global_LinkController_getCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_uint32 __values1 = pObjectX->getCount();
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_addControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ref_ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ref_ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ref_ctrl_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->addControl(ref_ctrl);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_removeControl_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->removeControl(index);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_removeControl_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->removeControl(ctrl);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_isExist_1ISpatialControl(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong ctrl_j)
{
	EarthView::World::Spatial::Atlas::ISpatialControl *ctrl = (EarthView::World::Spatial::Atlas::ISpatialControl*) ctrl_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->isExist(ctrl);
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT void JNICALL Java_global_LinkController_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	pObjectX->clear();
}
extern "C" JNIEXPORT void JNICALL Java_global_LinkController_load_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	pObjectX->load();
}
extern "C" JNIEXPORT void JNICALL Java_global_LinkController_save_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	pObjectX->save();
}
extern "C" JNIEXPORT void JNICALL Java_global_LinkController_setRotation_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean r_j)
{
	ev_bool r = (ev_bool) r_j;
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	pObjectX->setRotation(r);
}
extern "C" JNIEXPORT jboolean JNICALL Java_global_LinkController_isRotation_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CLinkController *pObjectX = (CLinkController*) pObjXXXX;
	ev_bool __values1 = pObjectX->isRotation();
	jboolean __values1_j = (jboolean)__values1;
	return __values1_j;
}
