#ifndef _NETWORK_OPERATOR_DBIMPLEMENT_H_H_
#define _NETWORK_OPERATOR_DBIMPLEMENT_H_H_

#include "spatial2dgeodatabase/config.h"
#include "core/variant.h"
#include "spatialinterface/igeometry.h"
#include "databaseutility/sqldatabase.h"
#include "databaseutility/sqlquery.h"
#include "spatial2dgeodatabase/networkoperator.h"


namespace EarthView
{
    namespace World
    {
        namespace Spatial
        {
            namespace GeoDataset
            {
				class CSqlstandardization;
            }
        }
    }
}


namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CNetworkDBOperator : public CNetworkOperator
{
public:
	CNetworkDBOperator(EarthView::World::Core::Database::CSqlDatabase db,EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
	virtual ~CNetworkDBOperator();
	//=======================================================
	virtual ev_bool beginTransaction();
	virtual ev_bool endTransaction(ev_bool save);

	virtual ev_bool createNetworkDataset(EarthView::World::Core::CDataStream &stream);
	virtual ev_bool insertAFeatureInfo(EarthView::World::Core::CDataStream &stream);

	virtual ev_void setName(EVString &name);
	virtual EVString getName();
	virtual ev_void setNDConnectivityPolicy(const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy);
	virtual ev_uint32 getNDConnectivityPolicy();

	virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name);
	virtual ev_bool deleteDataset(const EVString &name);
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef();

	virtual _extfree EarthView::World::Spatial::Geometry::IGeometry* getGeometry(ev_uint32 edgeID);
	virtual CNANode  getNode(ev_uint32 id);
	virtual CNAEdge  getEdge(ev_uint32 id);
	virtual ev_uint32 getEdgeCount();
	virtual ev_uint32 getNodeCount();
	virtual ev_int32 getMaxHierachy();
	virtual ev_int32 getMinHierachy();
	virtual ev_bool needUpdate();
	virtual ev_bool clearNetworkDirtyRecords(EVString& networkName);
ev_private:
	virtual ev_bool updateNetworkByDeleteRecords(ev_map<EVString,ev_vector<ev_uint32> > deleteFeatureItems,
		const EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy& policy);
	
private:
	ev_int32 createTable(const EarthView::World::Core::ev_wstring& sql);
private:
	/// <summary>
	/// 是否包含数据集
	/// </summary>
	/// <param name="name">指定名称</param>
	/// <returns>成功删除，返回true;否则，返回false</returns>
	ev_bool  containDataset(const EVString &name);
	ev_void initNDEdgeSQL(EVString& attriNames);
private:
	EarthView::World::Core::Database::CSqlDatabase					m_db;
	EarthView::World::Core::Database::CSqlQuery						m_query;
	/* 数据集名字 */
	EVString							m_Name;
	/* 数据集对应表名序列号 */
	EVString							m_tableSerialNum;
	/* 网络数据集联通策略 */
	EarthView::World::Spatial2D::GeoDataset::EVConnectivityPolicy m_ConPolicy;
	///* 数据源对象 */
	EarthView::World::Spatial::GeoDataset::IDataSource*			m_pDataSource;

	EVString							m_prepare;

	EarthView::World::Spatial::GeoDataset::CSqlstandardization				*sqlStd;
	int mdMinLevel;
	int mdMaxLevel;
};

}}}} // End of Namespaces

#endif //_NETWORK_OPERATOR_DBIMPLEMENT_H_H_

