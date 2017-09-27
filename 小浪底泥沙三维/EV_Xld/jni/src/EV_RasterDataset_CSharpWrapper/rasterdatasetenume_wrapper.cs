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
			namespace Raster
			{
				///<summary>
				///EVAccess
				///枚举操作权限
				///</summary>
				public enum EVACCESS
				{
								EV_READONLY = 0,
								EV_UPDATE = 1
				
				}

				///<summary>
				///栅格数据集的类型
				///</summary>
				public enum EVDATASETFORMAT
				{
								RT_JPG = 0,
								RT_PNG = 1,
								RT_BMP = 2,
								RT_TIF = 3,
								RT_IMG = 4,
								RT_MEM = 5
				
				}

				///<summary>
				///采样方法
				///</summary>
				public enum EVRESAMPLEMETHOD
				{
								EVR_NearestNeighbour = 0,
								EVR_Bilinear = 1,
								EVR_Cubic = 2,
								EVR_CubicSpline = 3,
								EVR_Lanczos = 4,
								EVR_GPUNearestNeighbour = 5,
								EVR_GPUCubic = 6
				
				}

			}
		}
	}
}
