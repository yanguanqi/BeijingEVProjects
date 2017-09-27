#ifndef EARTHVIEW_WORLD_SPATIAL_VECTORTITLEENUMS_H
#define EARTHVIEW_WORLD_SPATIAL_VECTORTITLEENUMS_H
namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 要素几何类型
            /// </summary>
			enum EVGeoElementType
			{
				/// <summary>
				/// 未知
				/// </summary>
				GET_UNKNOWN	   = 0,
				/// <summary>
				/// 点
				/// </summary>
				GET_POINT	   = 1,
				/// <summary>
				/// 线
				/// </summary>
				GET_POLYLINE   = 2,
				/// <summary>
				/// 面
				/// </summary>
				GET_POLYGON	   = 3,
				/// <summary>
				/// 组合
				/// </summary>
				GET_MULTIPOINT = 4
			};
			/// <summary>
            /// 注记停靠类型
            /// </summary>
			enum EVLabelDrawingType
			{
				/// <summary>
				/// 未知
				/// </summary>
				LDT_UNKNOWN	   = 0,
				/// <summary>
				/// 沿线
				/// </summary>
				LDT_ALONGLINE  =1,
				/// <summary>
				/// 在中间
				/// </summary>
				LDT_WIHTIN	   =2
			};
		}
	}
}
#endif
