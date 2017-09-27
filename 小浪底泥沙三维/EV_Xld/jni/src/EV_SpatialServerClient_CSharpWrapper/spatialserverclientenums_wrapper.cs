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
			/// <summary>
			/// 服务器连接器枚举
			/// </summary>
			public enum EVSERVERCONNECTIONTYPE
			{
						SCE_UNKNOWN = 0,
						SCE_OGC_SERVER_WMS = 1,
						SCE_OGC_SERVER_WMTS = 2,
						SCE_OGC_SERVER_WFS = 3,
						SCE_EV_SERVER = 11
			
			}

			/// <summary>
			/// 服务器信息类型
			/// </summary>
			public enum EVSERVERINFOTYPE
			{
						SIT_UNKNOWN = 0,
						SIT_OGC_SERVER_WMS = 1,
						SIT_OGC_SERVER_WMTS = 2,
						SIT_OGC_SERVER_WFS = 3,
						SIT_EV_SERVER = 11
			
			}

			/// <summary>
			/// 服务器图层信息类枚举
			/// </summary>
			public enum EVSERVERLAYERINFOTYPE
			{
						SLIE_UNKNOWN = 0,
						SLIE_OGC_WMS = 1,
						SLIE_OGC_WMTS = 2,
						SLIE_OGC_WFS = 3,
						SLIE_EV_WMT = 11,
						SLIE_EV_WMTS = 12,
						SLIE_EV_WMT_EX = 14
			
			}

			/// <summary>
			/// Web服务类型
			/// </summary>
			public enum EVWEBSERVICETYPE
			{
						WST_EV_UNKNOWN = 0,
						WST_EV_WMTS = 1,
						WST_EV_WMS = 2,
						WST_EV_WFS = 3,
						WST_EV_GlobeService = 4,
						WST_EV_GeoCodeService = 5,
						WST_EV_GeometryService = 6,
						WST_EV_WebMetadataService = 7,
						WST_UpdateService = 8,
						WST_OGC_WMTS = 10,
						WST_OGC_WMS = 11,
						WST_OGC_WFS = 12,
						WST_EV_MultimediaService = 13,
						WST_EV_OBQ = 14,
						WST_EV_CatalogService = 15,
						WST_EV_MESHX = 16,
						WST_EV_MESHXG = 17,
						WST_EV_MODELService = 18,
						WST_EV_Vector3DService = 19,
						WST_EV_LAS = 20
			
			}

		}
	}
}
