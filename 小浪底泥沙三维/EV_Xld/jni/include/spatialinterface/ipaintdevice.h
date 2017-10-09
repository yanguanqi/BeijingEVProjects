#ifndef EARTHVIEW_WORLD_DISPLAY_IPAINTDEVICE_H
#define EARTHVIEW_WORLD_DISPLAY_IPAINTDEVICE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/icolor.h"

namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 绘制设备基类
			/// </summary>
			class EV_INTERFACE_DLL IPaintDevice:
				public EarthView::World::Core::CAllocatedObject
			{
			public:		
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				virtual ~IPaintDevice();
			public:
				/// <summary>
				/// 获取DC
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回DC</returns>
				virtual ev_int64 getDC();
				/// <summary>
				/// 释放DC
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void releaseDC();
				/// <summary>
				/// 获取设备宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回宽度</returns>
				virtual ev_int32 getWidth() const ;
				/// <summary>
				/// 获取设备高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回高度</returns>
				virtual ev_int32 getHeight() const;
				/// <summary>
				/// 以指定颜色填充
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns></returns>
				virtual ev_void fill( _in const EarthView::World::Spatial::Display::IColor *color );
				/// <summary>
				/// 以指定颜色填充
				/// </summary>
				/// <param name="color">颜色（aarrggbb）</param>
				/// <returns></returns>
				virtual ev_void fill( _in ev_int32 color);
				/// <summary>
				/// 获取设备分辨率
				/// </summary>
				/// <returns>返回设备分辨率</returns>
				virtual ev_int32 getResolution() const;
ev_private:
				IPaintDevice( EarthView::World::Core::CNameValuePairList *pList );
			protected:
				IPaintDevice();
			private:
				IPaintDevice( const IPaintDevice & paintdevice );
			};
		}
	}
}

#endif
