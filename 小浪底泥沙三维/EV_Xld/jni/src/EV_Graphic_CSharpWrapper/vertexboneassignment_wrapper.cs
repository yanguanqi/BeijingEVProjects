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
			[StructLayout( LayoutKind.Sequential )]
			public struct VERTEXBONEASSIGNMENT
			{
				public uint vertexIndex;
				public ushort boneIndex;
				public double weight;
			}

		}
	}
}
