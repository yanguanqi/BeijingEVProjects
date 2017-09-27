#ifndef _NETWORK_OPERATOR_DBIMPLEMENT_H_H_
#define _NETWORK_OPERATOR_DBIMPLEMENT_H_H_

#include "spatial2dgeodatabase/config.h"
#include "core/variant.h"
#include "spatial2dgeodatabase/network_core.h"
#include "databaseutility/sqldatabase.h"
#include "databaseutility/sqlquery.h"
#include "spatial2dgeodatabase/networkoperator.h"

// using namespace EarthView::World::Core;
// using namespace EarthView::World::Core::Database;

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

class CNetworkDBOperator : public CNetworkOperator
{
public:
	CNetworkDBOperator(CSqlDatabase db,IDataSource* pDataSource);
	virtual ~CNetworkDBOperator();
	//=======================================================
	virtual ev_bool beginTransaction();
	virtual ev_bool endTransaction(ev_bool save);

	virtual ev_bool createNetworkDataset(CDataStream &stream);
	virtual ev_bool insertAFeatureInfo(CDataStream &stream);

	virtual ev_bool openDataset(CDataStream &stream,const String &name);
	virtual ev_bool deleteDataset(const String &name);
	virtual IDataSource* getDataSourceRef();

private:
	CSqlDatabase					m_db;
	CSqlQuery						m_query;
	/* 数据集名字 */
	String							m_Name;
	///* 数据源对象 */
	IDataSource*					m_pDataSource;

	String							m_prepare;
};

}}}} // End of Namespaces

#endif //_NETWORK_OPERATOR_DBIMPLEMENT_H_H_
