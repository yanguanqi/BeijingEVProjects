/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "ga/guieventqueue.h"
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
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_setEvents_1CEvents(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong events_j)
				{
					EarthView::World::Spatial3D::Controls::CEvents &events = *(EarthView::World::Spatial3D::Controls::CEvents*) events_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->setEvents(events);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_appendEvents_1CEvents(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong events_j)
				{
					EarthView::World::Spatial3D::Controls::CEvents &events = *(EarthView::World::Spatial3D::Controls::CEvents*) events_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->appendEvents(events);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_addEvent_1CGUIEventPtr(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong guiEvent_j)
				{
					const EarthView::World::Spatial::SystemUI::CGUIEventPtr &guiEvent = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*) guiEvent_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->addEvent(guiEvent);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_takeEvent_1CEvents(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong events_j)
				{
					EarthView::World::Spatial3D::Controls::CEvents &events = *(EarthView::World::Spatial3D::Controls::CEvents*) events_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					ev_bool __values1 = pObjectX->takeEvent(events);
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_windowResize_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jint width_j, jint height_j, jdouble time_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->windowResize(x, y, width, height, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseWheel_1ev_1real32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j, jdouble time_j)
				{
					ev_real32 delta = (ev_real32) delta_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseWheel(delta, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseMove_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jdouble time_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseMove(x, y, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j, jdouble time_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseButtonPress(x, y, button, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j, jdouble time_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseDoubleButtonPress(x, y, button, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j, jdouble time_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseButtonRelease(x, y, button, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_keyPress_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j, jdouble time_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->keyPress(key, virtualKey, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_keyRelease_1ev_1int32_1ev_1int32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j, jdouble time_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->keyRelease(key, virtualKey, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchBegan_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jdouble time_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchBegan(id, phase, x, y, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchMove_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jdouble time_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchMove(id, phase, x, y, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchEnded_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1uint32_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jlong tap_count_j, jdouble time_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_uint32 tap_count = (ev_uint32) tap_count_j;
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchEnded(id, phase, x, y, tap_count, time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_closeWindow_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->closeWindow(time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_quitApplication_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->quitApplication(time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_windowResize_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jint width_j, jint height_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->windowResize(x, y, width, height);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseWheel_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j)
				{
					ev_real32 delta = (ev_real32) delta_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseWheel(delta);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseMove_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseMove(x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseButtonPress(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseDoubleButtonPress_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseDoubleButtonPress(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_mouseButtonRelease_1ev_1int32_1ev_1int32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jlong button_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_uint32 button = (ev_uint32) button_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->mouseButtonRelease(x, y, button);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_keyPress_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->keyPress(key, virtualKey);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_keyRelease_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j, jint virtualKey_j)
				{
					ev_int32 key = (ev_int32) key_j;
					ev_int32 virtualKey = (ev_int32) virtualKey_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->keyRelease(key, virtualKey);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchBegan_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchBegan(id, phase, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchMove_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchMove(id, phase, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_touchEnded_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jlong tap_count_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_uint32 tap_count = (ev_uint32) tap_count_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->touchEnded(id, phase, x, y, tap_count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_closeWindow_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->closeWindow();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_quitApplication_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->quitApplication();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_createEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* __values1 = pObjectX->createEvent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_frame_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->frame(time);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_resetAccumlateEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					pObjectX->resetAccumlateEvent();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_getAccumlateEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* __values1 = pObjectX->getAccumlateEvent();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_get_1mevents_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mevents);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_set_1mevents_1CEvents(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjXXXX;
					pObjectX->mevents = *(EarthView::World::Spatial3D::Controls::CEvents*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_get_1maccumlateEventState_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjXXXX;
					jlong __values1_j = (jlong)(pObjectX->maccumlateEventState);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial3d_controls_Guieventqueue_set_1maccumlateEventState_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial3D::Controls::CGUIEventQueue *pObjectX = (EarthView::World::Spatial3D::Controls::CGUIEventQueue*)pObjXXXX;
					pObjectX->maccumlateEventState = (EarthView::World::Spatial::SystemUI::CGUIEvent*) __values1_j;
				}
			}
		}
	}
}
