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
			namespace GeoCorretion
			{
				///<summary>
				///纠正选用的数学模型
				///<summary>
				public enum RECTIFYMODELTYPE
				{
								RM_Polynomial_1 = 0,
								RM_Polynomial_2 = 1,
								RM_Polynomial_3 = 2,
								RM_Scale = 3,
								RM_Translation = 4,
								RM_Unknown = 5
				
				}

				///<summary>
				///重采样方法
				///<summary>
				public enum RESAMPLETYPE
				{
								RS_Nearest = 0,
								RS_Bilenear = 1,
								RS_Cubic = 2,
								RS_UnKnown = 3
				
				}

			}
		}
	}
}
