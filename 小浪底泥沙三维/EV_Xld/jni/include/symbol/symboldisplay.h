#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLDISPLAY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_SYMBOLDISPLAY_H
#include "symbol/symbolexports.h"
#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ipaintdevice.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// 符号呈现类，用于绘制symbol
				/// 提供方法如下：
				/// 设置绑定的符号绘制设备、获取已绑定符号绘制设备、
				/// 解绑绘制设备、获取绘制设备的参数对象
				/// </summary>
				class EV_SYMBOL_DLL CSymbolDisplay : public EarthView::World::Display::IDisplay2D
				{
				public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					CSymbolDisplay();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~CSymbolDisplay();

				public:
					/// <summary>
					/// 设置绑定的符号绘制设备
					/// </summary>
					/// <param name="">绘制设备</param>
					/// <returns></returns>
					ev_void fixDevice( _in EarthView::World::Display::IPaintDevice *ref_device );
					/// <summary>
					/// 获取已绑定符号绘制设备
					/// </summary>
					/// <param name=""></param>
					/// <returns>绘制设备</returns>
					EarthView::World::Display::IPaintDevice * getDevice() const;
					/// <summary>
					/// 解绑绘制设备
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void unfixDevice();
					/// <summary>
					/// 获取绘制设备的参数对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>参数对象</returns>
					EarthView::World::Display::IDisplayOptions* getDisplayOptions() const;
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
					CSymbolDisplay(EarthView::World::Core::CNameValuePairList *pList);
				protected:
					EarthView::World::Display::IPaintDevice* mpDevice;
					EarthView::World::Display::IDisplayOptions* mpOptions;
					ev_int32 mdDisplayResolution;
				};
			}
		}
	}
}
#endif
