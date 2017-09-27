#ifndef _NETWORK_ANALYSIS_DATASET_H_H_
#define _NETWORK_ANALYSIS_DATASET_H_H_

#include "spatial2danalysis/config.h"
#include "spatial2danalysis/network_core.h"
#include "spatialinterface/idataset.h"
#include "spatialinterface/ifeatureclass.h"

// using namespace EarthView::World::Spatial::GeoDataset;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace Analyst{


class CNAAdjacentTable;
class CNetworkOperator;

struct /*EV_2DANALYSIS_DLL*/ CNetworkFieldInfo
{
	String							m_Name;
	CVariant::EVDataType			m_DataType;
	EVUsageType						m_Usage;
	EVUnitType						m_Unit;
	ev_bool							m_IsDefault;
};

class CNetworkDatasetElement
{

};

class EV_2DANALYSIS_DLL CNetworkDataset : public IDataset
{
public:
	friend class CNetworkAnalyst;
	~CNetworkDataset();
ev_private:
	CNetworkDataset(CNetworkOperator* opr);
public:
	virtual EVDatasetType getType() const;
	virtual String getName() const;
	virtual ev_uint64 getDataVersion() const;
	virtual String getDescription() const;
	virtual String getUpdateTime() const;
	virtual ev_bool hasSubDataset() const;
	virtual IDataSource* getDataSourceRef() const;
	virtual ev_bool canEdit() const;
	virtual ev_bool isEditing() const;
	virtual ev_bool startEditing(ev_bool withUndo);
	virtual ev_bool stopEditing(ev_bool isSave);
	virtual ev_bool isBeginEditingOperation();
	virtual ev_bool beginEditingOperation();
	virtual ev_bool endEditingOperation(ev_bool isConfirm);
public:
	//
	const IEnvelope * getEnvelope() const;
	IFeatureClass* getJunctionFeatureClass();
	IFeatureClass* getSourceFeatureClass();
	// =-
	//CNetworkDatasetElement getElement();
	
	ev_void fromStream(CDataStream &stream);
ev_private:
	CNAAdjacentTable* getAdjacentTableRef();

private:
	ev_void intial();
ev_private:
	CNetworkDataset(CNameValuePairList *pList);
private:
	String								m_Name;
	String								m_srcName;
	CNAAdjacentTable					*m_pAdjac;
	
	ev_vector<CNetworkFieldInfo>		m_fields;
	ev_vector<ev_vector<ev_real64> >	m_values;

	IFeatureClass		*m_junctionFC;
	IFeatureClass		*m_sourceFC;

	CNetworkOperator	*m_opr;
};

}}}} //End of Namespace


#endif //_NETWORK_DATASET_H_H_
