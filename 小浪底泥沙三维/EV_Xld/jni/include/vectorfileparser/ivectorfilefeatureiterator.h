#ifndef IVECTORFILEFEATUREITERATOR_H
#define IVECTORFILEFEATUREITERATOR_H

#include "spatialinterface/ifeatureiterator.h"
#include "spatialinterface/iqueryfilter.h"
#include "vectorfileparser/vectorfileparser_config.h"
/************************************************************************/
/*         从这个类派生的子类的目的是设置保护类成员变量的值,        */
/*         相关方法会在这个类中实现                                               */
/************************************************************************/
namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{
	class CFields;
	class CAttributeQuery;
}}}}
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class IVectorFileFeatureClass;

class EV_VECTORFILEPARSER_LIB IVectorFileFeatureIterator
	: public EarthView::World::Spatial::GeoDataset::IFeatureIterator
{
public:
	virtual ~IVectorFileFeatureIterator();
	virtual EarthView::World::Spatial::GeoDataset::IFeature* next();
	virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const;
	virtual const EarthView::World::Spatial::GeoDataset::IField* getField(ev_uint32 index) const;
	virtual ev_int32 findField(const EVString& fieldName) const;
ev_private:
	IVectorFileFeatureIterator(EarthView::World::Core::CNameValuePairList* pList);
protected:
	IVectorFileFeatureIterator(IVectorFileFeatureClass* pFeatureClass);
	IVectorFileFeatureClass* m_FeatureClass;
	EarthView::World::Spatial::GeoDataset::CFields* m_pFieldSet;
	EarthView::World::Spatial::Geometry::IGeometry* m_pGeometry;
	EarthView::World::Spatial::GeoDataset::EVSpatialQueryRelationType m_nSpatialRelation;
	EarthView::World::Spatial::GeoDataset::CAttributeQuery* m_AttrQuery;
private:
	C_DISABLE_COPY(IVectorFileFeatureIterator);
	EarthView::World::Spatial::GeoDataset::IFeature* m_pFeature;
};
}}}}
#endif