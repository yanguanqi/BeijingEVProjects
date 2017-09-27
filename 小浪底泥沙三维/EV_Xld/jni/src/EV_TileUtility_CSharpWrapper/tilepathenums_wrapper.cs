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
			/// <summary>
			/// 瓦片数据类型
			/// </summary>
			public enum EVTILEDATATYPE
			{
						TDT_UNKNOWN = 0,
						TDT_IMAGE = 1,
						TDT_VECTOR = 2,
						TDT_DEM = 3
			
			}

			/// <summary>
			/// 路径类型
			/// </summary>
			public enum EVTILEPATHTYPE
			{
						TPT_UNKNOWN = 0,
						TPT_FILE = 1,
						TPT_DATABASE_1_0 = 2
			
			}

			/// <summary>
			/// 瓦片模式
			/// </summary>
			public enum EVTILEMODETYPE
			{
						TMT_UNKNOWN = 0,
						TMT_WGS84 = 1,
						TMT_WEBMERCATOR = 2,
						TMT_GUTANG = 3
			
			}

			/// <summary>
			/// 瓦片名样式
			/// </summary>
			public enum EVTILENAMETYPE
			{
						TNT_UNKNOWN = 0,
						TNT_LEVEL = 1,
						TNT_ROW = 2,
						TNT_COL = 3,
						TNT_ROW_COL = 4,
						TNT_LEVEL_ROW_COL = 5
			
			}

			/// <summary>
			/// 瓦片名对齐方式
			/// </summary>
			public enum EVTILENAMEFLUSHTYPE
			{
						TNFT_UNKNOWN = 0,
						TNFT_FLUSH_LEFT = 1,
						TNFT_FLUSH_RIGHT = 2
			
			}

			/// <summary>
			/// 瓦片名格式
			/// </summary>
			public enum EVTILENAMEFORMAT
			{
						TNF_UNKNOWN = 0,
						TNF_DECIMAL = 1,
						TNF_HEX = 2
			
			}

		}
	}
}
