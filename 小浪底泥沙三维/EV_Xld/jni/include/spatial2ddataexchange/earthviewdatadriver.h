#ifndef EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CEARTHVIEWDATADRIVER_H
#define EARTHVIEW_WORLD_SPATIAL_CONVERTOR_CEARTHVIEWDATADRIVER_H
#include "spatial2ddataexchange/datadriver.h"
#include "spatialinterface/ifield.h"


namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				//class CDatabaseVectorSource;

				class CVectorFeatureClass;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				class IFeatureIterator;
				class IFeature;
				class IQueryFilter;
				class IDataSource;
				class IDataSourceFactory;
				class IFields;
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			
			namespace Convertor
			{
				
				/// <summary>
				/// EarthView数据交换驱动
				///导出时到其他数据格式时，字段名为 "EVID" "Shape" "GEOM_LENGTH" "GEOM_AREA"不导出；
				///从其他数据格式导入时，上述字段名改为_1，如_1名称已存在，改为_2，依此类推。
				/// </summary>
				class EV_SPATIAL2DDATAEXCHANGE_DLL CEarthViewDataDriver
					:public EarthView::World::Spatial::Convertor::CDataDriver
				{
				public:
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CEarthViewDataDriver();

					/// <summary>
					/// 写入数据完成
					/// </summary>
					/// <returns></returns>
					virtual ev_void finishWrite();

					/// <summary>
					/// 关闭数据驱动
					/// </summary>
					/// <returns></returns>
					virtual ev_void close();
				
					/// <summary>
					/// 读取第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 read(_in ev_uint32 index,_out EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 写入第n个索引的要素
					/// </summary>
					/// <param name="index">要素索引</param>
					/// <param name="stream">格式化的要素数据流</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 write(_in ev_uint32 index,_in EarthView::World::Core::CDataStream& stream);

					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pPropertySet">数据集参数信息</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					
					/// <summary>
					/// 打开数据驱动
					/// </summary>
					/// <param name="pDataSource">数据源</param>
					/// <param name="datasetname">数据集名称</param>
					/// <param name="mode">操作模式</param>
					/// <param name="param">转换参数</param>
					/// <param name="featurecount">总要素数</param>
					/// <param name="stream">数据结构</param>
					/// <returns>操作结果状态</returns>
					virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource,_in const EVString& dataname,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* ref_param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);

					//virtual ev_int32 open(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					//virtual ev_int32 open(_in const EVString source,_in const EVString format,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
				protected:
					virtual ev_void init(_in const EarthView::World::Spatial::Convertor::CDataExchangeParam* param);

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <returns></returns>
					CEarthViewDataDriver();
					///打开oracle数据源
					virtual ev_int32 openOracle(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_in ev_vector<EVString>& listfieldname,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					///打开oracle数据源
					virtual ev_int32 openOdbc(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_in ev_vector<EVString>& listfieldname,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					///打开oracle数据源
					virtual ev_int32 openSqlite(_in EarthView::World::Spatial::GeoDataset::IPropertySet* pPropertySet,_in EarthView::World::Spatial::Convertor::EVDataExchangeOperateMode mode,_in const EarthView::World::Spatial::Convertor::CDataExchangeParam *param,_in ev_vector<EVString>& listfieldname,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					///从内存流恢复CVectorFeatureClass
					virtual EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* parseFeatureClass(EarthView::World::Core::CDataStream& stream,ev_int64 skipedCount);
					///获取的feature，包括geometry和字段
					virtual ev_bool getOutputFeatures(_in ev_vector<EVString>& listfieldname,_inout ev_uint32& featurecount,_inout EarthView::World::Core::CDataStream& stream);
					///获取导出的featureClass格式
					virtual ev_bool getFeatureClassFormat(EarthView::World::Core::CDataStream& stream,ev_vector<EVString>& listfieldname);
					///删除feature
					virtual ev_void deleteFeature(EarthView::World::Spatial::GeoDataset::IFeature* pFeature);
					///删除featureClass,并将featureClass初始化为NULL
					virtual ev_void deleteFeatureClass();
					///删除feature迭代器,并将其初始化为NULL
					virtual ev_void deleteIterFeature();

					/////////////////////////////////////////////////////////////
					////*	如其他Driver派生此类driver，重载以下类			*////
					////*	适用于由CDatabaseVectorSource封装而来的数据源		*////
					/////////////////////////////////////////////////////////////
					///初始化dataSourceFactory;
					virtual EarthView::World::Spatial::GeoDataset::IDataSourceFactory* initDataSourceFactory();
					///从数据源打开featureClass
					virtual EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* openFeatureClass(_in const EVString& name);
					///检测数据源是否符合规范
					virtual ev_bool checkCompatibleDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pSource);///正确返回true
					///关闭数据源
					virtual ev_void closeDataSource();
					///在第2个字段位置开始写入默认值，返回设置的默认字段个数
					virtual ev_int32 writePreDefaultFieldValues(_in EarthView::World::Spatial::GeoDataset::IFeature* feature);
					///在字段最后追加写入默认值，index为设置默认字段值的起始未知，返回设置的默认字段个数
					virtual ev_int32 writeBehindDefaultFieldValues(_in EarthView::World::Spatial::GeoDataset::IFeature* feature,_in ev_uint32 index);
					///获取前面默认字段的个数
					virtual ev_int32 getPreDefaultFieldsCount();
					///在第2个字段位置开始定义默认字段,返回追加的字段个数
					virtual ev_int32 createPreDefaultFields(_in EarthView::World::Spatial::GeoDataset::IFields* fields);
					///在字段最后追加默认字段定义,返回追加的字段个数
					virtual ev_int32 createBehindDefaultFields(_in EarthView::World::Spatial::GeoDataset::IFields* fields);
				ev_private:
					CEarthViewDataDriver(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					EVString mstrPath;
					EVString mstrName;
					EVString mstrTableName;
	
					ev_uint32 mnIndex;
					//sqlite3* mpHdb;
					EarthView::World::Spatial::GeoDataset::IDataSource* mpDataSource;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* mpDataSourceFactory;
					///通过外部传入的EarthView::World::Spatial::GeoDataset::IDataSource，close时不释放EarthView::World::Spatial::GeoDataset::IDataSource的指针
					ev_bool mbDSRef;

					ev_vector<ev_bool>	m_pFieldFlag;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClass* mpFeatureClass;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* mIterFeatureClass;
					EarthView::World::Spatial::GeoDataset::IQueryFilter* mQueryIter;
					ev_int32 mnFieldCount;///存的实际数目-4
					ev_vector<EarthView::World::Spatial::GeoDataset::EVFieldType> mlistFieldType;
					ev_vector<EVString> mlistFieldName;
					ev_uint32 mnFetchTimes;///
					ev_uint32 mnRecordsPerFetch;///每次获取要素数目
					ev_bool mbFinished;
					ev_vector<const EarthView::World::Spatial::GeoDataset::IFeature*> mlistSaveFeatures;///用于写时批量提交
					friend class CDataDriverFactory;
				};
			}
		}
	}
}
#endif


