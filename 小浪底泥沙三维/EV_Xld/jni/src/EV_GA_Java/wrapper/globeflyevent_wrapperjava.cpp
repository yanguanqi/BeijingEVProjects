/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/globeflyevent.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_OperatorAssign_1CGlobeFlyEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_OperatorAssign_1CGlobeFlyEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_bind_1CGlobeFlyEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEvent_setFlyPath_1CGlobeFlyPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong flyPath_j)
				{
					const EarthView::World::Spatial3D::CGlobeFlyPathPtr &flyPath = *(EarthView::World::Spatial3D::CGlobeFlyPathPtr*) flyPath_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent*) pObjXXXX;
					pObjectX->setFlyPath(flyPath);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_OperatorAssign_1CGlobeFlyDataEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_bind_1CGlobeFlyDataEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_OperatorAssign_1CGlobeFlyDataEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyDataEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyDataEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_bind_1CGlobeFlyPlayEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_OperatorAssign_1CGlobeFlyPlayEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_OperatorAssign_1CGlobeFlyPlayEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPlayEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPlayEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_OperatorAssign_1CGlobeFlyPauseEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_OperatorAssign_1CGlobeFlyPauseEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_bind_1CGlobeFlyPauseEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyPauseEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyPauseEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_OperatorAssign_1CGlobeFlyStopEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_OperatorAssign_1CGlobeFlyStopEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_bind_1CGlobeFlyStopEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_OperatorAssign_1CGlobeFlyStartSamplePointEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_OperatorAssign_1CGlobeFlyStartSamplePointEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_bind_1CGlobeFlyStartSamplePointEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStartSamplePointEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStartSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_OperatorAssign_1CGlobeFlyStopSamplePointEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_OperatorAssign_1CGlobeFlyStopSamplePointEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_bind_1CGlobeFlyStopSamplePointEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyStopSamplePointEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyStopSamplePointEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEvent_get_1mcloseWindow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mcloseWindow);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEvent_set_1mcloseWindow_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*)pObjXXXX;
					pObjectX->mcloseWindow = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_OperatorAssign_1CGlobeFlyShowAxisEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_OperatorAssign_1CGlobeFlyShowAxisEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_bind_1CGlobeFlyShowAxisEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyShowAxisEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyShowAxisEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEvent_get_1mcloseWindow_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mcloseWindow);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEvent_set_1mcloseWindow_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*)pObjXXXX;
					pObjectX->mcloseWindow = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_OperatorAssign_1CGlobeFlyAdjustModeEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_OperatorAssign_1CGlobeFlyAdjustModeEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_bind_1CGlobeFlyAdjustModeEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong rep_j)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent *rep = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEvent*) rep_j;
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					pObjectX->bind(rep);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GlobeFlyAdjustModeEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGlobeFlyAdjustModeEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
			}
		}
	}
}
