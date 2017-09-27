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
		namespace Graphic
		{
			/// <summary>
			/// 旋转模式
			/// </summary>
			public enum ORIENTATIONMODE
			{
						OR_DEGREE_0 = 0,
						OR_DEGREE_90 = 1,
						OR_DEGREE_180 = 2,
						OR_DEGREE_270 = 3,
						OR_PORTRAIT = OR_DEGREE_0,
						OR_LANDSCAPERIGHT = OR_DEGREE_90,
						OR_LANDSCAPELEFT = OR_DEGREE_270
			
			}

			/// <summary>
			/// 投影类型
			/// 正射投影，透视投影
			/// </summary>
			public enum PROJECTIONTYPE
			{
						PT_ORTHOGRAPHIC,
						PT_PERSPECTIVE
			
			}

			/// <summary>
			/// 平截头体面
			/// </summary>
			public enum FRUSTUMPLANE
			{
						FRUSTUM_PLANE_NEAR = 0,
						FRUSTUM_PLANE_FAR = 1,
						FRUSTUM_PLANE_LEFT = 2,
						FRUSTUM_PLANE_RIGHT = 3,
						FRUSTUM_PLANE_TOP = 4,
						FRUSTUM_PLANE_BOTTOM = 5
			
			}

		}
	}
}
