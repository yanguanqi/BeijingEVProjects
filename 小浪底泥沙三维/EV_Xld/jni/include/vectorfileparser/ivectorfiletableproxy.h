#ifndef IVECTORFILETABLEPROXY_H
#define IVECTORFILETABLEPROXY_H
#include "vectorfileparser/vectorfileparser_config.h"
#include "spatialinterface/itableproxy.h"
namespace EarthView{namespace World{namespace Spatial{namespace VectorFileParser{
class IVectorFileFeatureClass;
class EV_VECTORFILEPARSER_LIB IVectorFileTableProxy : public EarthView::World::Spatial::GeoDataset::ITableProxy
{
public:
	IVectorFileTableProxy(IVectorFileFeatureClass* pVectorFileFeatureClass);
	~IVectorFileTableProxy();
	EarthView::World::Core::CVariant max(const EVString &expression);
	EarthView::World::Core::CVariant min(const EVString &expression);
	EarthView::World::Core::CVariantArray column(const EVString &fieldName,ev_bool isUnique=false);
ev_private:
	IVectorFileTableProxy(EarthView::World::Core::CNameValuePairList* pList);
private:
	IVectorFileFeatureClass* m_VectorFileFeatureClass;
};
}}}}
#endif