/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/atomicint.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_OperatorConvertionev_int32_ev_int32(void *pObjXXXX )
			{
				EarthView::World::Core::CAtomicInt& objYYYY = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				ev_int32 objXXXX = objYYYY ;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_OperatorEquals_ev_bool_ev_int32(void *pObjXXXX, _in const ev_int32 value )
			{
				EarthView::World::Core::CAtomicInt& objXXXX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				const ev_int32& objXXXX1 = value;
				return objXXXX == objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_OperatorNotEquals_ev_bool_ev_int32(void *pObjXXXX, _in const ev_int32 value )
			{
				EarthView::World::Core::CAtomicInt& objXXXX = *(EarthView::World::Core::CAtomicInt*) pObjXXXX;
				const ev_int32& objXXXX1 = value;
				return objXXXX != objXXXX1;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CAtomicInt_OperatorAssign_CAtomicInt_CAtomicInt(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Core::CAtomicInt& objXXXX = *((EarthView::World::Core::CAtomicInt*) pObjXXXX);
				objXXXX = *(EarthView::World::Core::CAtomicInt*)other;
				EarthView::World::Core::CAtomicInt *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CAtomicInt_OperatorAssign_CAtomicInt_ev_int32(void *pObjXXXX, _in ev_int32 value )
			{
				EarthView::World::Core::CAtomicInt& objXXXX = *((EarthView::World::Core::CAtomicInt*) pObjXXXX);
				objXXXX = value;
				EarthView::World::Core::CAtomicInt *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_ref_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->ref();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_deref_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->deref();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isReferenceCountingNative_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isReferenceCountingNative();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isReferenceCountingWaitFree_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isReferenceCountingWaitFree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isTestAndSetNative_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isTestAndSetNative();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isTestAndSetWaitFree_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isTestAndSetWaitFree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_testAndSetRelaxed_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 expectedValue, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->testAndSetRelaxed(expectedValue, newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_testAndSetAcquire_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 expectedValue, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->testAndSetAcquire(expectedValue, newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_testAndSetRelease_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 expectedValue, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->testAndSetRelease(expectedValue, newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_testAndSetOrdered_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 expectedValue, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->testAndSetOrdered(expectedValue, newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isFetchAndStoreNative_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isFetchAndStoreNative();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isFetchAndStoreWaitFree_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isFetchAndStoreWaitFree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndStoreRelaxed_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndStoreRelaxed(newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndStoreAcquire_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndStoreAcquire(newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndStoreRelease_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndStoreRelease(newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndStoreOrdered_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 newValue )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndStoreOrdered(newValue);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isFetchAndAddNative_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isFetchAndAddNative();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CAtomicInt_isFetchAndAddWaitFree_ev_bool( )
			{
				ev_bool objXXXX = EarthView::World::Core::CAtomicInt::isFetchAndAddWaitFree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndAddRelaxed_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 valueToAdd )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndAddRelaxed(valueToAdd);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndAddAcquire_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 valueToAdd )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndAddAcquire(valueToAdd);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndAddRelease_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 valueToAdd )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndAddRelease(valueToAdd);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Core_CAtomicInt_fetchAndAddOrdered_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 valueToAdd )
			{
				EarthView::World::Core::CAtomicInt* ptrNativeObject = (EarthView::World::Core::CAtomicInt*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->fetchAndAddOrdered(valueToAdd);
				return objXXXX;
			}
		}
	}
}
