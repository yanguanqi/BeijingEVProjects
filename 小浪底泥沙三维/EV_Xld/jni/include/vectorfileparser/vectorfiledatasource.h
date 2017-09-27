#ifndef VECTORFILEDATASOURCE_H
#define VECTORFILEDATASOURCE_H
#include "spatialinterface/idatasource.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class EV_VECTORFILEPARSER_LIB CVectorFileDataSource : public EarthView::World::Spatial::GeoDataset::IFileDataSource
{
	friend class CVectorFileDataSourceFactory;
public:
	~CVectorFileDataSource();
	ev_int32 getType() const;
	ev_bool isValid() const;
	EVString getName() const;
	EVString toXML() const;
	EarthView::World::Spatial::GeoDataset::IDataset * openDataset(_in const EVString& name);
	ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);	
	_extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString &name);
	_extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);
ev_private:
	CVectorFileDataSource(EarthView::World::Core::CNameValuePairList* pList);
protected:
	CVectorFileDataSource(const EVString& name);
private:
	EVString mstrName;
	vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
};
}}}}
#endif