#ifndef IVECTORFILEFEATURE_H
#define IVECTORFILEFEATURE_H
#include "spatialinterface/ifeature.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace Display{
	class ISymbol;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class IVectorFileFeatureClass;
class EV_VECTORFILEPARSER_LIB IVectorFileFeature : public EarthView::World::Spatial::GeoDataset::IFeature
{
	friend class IVectorFileFeatureIterator;
public:
	IVectorFileFeature(IVectorFileFeatureClass* pDataset);
	virtual ~IVectorFileFeature();

	virtual ev_uint32 getID() const;
	virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const;
	virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const;
	ev_uint32 getFieldCount() const;
	virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(ev_uint32 index) const;
	virtual ev_int32 findField(const EVString& fieldName) const;
	virtual ev_void getValue(_out EarthView::World::Core::CVariant & value,ev_uint32 index) const;
	virtual const EarthView::World::Spatial::Geometry::IGeometry * getGeometryRef() const;
	virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
	virtual ev_void setGeometry(const EarthView::World::Spatial::Geometry::IGeometry * geom);
	virtual ev_void setValue(const EarthView::World::Core::CVariant & value,ev_uint32 index);
	virtual ev_bool deleteFeature();
	virtual ev_bool saveFeature();

	//text
	virtual EarthView::World::Spatial::Display::ISymbol* getTextSymbol() const;
	virtual ev_void setTextSymbol(EarthView::World::Spatial::Display::ISymbol* pSymbol);
	EarthView::World::Spatial::GeoDataset::IFeature * clone() const;
ev_private:
	IVectorFileFeature(EarthView::World::Core::CNameValuePairList* pList);
protected:
	IVectorFileFeatureClass* m_VectorFileFeatureClass;
	const EarthView::World::Spatial::Geometry::IGeometry* m_pGeometry;
	const EarthView::World::Spatial::GeoDataset::IFields* m_pFieldSet;
	vector<EarthView::World::Core::CVariant> m_pValueVector;
	mutable ev_int32 m_pOID;
	EarthView::World::Spatial::Display::ISymbol* m_TextSymbol;
	ev_bool m_isBufferFeature;
	ev_bool m_bDirty;
private:
	
	C_DISABLE_COPY(IVectorFileFeature);
};
}}}}
#endif