/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/natoolbar.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT jint JNICALL Java_global_NetworkAnalystToolBar_getCmdCount_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	const 	CNetworkAnalystToolBar *pObjectX = (CNetworkAnalystToolBar*) pObjXXXX;
	ev_int32 __values1 = pObjectX->getCmdCount();
	jint __values1_j = (jint)__values1;
	return __values1_j;
}
extern "C" JNIEXPORT jlong JNICALL Java_global_NetworkAnalystToolBar_getCommand_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong index_j)
{
	ev_uint32 index = (ev_uint32) index_j;
	const 	CNetworkAnalystToolBar *pObjectX = (CNetworkAnalystToolBar*) pObjXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* __values1 = pObjectX->getCommand(index);
	jlong __values1_j = (jlong) __values1;
	return __values1_j;
}
