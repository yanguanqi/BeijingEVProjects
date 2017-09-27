/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/appproject.h"
namespace EarthView
{
	namespace World
	{
		namespace Utilities
		{
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppProject_open_bool_EVString(void *pObjectXXXX, _in const char* filepath )
			{
				EarthView::World::Core::ev_string filepath1 = filepath;
				EarthView::World::Utilities::AppProject* ptrNativeObject = (EarthView::World::Utilities::AppProject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->open(filepath1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Utilities_AppProject_close_void(void *pObjectXXXX )
			{
				EarthView::World::Utilities::AppProject* ptrNativeObject = (EarthView::World::Utilities::AppProject*) pObjectXXXX;
				ptrNativeObject->close();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppProject_create_bool(void *pObjectXXXX )
			{
				EarthView::World::Utilities::AppProject* ptrNativeObject = (EarthView::World::Utilities::AppProject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->create();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppProject_save_bool(void *pObjectXXXX )
			{
				EarthView::World::Utilities::AppProject* ptrNativeObject = (EarthView::World::Utilities::AppProject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->save();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Utilities_AppProject_saveAs_bool_EVString(void *pObjectXXXX, _in const char* filepath )
			{
				EarthView::World::Core::ev_string filepath1 = filepath;
				EarthView::World::Utilities::AppProject* ptrNativeObject = (EarthView::World::Utilities::AppProject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->saveAs(filepath1);
				return objXXXX;
			}
		}
	}
}
