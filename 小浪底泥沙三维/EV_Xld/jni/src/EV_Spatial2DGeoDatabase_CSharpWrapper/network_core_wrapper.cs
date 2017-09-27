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
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				///<summary>
				///网络数据集用途类型枚举
				///</summary>
				public enum EVUSAGETYPE
				{
								UST_COST = 1,
								UST_RESTRICTION = 2,
								UST_HIERACHY = 3,
								UST_DESCRIPTOR = 4
				
				}

				///<summary>
				///网络数据集属性单位
				///</summary>
				public enum EVUNITTYPE
				{
								UNT_UNKNOWN = 0,
								UNT_METER = 1,
								UNT_CENTIMETER = 2,
								UNT_MINUTE = 3
				
				}

				///<summary>
				///网络要素类型
				///</summary>		
				public enum EVELEMENTTYPE
				{
								ET_JUNCTION = 1,
								ET_EDGE = 2,
								ET_TURN = 3
				
				}

				///<summary>
				///网络方向
				///</summary>		
				public enum EVDIRECTIONTYPE
				{
								DT_FT = 1,
								DT_TF = 2
				
				}

			}
		}
	}
}
