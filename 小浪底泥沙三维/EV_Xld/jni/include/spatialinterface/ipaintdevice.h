#ifndef EARTHVIEW_WORLD_DISPLAY_IPAINTDEVICE_H
#define EARTHVIEW_WORLD_DISPLAY_IPAINTDEVICE_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/icolor.h"

namespace EarthView{
	namespace World{
		namespace Display{
			enum EVPaintDeviceType
			{
				PDT_UNKNOWN      = 0,
				PDT_BITMAP       = 1,
				PDT_METAFILE     = 2,
				PDT_PRINTER      = 3//,
				//PDT_PDF          = 4,
				//PDT_PS           = 5,
				//PDT_SVG          = 6
			};
			enum EVDeviceUnits
			{
				DU_Unknown          = 0, //未知单位
				DU_Meters           = 1, //米
				DU_Millimeters	    = 2, //毫米
				DU_Centimeters		= 3, //厘米
				DU_Inches			= 4, //英寸
				DU_Points			= 5, //磅（也译作点，打印单位，1磅 = 1 / 72英寸）
				DU_Pixel			= 6	 //像素
			};
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
				/// <returns>返回类型</returns>
				virtual EVPaintDeviceType getType();
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

				/// <summary>
				/// 创建一个同类型的设备，扩充设备用
				/// </summary>
				/// <returns>返回设备分辨率</returns>
				virtual _extfree IPaintDevice* createSubDevice(double w,double h);
				/// <summary>
				/// 新增一个页面
				/// </summary>
				/// <returns></returns>
				virtual ev_bool newPage();

				virtual void setRectClip(double sx,double sy,double w,double h);
				virtual void resetClip();
			
				virtual ev_void render( _in  EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				virtual ev_void renderBy( _in  EarthView::World::Display::IPaintDevice *srcDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				virtual EVDeviceUnits getDeviceUnit();
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
