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
			namespace GeoDataset
			{
				/// <summary>
				/// 投影方法
				/// </summary>
				public enum EVCHARTPROJECTIONDEF
				{
								CPD_ALA = 1,
								CPD_AZA = 2,
								CPD_AZD = 3,
								CPD_GNO = 4,
								CPD_HOM = 5,
								CPD_LCC = 6,
								CPD_LEA = 7,
								CPD_MER = 8,
								CPD_OME = 9,
								CPD_ORT = 10,
								CPD_PST = 11,
								CPD_POL = 12,
								CPD_TME = 13,
								CPD_OST = 14
				
				}

				/// <summary>
				/// 海图几何对象类型
				/// </summary>
				public enum EVCHARTGEOMTYPE
				{
								CGT_Chart_Unknown = 0,
								CGT_Chart_Point = 1,
								CGT_Chart_Line = 2,
								CGT_Chart_Area = 3,
								CGT_Chart_Collection = 255
				
				}

				/// <summary>
				/// 海图000文件中几何对象类型
				/// </summary>
				public enum EVCHARTPRIMITIVE
				{
								CP_UNKNOWN = 0,
								CP_Point = 1,
								CP_Line = 2,
								CP_Area = 3,
								CP_Collection = 255
				
				}

				/// <summary>
				/// 海图000文件中属性类型
				/// </summary>
				public enum EVCHARTATTRIBUTETYPE
				{
								CAT_UNKNOWN = 0,
								CAT_E = 1,
								CAT_L = 2,
								CAT_F = 3,
								CAT_I = 4,
								CAT_A = 5,
								CAT_S = 6
				
				}

				/// <summary>
				/// 海图000文件中数据类型
				/// </summary>
				public enum EVCHARTDATATYPE
				{
								CFT_UNKNOWN = 0,
								CFT_M = 1,
								CFT_CA = 2,
								CFT_G = 3,
								CFT_C = 4,
								CFT_F = 5,
								CFT_N = 6,
								CFT_S = 7
				
				}

				/// <summary>
				/// 数据操作类的类型
				/// </summary>
				public enum EVCHARTOPERATORTYPE
				{
								COT_Unknown = 0,
								COT_File000 = 1
				
				}

			}
		}
	}
}
