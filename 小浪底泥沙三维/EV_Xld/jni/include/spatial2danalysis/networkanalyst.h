#ifndef _NETWORK_ANALYST_ANALYSIS_H_H_
#define _NETWORK_ANALYST_ANALYSIS_H_H_

#include "spatial2danalysis/networkdataset.h"
#include "spatialobject/geometry/coordinate.h"
#include "spatialobject/geometry/geometrycollection.h"


// using namespace EarthView::World::Spatial::Geometry;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

class /*EV_2DANALYSIS_DLL*/ CNALocation
{
};

class EV_2DANALYSIS_DLL CNAPath : public CAllocatedObject
{
public:
	CNAPath();
	~CNAPath();

	ev_void clear();

	ev_void addGeometry(IGeometry* geom);
	IGeometry* getGeometryRef(ev_int32 index);
	ev_int32 count() const;

ev_private:
	CNAPath(CNameValuePairList *pList);
private:
	ev_vector<IGeometry*> route;
//public:
//	ev_vector<ev_uint32> m_eIDs;
//	//IGeomtery *m_path;
//	// DEBUG
//public:
//	ev_list<ev_uint32>  m_points;
//	ev_list<ev_real64>  m_cost;

};

class /*EV_2DANALYSIS_DLL*/ CNAArea
{
};

class EV_2DANALYSIS_DLL CNARouteParam
{
public:
	ev_uint32 m_startID;
	ev_uint32 m_endID;
};

class EV_2DANALYSIS_DLL CNetworkAnalyst : public CAllocatedObject
{
public:
	virtual ~CNetworkAnalyst();
	CNetworkAnalyst(CNetworkDataset	*pND);

	ev_void addLocation(const CCoordinate &location);
	ev_void removeLocation(ev_uint32 idx);
	ev_void clearLocations();
	ev_void reset();
	//ev_bool routeAnalysis(ev_vector<IGeometry*> &route);
	ev_bool routeAnalysis(CNAPath &route);

	ev_real64 getImpedance(ev_uint32 edgeID,ev_bool FT);
ev_private:
	CNAAdjacentTable* getAdjacentTableRef();

ev_private:
	CNetworkAnalyst(CNameValuePairList *pList);
private:
	ev_uint32 getClosestJunction(const CCoordinate &location);

private:
	CNetworkDataset			*m_pDataset;
	ev_uint32				m_costIndex;
	ev_vector<CCoordinate>	m_locations;
	CGeometryCollection		*m_path;
};

}}}} // End of Namespaces



#endif //_NETWORK_ANALYST_H_H_
