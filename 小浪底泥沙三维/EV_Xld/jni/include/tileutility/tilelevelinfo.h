#ifndef EARTHVIEW_WORLD_SPATIAL_CTILELEVELINFO_H
#define EARTHVIEW_WORLD_SPATIAL_CTILELEVELINFO_H
#include "tileutility/tileutilityexports.h"
#include "core/memoryallocatedobject.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片信息类
            /// </summary>
			class CTileInfo;

			/// <summary>
            /// 瓦片集合信息类
            /// </summary>
			class CTilesInfo;

			/// <summary>
            /// 瓦片参数类
            /// </summary>
			class CTileReference;

			/// <summary>
            /// 瓦片级别信息类
            /// </summary>
			class EV_TILEUTILITY_DLL CTileLevelInfo:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CTileLevelInfo();

			public:
				/// <summary>
                /// 获取当前级别分辨率
                /// </summary>
                /// <returns>分辨率大小,单位：米</returns>
				ev_real64 getResolution() const;

				/// <summary>
                /// 获取当前级别跨度
                /// </summary>
                /// <returns>瓦片跨度</returns>
				ev_real64 getSpan() const;

				/// <summary>
                /// 获取当前级别比例尺
                /// </summary>
                /// <returns>比例尺大小</returns>
				ev_real64 getScale() const;

				/// <summary>
                /// 获取当前级别
                /// </summary>
                /// <returns>当前级别</returns>
				ev_int32 getLevel() const;

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
                /// 获取指定行号列号的瓦片信息
                /// </summary>
				/// <param name="row">指定行号</param>
				/// <param name="col">指定列号</param>
                /// <returns>指定行号列号的瓦片信息对象的指针（瓦片行列超出范围返回空）</returns>
				_extfree EarthView::World::Spatial::CTileInfo* getTileInfoByRowCol(_in ev_uint32 row, _in ev_uint32 col) const;

				/// <summary>
                /// 获取指定行号列号的瓦片信息
                /// </summary>
				/// <param name="row">指定行号</param>
				/// <param name="col">指定列号</param>
				/// <param name="ptr1">现有对象首地址</param>
                /// <returns>指定行号列号的瓦片信息对象的指针（瓦片行列超出范围返回空）</returns>
				_extfree EarthView::World::Spatial::CTileInfo* getTileInfoByRowCol(_in ev_uint32 row, _in ev_uint32 col,_in void* ptr1) const;

				/// <summary>
                /// 获取指定世界坐标的瓦片信息
                /// </summary>
				/// <param name="x">指定位置的x坐标，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="y">指定位置的y坐标，单位：同瓦片切割对应的坐标系统</param>
                /// <returns>指定坐标的瓦片信息对象的指针（坐标点超出范围返回空）</returns>
				_extfree EarthView::World::Spatial::CTileInfo* getTileInfoByXY(_in ev_real64 x, _in ev_real64 y) const;

				/// <summary>
                /// 获取指定世界坐标的瓦片信息
                /// </summary>
				/// <param name="x">指定位置的x坐标，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="y">指定位置的y坐标，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="ptr">现有对象首地址</param>
                /// <returns>指定坐标的瓦片信息对象的指针（坐标点超出范围返回空）</returns>
				_extfree EarthView::World::Spatial::CTileInfo* getTileInfoByXY(_in ev_real64 x, _in ev_real64 y,_in void* ptr) const;

				/// <summary>
                /// 获取指定范围的瓦片信息
                /// </summary>
				/// <param name="minx">坐标X轴最小值，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="miny">坐标Y轴最小值，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="maxx">坐标X轴最大值，单位：同瓦片切割对应的坐标系统</param>
				/// <param name="maxy">坐标Y轴最大值，单位：同瓦片切割对应的坐标系统</param>
                /// <returns>指定坐标的瓦片信息对象的指针（范围完全超出界限返回为空）</returns>
				_extfree EarthView::World::Spatial::CTilesInfo* getTilesInfo(_in ev_real64 minx, _in ev_real64 miny, _in ev_real64 maxx, _in ev_real64 maxy) const;

				/// <summary>
                /// 获取相关的tileReference对象
                /// </summary>
                /// <returns>相关的tileReference对象引用</returns>
				const EarthView::World::Spatial::CTileReference* getTileReferenceRef() const;
			protected:
				/// <summary>
                /// 构造函数
                /// </summary>
                /// <returns></returns>
				CTileLevelInfo();
			ev_private:
				CTileLevelInfo(_in EarthView::World::Core::CNameValuePairList* pList);
			private:
				C_DISABLE_COPY( CTileLevelInfo );

			private:
				///当前级别
				ev_int32 mnLevel;
				///分辨率
				ev_real64 mdfResolution;
				///比例尺
				ev_real64 mdfScale;
				///跨度
				ev_real64 mdfSpan;
				///最小行
				ev_uint32 mnMinRow;
				///最大行
				ev_uint32 mnMaxRow;
				///最小列
				ev_uint32 mnMinCol;
				///最大列
				ev_uint32 mnMaxCol;
				///创建者
				EarthView::World::Spatial::CTileReference * mpTileReference;

			friend class CTileReference;
			};
		}
	}
}
#endif

