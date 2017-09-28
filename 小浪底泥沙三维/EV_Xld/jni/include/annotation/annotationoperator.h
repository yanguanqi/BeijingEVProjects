#ifndef EARTHVIEW_WORLD_ANNOTATIONOPERATOR_COFING_H
#define EARTHVIEW_WORLD_ANNOTATIONOPERATOR_COFING_H
#include "annotation/config.h"
#include "spatialinterface/idatasetoperator.h"
#include "spatialinterface/ienvelope.h"

#if EV_PLATFORM == EV_PLATFORM_ANDROID
#	ifdef max
#	undef max
#	endif

#	ifdef min
#	undef min
#	endif
#endif

namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
class CAnnotationOperator: public EarthView::World::Spatial::GeoDataset::IDatasetOperator
{
public:
	virtual ~CAnnotationOperator()
	{}
public:
	
	virtual ev_bool createAnnotationDataset(EarthView::World::Core::CDataStream &stream)
	{
		//-------------------
		// name
		// source name
		// scale
		// spatial reference
		// ...
		//------------------
		return false;
	}
	virtual ev_bool insertAnnoFeature(EarthView::World::Core::CDataStream &stream)
	{
		//-------------------
		// geom
		// feature id
		// text string
		// state 
		// symbol
		//------------------
		return false;
	}
	
	virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name)
	{
		return false;
	}
	virtual ev_bool deleteDataset(const EVString &name)
	{
		return false;
	}
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()
	{
		return false;
	}
	virtual ev_void* query(EarthView::World::Core::CDataStream &filter) {return false;}
	virtual ev_bool endQuery(void* queryData) {return false;}
	virtual ev_bool getFeature(ev_uint32 id,ev_vector<EarthView::World::Core::CVariant>& values){return false;}
	virtual ev_bool updateExtent() {return false;}
	virtual ev_bool getExtent(EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope) {return false;}
	virtual ev_bool nextFeature(ev_vector<EarthView::World::Core::CVariant>& values,void* queryData){return false;}
	virtual ev_bool addFeature(_in EarthView::World::Core::CDataStream &feature) {return false;}
	virtual ev_bool addFeatures(ev_vector<EVString> fields,
		ev_vector<ev_vector<EarthView::World::Core::CVariant> > values,
		ev_bool bigThanGeomMaxLen = false) {return false;}
	virtual ev_bool updateFeature(_in EarthView::World::Core::CDataStream &feature) {return false;}
	virtual ev_uint32 getFeatureCount(EarthView::World::Core::CDataStream &filter) { return 0;}
	virtual ev_bool deleteFeature(ev_uint32 id){ return false;}
	virtual EarthView::World::Core::CVariant max(const EVString &expression)
	{
		return EarthView::World::Core::CVariant();
	}
	virtual EarthView::World::Core::CVariant min(const EVString &expression)
	{
		return EarthView::World::Core::CVariant();
	}
	virtual EVString getUpdateTime(){return "unknown";}
	virtual ev_uint64 getDataVersion() {return 1;}
	virtual ev_bool updataTime() {return false;}
	virtual ev_bool updataDataVersion() {return false;}
	virtual ev_bool Lock()
	{
		return false;
	}
	virtual ev_bool UnLock()
	{
		return false;
	}
	virtual ev_bool startEditing(){return false;}
	virtual ev_bool stopEditing(ev_bool isSave){return false;}
};
}}}}

#endif 