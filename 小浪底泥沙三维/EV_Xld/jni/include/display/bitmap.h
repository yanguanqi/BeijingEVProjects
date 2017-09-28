#ifndef EARTHVIEW_WORLD_DISPLAY_BITMAP_H
#define EARTHVIEW_WORLD_DISPLAY_BITMAP_H

#include "display/display_config.h"
#include "spatialinterface/ibitmap.h"
#include "spatialinterface/icolor.h"
#include "spatialinterface/ienvelope.h"

namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 位图类
			/// </summary>
			class EV_DISPLAY_DLL CBitmap : public EarthView::World::Display::IBitmap
			{
			public:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">位图宽度</param>
				/// <param name="height">位图高度</param>
				/// <returns></returns>
				CBitmap( _in ev_int32 width, _in ev_int32 height );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">位图宽度</param>
				/// <param name="height">位图高度</param>
				/// <returns></returns>
				CBitmap( _in ev_int32 width, _in ev_int32 height, _in ev_bool bAntiAlias );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pszFileName">指定文件路径</param>
				/// <returns></returns>
				CBitmap( _in const EVString &pszFileName );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="hIcon">图标</param>
				/// <returns></returns>
				CBitmap( _in ev_int64 hIcon );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="hBitmap">位图句柄</param>
				/// <param name="hPalette">画板句柄</param>
				/// <returns></returns>
				CBitmap( _in ev_int64 hBitmap, _in ev_int64 hPalette );
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="width">位图宽度</param>
				/// <param name="height">位图高度</param>
				/// <param name="format">格式</param>
				/// <param name="data">内部数据</param>
				/// <returns></returns>
				CBitmap( _in ev_int32 width, _in ev_int32 height, 
					_in ev_int32 format, ev_uchar* ref_data );

			public:
				/// <summary>
				/// 默认析构函数      
				/// </summary>
				~CBitmap();
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
				/// <summary>
				/// 获取内部数据
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回内部数据</returns>
				ev_uchar* data() const;
				/// <summary>
				/// 获取设备分辨率
				/// </summary>
				/// <returns>返回设备分辨率</returns>
				virtual ev_int32 getResolution() const;
				/// <summary>
				/// 保存位图
				/// </summary>
				/// <param name="path">指定的路径</param>
				/// <returns>保存成功返回true；否则返回false</returns>
				ev_bool save( _in const EVString& path );
				/// <summary>
				/// 保存位图至内存流
				/// </summary>
				/// <param name="type">类型</param>
				/// <returns>返回保存的流</returns>
				EarthView::World::Core::MemoryDataStreamPtr saveToStream(const EVString& type);
				/// <summary>
				/// 保存位图至流
				/// </summary>
				/// <param name="type">类型</param>
				/// <param name="buffer">流缓冲区</param>
				/// <param name="size">大小</param>
				/// <returns>保存成功返回true；否则返回false</returns>
				ev_bool save(const EVString& type,ev_char* buffer,int & size);
				/// <summary>
				/// 获取图标句柄
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回图标句柄</returns>
				ev_int64 getHIcon() const;
				/// <summary>
				/// 获取位图句柄
				/// </summary>
				/// <param name="background">背景色</param>
				/// <returns>返回位图句柄</returns>
				ev_int64 getHBITMAP( _in ev_int32 background/*aarrggbb*/ ) const;
				/// <summary>
				/// 复制位图
				/// </summary>
				/// <param name=""></param>
				/// <returns>返回复制的位图</returns>
				EarthView::World::Display::IBitmap* clone() const;
				/// <summary>
				///  释放位图句柄
				/// </summary>
				/// <param name="bitmapHandle">位图句柄</param>
				/// <returns></returns>
				static ev_void destroyBitmapHandle(ev_void* bitmapHandle);
				/// <summary>
				/// 将位图渲染到指定设备的指定区域
				/// </summary>
				/// <param name="destDevice">指定设备</param>
				/// <param name="destExt">指定区域</param>
				/// <returns></returns>
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
				/// 从内存流获取位图
				/// </summary>
				/// <param name="mptr">内存流</param>
				/// <returns>返回位图指针</returns>
				static CBitmap* fromStream(EarthView::World::Core::MemoryDataStreamPtr mptr );
				/// <summary>
				/// 获取图片保存时候需要的格式ID
				/// </summary>
				/// <param name="format">格式</param>
				/// <param name="clsid">输出： ID</param>
				/// <returns>若获取成功返回true；否则返回false</returns>
				static ev_bool getEncoderClsid( const EVString& format,void *clsid );
				/// <summary>
				/// 设置图片透明度
				/// </summary>
				/// <param name="transparentColor">透明度</param>
				/// <returns></returns>
				ev_void setColorKey(ev_uint32 transparentColor);
				/// <summary>
				/// 设置透明度
				/// </summary>
				/// <param name="transparent">透明度</param>
				/// <returns></returns>
				ev_void setTransparent(ev_uint8 transparent);
			protected:
				CBitmap();
				CBitmap( void* bmp );
				void *m_pBitmap;//GpImage
				void *m_pGraphics;
				ev_int64 m_hDC;
				ev_bool m_bReleased;
				EVString filePath;
				ev_int32 mnWidth, mnHeight;

			ev_private:
				CBitmap( EarthView::World::Core::CNameValuePairList* pList );

				ev_void* getGpBitmap()const {return m_pBitmap;}

				static ev_void  setTransparent(ev_void*& gpBitmap,ev_void*& gpGraphic, ev_uint8 transparent);
			protected:
				C_DISABLE_COPY( CBitmap );

				friend class CCacheBitmap;
				friend class CImageRender;
			private:
				mutable ev_uchar* mpData;
				ev_void modifyBitmapFromAttribute(ev_void* pImageAtt);
				static ev_void modifyBitmapFromAttribute(ev_void*& gpBitmap,ev_void*& gpGraphic,ev_void* pImageAtt);
				ev_void makeShape();
				mutable EarthView::World::Core::CRecursiveMutex mMutexLock;
			};
		}
	}
}
#endif
