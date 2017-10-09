#ifndef EARTHVIEW_WORLD_ANNOTATIONOPERATORIMPL_COFING_H
#define EARTHVIEW_WORLD_ANNOTATIONOPERATORIMPL_COFING_H
#include "annotation/config.h"
#include "annotation/annotationoperator.h"
#include "databaseutility/sqlquery.h"
#include "databaseutility/sqldatabase.h"
#include "spatialdatabase/databasedatasource.h"
#include "spatialdatabase/sqlstandardization.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{//0.0
class EV_ANNOTATION_EXPORTS CAnnotationOperatorImpl: public EarthView::World::Spatial2D::GeoDataset::CAnnotationOperator
{
	friend class CAnnotationBuilder;
public:
	CAnnotationOperatorImpl(EarthView::World::Core::Database::CSqlDatabase db,
		EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
	virtual ~CAnnotationOperatorImpl();
	
//	virtual ev_bool insertAnnoFeature(EarthView::World::Core::CDataStream &stream);
	
	virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name);
	
	virtual ev_bool deleteDataset(const EVString &name);
	
	virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef();
	
	virtual ev_bool query(EarthView::World::Core::CDataStream &filter,EVString &key); 
	virtual ev_bool endQuery(const EVString &key) ;
	virtual ev_bool getFeature(ev_uint32 id,ev_vector<EarthView::World::Core::CVariant>& values);
	virtual ev_bool updateExtent() ;
	virtual ev_bool getExtent(EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope);
	virtual ev_bool nextFeature(ev_vector<EarthView::World::Core::CVariant>& values,const EVString & key);
	virtual ev_bool addFeature(_in EarthView::World::Core::CDataStream &feature) ;
	virtual ev_bool addFeatures(ev_vector<EVString> fields,
		ev_vector<ev_vector<EarthView::World::Core::CVariant> > values,
		ev_bool bigThanGeomMaxLen = false);
	virtual ev_bool updateFeature(_in EarthView::World::Core::CDataStream &feature) ;
	virtual ev_uint32 getFeatureCount(EarthView::World::Core::CDataStream &filter);
	virtual ev_bool deleteFeature(ev_uint32 id);
	virtual EarthView::World::Core::CVariant max(const EVString &expression);
	virtual EarthView::World::Core::CVariant min(const EVString &expression);
	virtual EVString getUpdateTime();
	virtual ev_uint64 getDataVersion() ;
	virtual ev_bool updataTime() ;
	virtual ev_bool updataDataVersion() ;
	virtual ev_bool startEditing(); 
	virtual ev_bool stopEditing(ev_bool isSave);
	virtual ev_bool Lock();
	virtual ev_bool UnLock();
protected:
	virtual ev_bool createAnnotationDataset(EarthView::World::Core::CDataStream &stream);
private:
	void checkAnnoInfoTable();
	ev_bool containDataset(const EVString & name);
	ev_bool executeMultiSQL(EarthView::World::Core::ev_wstring sql);
ev_private:
	CAnnotationOperatorImpl(EarthView::World::Core::CNameValuePairList* pList);
private:
	EarthView::World::Core::Database::CSqlDatabase m_db;
	EarthView::World::Spatial::GeoDataset::CDatabaseDataSource* mpDataSource;
	EVString mTableSerialNum;
	EVString mName;
	struct QueryInfo
	{
		EarthView::World::Core::Database::CSqlQuery		   q;
		//ev_vector<ev_bool> *indicator;
	};
	EarthView::World::Spatial::GeoDataset::CSqlstandardization				*sqlStd;
	EarthView::World::Core::ev_hashmap<EVString,QueryInfo>    m_queryDict;
	EarthView::World::Core::CReadWriteLock mLock;
};
}}}}

#endif 