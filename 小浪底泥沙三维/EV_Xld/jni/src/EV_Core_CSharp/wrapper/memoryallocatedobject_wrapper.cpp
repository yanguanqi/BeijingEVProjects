/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Core_CBaseObject_isExternFree_bool(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->isExternFree();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBaseObject_setExternFree_void_bool(void *pObjectXXXX, _in bool bExternFree )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ptrNativeObject->setExternFree(bExternFree);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBaseObject_keepAlive_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ptrNativeObject->keepAlive();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBaseObject_restoreAlive_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ptrNativeObject->restoreAlive();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_CBaseObject_getInstanceTypeName_ev_string(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ev_string objXXXX = ptrNativeObject->getInstanceTypeName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBaseObject_registerJavaReference_void_void(void *pObjectXXXX, _in void* obj )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ptrNativeObject->registerJavaReference(obj);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CBaseObject_getJavaReference_void(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getJavaReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CBaseObject_setCustomExtend_void_ev_bool(void *pObjectXXXX, _in ev_bool customExtend )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ptrNativeObject->setCustomExtend(customExtend);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CBaseObject_isCustomExtend_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isCustomExtend();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int16  _stdcall EarthView_World_Core_CBaseObject_increaseCast_ev_int16(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ev_int16 objXXXX = ptrNativeObject->increaseCast();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int16  _stdcall EarthView_World_Core_CBaseObject_decreaseCast_ev_int16(void *pObjectXXXX )
			{
				EarthView::World::Core::CBaseObject* ptrNativeObject = (EarthView::World::Core::CBaseObject*) pObjectXXXX;
				ev_int16 objXXXX = ptrNativeObject->decreaseCast();
				return objXXXX;
			}
		}
	}
}
