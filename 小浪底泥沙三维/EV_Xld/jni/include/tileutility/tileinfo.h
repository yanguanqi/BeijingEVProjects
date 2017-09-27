#ifndef EARTHVIEW_WORLD_SPATIAL_CTILEINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CTILEINFO_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"

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
			class EV_TILEUTILITY_DLL CTileInfo:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileInfo();

				/// <summary>
                /// 获取瓦片行号
                /// </summary>
                /// <returns>瓦片行号</returns>
				ev_uint32 getRow() const;

				/// <summary>
                /// 获取瓦片列号
                /// </summary>
                /// <returns>瓦片列号</returns>
				ev_uint32 getCol() const;

				/// <summary>
                /// 获取最大X值
                /// </summary>
                /// <returns>瓦片对应离地范围X方向最大值</returns>
				ev_real64 getMaxX() const;

				/// <summary>
                /// 获取最小X值
                /// </summary>
                /// <returns>瓦片对应离地范围X方向最小值</returns>
				ev_real64 getMinX() const;

				/// <summary>
                /// 获取最大Y值
                /// </summary>
                /// <returns>瓦片对应离地范围Y方向最大值</returns>
				ev_real64 getMaxY() const;

				/// <summary>
                /// 获取最小Y值
                /// </summary>
                /// <returns>瓦片对应离地范围Y方向最小值</returns>
				ev_real64 getMinY() const;

				/// <summary>
                /// 获取瓦片大小
                /// </summary>
				/// <param name="width">瓦片宽度</param>
				/// <param name="height">瓦片高度</param>
                /// <returns></returns>
				ev_void getSize(_out ev_uint32& width, _out ev_uint32& height) const;

				/// <summary>
                /// 像素点转换为世界点,像素起点为左上
                /// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
                /// <returns></returns>
				ev_void toTilePoint(_inout ev_real64& x, _inout ev_real64& y) const;

				/// <summary>
                /// 世界点转换为像素点,像素起点为左上
                /// </summary>
				/// <param name="x">x坐标</param>
				/// <param name="y">y坐标</param>
                /// <returns></returns>
				ev_void toPixelPoint(_inout ev_real64& x, _inout ev_real64& y) const;

				/// <summary>
                /// 获取所关联的TileLevelInfo
                /// </summary>
                /// <returns>相应对象指针，不需释放</returns>
				const EarthView::World::Spatial::CTileLevelInfo* getTileLevelInfo() const;
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileInfo();
			private:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CTileInfo(_in const CTileInfo& tileInfo);

			ev_private:
				CTileInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			
			private:
				///真实坐标
				ev_real64 mdfMaxX;
				ev_real64 mdfMinX;
				ev_real64 mdfMaxY;
				ev_real64 mdfMinY;
				///当前瓦片行号
				ev_uint32 mnRow;
				///当前瓦片列号
				ev_uint32 mnCol;
				///
				EarthView::World::Spatial::CTileLevelInfo *mpLevelInfo;
			friend class CTileLevelInfo;
			friend class CTilesInfo;
			};
		}
	}
}

#endif


