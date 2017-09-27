#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEPATH_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEPATH_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"
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
            /// 瓦片路径类
            /// </summary>
			class EV_TILEUTILITY_DLL CTilePath
				:public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 设置瓦片路径规则
                /// </summary>
				/// <param name="tilepathrule">瓦片路径规则对象</param>
                /// <returns></returns>
				ev_void setTilePathRule(_in const EarthView::World::Spatial::CTilePathRule* tilepathrule);

				/// <summary>
                /// 获取瓦片路径规则对象
                /// </summary>
                /// <returns>瓦片路径规则对象，不需释放</returns>
				EarthView::World::Spatial::CTilePathRule* getTilePathRule() const;

				/// <summary>
                /// 获取指定参数的路径
                /// </summary>
				/// <param name="level">级别</param>
				/// <param name="row">行</param>
				/// <param name="col">列</param>
				/// <param name="format">数据格式，如“jpg”</param>
                /// <returns>相应路径</returns>
				const EVString getPath(_in ev_int32 level,_in ev_uint32 row,_in ev_uint32 col,_in const EVString& format) const;
				
				/// <summary>
                /// 构造函数
                /// </summary>
				/// <param name="tilepathrule">瓦片路径规则</param>
                /// <returns></returns>
				CTilePath(_in const EarthView::World::Spatial::CTilePathRule* tilepathrule);

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTilePath();
			ev_private:
				CTilePath(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				
				EarthView::World::Spatial::CTilePathRule* mpTilePathRule;
			};
		}
	}
}
#endif
