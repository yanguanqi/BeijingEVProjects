/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/cameraevent.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_get_1moriginX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->moriginX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_set_1moriginX_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					pObjectX->moriginX = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_get_1moriginY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->moriginY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_set_1moriginY_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					pObjectX->moriginY = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_get_1mlastX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mlastX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_set_1mlastX_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					pObjectX->mlastX = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_get_1mlastY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mlastY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEvent_set_1mlastY_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEvent*)pObjXXXX;
					pObjectX->mlastY = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CRoamCameraEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RoamCameraEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CRoamCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_get_1mx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_set_1mx_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					pObjectX->mx = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_get_1my_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->my);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_set_1my_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					pObjectX->my = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_get_1mzoomRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mzoomRatio);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEvent_set_1mzoomRatio_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEvent*)pObjXXXX;
					pObjectX->mzoomRatio = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CZoomCameraEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_ZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_get_1mx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_set_1mx_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					pObjectX->mx = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_get_1my_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->my);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_set_1my_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					pObjectX->my = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_get_1mrotationDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mrotationDegree);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEvent_set_1mrotationDegree_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEvent*)pObjXXXX;
					pObjectX->mrotationDegree = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CRotationCameraEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationCameraEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CRotationCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_get_1mx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_set_1mx_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					pObjectX->mx = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_get_1my_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->my);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_set_1my_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					pObjectX->my = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_get_1mtiltDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtiltDegree);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEX_set_1mtiltDegree_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEX*)pObjXXXX;
					pObjectX->mtiltDegree = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEXPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEX* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEXPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventEXPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventEX_get_1mrotationratio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mrotationratio);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventEX_set_1mrotationratio_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX*)pObjXXXX;
					pObjectX->mrotationratio = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventEXPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEX* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventEXPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventEXPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventEXPtr*) pObjXXXX;
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
