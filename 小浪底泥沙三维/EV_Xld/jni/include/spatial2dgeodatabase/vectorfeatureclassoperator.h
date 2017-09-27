#ifndef _VECTORFETURECLASSOPERATOR_H_H_
#define _VECTORFETURECLASSOPERATOR_H_H_

#include "spatial2dgeodatabase/config.h"
#include "spatialinterface/idatasetoperator.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifield.h"
#include "spatialinterface/ifields.h"
#include "spatialinterface/iqueryfilter.h"
#include "spatialinterface/ifeature.h"
#include "spatialinterface/ifeatureclass2.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{


class CVectorFeatureClassOperator : public EarthView::World::Spatial::GeoDataset::IDatasetOperator
{
public:
	virtual ~CVectorFeatureClassOperator()
	{}
public:

	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() {return NULL;}
	//=============================================================
	virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name){ return false;}
	virtual ev_bool createDataset(_in EarthView::World::Core::CDataStream &stream){ return false;}
	virtual ev_bool deleteDataset(const EVString &name){ return false;}

	virtual ev_bool addFeature(_in EarthView::World::Core::CDataStream &feature) {return false;}
	virtual ev_bool addFeatures(ev_vector<EVString>& fields,
		ev_vector<ev_vector<EarthView::World::Core::CVariant> >& values,
		ev_bool bigThanGeomMaxLen = false) {return false;}
	virtual ev_bool getFeature(ev_uint32 id,_out EarthView::World::Core::CDataStream &feature) {return false;}
	virtual ev_bool getFeature(ev_uint32 id,ev_vector<EarthView::World::Core::CVariant>& values,ev_real64 & lenght,ev_real64 & area,ev_vector<ev_size_t>& pos){return false;}
	virtual ev_bool updateFeature(_in EarthView::World::Core::CDataStream &feature) {return false;}
	virtual ev_uint32 getFeatureCount(EarthView::World::Core::CDataStream &filter) { return 0;}
	virtual ev_bool deleteFeature(ev_uint32 id){ return false;}
	
	virtual ev_bool updateExtent() {return false;}
	virtual ev_bool getExtent(EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope) {return false;}

	virtual ev_bool query(EarthView::World::Core::CDataStream &filter,EVString &key) {return false;}
	virtual ev_bool nextFeature(EarthView::World::Core::CDataStream &stream,const EVString &key) {return false;}
	virtual ev_bool nextFeature(ev_vector<EarthView::World::Core::CVariant>& values,ev_real64 & lenght,ev_real64 & area,ev_vector<ev_size_t>& pos,const EVString & key){return false;}
	virtual ev_bool select(_out EarthView::World::Core::CDataStream &os, _in EarthView::World::Core::CDataStream &filter) {return false;}
	virtual ev_bool endQuery(const EVString &key) {return false;}
	virtual ev_uint32 queryCount(_in EarthView::World::Core::CDataStream &filter){ return 0;}

	virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param){ return false;}
	virtual ev_bool rebulidSpatialIndex(){ return false;}
	virtual ev_bool deleteSpatialIndex(){ return false;}
	
	virtual EVString getUpdateTime(){return "unknown";}
	virtual ev_uint64 getDataVersion() {return 1;}
	virtual ev_bool updateTime() {return false;}
	virtual ev_bool updateDataVersion() {return false;}

	virtual ev_bool addField(const EarthView::World::Spatial::GeoDataset::IField* field){return false;}
	virtual ev_bool deleteField(ev_int32 index){return false;}

	virtual ev_bool setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference *sr) {return false;}

	virtual EarthView::World::Core::CVariant max(const EVString &expression)
	{
		return EarthView::World::Core::CVariant();
	}
	virtual EarthView::World::Core::CVariant min(const EVString &expression)
	{
		return EarthView::World::Core::CVariant();
	}
	virtual EarthView::World::Core::CVariantArray getFieldValues(const EVString &fieldName,ev_bool isUnique)
	{
		return EarthView::World::Core::CVariantArray();
	}

	virtual ev_bool Lock()
	{
		return false;
	}
	virtual ev_bool UnLock()
	{
		return false;
	}

protected:                                                   
	CVectorFeatureClassOperator()
	{}


};





}
}
}
}


#endif //_VECTORFETURECLASSOPERATOR_H_H_

