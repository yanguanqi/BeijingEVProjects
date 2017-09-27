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
			namespace Rtshadersystem
			{
				public enum FFPVERTEXSHADERSTAGE
				{
								FFP_VS_PRE_PROCESS = 0,
								FFP_VS_TRANSFORM = 100,
								FFP_VS_COLOUR = 200,
								FFP_VS_LIGHTING = 300,
								FFP_VS_TEXTURING = 400,
								FFP_VS_FOG = 500,
								FFP_VS_POST_PROCESS = 2000
				
				}

				public enum FFPFRAGMENTSHADERSTAGE
				{
								FFP_PS_PRE_PROCESS = 0,
								FFP_PS_COLOUR_BEGIN = 100,
								FFP_PS_SAMPLING = 150,
								FFP_PS_TEXTURING = 200,
								FFP_PS_COLOUR_END = 300,
								FFP_PS_FOG = 400,
								FFP_PS_POST_PROCESS = 500
				
				}

				public enum FFPSHADERSTAGE
				{
								FFP_PRE_PROCESS = 0,
								FFP_TRANSFORM = 100,
								FFP_COLOUR = 200,
								FFP_LIGHTING = 300,
								FFP_TEXTURING = 400,
								FFP_FOG = 500,
								FFP_POST_PROCESS = 600
				
				}

			}
		}
	}
}
