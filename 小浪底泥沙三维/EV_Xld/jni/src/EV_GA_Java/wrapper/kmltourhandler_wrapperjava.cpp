/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/kmltourhandler.h"
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
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_TourEndEvent_getTourPath_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CTourEndEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTourEndEvent*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr __values1 = pObjectX->getTourPath();
					EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr *returnvalues = new EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_TourEndEvent_setTourPath_1CKmlTourPathPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong kmlTourPath_j)
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr kmlTourPath = *(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*) kmlTourPath_j;
					EarthView::World::Spatial3D::Controls::CTourEndEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CTourEndEvent*) pObjXXXX;
					pObjectX->setTourPath(kmlTourPath);
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEvent_00024KmlEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CKmlTourEvent::DATA,
						CKmlTourEvent::START,
						CKmlTourEvent::STOP,
						CKmlTourEvent::STARTRECORD,
						CKmlTourEvent::STOPRECORD
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEvent_getKmlEventType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourEvent*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourEvent::KmlEventType __values1 = pObjectX->getKmlEventType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEventPtr_OperatorAssign_1CKmlTourEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlTourEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEventPtr_OperatorAssign_1CKmlTourEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlTourEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEvent_get_1mkmlTourPath_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mkmlTourPath);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEvent_set_1mkmlTourPath_1CKmlTourPathPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*)pObjXXXX;
					pObjectX->mkmlTourPath = *(EarthView::World::Spatial3D::KmlManager::CKmlTourPathPtr*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEventPtr_OperatorAssign_1CKmlTourPathEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEventPtr_OperatorAssign_1CKmlTourPathEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlTourPathEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourPathEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlTourPathEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartTourEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartTourEventPtr_OperatorAssign_1CKmlStartTourEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartTourEventPtr_OperatorAssign_1CKmlStartTourEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlStartTourEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartTourEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartTourEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopTourEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopTourEventPtr_OperatorAssign_1CKmlStopTourEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopTourEventPtr_OperatorAssign_1CKmlStopTourEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlStopTourEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopTourEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopTourEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartRecordTourEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartRecordTourEventPtr_OperatorAssign_1CKmlStartRecordTourEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartRecordTourEventPtr_OperatorAssign_1CKmlStartRecordTourEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartRecordTourEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStartRecordTourEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStartRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopRecordTourEventPtr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopRecordTourEventPtr_OperatorAssign_1CKmlStopRecordTourEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					const EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr &r = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopRecordTourEventPtr_OperatorAssign_1CKmlStopRecordTourEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rep_j )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent *rep = (EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEvent*) rep_j;
					pObjectX = rep;
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopRecordTourEventPtr_toCGUIEventPtr_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_KmlStopRecordTourEventPtr_OperatorConvertionCGUIEventPtr_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr& pObjectX = *(EarthView::World::Spatial3D::Controls::CKmlStopRecordTourEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr __values1 = pObjectX ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *returnvalues = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				class JCKmlTourHandlerProxy : public EarthView::World::Spatial3D::Controls::CKmlTourHandler
				{
				 private:
					EarthView::World::Core::ev_string m_handleUseEvent_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleFrame_CGUIEvent_callback;
					EarthView::World::Core::ev_string m_handleEvent_CGUIEvent_callback;
				public:
					JCKmlTourHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlTourHandler(pList)
					{
					}
					ev_void unRegisterJavaReference()
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
						if(__gr != NULL)
						{
							delete __gr;
							this->registerJavaReference(NULL);
						}
					}
				public:
					void register_handleUseEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleUseEvent_CGUIEvent_callback = __method;
					}
					void register_handleFrame_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleFrame_CGUIEvent_callback = __method;
					}
					void register_handleEvent_CGUIEvent_callback(EarthView::World::Core::ev_string __method)
					{
						this->m_handleEvent_CGUIEvent_callback = __method;
					}
					virtual ev_bool handleUseEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* userEvent)
					{
						if (this->_gRef != NULL && this->m_handleUseEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong userEvent_j = (jlong) userEvent;
							jmethodID __method = __gr->getMethod("handleUseEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , userEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlTourHandler::handleUseEvent(userEvent);
						}
					}
					virtual ev_bool handleEvent(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleEvent_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleEvent_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlTourHandler::handleEvent(guiEvent);
						}
					}
					virtual ev_bool handleFrame(EarthView::World::Spatial::SystemUI::CGUIEvent* guiEvent)
					{
						if (this->_gRef != NULL && this->m_handleFrame_CGUIEvent_callback != "" && this->isCustomExtend())
						{
							EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)this->getJavaReference();
							JNIEnv * __env;
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							bool __jniAttachable = false;
							if(EarthView::World::Core::JNILoad::getCachedJVM()->GetEnv((void **)&__env, JNI_VERSION_1_6) != JNI_OK)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
								__jniAttachable = true;
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->AttachCurrentThread((void **)&__env, NULL);
							#endif
							jobject __obj = __gr->getJObject();
							jclass __clazz = __gr->getClass();
							jlong guiEvent_j = (jlong) guiEvent;
							jmethodID __method = __gr->getMethod("handleFrame_CGUIEvent_callback");
							jboolean __values1_j = (jboolean)__env->CallBooleanMethod(__obj, __method , guiEvent_j);
							#if EV_PLATFORM == EV_PLATFORM_ANDROID
							if(__jniAttachable)
							{
								EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							}
							#else
							EarthView::World::Core::JNILoad::getCachedJVM()->DetachCurrentThread();
							#endif
							ev_bool __values1 = (ev_bool) __values1_j;
							return __values1;
						}
						else
						{
							return this->CKmlTourHandler::handleFrame(guiEvent);
						}
					}
				};
				REGISTER_FACTORY_CLASS(JCKmlTourHandlerProxy);
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleUseEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTourHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleUseEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleUseEvent(userEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_register_1handleUseEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTourHandlerProxy *pObjectX = (JCKmlTourHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleUseEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleUseEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleUseEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong userEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *userEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) userEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleUseEvent(userEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleEvent_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTourHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleEvent(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_register_1handleEvent_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTourHandlerProxy *pObjectX = (JCKmlTourHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleEvent_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleEvent_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleEvent_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleEvent(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleFrame_1CGUIEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					if (typeid(*pObjectX) == typeid(JCKmlTourHandlerProxy))
					{
						ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleFrame(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
					else
					{
						ev_bool __values1 = pObjectX->handleFrame(guiEvent);
						jboolean __values1_j = (jboolean)__values1;
						return __values1_j;
					}
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_register_1handleFrame_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jstring __method)
				{
					JCKmlTourHandlerProxy *pObjectX = (JCKmlTourHandlerProxy*) pObjXXXX;
					const char *pMethod = __env->GetStringUTFChars(__method, NULL);
					EarthView::World::Core::ev_string sMethod = pMethod;
					__env->ReleaseStringUTFChars(__method, pMethod);
					pObjectX->register_handleFrame_CGUIEvent_callback(sMethod);
					if (pObjectX->getJavaReference() != NULL && sMethod != "")
					{
						EarthView::World::Core::GlobalReference *__gr = (EarthView::World::Core::GlobalReference *)pObjectX->getJavaReference();
						jobject __obj1 = __gr->getJObject();
						jclass __clazz1 = __env->GetObjectClass(__obj1);
						jmethodID __method = __env->GetMethodID(__clazz1,"handleFrame_CGUIEvent_callback", "(J)Z");
						__gr->setMethod(sMethod, __method);
					}
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_handleFrame_1CGUIEvent_1NoVirtual(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *guiEvent = (EarthView::World::Spatial::SystemUI::CGUIEvent*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					ev_bool __values1 = pObjectX->EarthView::World::Spatial3D::Controls::CKmlTourHandler::handleFrame(guiEvent);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_KmlTourHandler_sendActiveEvent_1CEvent(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong event_j)
				{
					EarthView::World::Core::CEvent *event = (EarthView::World::Core::CEvent*) event_j;
					EarthView::World::Spatial3D::Controls::CKmlTourHandler *pObjectX = (EarthView::World::Spatial3D::Controls::CKmlTourHandler*) pObjXXXX;
					pObjectX->sendActiveEvent(event);
				}
			}
		}
	}
}
