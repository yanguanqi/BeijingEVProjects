#ifndef WMSCONNECTION_SOAP_H_
#define WMSCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/wmsconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{
				class WMSServiceSoapBindingProxyPool;
				class EV_EARTHVIEW_DOWNLOAD_DLL WMSConnectionImp_soap : public EarthView::World::Spatial::Download::WMSConnectionImp
				{
				public:
					WMSConnectionImp_soap();
					~WMSConnectionImp_soap();
					ev_int32 getCapabilities(EarthView::World::Spatial::Download::WMSCapabilities& capabilities);
					ev_int32 getMap(EarthView::World::Spatial::Download::WMSMap& map);
					ev_int32 getFeatureInfo(EarthView::World::Spatial::Download::WMSFeatureInfo& featureInfo);
					ev_int32 getLayerLegend(EarthView::World::Spatial::Download::LayerLegend& layerLegend);
					ev_int32 getQueryMap(EarthView::World::Spatial::Download::QueryMap& queryMap);
					ev_int32 convertToLngLat(EarthView::World::Spatial::Download::ConvertToLngLatParam& convertToLngLatPar);
					ev_int32 getChart(EarthView::World::Spatial::Download::ChartData& chartData);
					ev_int32 getImage(EarthView::World::Spatial::Download::WmsImageData& imageData);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);
				protected:
				private:
					WMSServiceSoapBindingProxyPool* mpPool;
				};
			}}}}

#endif