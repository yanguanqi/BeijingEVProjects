/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

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
				public enum EVDATADRIVERTYPE
				{
								DDT_Unknown = 0,
								DDT_EarthView = 1,
								DDT_EarthView2 = 11,
								DDT_Shapefile = 2,
								DDT_MapInfo = 3,
								DDT_FileRaster = 4,
								DDT_DBRaster = 5
				
				}

				/// <summary>
				/// 数据存储格式类型
				/// </summary>
				public enum EVDATAFORMATTYPE
				{
								DataFormat_EV_Sqlite = 1,
								DataFormat_EV_Odbc = 2,
								DataFormat_EV_Oracle = 3,
								DataFormat_ESRI_Shp = 11,
								DataFormat_MI_TAB = 21,
								DataFormat_MI_MIF = 22,
								DataFormat_GeoTiff = 23,
								DataFormat_Image = 24
				
				}

				/// <summary>
				/// 目标数据集维度枚举
				/// </summary>
				public enum EVDATASETDIMENSION
				{
								DatasetDimension_XY = 2,
								DatasetDimension_XYZ = 3,
								DatasetDimension_XYZM = 4,
								DatasetDimension_XYM = 31,
								DatasetDimension_Default = 100
				
				}

			}
		}
	}
}
