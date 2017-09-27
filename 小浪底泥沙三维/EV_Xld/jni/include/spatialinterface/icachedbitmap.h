#ifndef EARTHVIEW_WORLD_DISPLAY_ICACHEDBITMAP_H
#define EARTHVIEW_WORLD_DISPLAY_ICACHEDBITMAP_H

#include "spatialinterface/config.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Display{
			class IPaintDevice;
			class IBitmap;
			/// <summary>
			///缓存位图基类
			/// </summary>
			class EV_INTERFACE_DLL ICachedBitmap : public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
				///默认构造函数
				/// </summary>
				ICachedBitmap();
				/// <summary>
				///默认析构函数
				/// </summary>
				~ICachedBitmap();

			public:
				/// <summary>
				/// 加载
				/// </summary>
				/// <param name="bmp">位图</param>
				/// <param name="destDevice">目标设备</param>
				/// <returns></returns>
				virtual ev_void load( _in EarthView::World::Display::IBitmap *bmp, _in EarthView::World::Display::IPaintDevice *ref_destDevice );
				/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				virtual ev_void render(_in ev_int32 x, _in ev_int32 y );
					/// <summary>
				/// 渲染
				/// </summary>
				/// <param name="destDevice">目标设备</param>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
				/// <returns></returns>
				virtual ev_void render( _in EarthView::World::Display::IPaintDevice *destDevice, _in ev_int32 x, _in ev_int32 y );

ev_private:
				ICachedBitmap( EarthView::World::Core::CNameValuePairList* pList );
			protected:
				C_DISABLE_COPY( ICachedBitmap );
			};
		}
	}
}
#endif
