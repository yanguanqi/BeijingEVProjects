#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEPIXELSIZE_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEPIXELSIZE_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片大小类
            /// </summary>
			class EV_TILEUTILITY_DLL CTilePixelSize:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTilePixelSize();

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTilePixelSize();

			public:
				/// <summary>
                /// 获取瓦片宽度
                /// </summary>
                /// <returns>瓦片宽度</returns>
				ev_uint32 getWidth() const;

				/// <summary>
                /// 获取瓦片高度
                /// </summary>
                /// <returns>瓦片高度</returns>
				ev_uint32 getHeight() const;

				/// <summary>
                /// 设置瓦片宽度
                /// </summary>
				/// <param name="dWidth">瓦片宽度</param>
                /// <returns></returns>
				ev_void setWidth(_in ev_uint32 dWidth);

				/// <summary>
                /// 设置瓦片高度
                /// </summary>
				/// <param name="dHeight">瓦片高度</param>
                /// <returns></returns>
				ev_void setHeight(_in ev_uint32 dHeight);

				/// <summary>
                /// 深度拷贝
                /// </summary>
                /// <returns>新对象指针</returns>
				_extfree EarthView::World::Spatial::CTilePixelSize * clone() const;
			ev_private:
				CTilePixelSize(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				C_DISABLE_COPY( CTilePixelSize );
			private:
				///瓦片宽度
				ev_uint32 mWidth;
				///瓦片宽度
				ev_uint32 mHeight;
			};
		}
	}
}
#endif

