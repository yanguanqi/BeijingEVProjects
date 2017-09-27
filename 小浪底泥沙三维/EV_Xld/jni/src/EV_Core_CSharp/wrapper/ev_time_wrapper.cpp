/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/ev_time.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_isNull_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isNull();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_year_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->year();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_month_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->month();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_day_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->day();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_hour_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->hour();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_minute_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->minute();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_second_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->second();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_msec_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->msec();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_daysofmonth_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 y, _in ev_int32 mon )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->daysofmonth(y, mon);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_setYear_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 y )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setYear(y);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_setMonth_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 mon )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setMonth(mon);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_setDay_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 d )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setDay(d);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_setTime_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 y, _in ev_int32 mon, _in ev_int32 d, _in ev_int32 h, _in ev_int32 m, _in ev_int32 s, _in ev_int32 ms )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setTime(y, mon, d, h, m, s, ms);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_setHMS_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 h, _in ev_int32 m, _in ev_int32 s, _in ev_int32 ms )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->setHMS(h, m, s, ms);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_secsTo_ev_int32_CCoreTime(void *pObjectXXXX, _in const void* t )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->secsTo(*(EarthView::World::Core::CCoreTime*)t);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addYear_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 y )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addYear(y);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addMon_CCoreTime_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 mon, _in ev_bool onlymon )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addMon(mon, onlymon);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addDay_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 d )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addDay(d);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addHour_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 h )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addHour(h);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addMin_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 min )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addMin(min);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addSecs_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 secs )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addSecs(secs);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_addMSecs_CCoreTime_ev_int32(void *pObjectXXXX, _in ev_int32 ms )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EarthView::World::Core::CCoreTime objXXXX = ptrNativeObject->addMSecs(ms);
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_msecsTo_ev_int32_CCoreTime(void *pObjectXXXX, _in const void* t )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->msecsTo(*(EarthView::World::Core::CCoreTime*)t);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorEquals_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorNotEquals_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorLessThan_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX < objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorLessThanOrEqual_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX <= objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorGreaterThan_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX > objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_OperatorGreaterThanOrEqual_ev_bool_CCoreTime(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *(EarthView::World::Core::CCoreTime*) pObjXXXX;
				const EarthView::World::Core::CCoreTime& objXXXX1 = *(EarthView::World::Core::CCoreTime*)other;
				return objXXXX >= objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_currentTime_CCoreTime( )
			{
				EarthView::World::Core::CCoreTime objXXXX = EarthView::World::Core::CCoreTime::currentTime();
				EarthView::World::Core::CCoreTime *pXXXX = new EarthView::World::Core::CCoreTime(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CCoreTime_getTickCount_ev_uint32( )
			{
				ev_uint32 objXXXX = EarthView::World::Core::CCoreTime::getTickCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CCoreTime_isValid_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32(_in ev_int32 y, _in ev_int32 mon, _in ev_int32 d, _in ev_int32 h, _in ev_int32 m, _in ev_int32 s, _in ev_int32 ms )
			{
				ev_bool objXXXX = EarthView::World::Core::CCoreTime::isValid(y, mon, d, h, m, s, ms);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CCoreTime_start_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ptrNativeObject->start();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_restart_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->restart();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CCoreTime_elapsed_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->elapsed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Core_CCoreTime_getDs_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDs();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CCoreTime_setDs_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 value )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				ptrNativeObject->setDs(value);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CCoreTime_OperatorAssign_CCoreTime_CCoreTime(void *pObjXXXX, _in const void* time )
			{
				EarthView::World::Core::CCoreTime& objXXXX = *((EarthView::World::Core::CCoreTime*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CCoreTime*)time;
				EarthView::World::Core::CCoreTime *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CCoreTime_toString_EVString(void *pObjectXXXX )
			{
				EarthView::World::Core::CCoreTime* ptrNativeObject = (EarthView::World::Core::CCoreTime*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->toString();
				return objXXXX.makeBuffer();
			}
		}
	}
}
