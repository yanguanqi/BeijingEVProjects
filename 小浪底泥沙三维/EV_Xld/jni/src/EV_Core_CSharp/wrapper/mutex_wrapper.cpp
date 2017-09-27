/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/mutex.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMutex_lock_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CMutex* ptrNativeObject = (EarthView::World::Core::CMutex*) pObjectXXXX;
				ptrNativeObject->lock();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CMutex_tryLock_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CMutex* ptrNativeObject = (EarthView::World::Core::CMutex*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->tryLock();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CMutex_unlock_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CMutex* ptrNativeObject = (EarthView::World::Core::CMutex*) pObjectXXXX;
				ptrNativeObject->unlock();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CCondition_wait_void_CMutex(void *pObjectXXXX, _inout void* mtx )
			{
				EarthView::World::Core::CCondition* ptrNativeObject = (EarthView::World::Core::CCondition*) pObjectXXXX;
				ptrNativeObject->wait(*(EarthView::World::Core::CMutex*)mtx);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CCondition_notify_one_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CCondition* ptrNativeObject = (EarthView::World::Core::CCondition*) pObjectXXXX;
				ptrNativeObject->notify_one();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CCondition_notify_all_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CCondition* ptrNativeObject = (EarthView::World::Core::CCondition*) pObjectXXXX;
				ptrNativeObject->notify_all();
			}
		}
	}
}
