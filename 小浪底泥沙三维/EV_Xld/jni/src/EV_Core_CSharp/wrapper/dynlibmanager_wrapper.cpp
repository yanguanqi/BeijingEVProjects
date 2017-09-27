/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/dynlibmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Core_CDynLibManager_getSingleton_CDynLibManager( )
			{
				EarthView::World::Core::CDynLibManager& objXXXX = EarthView::World::Core::CDynLibManager::getSingleton();
				EarthView::World::Core::CDynLibManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLibManager*  _stdcall EarthView_World_Core_CDynLibManager_getSingletonPtr_CDynLibManager( )
			{
				EarthView::World::Core::CDynLibManager* objXXXX = EarthView::World::Core::CDynLibManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLib*  _stdcall EarthView_World_Core_CDynLibManager_load_CDynLib_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::CDynLibManager* ptrNativeObject = (EarthView::World::Core::CDynLibManager*) pObjectXXXX;
				EarthView::World::Core::CDynLib* objXXXX = ptrNativeObject->load(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Core_CDynLibManager_unload_void_CDynLib(void *pObjectXXXX, _in EarthView::World::Core::CDynLib* lib )
			{
				EarthView::World::Core::CDynLibManager* ptrNativeObject = (EarthView::World::Core::CDynLibManager*) pObjectXXXX;
				ptrNativeObject->unload(lib);
			}
		}
	}
}
