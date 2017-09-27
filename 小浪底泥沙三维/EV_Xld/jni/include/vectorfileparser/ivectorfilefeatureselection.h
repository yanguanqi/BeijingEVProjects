#ifndef IVECTORFILEFEATURESELECTION_H
#define IVECTORFILEFEATURESELECTION_H
#include "spatialinterface/ifeatureselection.h"
#include "vectorfileparser/vectorfileparser_config.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class IVectorFileFeatureClass;
class IVectorFileFeatureSelectionPrivate;
class EV_VECTORFILEPARSER_LIB IVectorFileFeatureSelection : public EarthView::World::Spatial::GeoDataset::IFeatureSelection
{
public:
	IVectorFileFeatureSelection(IVectorFileFeatureClass* pFeatureClass);
	~IVectorFileFeatureSelection();
	ev_uint32 getCount() const;
	ev_uint32 getID(ev_uint32 index) const;
	ev_uint32 getIDs(_out ev_uint32 * ids) const;
	ev_int32 findID(ev_uint32 id) const;
	EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(
					EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
	EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(EarthView::World::Spatial::GeoDataset::IQueryFilter* filter) const;
	ev_bool addID(ev_uint32 id);
	ev_uint32 addIDs(ev_uint32 * id,ev_uint32 size);
	ev_uint32 remove(ev_uint32 index,ev_uint32 size);
	ev_uint32 clear();
	ev_void intersect(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
	ev_void difference(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
	ev_void append(const EarthView::World::Spatial::GeoDataset::IFeatureSelection* set);
ev_private:
	IVectorFileFeatureSelection(EarthView::World::Core::CNameValuePairList* pList);
private:
	EVString getRestrictionString() const;
	C_DISABLE_COPY(IVectorFileFeatureSelection);
	mutable vector<ev_uint32> m_ids;
	IVectorFileFeatureClass* m_FeatureClass;
	IVectorFileFeatureSelectionPrivate* m_private;
};
}}}}
#endif