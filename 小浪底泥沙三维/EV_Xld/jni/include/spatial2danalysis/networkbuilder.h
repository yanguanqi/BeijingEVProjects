#ifndef _NETWORK_ANALYSIS_BUILDER_H_H_
#define _NETWORK_ANALYSIS_BUILDER_H_H_

#include "spatial2danalysis/config.h"
#include "core/variant.h"
#include "spatialinterface/ifeatureclass.h"
#include "spatial2danalysis/network_core.h"
#include "spatial2dgeodatabase/networkoperator.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Spatial::GeoDataset;
// using namespace EarthView::World::Spatial2D::GeoDataset;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{

enum EVConnectivityPolicy
{
    CT_ENDPIONT    = 1,
    CT_ANYVERTEX   = 2
};

enum EVDataValueType
{
	VT_FIELD	= 1,
	VT_CONSTANT = 2,
	VT_FUNCTION = 3
};

struct ElevationSetting
{
	String			srcName;
	EVDirectionType direction;
	String			fieldName;
};

struct CNAAttributeSetting
{
	String				m_sourceName;
	EVDirectionType		m_direction;
	EVElementType		m_element;
	EVDataValueType		m_type;
	String				m_value;
};

struct CNAAttribute
{
	String							m_Name;
	CVariant::EVDataType			m_DataType;
	EVUsageType						m_Usage;
	EVUnitType						m_Unit;
	ev_bool							m_IsDefault;
	ev_vector<CNAAttributeSetting>	m_Settings;
};

class CJunction
{
public:
	CJunction(ev_int32 oid,ev_real64 x=0,ev_real64 y=0)
		:nid(oid),x(x),y(y)
	{}
public:
	ev_int32  nid;
	ev_real64 x;
	ev_real64 y;
};

inline bool operator==(const CJunction &lhs,const CJunction &rhs)
{
	return ev_abs(lhs.x-rhs.x)<10e-10 && ev_abs(lhs.y-rhs.y)<10e-10;
	//return lhs.x==rhs.x && lhs.y==rhs.y;
}
inline bool operator<(const CJunction &lhs,const CJunction &rhs)
{
	return lhs.x<rhs.x || !(rhs.x<lhs.x) && lhs.y<rhs.y; 
}


class EV_2DANALYSIS_DLL CNetworkDatasetBuilder : public CAllocatedObject
{
ev_private:
	CNetworkDatasetBuilder(CNetworkOperator *opr);
public:
	~CNetworkDatasetBuilder();
	ev_bool build();

	ev_void setName(const String &name);
	ev_void setSourceFeatureClass(IFeatureClass *fc);
ev_private:
	ev_void addConnectivityPolicy(const String &srcName,const EVConnectivityPolicy& policy);
	ev_void addElevationSetting(const ElevationSetting &elevation);
	ev_void addTurnSource(const String &turn);
	ev_void addAttribute(const CNAAttribute &attr);
	//void setDirector(const EVgsNDSettingDirection &direct);

private:
	ev_void buildAFeature(IFeature* feature);
	ev_void buildAAtrribute(CNAAttribute &attr,
                            IFeature *feature,
                            ev_real64 &dFVal,
							ev_real64 &dTVal);
	ev_void createJunctionFeatureClass();
	ev_void toStream1(CDataStream &stream);
	ev_void toStream2(CDataStream &stream);
ev_private:
	CNetworkDatasetBuilder(CNameValuePairList *pList);

private:
	String								m_name;
	ev_map<String,EVConnectivityPolicy> m_connectivityPolicies;
	ev_vector<ElevationSetting>			m_elevationSettings;
	ev_vector<String>					m_turns;
	ev_vector<CNAAttribute>				m_attributes;
	
	ev_set<CJunction>					m_junctionSet;

	IFeatureClass						*m_pFC;
	CNetworkOperator					*m_opr;

	String								m_current;
};


}}}} // End of Namespaces

#endif //_NETWORK_ANALYSIS_BUILDER_H_H_
