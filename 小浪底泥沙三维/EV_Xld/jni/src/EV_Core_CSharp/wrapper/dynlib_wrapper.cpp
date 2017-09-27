/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dynlib.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDynLib_load_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDynLib* ptrNativeObject = (EarthView::World::Core::CDynLib*) pObjectXXXX;
				ptrNativeObject->load();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDynLib_unload_void(void *pObjectXXXX )
			{
				EarthView::World::Core::CDynLib* ptrNativeObject = (EarthView::World::Core::CDynLib*) pObjectXXXX;
				ptrNativeObject->unload();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Core_CDynLib_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Core::CDynLib* ptrNativeObject = (EarthView::World::Core::CDynLib*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CDynLib_getSymbol_void_EVString(void *pObjectXXXX, _in const char* strName )
			{
				EarthView::World::Core::ev_string strName1 = strName;
				const EarthView::World::Core::CDynLib* ptrNativeObject = (EarthView::World::Core::CDynLib*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getSymbol(strName1);
				return objXXXX;
			}
		}
	}
}
