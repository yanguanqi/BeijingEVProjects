#ifndef DTT_GLOBE_API_H
#define DTT_GLOBE_API_H
#include "dtt/dtt_global.h"
#include "download/globeserviceconnection.h"

namespace DTT{

	class EV_DTT_DLL GlobeApi : public EarthView::World::Spatial::Download::GlobeServiceConnectionImp
	{
	public:
		GlobeApi();
		~GlobeApi();
		ev_int32 getKMLFile(EarthView::World::Spatial::Download::KMLFile& kmlfile);
		ev_int32 getDEMFile(EarthView::World::Spatial::Download::DEMFile& demfile);
		ev_int32 getModelDatasetFearures(const EVString& datasetName, EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
		ev_int32 getModelTemplateDatasetFearures(const EVString& datasetName, EarthView::World::Spatial::Download::ModelDatasetFeatures::ModelDatasetFeatureMap& modelDatasetFeatures);
		ev_int32 getEntityObject(EarthView::World::Spatial::Download::EntityObject& entityObject);
		ev_int32 getTemplateEntityObject(EarthView::World::Spatial::Download::TemplateEntityObject& entityObject);
		ev_int32 getMesh(EarthView::World::Spatial::Download::MeshObject& meshObject);
		ev_int32 getResource(EarthView::World::Spatial::Download::ResourceObject& resObject);
		ev_int32 getOrigTexture(EarthView::World::Spatial::Download::OrigTexture& origTexture);
		ev_int32 getResourceByID(EarthView::World::Spatial::Download::ResourceObject& resObject);
		ev_int32 getTemplateResourceByID(EarthView::World::Spatial::Download::TemplateResourceObject& resObject);
		ev_int32 modelDBQuery(const EarthView::World::Spatial::Download::WebModelDBQueryParam& queryParam, EarthView::World::Spatial::Download::WebDBQueryResult& result);
		ev_bool openConnection();
		ev_bool closeConnection();
		ev_void setConnectTimeout(ev_int32 timeout);

	protected:
	private:

	};
}
#endif