#ifndef _NETWORK_OPERATOR__H_H_
#define _NETWORK_OPERATOR__H_H_

#include "spatial2dgeodatabase/config.h"
#include "core/variant.h"

#include "spatialinterface/idatasetoperator.h"
#include "spatial2dgeodatabase/networkanalyst_graph.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CNetworkOperator : public EarthView::World::Spatial::GeoDataset::IDatasetOperator
{
public:
	virtual ~CNetworkOperator()
	{}
public:
	virtual ev_bool beginTransaction()
	{
		return false;
	}
	virtual ev_bool endTransaction(ev_bool save)
	{
		return false;
	}
	virtual ev_bool createNetworkDataset(EarthView::World::Core::CDataStream &stream)
	{
		return false;
	}
	virtual ev_bool insertAFeatureInfo(EarthView::World::Core::CDataStream &stream)
	{
		//--------------Adjacent Table Info--------------
		// From		ID					ev_uint32
		// To		ID					ev_uint32
		// Feature	ID					ev_uint32
		// Source Name					EVString
		//--------------Attribute Info---------------------
		// Field count					ev_size_t
		//---------------Field info-----------------------
		// Name							EVString
		// DataType						ev_int32
		// From DataValue				determined by type
		// To	DataValue				determined by type
		return false;
	}
	virtual ev_void setName(EVString &name){return;}
	virtual EVString getName(){return "";}
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
	virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getGeometry(ev_uint32 edgeID)
	{
		return NULL;
	}
	virtual CNANode  getNode(ev_uint32 id){return CNANode(0);}
	virtual CNAEdge  getEdge(ev_uint32 id){return CNAEdge(0);}
	virtual ev_uint32 getEdgeCount(){return 0;}
	virtual ev_uint32 getNodeCount(){return 0;}
	virtual ev_int32 getMaxHierachy(){return 0;}
	virtual ev_int32 getMinHierachy(){return 0;}
	virtual ev_void initNDEdgeSQL(EVString& attriNames){return;}
	virtual ev_bool clearNetworkDirtyRecords(EVString& networkName){return 0;}
	virtual ev_void setNDConnectivityPolicy(const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy){return;}
	virtual ev_uint32 getNDConnectivityPolicy(){return 0;}
	virtual ev_bool needUpdate() {return false;}
ev_private:
	virtual ev_bool updateNetworkByDeleteRecords(ev_map<EVString,ev_vector<ev_uint32> > deleteFeatureItems,
		const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy){return 0;};

};

}}}} // End of Namespaces

#endif //_NETWORK_OPERATOR_DBIMPLEMENT_H_H_

