#ifndef EARTHVIEW_WORLD_SPATIAL_WEBMETADATASERVICECONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_WEBMETADATASERVICECONNECTION_H
#include "download/downloadglobal.h"
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/connectionimpplugin.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class WebMetadataServiceConnectionImp;

				class EV_DOWNLOAD_DLL ModelObjectInfo
				{
				public:
					ModelObjectInfo(EVString& modelName);
					virtual ~ModelObjectInfo();

				public:
					__WebIn EVString modelName;
					__WebOut ev_int32 srid;
					__WebOut Envelope envelope;
					__WebOut DataSetType datasettype;
					__WebOut ev_int32 evid;
					__WebOut ev_int32 version;
					__WebOut ev_int32 altitude_model;
					__WebOut ev_real64 altitude_value;
					__WebOut vector<OctreeNode> octreeNodes;
					__WebOut vector<DBField> fields;

					ev_bool isValid();

				private:
					C_DISABLE_COPY(ModelObjectInfo);
				};

				class EV_DOWNLOAD_DLL ModelTemplateObjectInfo : public ModelObjectInfo
				{
				public:
					ModelTemplateObjectInfo(EVString& modelName);
					~ModelTemplateObjectInfo();

				public:					

				private:
					C_DISABLE_COPY(ModelTemplateObjectInfo);
				};


				class EV_DOWNLOAD_DLL ServiceFileSet : public EarthView::World::Core::CAllocatedObject
				{
				public:

					__WebIn EVString mServiceName;
					__WebOut EVString/*ServiceFileVector*/ mfiles;
				private:
					C_DISABLE_COPY(ServiceFileSet);

				public:
					ServiceFileSet(EVString& serviceName);
					~ServiceFileSet();
					EVString getServiceName() const;
					const EVString& getServiceFiles() const;
				};

				class EV_DOWNLOAD_DLL WMTSLayerInfoResult : public EarthView::World::Core::CAllocatedObject
				{
				public:
					WMTSLayerInfoResult(){};
					~WMTSLayerInfoResult(){};
				public:
					EVString annotationField;	
					CacheMode cacheMode;
					EVString dataTime;
					Envelope envelope;	
					FileFormat fileFormat;
					CacheDataType dataType;
					GeometryType geometryType;
					EVString layerAttributes;
					LayerDataType layerDataType;
					EVString layerDescription;
					EVString layerName;
					ev_int32 maxDataLevel;	
					ev_int32 maxFieldLevel;
					ev_real64 maxScale;	
					ev_int32 minDataLevel;	
					ev_int32 minFieldLevel;	
					ev_real64 minScale;
					ev_int32 quaryable;
					SRS srs;
					EVString styleName;
					EVString updateTime;
					EVString theme;
					ev_int32 tileWidth;	
					ev_int32 tileHeight;

				};

				class EV_DOWNLOAD_DLL WMTSLayerInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					WMTSLayerInfo(EVString& layername);
					~WMTSLayerInfo();
					__WebIn EVString mTileLayerName;
					__WebOut WMTSLayerInfoResult result;
				protected:
				private:
					C_DISABLE_COPY(WMTSLayerInfo);
				};


				class EV_DOWNLOAD_DLL Style: public EarthView::World::Core::CAllocatedObject
				{
				public:
					Style(){};
					~Style(){};

					EVString fieldName;
					double maxValue;
					double minValue;
					EVString  styleName;	
					EVString  uniqueValue;	
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL Theme: public EarthView::World::Core::CAllocatedObject
				{
				public:
					Theme(){};
					~Theme(){};

					EVString  themeName;	
					EVString  fieldName;	
					ThemeType themeType;	
					Style defauleStyle;	
					vector<Style> styleList;
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL CacheLayerInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					CacheLayerInfo()
					{
						maxLevel = 0;
						minLevel = 0;
						srs = Unknown;
					}
					~CacheLayerInfo(){};

					Envelope bbox;
					EVString layerName;
					ev_int32 maxLevel;
					ev_int32 minLevel;
					SRS srs;	
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL Annotation : public EarthView::World::Core::CAllocatedObject
				{
				public:
					ev_bool  isVisible;	
					EVString fieldName;	
					ev_bool isSprite;	
					Font font;

					Annotation()
					{
						isVisible = true;
						isSprite = false;
					}	

				};

				class EV_DOWNLOAD_DLL MapLayerInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					MapLayerInfo()
					{
						layerDataType = layerDataType__Unknown;
						fileFormat = fileFormat__UnKnown;
						geometryType = geometryType__Unknown;
						minScale = 0.0;
						maxScale = 0.0;
						minDataLevel = 0;	
						maxDataLevel = 0;	
						minFieldLevel = 0;	
						maxFieldLevel = 0;	
						hasCache = false;
						srs = Unknown;
					}
					~MapLayerInfo(){};

					EVString layerName;	
					EVString layerDescription;	
					LayerDataType layerDataType;	
					FileFormat fileFormat;
					GeometryType geometryType;	
					ev_real64 minScale;	
					ev_real64 maxScale;	
					ev_int32 minDataLevel;	
					ev_int32 maxDataLevel;	
					ev_int32 minFieldLevel;	
					ev_int32 maxFieldLevel;	
					bool hasCache;
					CacheLayerInfo cacheLayerInfo;	
					SRS srs;	
					Envelope envelope;
					EVString layerAttributes;	
					Style style;
					Theme theme;
					EVString dataTime;	
					EVString updateTime;	
					Annotation annotation;	
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL WMSMapInfoResult : public EarthView::World::Core::CAllocatedObject
				{
				public:
					WMSMapInfoResult()
					{
						srs = Unknown;
						minScale = 0.0;
						maxScale = 0.0;
						layerCount = 0;
					}
					~WMSMapInfoResult()
					{
						vector<MapLayerInfo*>::const_iterator ite = layerList.begin();
						vector<MapLayerInfo*>::const_iterator end_ite = layerList.end();
						while (ite != end_ite)
						{
							EV_DELETE *ite;
							++ite;
						}
						layerList.clear();
					};
				public:
					EVString mapName;
					EVString mapDescription;	
					SRS srs;	
					Envelope envelope;	
					ev_real64 minScale;	
					ev_real64 maxScale;	
					ev_int32 layerCount;	
					vector<MapLayerInfo*>layerList;

				protected:
				private:
				};

				class EV_DOWNLOAD_DLL WMSMapInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					WMSMapInfo(EVString& map);
					~WMSMapInfo();
					__WebIn EVString mapName;
					__WebOut WMSMapInfoResult result;
				protected:
				private:
					C_DISABLE_COPY(WMSMapInfo);
				};

				class EV_DOWNLOAD_DLL WFSLayerInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					WFSLayerInfo(EVString& map);
					~WFSLayerInfo();
					__WebIn EVString mapName;
					__WebOut MapLayerInfo result;
				protected:
				private:
					C_DISABLE_COPY(WFSLayerInfo);
				};

				class EV_DOWNLOAD_DLL KMLObjectInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					KMLObjectInfo(EVString& kmlName);
					~KMLObjectInfo();
					__WebOut EVString kmlName;

					__WebOut ev_real64 east;	
					__WebOut ev_real64 maxAltitude;	
					__WebOut ev_real64 minAltitude;	
					__WebOut ev_real64 north;
					__WebOut ev_real64 south;	
					__WebOut ev_real64 west;	

					ev_bool isValid();
				protected:
				private:
					C_DISABLE_COPY(KMLObjectInfo);
				};

				class EV_DOWNLOAD_DLL GeoCodeObjectInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					GeoCodeObjectInfo(EVString& geocodeName);
					~GeoCodeObjectInfo();
					__WebIn EVString geocodeName;

					__WebOut EVString fieldName;
					__WebOut ev_real64 maxVisibleHeight;	
					__WebOut ev_real64 minVisibleHeight;	
					__WebOut ev_real64 maxLabelHeight;	
					__WebOut ev_real64 minLabelHeight;	
					__WebOut EVString labelDockStyle;
					__WebOut Font font;
					__WebOut Icon icon;

					ev_bool isValid();
				protected:
				private:
					C_DISABLE_COPY(GeoCodeObjectInfo);
				};

				class EV_DOWNLOAD_DLL DEMObjectInfoResult : public EarthView::World::Core::CAllocatedObject
				{
				public:

					DEMObjectInfoResult();
					~DEMObjectInfoResult();
				public:
					ev_int32  samplesPerTile;	
					ev_real64 levelZeroTileSizeDegrees;
					ev_int32 numberLevels;	
					Envelope latLonBoundingBox;
					FileFormat fileFormat;
					LayerDataType demType;	
					CacheMode cacheMode;	
					SRS srs;	
					EVString strDataTime;	
					EVString strUpdateTime;	
					CacheDataType cacheDataType;
					EVString layerName;	
					ev_int32 maxDataLevel;	
					ev_int32 minDataLevel;

					ev_real64 northForZeroLevel;
					ev_real64 southForZeroLevel;
					ev_real64 eastForZeroLevel;
					ev_real64 westForZeroLevel;

					ev_int32 originType;

					ev_bool isValid();
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL DEMObjectInfo : public EarthView::World::Core::CAllocatedObject
				{

				public:
					DEMObjectInfo(EVString& demName);
					~DEMObjectInfo();
					__WebIn EVString demName;
					__WebOut DEMObjectInfoResult result;
				protected:
				private:
					C_DISABLE_COPY(DEMObjectInfo);
				};


				class EV_DOWNLOAD_DLL ImageObjectInfoResult  : public EarthView::World::Core::CAllocatedObject
				{
				public:
					ImageObjectInfoResult();
					~ImageObjectInfoResult();
					ev_bool isValid();
					ev_real64 downRightX;	/* required element of type xsd:double */
					ev_real64 downRightY;	/* required element of type xsd:double */
					ev_real64 imageHeight;	/* required element of type xsd:double */
					EVString imageName;	/* optional element of type xsd:string */
					EVString imageType;	/* optional element of type xsd:string */
					ev_real64 imageWidth;	/* required element of type xsd:double */
					ev_int32 numberOfBand;	/* required element of type xsd:int */
					EVString rasterTime;
					ev_real64 resolutionOfX;	/* required element of type xsd:double */
					ev_real64 resolutionOfY;	/* required element of type xsd:double */
					ev_real64 upLeftX;	/* required element of type xsd:double */
					ev_real64 upLeftY;	/* required element of type xsd:double */
					EVString WKT;	/* optional element of type xsd:string */
				protected:
				private:
				};

				class EV_DOWNLOAD_DLL ImageObjectInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					ImageObjectInfo(EVString& dataname);
					~ImageObjectInfo();
					__WebIn EVString dataName;
					__WebOut ImageObjectInfoResult result;
				protected:
				private:
					C_DISABLE_COPY(ImageObjectInfo);
				};

				class EV_DOWNLOAD_DLL ChartObjectInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					ChartObjectInfo(EVString& dataname);
					~ChartObjectInfo();
					__WebIn EVString dataName;

					ev_bool isValid();
					__WebOut EVString chartName;	/* optional element of type xsd:string */
					__WebOut Envelope envelope;
					__WebOut SRS srs;	/* required element of type xsd:int */
				protected:
				private:
					C_DISABLE_COPY(ChartObjectInfo);
				};


				class EV_DOWNLOAD_DLL NetworkObjectInfo : public EarthView::World::Core::CAllocatedObject
				{
				public:
					NetworkObjectInfo(EVString& dataname);
					~NetworkObjectInfo();
					__WebIn EVString dataName;

					ev_bool isValid();
					__WebOut ev_int32 dataVersion;	/* required element of type xsd:int */
					__WebOut EVString description;	/* optional element of type xsd:string */
					__WebOut ev_bool hasSubDataSet;	/* required element of type xsd:boolean */
					__WebOut EVString name;	/* optional element of type xsd:string */
					__WebOut EVString updateTime;	/* optional element of type xsd:string */
				protected:
				private:
					C_DISABLE_COPY(NetworkObjectInfo);
				};

				class EV_DOWNLOAD_DLL WebLicense : public EarthView::World::Core::CAllocatedObject
				{
				public:
					WebLicense(EVString& key);
					~WebLicense();
					__WebIn EVString key;

					__WebOut EVString value;	
				protected:
				private:
					C_DISABLE_COPY(WebLicense);
				};
				///////////////////////////////////////////////////////////////////////////
				class EV_DOWNLOAD_DLL WebMetadataServiceConnection : public CWebServiceConnection
				{
					friend class CWebManager;
					friend class WebMetadataServiceConnectionImp;
				public:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					WebMetadataServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					~WebMetadataServiceConnection();

					/// <summary>
					/// 设置网络下载插件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setConnectionImp(ConnectionImp* ref_pImp);

					/// <summary>
					/// 断开与web服务器的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_void  closeConnect();

					/// <summary>
					/// 连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_void openConnect();

					/// <summary>
					/// 获取模型数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getModelObjectInfo(ModelObjectInfo& modelObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getModelTemplateObjectInfo(ModelTemplateObjectInfo& modelTemplateObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getServiceFileSet(ServiceFileSet& serviceFileSet);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getWMTSLayerInfo(WMTSLayerInfo& wmtsLayerInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getWMSMapInfo(WMSMapInfo& wmsMapInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getWFSLayerInfo(WFSLayerInfo& wfsLayerInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getKMLObjectInfo(KMLObjectInfo& kmlObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getGeoCodeObjectInfo(GeoCodeObjectInfo& geoCodeObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getDEMObjectInfo(DEMObjectInfo& demObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getImageObjectInfo(ImageObjectInfo& imageObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getChartObjectInfo(ChartObjectInfo& chartObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getNetworkObjectInfo(NetworkObjectInfo& netWorkObjectInfo);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_int32 getWebLicense(WebLicense& webLicense);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getServiceVersion(EVString& version);

				protected:
					WebMetadataServiceConnection();

				private:
					C_DISABLE_COPY(WebMetadataServiceConnection);
					WebMetadataServiceConnectionImp* mpImp;
					class HeartBeat;
					HeartBeat* mpHeartBeat;
					void setGlobeConnectAble(ev_bool connectable);
				};

				///////////////////////////////////////////////////////////////////////////
				class EV_DOWNLOAD_DLL WebMetadataServiceConnectionImp : public ConnectionImp
				{
				public:
					WebMetadataServiceConnectionImp();
					virtual ~WebMetadataServiceConnectionImp();
					virtual ev_int32 getModelObjectInfo(ModelObjectInfo& modelObjectInfo) = 0;
					virtual ev_int32 getModelTemplateObjectInfo(ModelTemplateObjectInfo& modelTemplateObjectInfo) = 0;
					virtual ev_int32 getServiceFileSet(ServiceFileSet& serviceFileSet) = 0;
					virtual ev_int32 getWMTSLayerInfo(WMTSLayerInfo& wmtsLayerInfo) = 0;
					virtual ev_int32 getWMSMapInfo(WMSMapInfo& wmsMapInfo) = 0;
					virtual ev_int32 getWFSLayerInfo(WFSLayerInfo& wfsLayerInfo) = 0;
					virtual ev_int32 getKMLObjectInfo(KMLObjectInfo& kmlObjectInfo) = 0;
					virtual ev_int32 getGeoCodeObjectInfo(GeoCodeObjectInfo& geoCodeObjectInfo) = 0;
					virtual ev_int32 getDEMObjectInfo(DEMObjectInfo& demObjectInfo) = 0;
					virtual ev_int32 getImageObjectInfo(ImageObjectInfo& imageObjectInfo) = 0;
					virtual ev_int32 getChartObjectInfo(ChartObjectInfo& chartObjectInfo) = 0;
					virtual ev_int32 getNetworkObjectInfo(NetworkObjectInfo& netWorkObjectInfo) = 0;
					virtual ev_int32 getWebLicense(WebLicense& webLicense) = 0;
					virtual ev_int32 getServiceVersion(EVString& version) = 0;
				protected:
				private:
				};
			}}}}
#endif