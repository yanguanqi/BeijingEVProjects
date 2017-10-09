#ifndef EV_DEVICE_UTILITY_H
#define EV_DEVICE_UTILITY_H
#include "core/global.h"
#include "core/stringdefines.h"
#include "core/classfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			class EV_CORE_DLL CDeviceUtility
			{
			public:
				CDeviceUtility(){}
				~CDeviceUtility(){}
			ev_private:
				CDeviceUtility(_in EarthView::World::Core::CNameValuePairList *pList){}
			public:
				/// <summary>
				/// 获取磁盘空间信息
				/// </summary>
				/// <param name="disk">磁盘</param>
				/// <param name="totalSpace">磁盘总空间（MB）</param>
				/// <param name="freeSpace">磁盘剩余空间（MB）</param>
				/// <returns>获取信息成功返回true，失败返回false</returns>
				static ev_bool getDiskFreeSpace(const EVString& disk, ev_uint64& totalSpace, ev_uint64& freeSpace);

				/// <summary>
				/// 屏幕宽度，以像素为单位
				/// </summary>
				static ev_uint16 mScreenWidth;
				/// <summary>
				/// 屏幕高度，以像素为单位
				/// </summary>
				static ev_uint16 mScreenHeight;
				/// <summary>
				/// 屏幕DPI
				/// </summary>
				static ev_uint16 mScreenDpi;
				/// <summary>
				/// 桌面默认屏幕DPI
				/// </summary>
				static const ev_uint16 mDesktopDefaultDpi;
			};
		}
	}
}

#endif