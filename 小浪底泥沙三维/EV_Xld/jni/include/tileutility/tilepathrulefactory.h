#ifndef EARTHVIEW_WORLD_SPATIAL_TILEPATHRULEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_TILEPATHRULEFACTORY_H
#include "tileutility/tilepathenums.h"
#include "core/memoryallocatedobject.h"
#include "tileutility/tileutilityexports.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片路径规则类
            /// </summary>
			class CTilePathRule;

			/// <summary>
            /// 瓦片路径规则类工厂
            /// </summary>
			class EV_TILEUTILITY_DLL CTilePathRuleFactory
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 生成瓦片路径规则
                /// </summary>
				/// <param name="dataType">数据类型，影像、矢量、DEM</param>
				/// <param name="tilePathType">路径类型，离散文件、库文件</param>
				/// <param name="tileModeType">模式，WGS84、Mercator还是古唐</param>
                /// <returns></returns>
				static _extfree EarthView::World::Spatial::CTilePathRule* createTilePathRule(_in EarthView::World::Spatial::EVTileDataType dataType,_in EarthView::World::Spatial::EVTilePathType tilePathType,_in EarthView::World::Spatial::EVTileModeType tileModeType);
			protected:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CTilePathRuleFactory();
			ev_private:
				CTilePathRuleFactory(_in EarthView::World::Core::CNameValuePairList * pList);
			};
		}
	}
}
#endif
