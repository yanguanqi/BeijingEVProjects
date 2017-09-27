#ifndef EARTHVIEW_WORLD_DISPLAY_IBITMAP_H
#define EARTHVIEW_WORLD_DISPLAY_IBITMAP_H

#include "spatialinterface/config.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/ienvelope.h"


namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 位图基类
			/// </summary>
			class EV_INTERFACE_DLL IBitmap : public EarthView::World::Display::IPaintDevice
			{
			public:	
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				~IBitmap();

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
				/// 设置透明度
				/// </summary>
				/// <param name="transparent">透明度</param>
				/// <returns></returns>
				virtual ev_void setTransparent(ev_uint8 transparent);
				/// <summary>
				/// 获取内部GpGraphics*
				/// </summary>
				/// <param name=""></param>
				/// <returns> 返回内部GpGraphics*</returns>
				virtual ev_void* getNativeGraphics();
				/// <summary>
				/// 获取文件路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回路径</returns>
				virtual EVString getFilePath() const{return "";}
				/// <summary>
				/// 获取位图宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回宽度</returns>
				virtual ev_int32 getWidth() const;
				/// <summary>
				/// 获取位图高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回高度</returns>
				virtual ev_int32 getHeight() const;
				/// <summary>
				/// 以指定颜色填充位图
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns></returns>
				virtual ev_void fill( _in const EarthView::World::Spatial::Display::IColor *color );
				/// <summary>
				/// 以指定颜色填充位图
				/// </summary>
				/// <param name="color">颜色，格式为aarrggbb</param>
				/// <returns></returns>
				virtual ev_void fill( _in ev_int32 color);
				/// <summary>
				/// 获取设备分辨率
				/// </summary>
				/// <returns>返回设备分辨率</returns>
				virtual ev_int32 getResolution() const;
				/// <summary>
				/// 获取内部数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回内部数据</returns>
				virtual ev_uchar* data() const;
				/// <summary>
				/// 保存位图
				/// </summary>
				/// <param name="path">指定的路径</param>
				/// <returns>保存成功返回true；否则返回false</returns>
				virtual ev_bool save( _in const EVString& path );
				/// <summary>
				/// 保存位图至内存流
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns>返回保存的流</returns>
				virtual EarthView::World::Core::MemoryDataStreamPtr saveToStream(const EVString& type);
				/// <summary>
				/// 保存位图至流
				/// </summary>
				/// <param name="type">类型</param>
				/// <param name="buffer">流缓冲区</param>
				/// <param name="size">大小</param>
				/// <returns>保存成功返回true；否则返回false</returns>
				virtual ev_bool save(const EVString& type,ev_char* buffer,int & size);
				/// <summary>
				/// 获取图标句柄
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回图标句柄</returns>
				virtual ev_int64 getHIcon() const;
				/// <summary>
				/// 获取位图句柄
				/// </summary>
				/// <param name="background">背景色</param>
				/// <returns>返回位图句柄</returns>
				virtual ev_int64 getHBITMAP( _in ev_int32 background/*aarrggbb*/ ) const;
				/// <summary>
				/// 复制位图
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回复制的位图</returns>
				virtual IBitmap* clone() const;
				/// <summary>
				/// 将位图渲染到指定设备的指定区域
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="destExt">指定区域</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt );
				/// <summary>
				/// 将位图渲染到指定设备的指定区域
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="destExt">指定区域</param>
				/// <param name="srcExt">源区域</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope *srcExt );
				/// <summary>
				/// 将位图渲染到指定设备的指定位置
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y );
				/// <summary>
				/// 将位图渲染到指定设备的指定位置
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源宽度</param>
				/// <param name="wh">源高度</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y,
					_in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				/// <summary>
				/// 将位图渲染到指定设备的指定位置
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h );
				/// <summary>
				/// 将位图渲染到指定设备的指定位置
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源宽度</param>
				/// <param name="wh">源高度</param>
				/// <returns></returns>
				virtual ev_void render( _in  EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
ev_private:
				IBitmap( EarthView::World::Core::CNameValuePairList *pList );
			protected:
				IBitmap();
				C_DISABLE_COPY( IBitmap )
			};
		}
	}
}
#endif

