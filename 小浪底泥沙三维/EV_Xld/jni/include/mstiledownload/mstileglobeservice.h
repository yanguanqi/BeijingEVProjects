#ifndef ev_mstile_globeservice_h_H
#define ev_mstile_globeservice_h_H
#include "mstiledownload/mstiledll.h"
#include "download/globeserviceconnection.h"

namespace MSTile
{
	class EV_MSTILE_DOWNLOAD_DLL MSTileGlobeService : public EarthView::World::Spatial::Download::GlobeServiceConnectionImp
	{
	public:
		MSTileGlobeService();
		virtual ~MSTileGlobeService();
		virtual ev_int32 getKMLFile(EarthView::World::Spatial::Download::KMLFile& kmlfile);
		virtual ev_int32 getDEMFile(EarthView::World::Spatial::Download::DEMFile& demfile);
		virtual ev_int32 getModelDatasetFearures(const EVString& datasetName, EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
		virtual ev_int32 getModelTemplateDatasetFearures(const EVString& datasetName, EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);

		virtual ev_int32 getEntityObject(EarthView::World::Spatial::Download::EntityObject& entityObject);
		virtual ev_int32 getTemplateEntityObject(EarthView::World::Spatial::Download::TemplateEntityObject& entityObject);
		virtual ev_int32 getMesh(EarthView::World::Spatial::Download::MeshObject& meshObject);
		virtual ev_int32 getResource(EarthView::World::Spatial::Download::ResourceObject& resObject);
		virtual ev_int32 getResourceByID(EarthView::World::Spatial::Download::ResourceObject& resObject);
		virtual ev_int32 getTemplateResourceByID(EarthView::World::Spatial::Download::TemplateResourceObject& resObject);
		virtual ev_int32 getOrigTexture(EarthView::World::Spatial::Download::OrigTexture& origTexture);
		virtual ev_int32 modelDBQuery(const EarthView::World::Spatial::Download::WebModelDBQueryParam& queryParam,EarthView::World::Spatial::Download:: WebDBQueryResult& result);

		ev_bool openConnection();
		ev_bool closeConnection();
		ev_void setConnectTimeout(ev_int32 timeout);
	protected:
	private:
	};
}

#endif