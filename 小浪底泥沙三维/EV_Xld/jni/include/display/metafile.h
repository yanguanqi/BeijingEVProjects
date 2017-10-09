#ifndef EARTHVIEW_WORLD_DISPLAY_METAFILE_H
#define EARTHVIEW_WORLD_DISPLAY_METAFILE_H

#include "display/display_config.h"
#include "spatialinterface/icolor.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/ipaintdevice.h"
namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 位图类
			/// </summary>
			class EV_DISPLAY_DLL CMetaFile: public EarthView::World::Display::IPaintDevice
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">位图宽度</param>
				/// <param name="height">位图高度</param>
				/// <returns></returns>
				CMetaFile(_in EarthView::World::Display::IPaintDevice* device, _in ev_int32 width, _in ev_int32 height );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pszFileName">指定文件路径</param>
				/// <returns></returns>
				CMetaFile( _in const EVString &pszFileName );
			public:
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				~CMetaFile();
				/// <summary>
				/// 获取DC
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回DC</returns>
				ev_int64 getDC();
				/// <summary>
				/// 释放DC
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_void releaseDC();
				/// <summary>
				/// 获取内部GpGraphics*
				/// </summary>
				/// <param name=""></param>
				/// <returns> 返回内部GpGraphics*</returns>
				ev_void* getNativeGraphics();
				/// <summary>
				/// 获取文件路径
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回路径</returns>
				EVString getFilePath() const;
				/// <summary>
				/// 获取位图宽度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回宽度</returns>
				ev_int32 getWidth() const;
				/// <summary>
				/// 获取位图高度
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回高度</returns>
				ev_int32 getHeight() const;
				/// <summary>
				/// 以指定颜色填充位图
				/// </summary>
				/// <param name="color">颜色</param>
				/// <returns></returns>
				ev_void fill( _in const EarthView::World::Spatial::Display::IColor *color );
				/// <summary>
				/// 以指定颜色填充位图
				/// </summary>
				/// <param name="color">颜色 aarrggbb</param>
				/// <returns></returns>
				ev_void fill( _in ev_int32 color );
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt );
				/// <summary>
				/// 将位图渲染到指定设备的指定区域
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="destExt">指定区域</param>
				/// <param name="srcExt">源区域</param>
				/// <returns></returns>
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope *srcExt );
				/// <summary>
				/// 将位图渲染到指定设备的指定位置
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="x">起点x坐标</param>
				/// <param name="y">起点y坐标</param>
				/// <returns></returns>
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y );
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
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y,
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
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h );
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
				ev_void render( _in  EarthView::World::Display::IPaintDevice *destDevice, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				/// <summary>
				/// 设置透明度
				/// </summary>
				/// <param name="transparent">透明度</param>
				/// <returns></returns>
				ev_void setTransparent(ev_uint8 transparent);
				ev_void save();
ev_private:
				CMetaFile( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				void *m_pMetaFile;//GpMetafile
				void *m_pGraphics;
				ev_int64 m_hDC;
				EVString mStrFilePath;
				ev_int32 mnWidth, mnHeight;
ev_private:
				ev_void* getGpMetafile()const {return m_pMetaFile;}
			};
		}
	}
}
#endif
