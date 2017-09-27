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
		namespace Spatial3D
		{
			namespace DataExchange
			{
				/// <summary>
				/// 数据交换驱动类型
				/// </summary>
				public enum EVMODELDATADRIVERTYPE
				{
								MDDT_Unknown = 0,
								MDDT_MESHFILE = 1,
								MDDT_EarthView = 2
				
				}

				/// <summary>
				/// 操作模式
				/// </summary>
				public enum EVMODELDATAEXCHANGEOPERATEMODE
				{
								EV_MDEOM_UNKNOWN = 0,
								EV_MDEOM_WRITE = 1,
								EV_MDEOM_READ = 2
				
				}

				/// <summary>
				/// 操作结果的枚举
				/// </summary>
				public enum EVMODELDATAEXCHANGEERROR
				{
								EV_MDEE_UNKNOWN = 0,
								EV_MDEE_PARSE_ERROR = 1,
								EV_MDEE_PARSE_SUCCESS = 2,
								EV_MODE_IMPORT_ERROR = 3,
								EV_MODE_IMPORT_SUCCESS = 4,
								EV_MODE_OPEN_DREVER_ERROR = 7,
								EV_MODE_OPEN_DRIVER_SUCCESS = 8
				
				}

			}
		}
	}
}
