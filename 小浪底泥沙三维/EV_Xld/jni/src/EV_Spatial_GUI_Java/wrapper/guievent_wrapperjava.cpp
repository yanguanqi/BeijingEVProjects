/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/guievent.h"
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
			namespace SystemUI
			{
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_GUITouchPhaseHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						TOUCH_UNKNOWN,
						TOUCH_BEGAN,
						TOUCH_MOVED,
						TOUCH_STATIONERY,
						TOUCH_ENDED
					};
					jintArray array = __env->NewIntArray(5);
					__env->SetIntArrayRegion(array, 0, 5, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_get_1mid_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mid);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_set_1mid_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					pObjectX->mid = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_get_1mphase_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mphase);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_set_1mphase_1GUITouchPhase(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					pObjectX->mphase = (EarthView::World::Spatial::SystemUI::GUITouchPhase)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_get_1x_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->x);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_set_1x_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					pObjectX->x = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_get_1y_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->y);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_set_1y_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					pObjectX->y = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_get_1mtapCount_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					jlong __values1_j = (jlong) (pObjectX->mtapCount);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchPoint_set_1mtapCount_1ev_1uint32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchPoint*)pObjXXXX;
					pObjectX->mtapCount = (ev_uint32)__values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_OperatorAssign_1CTouchSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong rhs_j )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet& pObjectX = *(EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					const EarthView::World::Spatial::SystemUI::CTouchSet &rhs = *(EarthView::World::Spatial::SystemUI::CTouchSet*) rhs_j;
					pObjectX = rhs;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_push_1back_1CTouchPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchPoint &t = *(EarthView::World::Spatial::SystemUI::CTouchPoint*) t_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->push_back(t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_pop_1back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->pop_back();
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_front_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& __values1 = pObjectX->front();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_back_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& __values1 = pObjectX->back();
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_insert_1ev_1uint32_1CTouchPoint(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j, jlong t_j)
				{
					ev_uint32 pos = (ev_uint32) pos_j;
					EarthView::World::Spatial::SystemUI::CTouchPoint &t = *(EarthView::World::Spatial::SystemUI::CTouchPoint*) t_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->insert(pos, t);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_remove_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong pos_j)
				{
					ev_size_t pos = (ev_size_t) pos_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->remove(pos);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_empty_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					ev_bool __values1 = pObjectX->empty();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_OperatorIndex_1ev_1size_1t(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong n_j )
				{
					EarthView::World::Spatial::SystemUI::CTouchSet& pObjectX = *(EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::SystemUI::CTouchPoint& __values1 = pObjectX[n];
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_at_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong n_j)
				{
					ev_size_t n = (ev_size_t) n_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CTouchPoint& __values1 = pObjectX->at(n);
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_size_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					ev_size_t __values1 = pObjectX->size();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_resize_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong newSize_j)
				{
					ev_size_t newSize = (ev_size_t) newSize_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->resize(newSize);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_reserve_1ev_1size_1t(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong count_j)
				{
					ev_size_t count = (ev_size_t) count_j;
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->reserve(count);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchSet_clear_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchSet *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchSet*) pObjXXXX;
					pObjectX->clear();
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchData_addTouchPoint_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jlong tap_count_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_uint32 tap_count = (ev_uint32) tap_count_j;
					EarthView::World::Spatial::SystemUI::CTouchData *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchData*) pObjXXXX;
					pObjectX->addTouchPoint(id, phase, x, y, tap_count);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_TouchData_get_1mtouchSet_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CTouchData *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchData*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mtouchSet);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_TouchData_set_1mtouchSet_1CTouchSet(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CTouchData *pObjectX = (EarthView::World::Spatial::SystemUI::CTouchData*)pObjXXXX;
					pObjectX->mtouchSet = *(EarthView::World::Spatial::SystemUI::CTouchSet*) __values1_j;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_Guievent_00024GUIMouseButtonMaskHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGUIEvent::BUTTON_UnKnown,
						CGUIEvent::LEFT_MOUSE_BUTTON,
						CGUIEvent::MIDDLE_MOUSE_BUTTON,
						CGUIEvent::RIGHT_MOUSE_BUTTON
					};
					jintArray array = __env->NewIntArray(4);
					__env->SetIntArrayRegion(array, 0, 4, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_Guievent_00024GUIEventTypeHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGUIEvent::NONE,
						CGUIEvent::MOUSEDOWN,
						CGUIEvent::MOUSEUP,
						CGUIEvent::MOUSEDOUBLECLIK,
						CGUIEvent::MOUSEMOVE,
						CGUIEvent::KEYDOWN,
						CGUIEvent::KEYUP,
						CGUIEvent::MOUSEWHEEL,
						CGUIEvent::TOUCHBEGIN,
						CGUIEvent::TOUCHMOVE,
						CGUIEvent::TOUCHEND,
						CGUIEvent::FRAME,
						CGUIEvent::CLOSE_WINDOW,
						CGUIEvent::QUIT_APPLICATION,
						CGUIEvent::WINDOW_RESIZE,
						CGUIEvent::USER
					};
					jintArray array = __env->NewIntArray(16);
					__env->SetIntArrayRegion(array, 0, 16, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_Guievent_00024GUIKeySymbolHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGUIEvent::KEY_UnKnown,
						CGUIEvent::KEY_Space,
						CGUIEvent::KEY_0,
						CGUIEvent::KEY_1,
						CGUIEvent::KEY_2,
						CGUIEvent::KEY_3,
						CGUIEvent::KEY_4,
						CGUIEvent::KEY_5,
						CGUIEvent::KEY_6,
						CGUIEvent::KEY_7,
						CGUIEvent::KEY_8,
						CGUIEvent::KEY_9,
						CGUIEvent::KEY_A,
						CGUIEvent::KEY_B,
						CGUIEvent::KEY_C,
						CGUIEvent::KEY_D,
						CGUIEvent::KEY_E,
						CGUIEvent::KEY_F,
						CGUIEvent::KEY_G,
						CGUIEvent::KEY_H,
						CGUIEvent::KEY_I,
						CGUIEvent::KEY_J,
						CGUIEvent::KEY_K,
						CGUIEvent::KEY_L,
						CGUIEvent::KEY_M,
						CGUIEvent::KEY_N,
						CGUIEvent::KEY_O,
						CGUIEvent::KEY_P,
						CGUIEvent::KEY_Q,
						CGUIEvent::KEY_R,
						CGUIEvent::KEY_S,
						CGUIEvent::KEY_T,
						CGUIEvent::KEY_U,
						CGUIEvent::KEY_V,
						CGUIEvent::KEY_W,
						CGUIEvent::KEY_X,
						CGUIEvent::KEY_Y,
						CGUIEvent::KEY_Z,
						CGUIEvent::KEY_Tab,
						CGUIEvent::KEY_Scroll_Lock,
						CGUIEvent::KEY_Escape,
						CGUIEvent::KEY_Delete,
						CGUIEvent::KEY_Home,
						CGUIEvent::KEY_Left,
						CGUIEvent::KEY_Up,
						CGUIEvent::KEY_Right,
						CGUIEvent::KEY_Down,
						CGUIEvent::KEY_Page_Up,
						CGUIEvent::KEY_Page_Down,
						CGUIEvent::KEY_End,
						CGUIEvent::KEY_Begin,
						CGUIEvent::KEY_Num_Lock,
						CGUIEvent::KEY_F1,
						CGUIEvent::KEY_F2,
						CGUIEvent::KEY_F3,
						CGUIEvent::KEY_F4,
						CGUIEvent::KEY_F5,
						CGUIEvent::KEY_F6,
						CGUIEvent::KEY_F7,
						CGUIEvent::KEY_F8,
						CGUIEvent::KEY_F9,
						CGUIEvent::KEY_F10,
						CGUIEvent::KEY_F11,
						CGUIEvent::KEY_F12,
						CGUIEvent::KEY_Shift_L,
						CGUIEvent::KEY_Shift_R,
						CGUIEvent::KEY_Control_L,
						CGUIEvent::KEY_Control_R,
						CGUIEvent::KEY_Caps_Lock,
						CGUIEvent::KEY_Shift_Lock,
						CGUIEvent::KEY_Alt_L,
						CGUIEvent::KEY_Alt_R
					};
					jintArray array = __env->NewIntArray(72);
					__env->SetIntArrayRegion(array, 0, 72, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jintArray JNICALL Java_com_earthview_world_spatial_systemui_Guievent_00024GUIModKeyMaskHelper_getEnumValues (JNIEnv *__env, jclass __clazz)
				{
					jint enum_values[] = {
						CGUIEvent::MODKEY_LEFT_SHIFT,
						CGUIEvent::MODKEY_RIGHT_SHIFT,
						CGUIEvent::MODKEY_LEFT_CTRL,
						CGUIEvent::MODKEY_RIGHT_CTRL,
						CGUIEvent::MODKEY_LEFT_ALT,
						CGUIEvent::MODKEY_RIGHT_ALT,
						CGUIEvent::MODKEY_NUM_LOCK,
						CGUIEvent::MODKEY_CAPS_LOCK,
						CGUIEvent::MODKEY_CTRL,
						CGUIEvent::MODKEY_SHIFT,
						CGUIEvent::MODKEY_ALT
					};
					jintArray array = __env->NewIntArray(11);
					__env->SetIntArrayRegion(array, 0, 11, enum_values);
					return array;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getAccumulatedEventState_1void(JNIEnv *__env , jclass __clazz)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent* __values1 = EarthView::World::Spatial::SystemUI::CGUIEvent::getAccumulatedEventState();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setHandled_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jboolean handled_j)
				{
					ev_bool handled = (ev_bool) handled_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setHandled(handled);
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getHandled_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->getHandled();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setEventType_1GUIEventType(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint eventType_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType eventType = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType) eventType_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setEventType(eventType);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getEventType_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType __values1 = pObjectX->getEventType();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setTime_1ev_1real64(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jdouble time_j)
				{
					ev_real64 time = (ev_real64) time_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setTime(time);
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getTime_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_real64 __values1 = pObjectX->getTime();
					jdouble __values1_j = (jdouble)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setWindowRectangle_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j, jint y_j, jint width_j, jint height_j)
				{
					ev_int32 x = (ev_int32) x_j;
					ev_int32 y = (ev_int32) y_j;
					ev_int32 width = (ev_int32) width_j;
					ev_int32 height = (ev_int32) height_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setWindowRectangle(x, y, width, height);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getWindowX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getWindowX();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getWindowY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getWindowY();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getWindowWidth_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getWindowWidth();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getWindowHeight_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getWindowHeight();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setKey_1GUIKeySymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol key = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol) key_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setKey(key);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol __values1 = pObjectX->getKey();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setVirtualKey_1GUIKeySymbol(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint key_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol key = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol) key_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setVirtualKey(key);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getVirtualKey_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol __values1 = pObjectX->getVirtualKey();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setButton_1GUIMouseButtonMask(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint button_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask button = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask) button_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setButton(button);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getButton_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask __values1 = pObjectX->getButton();
					jint __values1_j = (jint) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setX_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint x_j)
				{
					ev_int32 x = (ev_int32) x_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setX(x);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getX_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getX();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setY_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint y_j)
				{
					ev_int32 y = (ev_int32) y_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setY(y);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getY_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getY();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setButtonMask_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mask_j)
				{
					ev_int32 mask = (ev_int32) mask_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setButtonMask(mask);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getButtonMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getButtonMask();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setModKeyMask_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mask_j)
				{
					ev_int32 mask = (ev_int32) mask_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setModKeyMask(mask);
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getModKeyMask_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_int32 __values1 = pObjectX->getModKeyMask();
					jint __values1_j = (jint)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_setMouseWheelDelta_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jfloat delta_j)
				{
					ev_real32 delta = (ev_real32) delta_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->setMouseWheelDelta(delta);
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getMouseWheelDelta_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_real32 __values1 = pObjectX->getMouseWheelDelta();
					jfloat __values1_j = (jfloat)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_addTouchPoint_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->addTouchPoint(id, phase, x, y);
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_addTouchPoint_1ev_1uint32_1GUITouchPhase_1ev_1real32_1ev_1real32_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong id_j, jint phase_j, jfloat x_j, jfloat y_j, jlong tapCount_j)
				{
					ev_uint32 id = (ev_uint32) id_j;
					EarthView::World::Spatial::SystemUI::GUITouchPhase phase = (EarthView::World::Spatial::SystemUI::GUITouchPhase) phase_j;
					ev_real32 x = (ev_real32) x_j;
					ev_real32 y = (ev_real32) y_j;
					ev_uint32 tapCount = (ev_uint32) tapCount_j;
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					pObjectX->addTouchPoint(id, phase, x, y, tapCount);
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guievent_getTouchData_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CTouchData __values1 = pObjectX->getTouchData();
					EarthView::World::Spatial::SystemUI::CTouchData *returnvalues = new EarthView::World::Spatial::SystemUI::CTouchData(__values1);
					((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
					jlong __values1_j = (jlong) returnvalues;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Guievent_isMultiTouchEvent_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*) pObjXXXX;
					ev_bool __values1 = pObjectX->isMultiTouchEvent();
					jboolean __values1_j = (jboolean)__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mhandled_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jboolean __values1_j = (jboolean)(pObjectX->mhandled);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mhandled_1ev_1bool(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jboolean __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mhandled = (ev_bool)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1meventType_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->meventType);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1meventType_1GUIEventType(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->meventType = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIEventType)__values1_j;
				}
				extern "C" JNIEXPORT jdouble JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mtime_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jdouble __values1_j = (jdouble)(pObjectX->mtime);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mtime_1ev_1real64(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jdouble __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mtime = (ev_real64)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mkey_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mkey);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mkey_1GUIKeySymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mkey = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mvirtualKey_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mvirtualKey);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mvirtualKey_1GUIKeySymbol(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mvirtualKey = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIKeySymbol)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mbutton_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mbutton);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mbutton_1GUIMouseButtonMask(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mbutton = (EarthView::World::Spatial::SystemUI::CGUIEvent::GUIMouseButtonMask)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mbuttonMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mbuttonMask);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mbuttonMask_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mbuttonMask = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mmodKeyMask_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mmodKeyMask);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mmodKeyMask_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mmodKeyMask = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mx_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mx);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mx_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mx = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1my_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->my);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1my_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->my = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mwindowX_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mwindowX);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mwindowX_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mwindowX = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mwindowY_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mwindowY);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mwindowY_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mwindowY = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mwindowWidth_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mwindowWidth);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mwindowWidth_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mwindowWidth = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mwindowHeight_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jint __values1_j = (jint)(pObjectX->mwindowHeight);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mwindowHeight_1ev_1int32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jint __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mwindowHeight = (ev_int32)__values1_j;
				}
				extern "C" JNIEXPORT jfloat JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mmouseWheelDelta_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jfloat __values1_j = (jfloat)(pObjectX->mmouseWheelDelta);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mmouseWheelDelta_1ev_1real32(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jfloat __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mmouseWheelDelta = (ev_real32)__values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guievent_get_1mtouchData_1void(JNIEnv *__env, jobject __thiz, jlong pObjXXXX)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					jlong __values1_j = (jlong) &(pObjectX->mtouchData);
					return __values1_j;
				}
				extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_spatial_systemui_Guievent_set_1mtouchData_1CTouchData(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong __values1_j)
				{
					EarthView::World::Spatial::SystemUI::CGUIEvent *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEvent*)pObjXXXX;
					pObjectX->mtouchData = *(EarthView::World::Spatial::SystemUI::CTouchData*) __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guieventptr_get_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
				{
					const 					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pObjectX = (EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent* __values1 = pObjectX->get();
					jlong __values1_j = (jlong) __values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guieventptr_OperatorAssign_1CGUIEventPtr(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong r_j )
				{
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& pObjectX = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjXXXX;
					const EarthView::World::Spatial::SystemUI::CGUIEventPtr &r = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*) r_j;
					pObjectX = r;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
				extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_spatial_systemui_Guieventptr_OperatorAssign_1CGUIEvent(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong ref_rep_j )
				{
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& pObjectX = *(EarthView::World::Spatial::SystemUI::CGUIEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEvent *ref_rep = (EarthView::World::Spatial::SystemUI::CGUIEvent*) ref_rep_j;
					pObjectX = ref_rep;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr& __values1 = pObjectX;
					jlong __values1_j = (jlong) &__values1;
					return __values1_j;
				}
			}
		}
	}
}
