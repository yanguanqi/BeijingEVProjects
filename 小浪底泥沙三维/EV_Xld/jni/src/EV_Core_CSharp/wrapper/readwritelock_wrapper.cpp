/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/readwritelock.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CReadWriteLock_lockForRead_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CReadWriteLock* ptrNativeObject = (EarthView::World::Core::CReadWriteLock*) pObjectXXXX;
				ptrNativeObject->lockForRead();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CReadWriteLock_lockForWrite_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CReadWriteLock* ptrNativeObject = (EarthView::World::Core::CReadWriteLock*) pObjectXXXX;
				ptrNativeObject->lockForWrite();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CReadWriteLock_unlockForRead_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CReadWriteLock* ptrNativeObject = (EarthView::World::Core::CReadWriteLock*) pObjectXXXX;
				ptrNativeObject->unlockForRead();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CReadWriteLock_unlockForWrite_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CReadWriteLock* ptrNativeObject = (EarthView::World::Core::CReadWriteLock*) pObjectXXXX;
				ptrNativeObject->unlockForWrite();
			}
		}
	}
}
