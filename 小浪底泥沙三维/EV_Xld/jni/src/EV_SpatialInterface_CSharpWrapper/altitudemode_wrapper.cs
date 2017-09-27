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
			namespace Utility
			{
				/// <summary>
				/// 枚举:高度模式                
				/// </summary>
				public enum EVALTITUDEMODE
				{
								AM_UNKNOW = 1,
								AM_Absolute_WithSceneHeight = 1,
								AM_ClampToGround = 0,
								AM_RelativeToGround,
								AM_ClampToSeaFloor,
								AM_RelativeToSeaFloor,
								AM_Absolute
				
				}

			}
		}
	}
}
