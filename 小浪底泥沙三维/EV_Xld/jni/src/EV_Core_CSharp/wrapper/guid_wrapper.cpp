/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/guid.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_GUID_NewGuid_ev_string( )
			{
				ev_string objXXXX = EarthView::World::Core::GUID::NewGuid();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_GUID_getUserGuid_ev_string( )
			{
				ev_string objXXXX = EarthView::World::Core::GUID::getUserGuid();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Core_GUID_getUserGuidWithUserName_ev_string( )
			{
				ev_string objXXXX = EarthView::World::Core::GUID::getUserGuidWithUserName();
				return objXXXX.makeBuffer();
			}
		}
	}
}
