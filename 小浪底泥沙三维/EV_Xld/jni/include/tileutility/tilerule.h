#ifndef EARTHVIEW_WORLD_SPATIAL_CTILERULE_H
#define EARTHVIEW_WORLD_SPATIAL_CTILERULE_H
#include "tileutility/tileutilityexports.h"
#include "tileutility/tileutilityenums.h"
#include "core/memoryallocatedobject.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片级别规则类
            /// </summary>
			class CTileLevel;

			/// <summary>
            /// 瓦片起始信息类
            /// </summary>
			class CTileOrigin;

			/// <summary>
            /// 瓦片大小类
            /// </summary>
			class CTilePixelSize;
			
			/// <summary>
            /// 瓦片规则类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileRule:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileRule();

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="tileReference">拷贝对象</param>
                /// <returns></returns>
				CTileRule(_in const CTileRule& tileRule);

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileRule();

			public:
				/// <summary>
                /// 获取瓦片级别参数对象
                /// </summary>
                /// <returns>瓦片级别参数对象引用</returns>
				const EarthView::World::Spatial::CTileLevel * getTileLevelRef() const;

				/// <summary>
                /// 获取瓦片角点信息类
                /// </summary>
                /// <returns>瓦片角点信息对象引用</returns>
				const EarthView::World::Spatial::CTileOrigin * getTileOriginRef() const;

				/// <summary>
                /// 获取瓦片像素大小对象
                /// </summary>
                /// <returns>瓦片像素大小对象引用</returns>
				const EarthView::World::Spatial::CTilePixelSize * getTilePixelSizeRef() const;

				/// <summary>
                /// 获取瓦片单位类型
                /// </summary>
                /// <returns>瓦片单位类型</returns>
				EarthView::World::Spatial::EVTileUnitsType getTileUnitsType() const;

				/// <summary>
                /// 设置瓦片级别信息
                /// </summary>
				/// <param name="tileLevel">瓦片级别信息对象</param>
                /// <returns></returns>
				ev_void setTileLevel(_in const EarthView::World::Spatial::CTileLevel & tileLevel);

				/// <summary>
                /// 设置瓦片位置信息
                /// </summary>
				/// <param name="tileOrigin">瓦片位置信息对象</param>
                /// <returns></returns>
				ev_void setTileOrigin(_in const EarthView::World::Spatial::CTileOrigin & tileOrigin);

				/// <summary>
                /// 设置瓦片像素信息
                /// </summary>
				/// <param name="tilePixelSize">瓦片像素信息对象</param>
                /// <returns></returns>
				ev_void setTilePixelSize(_in const EarthView::World::Spatial::CTilePixelSize & tilePixelSize);

				/// <summary>
                /// 设置瓦片单位类型
                /// </summary>
				/// <param name="type">设置瓦片单位类型</param>
                /// <returns></returns>
				ev_void setTileUnits(_in EarthView::World::Spatial::EVTileUnitsType type);
			
			ev_private:
				CTileRule(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				///瓦片级别参数对象
				EarthView::World::Spatial::CTileLevel *mpTileLevel;
				///焦点位置
				EarthView::World::Spatial::CTileOrigin *mpTileOrigin;
				///瓦片大小
				EarthView::World::Spatial::CTilePixelSize *mpTilePixelSize;
				///瓦片单位
				EarthView::World::Spatial::EVTileUnitsType mnTileUnits;
			};
		}
	}
}
#endif

