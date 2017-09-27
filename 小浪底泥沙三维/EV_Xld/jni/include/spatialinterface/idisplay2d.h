#ifndef EARTHVIEW_WORLD_DISPLAY_IDISPLAY2D_H
#define EARTHVIEW_WORLD_DISPLAY_IDISPLAY2D_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"


namespace EarthView{
	namespace World{
		namespace Display{
			class IPaintDevice;
			class IDisplayOptions;
			/// <summary>
			/// 2D显示基类
			/// </summary>
			class EV_INTERFACE_DLL IDisplay2D : public EarthView::World::Core::CAllocatedObject
			{
			public:		
				/// <summary>
				///默认析构函数
				/// </summary>
				virtual ~IDisplay2D();

			public:
				/// <summary>
				/// 固定设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <returns></returns>
				virtual ev_void fixDevice( _in EarthView::World::Display::IPaintDevice *ref_device );
				/// <summary>
				/// 获取设备
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回设备</returns>
				virtual EarthView::World::Display::IPaintDevice * getDevice() const;
				/// <summary>
				/// 解开设备
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ev_void unfixDevice();
				/// <summary>
				/// 获取显示选项
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示选项</returns>
				virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const;
				/// <summary>
				/// 获取显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				virtual ev_int32 getDisplayResolution() const;
				/// <summary>
				/// 设置显示分辨率
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回显示分辨率</returns>
				virtual ev_void setDisplayResolution(ev_int32 resolution);
ev_private:
				IDisplay2D( EarthView::World::Core::CNameValuePairList *pList );
				///
			protected:
				IDisplay2D();
			private:
				IDisplay2D(IDisplay2D & obj);
			};
		}
	}
}

#endif
