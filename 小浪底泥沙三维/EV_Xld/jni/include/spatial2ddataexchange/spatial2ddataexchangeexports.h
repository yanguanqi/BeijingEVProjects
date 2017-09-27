#ifndef EARTHVIEW_WORLD_SPATIAL_SPATIAL2DDATAEXCHANGEEXPORTS_H
#define EARTHVIEW_WORLD_SPATIAL_SPATIAL2DDATAEXCHANGEEXPORTS_H

#ifdef EV_BUILD_SPATIAL2DDATAEXCHANGE
#define EV_SPATIAL2DDATAEXCHANGE_DLL EV_DLL_EXPORT
#else
#define EV_SPATIAL2DDATAEXCHANGE_DLL EV_DLL_IMPORT
#endif

#include "core/core_api.h"




#define		DataExchange_OK									0
#define		DataExchange_Error_DataPath						1
#define		DataExchange_Error_DataFormat_Or_NotSupport		2
#define		DataExchange_Error_DataExists					3
#define		DataExchange_Error_DataNotExists				4
#define		DataExchange_Error_Data							5
#define		DataExchange_Error_DataCannotRead				6
#define		DataExchange_Error_DataCannotWrite				7
#define		DataExchange_Error_ReadData						8
#define		DataExchange_Error_WriteData					9
#define		DataExchange_Error_OperateMode					10
#define		DataExchange_Error_FeatureIndex					11
#define		DataExchange_Error_DriverParamNotEnough			12
#define		DataExchange_Error_DriverParam					13
#define		DataExchange_Error_DataSource					14
#define		DataExchange_Error_NotSupportSuchProjection		20
#define		DataExchange_Error_DataStructure				21
#define		DataExcahnge_InvalidData						50
#define		DataExchange_LDID_NotSupport					60
#define		DataExchange_Error_Other						100

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Convertor
			{
				/// <summary>
				/// 数据交换驱动类型
				/// </summary>
				enum EVDataDriverType
				{
					/// <summary>
					/// 未知
					/// </summary>
					DDT_Unknown = 0,
					/// <summary>
					/// EarthView数据驱动
					/// </summary>
					DDT_EarthView = 1,
					/// <summary>
					/// EarthView数据驱动
					/// </summary>
					DDT_EarthView2 = 11,
					/// <summary>
					/// Shapefile数据驱动
					/// </summary>
					DDT_Shapefile = 2,
					/// <summary>
					/// MapInfo数据驱动
					/// </summary>
					DDT_MapInfo = 3,
					/// <summary>
					/// fileRaster数据驱动
					/// <summary>
					DDT_FileRaster =4,
					/// <summary>
					/// DBRaster数据驱动
					/// <summary>
					DDT_DBRaster =5,
				};
				/// <summary>
				/// 数据存储格式类型
				/// </summary>
				enum EVDataFormatType
				{
					/// <summary>
					/// EarthView Sqlite数据源
					/// </summary>
					DataFormat_EV_Sqlite = 1,////SQLITE
					/// <summary>
					/// EarthView ODBC数据源
					/// </summary>
					DataFormat_EV_Odbc	= 2,////ODBC
					/// <summary>
					/// EarthView Oracle数据源
					/// </summary>
					DataFormat_EV_Oracle = 3,///ORACLE
					/// <summary>
					/// ESRI Shapefile数据源
					/// </summary>
					DataFormat_ESRI_Shp = 11,///shpfile
					/// <summary>
					/// MapInfo TAB数据源
					/// </summary>
					DataFormat_MI_TAB = 21,///mapinfo的tab文件
					/// <summary>
					/// MapInfo MIF数据源
					/// </summary>
					DataFormat_MI_MIF = 22,///mapinfo的mif文件
					///<summary>
					///GeoTiff数据源
					///</summary>
					DataFormat_GeoTiff = 23, ////geotiff文件
					///<summary>
					///Image数据源
					///</summary>
					DataFormat_Image = 24   ////image文件
				};
				/// <summary>
				/// 目标数据集维度枚举
				/// </summary>
				enum EVDatasetDimension
				{
					/// <summary>
					/// 2维（x,y）
					/// </summary>
					DatasetDimension_XY = 2,
					/// <summary>
					/// 3维（x,y,z）
					/// </summary>
					DatasetDimension_XYZ = 3,
					/// <summary>
					/// 4维（x,y,z,m）
					/// </summary>
					DatasetDimension_XYZM = 4,
					/// <summary>
					/// 3维（x,y,m）
					/// </summary>
					DatasetDimension_XYM = 31,
					/// <summary>
					/// 默认
					/// </summary>
					DatasetDimension_Default = 100
				};
			}
		}
	}
}
#endif
