#ifndef ATTRIBUTEQUERY_H
#define ATTRIBUTEQUERY_H

#include "core/memoryallocatedobject.h"
#include "spatialdatabase/spatialdatabaseconfig.h"

namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{
class IFields;
class IFeature;
class EV_SPATIALDATABASE_DLL CAttributeQuery : public EarthView::World::Core::CAllocatedObject
{
public:
	CAttributeQuery();
	~CAttributeQuery();

	ev_bool Compile( EarthView::World::Spatial::GeoDataset::IFields* pFields, const ev_char* pExpression);
	ev_bool Evaluate( EarthView::World::Spatial::GeoDataset::IFeature* pFeature);
ev_private:
	CAttributeQuery(EarthView::World::Core::CNameValuePairList* pList);
private:
	C_DISABLE_COPY(CAttributeQuery);
	EarthView::World::Spatial::GeoDataset::IFields* m_Fields;
	ev_void* mRootNode;
};
}}}}
#endif