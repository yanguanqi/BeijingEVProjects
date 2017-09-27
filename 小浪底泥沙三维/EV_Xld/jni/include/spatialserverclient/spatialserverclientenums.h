#ifndef EARTHVIEW_WORLD_SPATIAL_SPATIALSERVERCLIENTENUMS_H
#define EARTHVIEW_WORLD_SPATIAL_SPATIALSERVERCLIENTENUMS_H
#include "spatialserverclient/spatialserverclientexports.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			///http code 描述 
			/*
			OperationNotSupported			501			Not implemented
			NoApplicableCode				500			Internal server error
			WMTS
			MissingParameterValue			400			Bad request
			InvalidParameterValue			400
			PointIJOutOfRange				400
			TileOutOfRange					400		
			WMS
			InvalidFormat					400			Request contains a Format not offered by the service instance.
			InvalidSRS						400			Request contains an SRS not offered by the service instance for one or more of the Layers in the request.
			LayerNotDefined					400			Request is for a Layer not offered by the service instance.
			StyleNotDefined					400			Request is for a Layer in a Style not offered by the service instance.
			LayerNotQueryable				400			GetFeatureInfo request is applied to a Layer which is not declared queryable.
			CurrentUpdateSequence			400			Value of (optional) UpdateSequence parameter in GetCapabilities request is equal to current value of Capabilities XML update sequence number.
			InvalidUpdateSequence			400			Value of (optional) UpdateSequence parameter in GetCapabilities request is greater than current value of Capabilities XML update sequence number.
			MissingDimensionValue			400			Request does not include a sample dimension value, and the service instance did not declare a default value for that dimension.
			InvalidDimensionValue			400			Request contains an invalid sample dimension value.
			*/

			/// <summary>
			/// 服务器连接器枚举
			/// </summary>
			enum EVServerConnectionType
			{
				/// <summary>
				/// 未知
				/// </summary>
				SCE_UNKNOWN			= 0,
				/// <summary>
				/// OGCWMT服务器连接类型
				/// </summary>
				SCE_OGC_SERVER_WMS	= 1,
				/// <summary>
				/// OGCWMTS服务器连接类型
				/// </summary>
				SCE_OGC_SERVER_WMTS = 2,
				/// <summary>
				/// OGCWFS服务器连接类型
				/// </summary>
				SCE_OGC_SERVER_WFS	= 3,
				/// <summary>
				/// EVWMT服务器连接类型
				/// </summary>
				SCE_EV_SERVER = 11,	
			};
			
			/// <summary>
			/// 服务器信息类型
			/// </summary>
			enum EVServerInfoType
			{
				/// <summary>
				/// 未知
				/// </summary>
				SIT_UNKNOWN			= 0,	
				/// <summary>
				/// OGCWMS服务器信息类型
				/// </summary>
				SIT_OGC_SERVER_WMS	= 1,
				/// <summary>
				/// OGCWMTS服务器信息类型
				/// </summary>
				SIT_OGC_SERVER_WMTS = 2,
				/// <summary>
				/// OGCWFS服务器信息类型
				/// </summary>
				SIT_OGC_SERVER_WFS	= 3,
				/// <summary>
				/// EarthView服务器信息类型
				/// </summary>
				SIT_EV_SERVER = 11
			};

			/// <summary>
			/// 服务器图层信息类枚举
			/// </summary>
			enum EVServerLayerInfoType
			{
				/// <summary>
				/// 未知
				/// </summary>
				SLIE_UNKNOWN		= 0,
				/// <summary>
				/// OGCWMT图层信息
				/// </summary>
				SLIE_OGC_WMS		= 1,
				/// <summary>
				/// OGCWMTS图层信息
				/// </summary>
				SLIE_OGC_WMTS		= 2,
				/// <summary>
				/// OGCWFS图层信息
				/// </summary>
				SLIE_OGC_WFS		= 3,
				/// <summary>
				/// EarthViewWMT图层信息
				/// </summary>
				SLIE_EV_WMT			= 11,
				/// <summary>
				/// EarthViewWMTS图层信息
				/// </summary>
				SLIE_EV_WMTS		= 12,
				/// <summary>
				/// EarthViewWMT扩展图层信息
				/// </summary>
				SLIE_EV_WMT_EX		= 14
			};

			//空间服务器类型
			/*enum EV_SPATIALSERVERCLIENT_DLL EVSpatialServerType
			{
				SST_UNKNOWN			= 0,
				SST_OGC_SERVER_WMS	= 1,	///OGCWMT服务器
				SST_OGC_SERVER_WMTS	= 2,	///OGCWMTS服务器
				SST_OGC_SERVER_WFS	= 3,	///OGCWFS服务器

				SST_EV_SERVER = 11,		///EarthView 服务器
			};*/

			/// <summary>
			/// Web服务类型
			/// </summary>
			enum EVWebServiceType//如变化，DataSourceFactory的打开 和 EVServer的析构都要变化
			{
				/// <summary>
				/// 未知
				/// </summary>
				WST_EV_UNKNOWN = 0,
				/// <summary>
				/// EV_WMTS服务
				/// </summary>
				WST_EV_WMTS = 1,
				/// <summary>
				/// EV_WMS服务
				/// </summary>
				WST_EV_WMS = 2,
				/// <summary>
				/// EV_WFS服务
				/// </summary>
				WST_EV_WFS = 3,
				/// <summary>
				/// Globe服务
				/// </summary>
				WST_EV_GlobeService = 4,
				/// <summary>
				/// 地理编码服务
				/// </summary>
				WST_EV_GeoCodeService = 5,
				/// <summary>
				/// 几何服务
				/// </summary>
				WST_EV_GeometryService = 6,
				/// <summary>
				/// 元数据服务
				/// </summary>
				WST_EV_WebMetadataService = 7,
				/// <summary>
				/// 目录更新服务
				/// </summary>
				WST_UpdateService = 8,
				/// <summary>
				/// OGC_WMTS服务
				/// </summary>
				WST_OGC_WMTS = 10,
				/// <summary>
				/// OGC_WMS服务
				/// </summary>
				WST_OGC_WMS = 11,
				/// <summary>
				/// OGC_WFS服务
				/// </summary>
				WST_OGC_WFS = 12,

				WST_EV_MultimediaService = 13,

				//server6.0
				WST_EV_OBQ = 14,
				WST_EV_CatalogService = 15,
				WST_EV_MESHX = 16,
				WST_EV_MESHXG = 17,
				WST_EV_MODELService = 18,
				WST_EV_Vector3DService = 19,
				WST_EV_LAS =20
			};


			/*
			enum EVOGCWMTSCapabilitySection
			{

				All = 0,

				ServiceIdentification = 1,

				ServiceProvider = 2,

				OperationsMetadata = 3,

				Contents = 4,

				Themes = 5
			};
			*/
		}
	}
}
#endif
