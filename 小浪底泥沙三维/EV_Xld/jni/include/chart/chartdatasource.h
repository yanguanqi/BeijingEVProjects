#ifndef EARTHVIEW_WORLD_CHART_CCHARTDATASOURCE_H
#define EARTHVIEW_WORLD_CHART_CCHARTDATASOURCE_H
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idataset.h"
#include "chartexports.h"
#include "spatialinterface/idatasetiterator.h"
#include "spatialinterface/idatametainfo.h"
#include "spatialinterface/idatametainfos.h"

namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{	
			namespace GeoDataset
			{
				/// <summary>
				/// 海图数据集类
				/// </summary>
				class CChartDataset;

				/// <summary>
				/// 海图数据操作类
				/// </summary>
				class CChartDatasetOperator;
				class CChartDatasetHeaderInfo;
				/// <summary>
				/// 海图数据源类
				/// </summary>
				class EVCHART_DLL CChartDataSource
					:public EarthView::World::Spatial::GeoDataset::IFileDataSource
				{
				public:
					/// <summary>
					/// 获取海图类型
					/// </summary>
					/// <param name=""></param>
					/// <returns>海图类型</returns>
					virtual ev_int32 getType() const;
					/// <summary>
					/// 打开数据集
					/// </summary>
					/// <param name="name">图层名</param>
					/// <returns>数据集</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataset * openDataset(_in const EVString& name);///name 为图层名称

					ev_bool updateDataset(_in const EVString& name);

					virtual ev_bool closeDataset(EarthView::World::Spatial::GeoDataset::IDataset* pDataset);
					/// <summary>
					/// 获取数据集元信息
					/// </summary>
					/// <param name="name">数据集名</param>
					/// <returns>数据集元信息</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString &name);
					/// <summary>
					/// 获取某一类型的数据集的元信息集合
					/// </summary>
					/// <param name="type">数据集类型</param>
					/// <returns>数据集元信息集合</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type);
					/// <summary>
					/// 当前海图数据源是否可用
					/// </summary>
					/// <param name=""></param>
					/// <returns>可用返回true,否则返回false</returns>
					virtual ev_bool isValid() const
					{
						if(mpOperator)
							return true;
						else
							return false;
					}
					/// <summary>
					/// 获取数据源名
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名</returns>
					virtual EVString getName() const;

					/// <summary>
					/// 序列化字符串
					/// </summary>
					/// <returns>xml格式</returns>
					virtual EVString toXML() const;
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					~CChartDataSource();

				protected:
					CChartDataSource();
					/// <summary>
					/// 拷贝构造
					/// </summary>
					/// <returns></returns>
					CChartDataSource(_in CChartDataSource & datasource);
				ev_private:
					CChartDataSource(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					CChartDatasetOperator* mpOperator;
					EVString mstrName;
					//装载openDataset方法打开的数据集指针
					vector<EarthView::World::Spatial::GeoDataset::IDataset*> m_DatasetList;
				private:
					EarthView::World::Core::CRecursiveMutex mDatasetListLock;
					friend class CChartDataSourceFactory;
				};
				/// <summary>
				/// 海图数据集迭代器
				/// </summary>
				class EVCHART_DLL CChartDatasetIterator
					:public EarthView::World::Spatial::GeoDataset::IDatasetIterator
				{
				public:					
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartDatasetIterator();
					/// <summary>
					/// 下一个数据集对象，如果超出范围，这返回NULL
					/// </summary>
					/// <returns></returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataset * next();
					/// <summary>
					/// 获取迭代器中数据集的个数
					/// </summary>
					/// <returns>数据集的个数</returns>
					virtual ev_uint32 getSize() const;
					/// <summary>
					/// 获取迭代器中数据集的类型
					/// </summary>
					/// <returns></returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					CChartDatasetIterator();
				private:
					/// <summary>
					/// 拷贝构造函数
					/// </summary>
					/// <returns></returns>
					CChartDatasetIterator(_in CChartDatasetIterator & iterator);
				ev_private:
					CChartDatasetIterator(_in EarthView::World::Core::CNameValuePairList* pList);
				protected:
					CChartDataSource* mpDataSource;
					ev_vector<EVString> mlistLayerName;
					ev_uint32 mnIndex;
					ev_uint32 mnCount;
					EarthView::World::Spatial::GeoDataset::EVDatasetType mnType;
					friend class CChartDataSource;
				};
				/// <summary>
				/// 数据集元信息，用于记录数据集的相关信息
				/// </summary>
				class EVCHART_DLL CChartDataMetaInfo
					:public EarthView::World::Spatial::GeoDataset::IDataMetaInfo
				{
					friend class CChartDataSource;
				public:	
					CChartDataMetaInfo();
					/// <summary>
					/// 析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartDataMetaInfo();
				public:
					/// <summary>
					/// 初始化
					/// </summary>
					/// <param name="name">数据名称，内部释放</param>
					/// <param name="env">包围盒，内部释放</param>
					/// <param name="srs">坐标系，内部释放</param>
					/// <param name="info">头信息，内部释放</param>
					/// <returns></returns>
					void init(const EVString name,
						EarthView::World::Spatial::Geometry::IEnvelope* env,
						EarthView::World::Spatial::Geometry::ISpatialReference* srs,
						CChartDatasetHeaderInfo* info);
					/// <summary>
					/// 获取数据集类型
					/// </summary>
					/// <returns>数据集类型</returns>
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const;
					/// <summary>
					/// 获取数据集的名称
					/// </summary>
					/// <returns>数据集的名称</returns>
					virtual EVString getName() const;
					/// <summary>
					/// 获取数据集的范围
					/// </summary>
					/// <returns>内部对象引用，无需释放</returns>
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const;
					/// <summary>
					/// 获取数据集的坐标系统
					/// </summary>
					/// <returns>坐标系统对象</returns>
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const;
					virtual CChartDatasetHeaderInfo* getDetailDescriptionRef();
				ev_private:
					CChartDataMetaInfo(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					C_DISABLE_COPY(CChartDataMetaInfo);
					//CChartDataMetaInfo(_in CChartDataMetaInfo & obj);
					EVString mstrName;
					EarthView::World::Spatial::Geometry::IEnvelope* mpEnv;
					EarthView::World::Spatial::Geometry::ISpatialReference* mpSRS;
					EarthView::World::Spatial::GeoDataset::EVDatasetType mnType;
					CChartDatasetHeaderInfo* mpChartDatasetHeaderInfo;
				};
				/// <summary>
				/// 数据集元信息集合，用于记录数据集的相关信息
				/// </summary>
				class EVCHART_DLL CChartDataMetaInfos
					:public EarthView::World::Spatial::GeoDataset::IDataMetaInfos
				{
				public:				
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~CChartDataMetaInfos();
				public:
					/// <summary>
					/// 获取元信息数目
					/// </summary>
					/// <returns>数据集元信息的数目</returns>
					virtual ev_uint32 getCount() const;
					/// <summary>
					/// 获取指定索引的数据集元信息
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns>按照指定索引范围对象，如果索引超出范围，则抛出异常</returns>
					virtual _extfree EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getInfo(_in ev_uint32 index) const;
					/// <summary>
					/// 添加指定数据集元信息
					/// </summary>
					/// <param name="info">数据集元信息对象</param>
					/// <returns>添加后的索引</returns>
					virtual ev_uint32 add(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* info);
					/// <summary>
					/// 移除指定索引的对象
					/// </summary>
					/// <param name="index">指定索引</param>
					/// <returns></returns>
					virtual ev_uint32 remove(_in ev_uint32 index);
					/// <summary>
					/// 清楚所有对象
					/// </summary>
					/// <returns>清除对象的个数</returns>
					virtual ev_uint32 clear();

					CChartDataMetaInfos(CChartDataSource* source);	

					ev_void getDatasetNames(EarthView::World::Core::StringVector& namelist);
				ev_private:
					CChartDataMetaInfos(_in EarthView::World::Core::CNameValuePairList* pList);
				private:
					CChartDataMetaInfos(_in CChartDataMetaInfos & obj);
					
					CChartDataSource* mpDataSource;
					ev_uint32 mnCount;

					EarthView::World::Core::StringVector mlistLayerName;
					mutable ev_map<EVString,EarthView::World::Spatial::GeoDataset::IDataMetaInfo*> mlistInfos;

					friend class CChartDataSource;
				};
			}
		}
	}
}
#endif

