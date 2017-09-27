#ifndef EARTHVIEW_WORLD_SPATIAL_WMSCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_WMSCONNECTION_H
#include "download/downloadglobal.h"
#include "download/webserviceconnection.h"
#include "download/webdatadefine.h"
#include "download/connectionimpplugin.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{

				class WMSConnectionImp;

			class EV_DOWNLOAD_DLL WMSCapabilities : public EarthView::World::Core::CAllocatedObject
			{

			public:
				WMSCapabilities();
				~WMSCapabilities();
				__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(WMSCapabilities)
			};

			class EV_DOWNLOAD_DLL WMSMap : public CBinaryWebData
			{
			public:
				WMSMap(const EVString& layers,
				const EVString& styles,
				 SRS srs,
				 Envelope& bbox,
				ev_int32 width,
				ev_int32 height,
				const EVString& format,
				ev_bool transparent,
				const EVString& bgcolor,
				const EVString& exceptions,
				const EVString& time,
				const EVString& elevation);
				~WMSMap();
			public:
				__WebIn EVString layers;
				__WebIn EVString styles;
				__WebIn SRS srs;
				__WebIn Envelope bbox;
				__WebIn ev_int32 width;
				__WebIn ev_int32 height;
				__WebIn EVString format;
				__WebIn ev_bool transparent;
				__WebIn EVString bgcolor;
				__WebIn EVString exceptions;
				__WebIn EVString time;
				__WebIn EVString elevation;
			protected:
			private:
				C_DISABLE_COPY(WMSMap)
			};

			class EV_DOWNLOAD_DLL WMSFeatureInfo : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WMSFeatureInfo(const EVString& layers,
				SRS& srs,
				Envelope& bbox,
				ev_int32 width,
				ev_int32 height,
				const EVString& format,
				ev_int32 feature_count,
				ev_int32 x,
				ev_int32 y,
				const EVString& exceptions);
				~WMSFeatureInfo();
			public:
				__WebIn EVString layers;
				__WebIn SRS srs;
				__WebIn Envelope bbox;
				__WebIn ev_int32 width;
				__WebIn ev_int32 height;
				__WebIn EVString format;
				__WebIn ev_int32 feature_count;
				__WebIn ev_int32 x;
				__WebIn ev_int32 y;
				__WebIn EVString exceptions;

			__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(WMSFeatureInfo)
			};

			class EV_DOWNLOAD_DLL QueryMap : public CBinaryWebData
			{
			public:
				QueryMap(EVString& layers,
				Symbol& symbol,
				SRS srs,
				Envelope& xmlBBOX,
				ev_int32 width,
				ev_int32 height,
				SearchCondition& searchConditions,
				EVString& strFormat);
				~QueryMap();
			public:
				__WebIn EVString layers;
				__WebIn Symbol symbol;
				__WebIn SRS srs;
				__WebIn Envelope bbox;
				__WebIn ev_int32 width;
				__WebIn ev_int32 height;
				__WebIn SearchCondition searchCondition;
				__WebIn EVString format;
			protected:
			private:
				C_DISABLE_COPY(QueryMap)
			};

			class EV_DOWNLOAD_DLL LayerLegend : public CBinaryWebData
			{
			public:
				LayerLegend(EVString& strLayer,
				ev_int32 legendWidth,
				ev_int32 legendHeight);
				~LayerLegend();
			public:
				__WebIn EVString strLayer;
				__WebIn ev_int32 legendWidth;
				__WebIn ev_int32 legendHeight;
			protected:
			private:
				C_DISABLE_COPY(LayerLegend)
			};

			class EV_DOWNLOAD_DLL ConvertToLngLatParam : public EarthView::World::Core::CAllocatedObject
			{
			public:
				ConvertToLngLatParam(EVString& map,
				SRS& srs,
				Envelope& bbox,
				ev_int32 width,
				ev_int32 height,
				EVString& pointList);
				~ConvertToLngLatParam();
			public:
				__WebIn EVString mmap;
				__WebIn SRS srs;
				__WebIn Envelope bbox;
				__WebIn ev_int32 width;
				__WebIn ev_int32 height;
				__WebIn EVString pointList;

				__WebOut EVString response;
			protected:
			private:
				C_DISABLE_COPY(ConvertToLngLatParam)
			};


			class EV_DOWNLOAD_DLL ChartData : public EarthView::World::Core::CAllocatedObject
			{
			public:
				ChartData(){};
				~ChartData(){};

				__WebIn EVString layer;	/* optional element of type xsd:string */
				__WebIn EVString srs;
				__WebIn EVString bBox;	/* optional element of type xsd:string */
				__WebIn EVString format;	/* optional element of type xsd:string */
				__WebIn ev_int32 width;	/* required element of type xsd:int */
				__WebIn ev_int32 height;	/* required element of type xsd:int */
				__WebIn EVString displayMode;	/* optional element of type xsd:string */
				__WebIn EVString colorMode;	/* optional element of type xsd:string */
				__WebIn EVString symbolMode;	/* optional element of type xsd:string */
				__WebIn EVString isobath;	/* optional element of type xsd:string */
				__WebIn EVString annotationMode;	/* optional element of type xsd:string */

				__WebOut EarthView::World::Core::MemoryDataStreamPtr chartdata;

			protected:
			private:
				C_DISABLE_COPY(ChartData)
			};

			class EV_DOWNLOAD_DLL WmsImageData : public EarthView::World::Core::CAllocatedObject
			{
			public:
				WmsImageData(){};
				~WmsImageData(){};

				__WebIn EVString imageName;	/* optional element of type xsd:string */
				__WebIn EVString bBOX;	/* optional element of type xsd:string */
				__WebIn ev_int32 width;	/* required element of type xsd:int */
				__WebIn ev_int32 height;	/* required element of type xsd:int */
				__WebIn EVString SRS;	/* optional element of type xsd:string */
				__WebIn EVString format;	/* optional element of type xsd:string */

				__WebOut EarthView::World::Core::MemoryDataStreamPtr imagedata;
			protected:
			private:
			};
			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL WMSConnection : public CWebServiceConnection
			{
				friend class CWebManager;
				friend class WMSConnectionImp;
			public:

				WMSConnection(EVString& name, EVString& url, EVString& pluginFile);

				~WMSConnection();

				/// <summary>
				/// 
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
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getCapabilities(WMSCapabilities& capabilities);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getMap(WMSMap& map);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getFeatureInfo(WMSFeatureInfo& featureInfo);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getLayerLegend(LayerLegend& layerLegend);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getQueryMap(QueryMap& queryMap);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 convertToLngLat(ConvertToLngLatParam& convertToLngLatPar);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getChart(ChartData& chartData);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ev_int32 getImage(WmsImageData& imageData);

			protected:
				WMSConnection();

			private:
				C_DISABLE_COPY(WMSConnection);
				WMSConnectionImp* mpImp;
			};

			///////////////////////////////////////////////////////////////////////////
			class EV_DOWNLOAD_DLL WMSConnectionImp : public ConnectionImp
			{
			public:
				WMSConnectionImp();
				virtual ~WMSConnectionImp() = 0;

				virtual ev_int32 getCapabilities(WMSCapabilities& capabilities) = 0;
				virtual ev_int32 getMap(WMSMap& map) = 0;
				virtual ev_int32 getFeatureInfo(WMSFeatureInfo& featureInfo) = 0;
				virtual ev_int32 getLayerLegend(LayerLegend& layerLegend) = 0;
				virtual ev_int32 getQueryMap(QueryMap& queryMap) = 0;
				virtual ev_int32 convertToLngLat(ConvertToLngLatParam& convertToLngLatPar) = 0;
				virtual ev_int32 getChart(ChartData& chartData) = 0;
				virtual ev_int32 getImage(WmsImageData& imageData) = 0;

			protected:
			private:
			};

		}}}}
#endif