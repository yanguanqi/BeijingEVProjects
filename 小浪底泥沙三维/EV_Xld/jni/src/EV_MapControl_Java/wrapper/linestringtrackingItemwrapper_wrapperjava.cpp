/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/linestringtrackingItemwrapper.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
extern "C" JNIEXPORT void JNICALL Java_global_LinestringTrackingItemWrapper_setLevelScale_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint level_j, jdouble scale_j)
{
	ev_int32 level = (ev_int32) level_j;
	ev_real64 scale = (ev_real64) scale_j;
	CLinestringTrackingItemWrapper *pObjectX = (CLinestringTrackingItemWrapper*) pObjXXXX;
	pObjectX->setLevelScale(level, scale);
}
extern "C" JNIEXPORT void JNICALL Java_global_LinestringTrackingItemWrapper_setSymbol_1ISymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pSymbol_j)
{
	EarthView::World::Spatial::Display::ISymbol *pSymbol = (EarthView::World::Spatial::Display::ISymbol*) pSymbol_j;
	CLinestringTrackingItemWrapper *pObjectX = (CLinestringTrackingItemWrapper*) pObjXXXX;
	pObjectX->setSymbol(pSymbol);
}
extern "C" JNIEXPORT void JNICALL Java_global_LinestringTrackingItemWrapper_addPoint_1CPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong point_j)
{
	EarthView::World::Spatial::Geometry::CPoint *point = (EarthView::World::Spatial::Geometry::CPoint*) point_j;
	CLinestringTrackingItemWrapper *pObjectX = (CLinestringTrackingItemWrapper*) pObjXXXX;
	pObjectX->addPoint(point);
}
extern "C" JNIEXPORT void JNICALL Java_global_LinestringTrackingItemWrapper_refresh_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
{
	CLinestringTrackingItemWrapper *pObjectX = (CLinestringTrackingItemWrapper*) pObjXXXX;
	pObjectX->refresh();
}
