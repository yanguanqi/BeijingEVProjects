#ifndef WFSCONNECTION_SOAP_H_
#define WFSCONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/wfsconnection.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{
				class WFSServiceSoapBindingProxyPool;
				class EV_EARTHVIEW_DOWNLOAD_DLL WFSConnectionImp_soap : public EarthView::World::Spatial::Download::WFSConnectionImp
				{
				public:
					WFSConnectionImp_soap();
					~WFSConnectionImp_soap();
					ev_int32 getQueryAttribute(EarthView::World::Spatial::Download::QueryAttribute& queryAttribute);
					ev_int32 getLayerAttributeValue(EarthView::World::Spatial::Download::LayerAttributeValue& layerAttributeValue);
					ev_int32 getUniqueFieldValue(EarthView::World::Spatial::Download::UniqueFieldValue& uniqueFieldValue);
					ev_int32 getLayerFeature(EarthView::World::Spatial::Download::LayerFeature& layerFeature);
					ev_int32 getSearchGeometry(EarthView::World::Spatial::Download::SearchGeometry& serchGeometry);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);

				protected:
					WFSServiceSoapBindingProxyPool* mpPool;
				private:
				};

			}}}}
#endif