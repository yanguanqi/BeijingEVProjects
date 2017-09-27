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
			namespace Geometry
			{
				namespace Algorithm
				{
					[StructLayout( LayoutKind.Sequential )]
					public struct VERTEX3D
					{
						public double x;
						public double y;
						public double z;
					}

					[StructLayout( LayoutKind.Sequential )]
					public struct BEZIER
					{
						public double x1;
						public double y1;
						public double z1;
						public double x2;
						public double y2;
						public double z2;
						public double x3;
						public double y3;
						public double z3;
						public double x4;
						public double y4;
						public double z4;
					}

				}
			}
		}
	}
}
