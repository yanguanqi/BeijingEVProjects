/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/gotoevent.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_OperatorAssign_1CGotoEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent& pObjectX = *(EarthView::World::Spatial3D::Controls::CGotoEvent*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGotoEvent &rhs = *(EarthView::World::Spatial3D::Controls::CGotoEvent*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mlatitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mlatitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mlatitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mlatitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mlongitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mlongitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mlongitude_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mlongitude = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mheading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mheading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mheading_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mheading = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mincludeHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mincludeHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mincludeHeading_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mincludeHeading = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mtilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mtilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mtilt_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mtilt = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mincludeTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mincludeTilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mincludeTilt_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mincludeTilt = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1maltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->maltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1maltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->maltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mincludeAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mincludeAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mincludeAltitude_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mincludeAltitude = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mmodifyAltitude_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mmodifyAltitude);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mmodifyAltitude_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mmodifyAltitude = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mtimeSpan_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtimeSpan);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mtimeSpan_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mtimeSpan = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mTarget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTarget);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mTarget_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mTarget = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mDistance_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mDistance = (double)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_get_1mStopGoto_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mStopGoto);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_GotoEvent_set_1mStopGoto_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGotoEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEvent*)pObjXXXX;
					pObjectX->mStopGoto = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CGotoEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGotoEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEventPtr_OperatorAssign_1CGotoEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CGotoEventPtr &r = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEventPtr_OperatorAssign_1CGotoEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CGotoEvent *rep = (EarthView::World::Spatial3D::Controls::CGotoEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_GotoEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGotoEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CGotoEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_OperatorAssign_1CLocationEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent& pObjectX = *(EarthView::World::Spatial3D::Controls::CLocationEvent*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CLocationEvent &rhs = *(EarthView::World::Spatial3D::Controls::CLocationEvent*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_get_1mTarget_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTarget);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_set_1mTarget_1CVector3(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					pObjectX->mTarget = *(EarthView::World::Spatial::Math::CVector3*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_get_1mTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mTilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_set_1mTilt_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					pObjectX->mTilt = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_get_1mHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_set_1mHeading_1CDegree(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					pObjectX->mHeading = *(EarthView::World::Spatial::Math::CDegree*) __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_get_1mDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_set_1mDistance_1double(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					pObjectX->mDistance = (double)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_get_1mtimeSpan_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtimeSpan);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_LocationEvent_set_1mtimeSpan_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CLocationEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEvent*)pObjXXXX;
					pObjectX->mtimeSpan = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CLocationEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CLocationEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEventPtr_OperatorAssign_1CLocationEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CLocationEventPtr &r = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEventPtr_OperatorAssign_1CLocationEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CLocationEvent *rep = (EarthView::World::Spatial3D::Controls::CLocationEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_LocationEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLocationEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CLocationEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEvent_OperatorAssign_1CSetCameraControlDepthEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent &rhs = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEventPtr_OperatorAssign_1CSetCameraControlDepthEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr &r = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEventPtr_OperatorAssign_1CSetCameraControlDepthEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent *rep = (EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraControlDepthEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraControlDepthEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_get_1mPointx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPointx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_set_1mPointx_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					pObjectX->mPointx = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_get_1mPointy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPointy);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_set_1mPointy_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					pObjectX->mPointy = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_get_1mrotationDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mrotationDegree);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_set_1mrotationDegree_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					pObjectX->mrotationDegree = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_get_1mzoomRatio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mzoomRatio);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEvent_set_1mzoomRatio_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*)pObjXXXX;
					pObjectX->mzoomRatio = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEventPtr_OperatorAssign_1CRotationAndZoomCameraEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr &r = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEventPtr_OperatorAssign_1CRotationAndZoomCameraEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent *rep = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_RotationAndZoomCameraEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CRotationAndZoomCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_get_1mPointx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPointx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_set_1mPointx_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					pObjectX->mPointx = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_get_1mPointy_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mPointy);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_set_1mPointy_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					pObjectX->mPointy = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_get_1mtiltDegree_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtiltDegree);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEvent_set_1mtiltDegree_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*)pObjXXXX;
					pObjectX->mtiltDegree = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventPtr_OperatorAssign_1CTiltCameraEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr &r = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventPtr_OperatorAssign_1CTiltCameraEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CTiltCameraEvent *rep = (EarthView::World::Spatial3D::Controls::CTiltCameraEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TiltCameraEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CTiltCameraEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEvent_get_1mrotationratio_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mrotationratio);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEvent_set_1mrotationratio_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*)pObjXXXX;
					pObjectX->mrotationratio = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventPtr_OperatorAssign_1CSetCameraRotationratioEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr &r = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventPtr_OperatorAssign_1CSetCameraRotationratioEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent *rep = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraRotationratioEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraRotationratioEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_setCameraLockTarget_1CSceneNode(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong lockTarget_j)
				{
					EarthView::World::Graphic::CSceneNode *lockTarget = (EarthView::World::Graphic::CSceneNode*) lockTarget_j;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					pObjectX->setCameraLockTarget(lockTarget);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_getCameraLockTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					EarthView::World::Graphic::CSceneNode* __values1 = pObjectX->getCameraLockTarget();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_hasSetLockTarget_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasSetLockTarget();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_setCameraLockHeading_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong headingt_j)
				{
					const EarthView::World::Spatial::Math::CDegree &headingt = *(EarthView::World::Spatial::Math::CDegree*) headingt_j;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					pObjectX->setCameraLockHeading(headingt);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_getCameraLockHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getCameraLockHeading();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_hasSetLockHeading_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasSetLockHeading();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_setCameraLockTilt_1CDegree(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong tilt_j)
				{
					const EarthView::World::Spatial::Math::CDegree &tilt = *(EarthView::World::Spatial::Math::CDegree*) tilt_j;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					pObjectX->setCameraLockTilt(tilt);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_getCameraLockTilt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					EarthView::World::Spatial::Math::CDegree __values1 = pObjectX->getCameraLockTilt();
					EarthView::World::Spatial::Math::CDegree *returnvalues = new EarthView::World::Spatial::Math::CDegree(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_hasSetLockTilt_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasSetLockTilt();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_setCameraLockDistance_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble distance_j)
				{
					ev_real64 distance = (ev_real64) distance_j;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					pObjectX->setCameraLockDistance(distance);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_getCameraLockDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getCameraLockDistance();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_hasSetLockDistance_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasSetLockDistance();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_setCameraLockMode_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean isThirdPersonMode_j)
				{
					ev_bool isThirdPersonMode = (ev_bool) isThirdPersonMode_j;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					pObjectX->setCameraLockMode(isThirdPersonMode);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_hasSetLockMode_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->hasSetLockMode();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_get_1mbCanChangeTilt_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbCanChangeTilt);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_set_1mbCanChangeTilt_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					pObjectX->mbCanChangeTilt = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_get_1mbCanChangeHeading_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbCanChangeHeading);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_set_1mbCanChangeHeading_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					pObjectX->mbCanChangeHeading = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_get_1mbCanChangeDistance_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mbCanChangeDistance);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_set_1mbCanChangeDistance_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					pObjectX->mbCanChangeDistance = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_get_1mIsThirdPersonMode_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mIsThirdPersonMode);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEvent_set_1mIsThirdPersonMode_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*)pObjXXXX;
					pObjectX->mIsThirdPersonMode = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEventPtr_OperatorAssign_1CSetCameraLockTargetEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr &r = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEventPtr_OperatorAssign_1CSetCameraLockTargetEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent *rep = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_SetCameraLockTargetEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CSetCameraLockTargetEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEvent_get_1mCompositorTime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CFadeInOutEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mCompositorTime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEvent_set_1mCompositorTime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CFadeInOutEvent*)pObjXXXX;
					pObjectX->mCompositorTime = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEventPtr_OperatorAssign_1CFadeInOutEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr &r = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEventPtr_OperatorAssign_1CFadeInOutEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CFadeInOutEvent *rep = (EarthView::World::Spatial3D::Controls::CFadeInOutEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_FadeInOutEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CFadeInOutEventPtr*) pObjXXXX;
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
