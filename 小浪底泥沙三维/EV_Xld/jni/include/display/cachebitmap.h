#ifndef EARTHVIEW_WORLD_DISPLAY_CACHEBITMAP_H
#define EARTHVIEW_WORLD_DISPLAY_CACHEBITMAP_H

#include "spatialinterface/icachedbitmap.h"
#include "display/display_config.h"

namespace EarthView{
	namespace World{
		namespace Display{
			/// <summary>
			/// 位图缓存
			/// </summary>
			class EV_DISPLAY_DLL CCacheBitmap : public EarthView::World::Display::ICachedBitmap
			{
			public:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				CCacheBitmap();
				/// <summary>
				/// 默认析构函数
				/// </summary>
				~CCacheBitmap();

			public:
				/// <summary>
				/// 加载
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destDevice">目标设备</param>
				/// <returns></returns>
				ev_void load( _in EarthView::World::Display::IBitmap *bmp, _in EarthView::World::Display::IPaintDevice *ref_destDevice );
				/// <summary>
				/// 获取图片宽度
				/// </summary>
				/// <param name=></param>
				/// <returns>图片宽度</returns>
				ev_int32 getWidth() const{ return mnWidth; }
				/// <summary>
				/// 获取图片高度
				/// </summary>
				/// <param name=></param>
				/// <returns>获取图片高度</returns>
				ev_int32 getHeight() const{ return mnHeight; }
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				ev_void render(_in ev_int32 x, _in ev_int32 y );
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="destDevice">目标设备</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_int32 x, _in ev_int32 y );

			protected:
				ev_void clear();

#ifdef EV_CC_MSVC
				ev_void* m_pCachedBitmap;
#else
				ev_void* m_pBitmap;
#endif
				ev_int32 mnWidth, mnHeight;
				EarthView::World::Display::IPaintDevice *mpDestDevice;
				ev_void* mpGraphics;
ev_private:
				CCacheBitmap( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				C_DISABLE_COPY( CCacheBitmap );
			};
		}
	}
}
#endif

