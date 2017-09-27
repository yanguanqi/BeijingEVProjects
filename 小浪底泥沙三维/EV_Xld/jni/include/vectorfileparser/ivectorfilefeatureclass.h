#ifndef IVECTORFILEFEATURECLASS_H
#define IVECTORFILEFEATURECLASS_H

#include "vectorfileparser/vectorfileparser_config.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatialinterface/igeometry.h"

namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{

class EV_VECTORFILEPARSER_LIB IVectorFileFeatureClass : public EarthView::World::Spatial::GeoDataset::IFeatureClass
{
public:
	virtual ~IVectorFileFeatureClass();
	virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const;
	virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const;
	virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
	virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
	virtual ev_uint32 getFieldCount() const;
	virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index)const;
	virtual ev_int32 findField(const EVString& fieldName) const;
	virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const;
	virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const;
	virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const;
	virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(ev_uint32 id);
	virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
	virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
	virtual ev_uint32 getFeatureCount(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
	virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex);
	virtual ev_bool rebulidSpatialIndex();
	virtual ev_bool deleteSpatialIndex();
	virtual ev_bool addField(const EarthView::World::Spatial::GeoDataset::IField* field);
	virtual ev_bool deleteField(const EarthView::World::Spatial::GeoDataset::IField* field);
	virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer();
	virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
	virtual ev_uint32 insertFeatureBuffer(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
	virtual ev_bool update(const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
	virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
	virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const;
	virtual ev_bool setSpatialReference( const EarthView::World::Spatial::Geometry::ISpatialReference *sr );
	virtual ev_bool deleteFeature(ev_uint32 id);
	virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy();
	//new interface
	virtual EVString getName() const;
	virtual EVString getDescription() const;
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const;
	virtual ev_bool canEdit() const;
	virtual ev_bool isEditing() const;
	virtual ev_bool startEditing(ev_bool withUndo);
	virtual ev_bool stopEditing(ev_bool isSave);
	virtual ev_bool isBeginEditingOperation();
	virtual ev_bool beginEditingOperation();
	virtual ev_bool endEditingOperation(ev_bool isConfirm);
	virtual ev_uint32 getSubsetCount() const;
	virtual IVectorFileFeatureClass* getSubset(const ev_uint32 index) const;
	virtual ev_bool removeSubset(const ev_uint32 index);
	virtual ev_void resertReading();
	virtual EarthView::World::Spatial::GeoDataset::IFeature* nextFeature(
												EarthView::World::Spatial::GeoDataset::IFeatureIterator* iterator);
	//注记层获取参考比例尺的方法，要素层返回0.0
	virtual ev_real64 getScale();
	virtual ev_void readLock() {}
	virtual ev_void readUnLock() {}
ev_private:
	IVectorFileFeatureClass(EarthView::World::Core::CNameValuePairList* pList);
protected:
	IVectorFileFeatureClass();
private:
	C_DISABLE_COPY(IVectorFileFeatureClass);
};

}}}}
#endif