#ifndef _VECTOR_FEATURECLASS_STATISTICIAN_H_H_
#define _VECTOR_FEATURECLASS_STATISTICIAN_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/itableproxy.h"
#include "spatialinterface/ifields.h"


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CVectorFeatureClassOperator;

class CTableProxy : public EarthView::World::Spatial::GeoDataset::ITableProxy
{
public:
	friend class CVectorFeatureClass;
public:
	virtual ~CTableProxy();
	virtual EarthView::World::Core::CVariant max(const EVString &expression);
	virtual EarthView::World::Core::CVariant min(const EVString &expression);
	
	virtual EarthView::World::Core::CVariantArray column(const EVString &fieldName,ev_bool isUnique=false);
	//CVariantArray row(ev_uint32 id);
ev_private:
	CTableProxy(EarthView::World::Core::CNameValuePairList *pList);
protected:
	CTableProxy(CVectorFeatureClassOperator* opr);

private:
	CVectorFeatureClassOperator* m_opr;
	EarthView::World::Spatial::GeoDataset::IFields*					 m_pFieldSet;
};








}}}} // End of Namespace

#endif //_VECTOR_FEATURECLASS_STATISTICIAN_H_H_

