#ifndef EARTHVIEW_WORLD_SPATIAL_TITLESINFO_H
#define EARTHVIEW_WORLD_SPATIAL_TITLESINFO_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
#include "tileutility/tileinfo.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片级别信息类
            /// </summary>
			class CTileLevelInfo;

			/// <summary>
            /// 瓦片信息类
            /// </summary>
			class CTileInfo;

			/// <summary>
            /// 瓦片集合信息类，用以描述某一范围内的瓦片信息
            /// </summary>
			class EV_TILEUTILITY_DLL CTilesInfo:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTilesInfo();

				/// <summary>
                /// 获取最大行号
                /// </summary>
                /// <returns>最大行号</returns>
				ev_uint32 getMaxRow() const;

				/// <summary>
                /// 获取最小行号
                /// </summary>
                /// <returns>最小行号</returns>
				ev_uint32 getMinRow() const;

				/// <summary>
                /// 获取最大列号
                /// </summary>
                /// <returns>最大列号</returns>
				ev_uint32 getMaxCol() const;

				/// <summary>
                /// 获取最小列号
                /// </summary>
                /// <returns>最小列号</returns>
				ev_uint32 getMinCol() const;

				/// <summary>
                /// 获取真实世界X最大值
                /// </summary>
                /// <returns>真实世界X最大值</returns>
				ev_real64 getMaxX() const;

				/// <summary>
                /// 获取真实世界X最小值
                /// </summary>
                /// <returns>真实世界X最小值</returns>
				ev_real64 getMinX() const;

				/// <summary>
                /// 获取真实世界Y最大值
                /// </summary>
                /// <returns>真实世界Y最大值</returns>
				ev_real64 getMaxY() const;

				/// <summary>
                /// 获取真实世界Y最小值
                /// </summary>
                /// <returns>真实世界Y最小值</returns>
				ev_real64 getMinY() const;

				/// <summary>
                /// 获取指定行列号对应的瓦片信息对象
                /// </summary>
                /// <returns>指定行列号对应瓦片信息对象的指针</returns>
				_extfree  EarthView::World::Spatial::CTileInfo* getTileInfoByRowCol(_in ev_uint32 row, _in ev_uint32 col) const;

				/// <summary>
                /// 获取指定真实坐标对应的瓦片信息对象
                /// </summary>
                /// <returns>指定真实坐标所在瓦片信息对象的指针</returns>
				_extfree  EarthView::World::Spatial::CTileInfo* getTileInfoByXY(_in ev_real64 x, _in ev_real64 y) const;

				/// <summary>
                /// 获取所关联的TileLevelInfo
                /// </summary>
                /// <returns></returns>
				const EarthView::World::Spatial::CTileLevelInfo* getTileLevelInfo() const;
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTilesInfo();

			private:
				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="tilesInfo">拷贝对象</param>
                /// <returns></returns>
				CTilesInfo(_in const CTilesInfo& tilesInfo);

			ev_private:
				CTilesInfo(_in EarthView::World::Core::CNameValuePairList * pList);

			private:
				///真实世界坐标
				ev_real64 mdfMaxX;
				ev_real64 mdfMinX;
				ev_real64 mdfMaxY;
				ev_real64 mdfMinY;
				///瓦片范围
				ev_uint32 mnMaxRow;
				ev_uint32 mnMinRow;
				ev_uint32 mnMaxCol;
				ev_uint32 mnMinCol;
				///
				EarthView::World::Spatial::CTileLevelInfo *mpLevelInfo;
			///友元
			friend class CTileLevelInfo;
			};
		}
	}
}
#endif
