/********* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc *********/
using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using EarthView.World.Core;

[StructLayout( LayoutKind.Sequential )]
public struct CWMSCHARTTILEPARAM
{
	public IntPtr srid;
	public IntPtr box;
	public IntPtr displayMode;
	public IntPtr colorMode;
	public IntPtr symbolMode;
	public IntPtr isoBath;
	public IntPtr annoMode;
}

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
		}
	}
}
