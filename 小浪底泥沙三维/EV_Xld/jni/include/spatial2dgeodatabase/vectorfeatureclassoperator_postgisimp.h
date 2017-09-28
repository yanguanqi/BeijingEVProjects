#ifndef _VECTORFETURECLASSPOSTGISOPERATOR_H_H_
#define _VECTORFETURECLASSPOSTGISOPERATOR_H_H_

#include "spatial2dgeodatabase/vectorfeatureclassoperator.h"
#include "spatialinterface/ispatialreference.h"
#include "spatialinterface/ienvelope.h"
#include "spatialinterface/igeometry.h"
#include "spatialinterface/ifields.h"
#include "databaseutility/sqldatabase.h"
#include "databaseutility/sqlquery.h"
#include "spatialindex/spatialindex2d/spatialindex.h"
#include "spatial2dgeodatabase/feature.h"

namespace EarthView{
	namespace World{
		namespace Spatial2D{
			namespace GeoDataset{

				//class CDatabaseVectorSource;

				class EV_2DGEODATABSE_DLL CVectorFeatureClassPostGisOperator : public CVectorFeatureClassOperator
				{
				public:
					CVectorFeatureClassPostGisOperator(EarthView::World::Core::Database::CSqlDatabase db,
						EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,const EVString& dbType);
					virtual ~CVectorFeatureClassPostGisOperator();
				public:
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() {return m_pDataSource;}
					///////////////////////////////////////////////////
					virtual ev_bool openDataset(EarthView::World::Core::CDataStream &stream,const EVString &name);
					virtual ev_bool createDataset(EarthView::World::Core::CDataStream &stream);
					virtual ev_bool deleteDataset(const EVString &name);
					virtual EVString getFeatureClassName();
					virtual ev_bool getFeature(ev_uint32 id,_out EarthView::World::Core::CDataStream &feature);
					virtual ev_bool getFeature(ev_uint32 id,vector<EarthView::World::Core::CVariant>& values,ev_real64 & lenght,ev_real64 & area,vector<ev_bool>& pos);
					virtual ev_bool deleteFeature(ev_uint32 id);
					virtual ev_uint32 getFeatureCount(EarthView::World::Core::CDataStream &filter);
					virtual ev_bool updateExtent();
					virtual ev_bool getExtent(EarthView::World::Spatial::Geometry::IEnvelope *pEnvelope);
					virtual void* query(EarthView::World::Core::CDataStream &filter);
					virtual ev_bool nextFeature(vector<EarthView::World::Core::CVariant>& values,ev_real64 & lenght,ev_real64 & area,vector<ev_bool>& pos,void * queryData/*,int geometryType=0 */);
					virtual ev_bool select(_out EarthView::World::Core::CDataStream &os, _in EarthView::World::Core::CDataStream &filter);
					virtual ev_bool endQuery(void * queryData);
					virtual ev_uint32 queryCount(_in EarthView::World::Core::CDataStream &filter);


					virtual ev_bool createSpatialIndex(EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param);
					virtual ev_bool rebulidSpatialIndex();
					virtual ev_bool deleteSpatialIndex();

					virtual ev_bool deleteField(ev_int32 index);

					virtual EarthView::World::Core::CVariant max(const EVString &expression);
					virtual EarthView::World::Core::CVariant min(const EVString &expression);
					virtual EarthView::World::Core::CVariantArray getFieldValues(const EVString &fieldName,ev_bool isUnique);
					virtual ev_vector<ev_int32> getFiledTypes()const{return m_fieldTypes ;}
					virtual ev_bool Lock();
					virtual ev_bool UnLock();
					virtual EVString getIdName(){return "gid";}
					virtual EVString getUpdateTime();
					virtual ev_uint64 getDataVersion();
					virtual ev_bool updateTime() ;
					virtual ev_bool updateDataVersion() ;
					virtual ev_bool setSpatialReference(const EarthView::World::Spatial::Geometry::ISpatialReference *sr);
					virtual int getGeomStremType(){return 1;}
				private:
					ev_bool createSpatialIndex2(/*EVSpatialIndexEnum*/ ev_int32 spaIndex, 
						EarthView::World::Core::CDataStream& stream);
					ev_bool executeMultiSQL(EarthView::World::Core::CUnicodeString sql);
					ev_void makeFeatureStream(EarthView::World::Core::Database::CSqlRecord &rec,EarthView::World::Core::CDataStream &stream,vector<ev_bool> *indicator=0);
					ev_void initFeature(EarthView::World::Core::Database::CSqlRecord & rec,vector<EarthView::World::Core::CVariant>& values,ev_real64 & length,ev_real64 & area,vector<ev_bool>& pos,vector<ev_bool>* indicator = 0);
					ev_void initFeature(EarthView::World::Core::Database::CSqlResult * res,vector<EarthView::World::Core::CVariant>& values,ev_real64 & length,ev_real64 & area,vector<ev_bool>& pos,vector<ev_bool>* indicator = 0);
					EVString makeSQLexpression();
					ev_bool buildSpatialGridIndex(ev_real64 gridOneSize,
						ev_real64 gridTwoSize,
						ev_real64 gridThreeSize);
					ev_bool getGridDefaultSize(ev_real64& gridOneSize, ev_real64& gridTwoSize, ev_real64& gridThreeSize);
				private:
					EarthView::World::Core::Database::CSqlDatabase					m_db;
					EVString							m_strDBType;
					/* 数据集名字 */
					EVString							m_Name;
					//数据集表名序列
					EVString                          m_tableSerialNum;
					// GeometryFieldName
					EVString							m_ShapeFieldName;
					///* 数据源对象 */
					EarthView::World::Spatial::GeoDataset::IDataSource*					m_pDataSource;

					ev_int32						m_fieldCount;
					vector<ev_int32>				m_fieldTypes;
					vector<EVString>				m_fieldNames;
					//vector<ev_size_t>			m_indexs;
					//CSqlQuery						m_query;
					struct QueryInfo
					{
						EarthView::World::Core::Database::CSqlQuery		   q;
						vector<ev_bool> *indicator;
						~QueryInfo()
						{
							delete indicator;
						}
					};
					ev_uint32 m_SpatialIndexType;
					EarthView::World::Spatial2D::SpatialIndex::ISpatialIndex * m_SpatialIndex;
					ev_int32						m_nID;
					ev_int32						m_srid;

				};






			}
		}
	}
}


#endif //_VECTORFETURECLASSPOSTGISOPERATOR_H_H_