/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "core/device_utility.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Core_CDeviceUtility_getDiskFreeSpace_ev_bool_EVString_ev_uint64_ev_uint64(_in const char* disk, _inout ev_uint64& totalSpace, _inout ev_uint64& freeSpace )
			{
				EarthView::World::Core::ev_string disk1 = disk;
				ev_bool objXXXX = EarthView::World::Core::CDeviceUtility::getDiskFreeSpace(disk1, totalSpace, freeSpace);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Core_CDeviceUtility_mScreenWidth()
			{
				ev_uint16 objXXXX = EarthView::World::Core::CDeviceUtility::mScreenWidth;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CDeviceUtility_mScreenWidth( ev_uint16  value )
			{
				EarthView::World::Core::CDeviceUtility::mScreenWidth = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Core_CDeviceUtility_mScreenHeight()
			{
				ev_uint16 objXXXX = EarthView::World::Core::CDeviceUtility::mScreenHeight;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CDeviceUtility_mScreenHeight( ev_uint16  value )
			{
				EarthView::World::Core::CDeviceUtility::mScreenHeight = value;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Core_CDeviceUtility_mScreenDpi()
			{
				ev_uint16 objXXXX = EarthView::World::Core::CDeviceUtility::mScreenDpi;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Core_CDeviceUtility_mScreenDpi( ev_uint16  value )
			{
				EarthView::World::Core::CDeviceUtility::mScreenDpi = value;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint16  _stdcall Get_EarthView_World_Core_CDeviceUtility_mDesktopDefaultDpi()
			{
				const ev_uint16 objXXXX = EarthView::World::Core::CDeviceUtility::mDesktopDefaultDpi;
				return objXXXX;
			}
		}
	}
}
