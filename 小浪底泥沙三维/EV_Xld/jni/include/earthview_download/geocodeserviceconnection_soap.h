#ifndef  GEOCODESERVICECONNECTION_SOAP_H_
#define GEOCODESERVICECONNECTION_SOAP_H_
#include "earthview_download/earthview_download_global.h"
#include "download/geocodeserviceconnection.h"

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace EarthViewDownload{
				class GeoCodeServiceServiceSoapBindingProxy;
				class EV_EARTHVIEW_DOWNLOAD_DLL GeoCodeServiceImp_soap : public EarthView::World::Spatial::Download::GeoCodeServiceImp
				{
				public:
					GeoCodeServiceImp_soap();
					~GeoCodeServiceImp_soap();
					ev_int32 getGeoCodeFile(EarthView::World::Spatial::Download::GeoCodeFile& pGeoCodeFile);
					ev_int32 queryPlacename(EarthView::World::Spatial::Download::Placename& pPlaceName);

					ev_bool openConnection();
					ev_bool closeConnection();
					ev_void setConnectTimeout(ev_int32 timeout);
				protected:
					GeoCodeServiceServiceSoapBindingProxy* mpPool;
				private:
				};

			}}}}

#endif