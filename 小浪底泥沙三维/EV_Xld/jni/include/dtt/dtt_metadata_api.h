#ifndef DTT_METADATA_API_H
#define DTT_METADATA_API_H
#include "DTT/dtt_global.h"
#include "download/webmetadataserviceconnection.h"

namespace DTT{

	class EV_DTT_DLL MetaDataApi : public EarthView::World::Spatial::Download::WebMetadataServiceConnectionImp
	{
	public:
		MetaDataApi();
		~MetaDataApi();
		ev_int32 getModelObjectInfo(EarthView::World::Spatial::Download::ModelObjectInfo& modelObjectInfo);
		ev_int32 getModelTemplateObjectInfo(EarthView::World::Spatial::Download::ModelTemplateObjectInfo& modelTemplateObjectInfo);
		ev_int32 getServiceFileSet(EarthView::World::Spatial::Download::ServiceFileSet& serviceFileSet);
		ev_int32 getWMTSLayerInfo(EarthView::World::Spatial::Download::WMTSLayerInfo& wmtsLayerInfo);
		ev_int32 getWMSMapInfo(EarthView::World::Spatial::Download::WMSMapInfo& wmsMapInfo);
		ev_int32 getWFSLayerInfo(EarthView::World::Spatial::Download::WFSLayerInfo& wfsLayerInfo);
		ev_int32 getKMLObjectInfo(EarthView::World::Spatial::Download::KMLObjectInfo& kmlObjectInfo);
		ev_int32 getGeoCodeObjectInfo(EarthView::World::Spatial::Download::GeoCodeObjectInfo& geoCodeObjectInfo);
		ev_int32 getDEMObjectInfo(EarthView::World::Spatial::Download::DEMObjectInfo& demObjectInfo);
		ev_int32 getImageObjectInfo(EarthView::World::Spatial::Download::ImageObjectInfo& imageObjectInfo);
		ev_int32 getChartObjectInfo(EarthView::World::Spatial::Download::ChartObjectInfo& chartObjectInfo);
		ev_int32 getNetworkObjectInfo(EarthView::World::Spatial::Download::NetworkObjectInfo& netWorkObjectInfo);
		ev_int32 getWebLicense(EarthView::World::Spatial::Download::WebLicense& webLicense);
		ev_int32 getServiceVersion(EVString& version);
		ev_bool openConnection();
		ev_bool closeConnection();
		ev_void setConnectTimeout(ev_int32 timeout);

	protected:

	private:
	};
}
#endif