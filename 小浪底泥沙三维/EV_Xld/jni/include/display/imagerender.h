#ifndef EARTHVIEW_WORLD_DISPLAY_IMAGERENDER_H
#define EARTHVIEW_WORLD_DISPLAY_IMAGERENDER_H

#include "display/display_config.h"
#include "display/metafile.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/icachedbitmap.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/ipaintdevice.h"
#include "spatialinterface/idisplayoptions.h"

namespace EarthView{
	namespace World{
		namespace Display{
			class CDataPath;
			class CDataRegion;
			/// <summary>
			/// 图像渲染类
			/// </summary>
			class EV_DISPLAY_DLL CImageRender : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				CImageRender();
				/// <summary>
				/// 默认析构函数
				/// </summary>
				~CImageRender();

			public:
				/// <summary>
				/// 加载设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <returns></returns>
				ev_void load( _in EarthView::World::Display::IPaintDevice* ref_device );
				/// <summary>
				/// 加载设备
				/// </summary>
				/// <param name="device">设备</param>
				/// <param name="displayOptions">显示选项</param>
				/// <returns></returns>
				ev_void load( _in EarthView::World::Display::IPaintDevice* ref_device, _in EarthView::World::Display::IDisplayOptions* ref_displayOptions );
				/// <summary>
				/// 卸载设备
				/// </summary>
				/// <returns></returns>
				ev_void unload();
				/// <summary>
				/// 平移
				/// </summary>
				/// <param name="offsetX">x偏移</param>
				/// <param name="offsetY">y偏移</param>
				/// <returns></returns>
				ev_void translate( _in ev_real64 offsetX, _in ev_real64 offsetY );
				/// <summary>
				/// 按比例缩放
				/// </summary>
				/// <param name="scaleX">x方向比例</param>
				/// <param name="scaleY">y方向比例</param>
				/// <returns></returns>
				ev_void scale( _in ev_real64 scaleX, _in ev_real64 scaleY );
				/// <summary>
				/// 旋转
				/// </summary>
				/// <param name="angle">旋转角度</param>
				/// <returns></returns>
				ev_void rotate( _in ev_real64 angle );
				/// <summary>
				/// 旋转到
				/// </summary>
				/// <param name="angle">旋转角度</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				ev_void rotateAt( _in ev_real64 angle, _in ev_real64 x, _in ev_real64 y );
				/// <summary>
				/// 剪切
				/// </summary>
				/// <param name="path">剪切范围</param>
				/// <returns></returns>
				ev_void setClip( EarthView::World::Display::CDataPath* path );
				ev_void setClip( EarthView::World::Display::CDataRegion* region );
				/// <summary>
				/// 重置
				/// </summary>
				ev_void reset();
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destExt">目标范围</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt );
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destExt">目标范围</param>
				/// <param name="srcExt">源范围</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in const EarthView::World::Spatial::Geometry::IEnvelope *destExt, _in const EarthView::World::Spatial::Geometry::IEnvelope *srcExt );
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in ev_real64 x, _in ev_real64 y );
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in ev_real64 x, _in ev_real64 y,
					_in ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h );
				/// <summary>
				/// 绘制图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::IBitmap *bmp, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				/// <summary>
				/// 绘制图元
				/// </summary>
				/// <param name="bmp">图元</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <param name="w">宽度</param>
				/// <param name="h">高度</param>
				/// <param name="sx">源点x坐标</param>
				/// <param name="sy">源点y坐标</param>
				/// <param name="sw">源图像宽度</param>
				/// <param name="sh">源图像高度</param>
				/// <returns></returns>
				ev_void drawImage( _in EarthView::World::Display::CMetaFile *metafile, _in ev_real64 x, _in ev_real64 y, _in ev_real64 w, _in ev_real64 h,
					_in  ev_real64 sx, _in ev_real64 sy, _in ev_real64 sw, _in ev_real64 sh );
				/// <summary>
				/// 绘制缓存图像
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="x">目标点x坐标</param>
				/// <param name="y">目标点y坐标</param>
				/// <returns></returns>
				ev_void drawCacheBitmap( _in EarthView::World::Display::ICachedBitmap* bmp, _in ev_real64 x, _in ev_real64 y ); 

			ev_private:
				CImageRender( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				EarthView::World::Display::IPaintDevice* mpDevice;
				ev_bool mbReleased;
				EarthView::World::Display::IDisplayOptions* mpDisplayOptions;
				ev_void* mpGraphics;
				ev_bool mbBitmap;
				ev_bool mbClipSet;
				ev_bool mbIsNativeGraphics;
			private:
				ev_void setDisplayOptions();
			};
		}
	}
}
#endif

