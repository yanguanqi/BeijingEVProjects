#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEPATHRULE_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEPATHRULE_H
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
			class EV_TILEUTILITY_DLL CTilePathRule
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CTilePathRule();

				/// <summary>
                /// 获取指定参数的路径
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="format">数据格式，如“jpg”</param>
                /// <returns>相应路径</returns>
				virtual const EVString getPath(_in ev_int32 level,_in ev_uint32 row,_in ev_uint32 col,_in const EVString& format)const;
				
				/// <summary>
                /// 获取路径类型
                /// </summary>
                /// <returns>路径类型：离散文件</returns>
				virtual EarthView::World::Spatial::EVTilePathType getType()const;

				/// <summary>
                /// 获取数据类型
                /// </summary>
                /// <returns>数据类型：影像、矢量、DEM</returns>
				EarthView::World::Spatial::EVTileDataType getDataType()const;

				/// <summary>
                /// 获取瓦片分块模式
                /// </summary>
                /// <returns>模式：WGS84、Mercator还是古唐</returns>
				EarthView::World::Spatial::EVTileModeType getModeType()const;

				/// <summary>
                /// 克隆
                /// </summary>
                /// <returns>克隆对象的指针</returns>
				virtual _extfree EarthView::World::Spatial::CTilePathRule* clone();
			ev_private:
				CTilePathRule(_in EarthView::World::Core::CNameValuePairList * pList);
			protected:
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="dataType">数据类型，影像、矢量、DEM</param>
				/// <param name="tileModeType">模式，WGS84、Mercator还是古唐</param>
                /// <returns></returns>
				CTilePathRule(_in EarthView::World::Spatial::EVTileDataType dataType,_in EarthView::World::Spatial::EVTileModeType tileModeType);

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="rule">拷贝对象</param>
                /// <returns></returns>
				CTilePathRule(_in const CTilePathRule& rule);

				EarthView::World::Spatial::EVTileDataType mnDataType;
				EarthView::World::Spatial::EVTileModeType mnModeType;
			};
		}
	}
}
#endif
