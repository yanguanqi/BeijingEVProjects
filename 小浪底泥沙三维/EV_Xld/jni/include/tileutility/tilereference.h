#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEREFERENCE_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEREFERENCE_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 瓦片规则类
            /// </summary>
			class CTileRule;

			/// <summary>
            /// 瓦片级别信息类
            /// </summary>
			class CTileLevelInfo;

			/// <summary>
            /// 瓦片参数类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileReference:
				public EarthView::World::Core::CAllocatedObject
			{
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileReference();
			public:
				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="tileReference">拷贝对象</param>
                /// <returns></returns>
				CTileReference(_in const CTileReference& tileReference);

				/// <summary>
                /// 构造
                /// </summary>
				/// <param name="pTileRule">瓦片规则</param>
                /// <returns></returns>
				CTileReference(_in const EarthView::World::Spatial::CTileRule& tileRule);

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileReference();

			public:
				/// <summary>
                /// 获取TileRule对象
                /// </summary>
                /// <returns>TileRule对象引用，不需释放</returns>
				const EarthView::World::Spatial::CTileRule *getTileRuleRef() const;

				/// <summary>
                /// 获取指定级别的级别信息对象
                /// </summary>
				/// <param name="level">瓦片级别</param>
				/// <param name="dpiPerInch">每英寸的DPI数（默认为96，用于计算比例尺和分辨率）</param>
                /// <returns>指定级别的信息对象指针，需要释放</returns>
				_extfree EarthView::World::Spatial::CTileLevelInfo * getLevelInfo(_in ev_int32 level, _in ev_uint32 dpiPerInch = 96) const;

				/// <summary>
                /// 获取指定级别的级别信息对象，不建议使用
                /// </summary>
				/// <param name="level">瓦片级别</param>
				/// <param name="ptr1">某EarthView::World::Spatial::CTileLevelInfo对象的首地址</param>
				/// <param name="dpiPerInch">每英寸的DPI数（默认为96，用于计算比例尺和分辨率）</param>
                /// <returns>指定级别的信息对象指针，不需释放</returns>
				_extfree EarthView::World::Spatial::CTileLevelInfo * getLevelInfo(_in ev_int32 level, _in void* ptr1,_in ev_uint32 dpiPerInch = 96) const;

			ev_private:
				CTileReference(_in EarthView::World::Core::CNameValuePairList * pList);
			private:
				///瓦片规则对象指针
				EarthView::World::Spatial::CTileRule *mpTileRule;

			friend class CTileReferenceFactory;
			};
		}
	}
}
#endif

