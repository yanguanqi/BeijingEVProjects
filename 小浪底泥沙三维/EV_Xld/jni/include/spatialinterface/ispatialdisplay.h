#ifndef EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISPATIALDISPLAY_H
#define EARTHVIEW_WORLD_SPATIAL_DISPLAY_ISPATIALDISPLAY_H

#include "spatialinterface/idisplay2d.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ispatialtransformer.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Display{
				/// <summary>
				/// 空间显示基类
				/// </summary>
				class ILabelEngine;
				class EV_INTERFACE_DLL ISpatialDisplay : public EarthView::World::Display::IDisplay2D
				{
				public:
					/// <summary>
					/// 默认析构函数
					/// </summary>
					~ISpatialDisplay();

				public:
					/// <summary>
					///  获取空间引用
					/// </summary>
					/// <param name=" "></param>
					/// <returns> 空间引用对象</returns> 
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference * getSpatialReference() const;
					/// <summary>
					///  设置空间引用
					/// </summary>
					/// <param name="sr">空间引用对象</param>
					/// <returns> </returns> 
					virtual ev_void setSpatialReference( _in const EarthView::World::Spatial::Geometry::ISpatialReference *ref_sr );
					/// <summary>
					///  获取空间转换器
					/// </summary>
					/// <param name=""></param>
					/// <returns>空间转换器对象 </returns> 
					virtual EarthView::World::Spatial::Display::ISpatialTransformer * getSpatialTransformer() const;
					/// <summary>
					/// 是否取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_bool isCancelled() const;
					/// <summary>
					///  开始
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_void start();
					/// <summary>
					///  取消
					/// </summary>
					/// <param name="trans"></param>
					/// <returns> </returns> 
					virtual ev_void cancel();
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
					/// <summary>
					///  获取标注引擎
					/// </summary>
					virtual EarthView::World::Spatial::Display::ILabelEngine * getLabelEngine() const;
					/// <summary>
					///  获取标注引擎
					/// </summary>
					virtual ev_void setLabelEngine(EarthView::World::Spatial::Display::ILabelEngine * ref_engine);
					virtual ev_void setIntersectionFlag(ev_bool b);
					virtual ev_bool getIntersectionFlag();
ev_private:
ev_private:
				ISpatialDisplay( EarthView::World::Core::CNameValuePairList *pList );
			protected:
				ISpatialDisplay();
				ISpatialDisplay(ISpatialDisplay & obj);
				};
			}
		}
	}
}
#endif

