#ifndef WMTSCONNECTION_SOAP_H_
#define WMTSCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/wmtsconnection.h"
namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{

				class WMTSServiceSoapBindingProxyPool;

				class EV_EARTHVIEW_DOWNLOAD_DLL WMTSConnectionImp_soap : public EarthView::World::Spatial::Download::WMTSConnectionImp
				{
				public:
					WMTSConnectionImp_soap();
					~WMTSConnectionImp_soap();
					ev_int32 getCapabilities(EarthView::World::Spatial::Download::WMTSCapabilities& capabilities);
					ev_int32 getTile(EarthView::World::Spatial::Download::WMTSTile& tile);
					ev_int32 getFeatureInfo(EarthView::World::Spatial::Download::WMTSFeatureInfo& featureInfo);
					ev_int32 getTileProperty(EarthView::World::Spatial::Download::TileProperty& tileProperty);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

				protected:
					WMTSServiceSoapBindingProxyPool* mpPool;

				private:
				};

			}}}}

#endif