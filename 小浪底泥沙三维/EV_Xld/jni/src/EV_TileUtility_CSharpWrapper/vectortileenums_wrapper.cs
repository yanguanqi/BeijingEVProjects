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
			/// 要素几何类型
			/// </summary>
			public enum EVGEOELEMENTTYPE
			{
						GET_UNKNOWN = 0,
						GET_POINT = 1,
						GET_POLYLINE = 2,
						GET_POLYGON = 3,
						GET_MULTIPOINT = 4
			
			}

			/// <summary>
			/// 注记停靠类型
			/// </summary>
			public enum EVLABELDRAWINGTYPE
			{
						LDT_UNKNOWN = 0,
						LDT_ALONGLINE = 1,
						LDT_WIHTIN = 2
			
			}

		}
	}
}
