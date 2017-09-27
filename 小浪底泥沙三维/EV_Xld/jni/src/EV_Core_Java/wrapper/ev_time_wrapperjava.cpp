/* This file is produced by the JNI AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_time.h"
#include <jni.h>
#include "core_java/global_reference.h"
#include "core_java/jni_load.h"
#include <typeinfo>
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_isNull_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->isNull();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_isValid_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->isValid();
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_year_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->year();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_month_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->month();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_day_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->day();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_hour_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->hour();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_minute_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->minute();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_second_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->second();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_msec_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->msec();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_daysofmonth_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint y_j, jint mon_j)
			{
				ev_int32 y = (ev_int32) y_j;
				ev_int32 mon = (ev_int32) mon_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->daysofmonth(y, mon);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_setYear_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint y_j)
			{
				ev_int32 y = (ev_int32) y_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->setYear(y);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_setMonth_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mon_j)
			{
				ev_int32 mon = (ev_int32) mon_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->setMonth(mon);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_setDay_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint d_j)
			{
				ev_int32 d = (ev_int32) d_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->setDay(d);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_setTime_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint y_j, jint mon_j, jint d_j, jint h_j, jint m_j, jint s_j, jint ms_j)
			{
				ev_int32 y = (ev_int32) y_j;
				ev_int32 mon = (ev_int32) mon_j;
				ev_int32 d = (ev_int32) d_j;
				ev_int32 h = (ev_int32) h_j;
				ev_int32 m = (ev_int32) m_j;
				ev_int32 s = (ev_int32) s_j;
				ev_int32 ms = (ev_int32) ms_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->setTime(y, mon, d, h, m, s, ms);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_setHMS_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint h_j, jint m_j, jint s_j, jint ms_j)
			{
				ev_int32 h = (ev_int32) h_j;
				ev_int32 m = (ev_int32) m_j;
				ev_int32 s = (ev_int32) s_j;
				ev_int32 ms = (ev_int32) ms_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_bool __values1 = pObjectX->setHMS(h, m, s, ms);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_secsTo_1CCoreTime(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Core::CCoreTime &t = *(EarthView::World::Core::CCoreTime*) t_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->secsTo(t);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addYear_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint y_j)
			{
				ev_int32 y = (ev_int32) y_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addYear(y);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addMon_1ev_1int32_1ev_1bool(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint mon_j, jboolean onlymon_j)
			{
				ev_int32 mon = (ev_int32) mon_j;
				ev_bool onlymon = (ev_bool) onlymon_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addMon(mon, onlymon);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addDay_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint d_j)
			{
				ev_int32 d = (ev_int32) d_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addDay(d);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addHour_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint h_j)
			{
				ev_int32 h = (ev_int32) h_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addHour(h);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addMin_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint min_j)
			{
				ev_int32 min = (ev_int32) min_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addMin(min);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addSecs_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint secs_j)
			{
				ev_int32 secs = (ev_int32) secs_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addSecs(secs);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_addMSecs_1ev_1int32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jint ms_j)
			{
				ev_int32 ms = (ev_int32) ms_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EarthView::World::Core::CCoreTime __values1 = pObjectX->addMSecs(ms);
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_msecsTo_1CCoreTime(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong t_j)
			{
				const EarthView::World::Core::CCoreTime &t = *(EarthView::World::Core::CCoreTime*) t_j;
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->msecsTo(t);
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorEquals_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX == other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorNotEquals_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX != other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorLessThan_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX < other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorLessThanOrEqual_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX <= other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorGreaterThan_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX > other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_OperatorGreaterThanOrEqual_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong other_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &other = *(EarthView::World::Core::CCoreTime*) other_j;
				ev_bool __values1 = (pObjectX >= other);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_currentTime_1void(JNIEnv *__env , jclass __clazz)
			{
				EarthView::World::Core::CCoreTime __values1 = EarthView::World::Core::CCoreTime::currentTime();
				EarthView::World::Core::CCoreTime *returnvalues = new EarthView::World::Core::CCoreTime(__values1);
				((EarthView::World::Core::CBaseObject*)returnvalues)->setExternFree(true);
				jlong __values1_j = (jlong) returnvalues;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_getTickCount_1void(JNIEnv *__env , jclass __clazz)
			{
				ev_uint32 __values1 = EarthView::World::Core::CCoreTime::getTickCount();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jboolean JNICALL Java_com_earthview_world_core_CoreTime_isValid_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32_1ev_1int32(JNIEnv *__env , jclass __clazz, jint y_j, jint mon_j, jint d_j, jint h_j, jint m_j, jint s_j, jint ms_j)
			{
				ev_int32 y = (ev_int32) y_j;
				ev_int32 mon = (ev_int32) mon_j;
				ev_int32 d = (ev_int32) d_j;
				ev_int32 h = (ev_int32) h_j;
				ev_int32 m = (ev_int32) m_j;
				ev_int32 s = (ev_int32) s_j;
				ev_int32 ms = (ev_int32) ms_j;
				ev_bool __values1 = EarthView::World::Core::CCoreTime::isValid(y, mon, d, h, m, s, ms);
				jboolean __values1_j = (jboolean)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_CoreTime_start_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				pObjectX->start();
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_restart_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->restart();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jint JNICALL Java_com_earthview_world_core_CoreTime_elapsed_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_int32 __values1 = pObjectX->elapsed();
				jint __values1_j = (jint)__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_getDs_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				const 				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				ev_uint32 __values1 = pObjectX->getDs();
				jlong __values1_j = (jlong) __values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT void JNICALL Java_com_earthview_world_core_CoreTime_setDs_1ev_1uint32(JNIEnv *__env , jobject __thiz, jlong pObjXXXX, jlong value_j)
			{
				ev_uint32 value = (ev_uint32) value_j;
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				pObjectX->setDs(value);
			}
			extern "C" JNIEXPORT jlong JNICALL Java_com_earthview_world_core_CoreTime_OperatorAssign_1CCoreTime(JNIEnv *__env, jobject __thiz, jlong pObjXXXX, jlong time_j )
			{
				EarthView::World::Core::CCoreTime& pObjectX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime &time = *(EarthView::World::Core::CCoreTime*) time_j;
				pObjectX = time;
				EarthView::World::Core::CCoreTime& __values1 = pObjectX;
				jlong __values1_j = (jlong) &__values1;
				return __values1_j;
			}
			extern "C" JNIEXPORT jstring JNICALL Java_com_earthview_world_core_CoreTime_ev_1toString_1void(JNIEnv *__env , jobject __thiz, jlong pObjXXXX)
			{
				EarthView::World::Core::CCoreTime *pObjectX = (EarthView::World::Core::CCoreTime*) pObjXXXX;
				EVString __values1 = pObjectX->toString();
				EarthView::World::Core::ev_wstring valuesw1 = __values1;
				jstring __values1_j = __env->NewString((const jchar*)valuesw1.getString(), valuesw1.size());
				return __values1_j;
			}
		}
	}
}
