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
			namespace Display
			{
				[StructLayout( LayoutKind.Sequential )]
				public struct TAGPOINT
				{
					public double x;
					public double y;
				}

				[StructLayout( LayoutKind.Sequential )]
				public struct TAGGRIDMARKER
				{
					public double dfPoint;
					public int nRow;
					public int nCol;
				}

				[StructLayout( LayoutKind.Sequential )]
				public struct BLOCKRANGLE
				{
					public int minVal;
					public int maxVal;
					public int iD;
				}

			}
		}
	}
}
