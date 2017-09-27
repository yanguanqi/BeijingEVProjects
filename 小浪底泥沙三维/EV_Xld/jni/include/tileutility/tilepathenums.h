#ifndef EARTHVIEW_WORLD_SPATIAL_TILEPATHENUMS_H
#define EARTHVIEW_WORLD_SPATIAL_TILEPATHENUMS_H

namespace EarthView{
	namespace World{
		namespace Spatial{
			/// <summary>
            /// 瓦片数据类型
            /// </summary>
			enum EVTileDataType
			{
				/// <summary>
				/// 未知
				/// </summary>
				TDT_UNKNOWN = 0,
				/// <summary>
				/// 影像
				/// </summary>
				TDT_IMAGE	= 1,
				/// <summary>
				/// 矢量
				/// </summary>
				TDT_VECTOR	=2,
				/// <summary>
				/// DEM
				/// </summary>
				TDT_DEM		=3
			};
			/// <summary>
            /// 路径类型
            /// </summary>
			enum EVTilePathType
			{
				/// <summary>
				/// 未知
				/// </summary>
				TPT_UNKNOWN = 0,
				/// <summary>
				/// 离散文件
				/// </summary>
				TPT_FILE	= 1,
				/// <summary>
				/// 库文件
				/// </summary>
				TPT_DATABASE_1_0=2
			};
			/// <summary>
            /// 瓦片模式
            /// </summary>
			enum EVTileModeType
			{
				/// <summary>
				/// 未知
				/// </summary>
				TMT_UNKNOWN	=0,
				/// <summary>
				/// WGS84
				/// </summary>
				TMT_WGS84	=1,
				/// <summary>
				/// 墨卡托
				/// </summary>
				TMT_WEBMERCATOR	=2,
				/// <summary>
				/// 古唐
				/// </summary>
				TMT_GUTANG	=3
			};
			/// <summary>
            /// 瓦片名样式
            /// </summary>
			enum EVTileNameType
			{
				/// <summary>
				/// 未知
				/// </summary>
				TNT_UNKNOWN	=0,
				/// <summary>
				/// 级别
				/// </summary>
				TNT_LEVEL	=1,
				/// <summary>
				/// 行号
				/// </summary>
				TNT_ROW	=2,
				/// <summary>
				/// 列号
				/// </summary>
				TNT_COL	=3,
				/// <summary>
				/// 行号_列号
				/// </summary>
				TNT_ROW_COL=4,
				/// <summary>
				/// 级别_行号_列号
				/// </summary>
				TNT_LEVEL_ROW_COL=5
			};

			/// <summary>
            /// 瓦片名对齐方式
            /// </summary>
			enum EVTileNameFlushType
			{
				/// <summary>
				/// 未知
				/// </summary>
				TNFT_UNKNOWN =0,
				/// <summary>
				/// 左对齐
				/// </summary>
				TNFT_FLUSH_LEFT =1,
				/// <summary>
				/// 右对齐
				/// </summary>
				TNFT_FLUSH_RIGHT =2
			};
			/// <summary>
            /// 瓦片名格式
            /// </summary>
			enum EVTileNameFormat
			{
				/// <summary>
				/// 未知
				/// </summary>
				TNF_UNKNOWN =0,
				/// <summary>
				/// 十进制
				/// </summary>
				TNF_DECIMAL =1,
				/// <summary>
				/// 十六进制
				/// </summary>
				TNF_HEX =2
			};
			/*enum EVTileRuleType
			{
			TRT_FIL
			}*/
		}
	}
}
#endif
