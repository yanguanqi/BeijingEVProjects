#ifndef EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASOURCEFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_GEODATASET_IDATASOURCEFACTORY_H

#include "core/memoryallocatedobject.h"
#include "spatialinterface/config.h"
#include "spatialinterface/idatasource.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{

				class IPropertySet;				
				
				/// <summary>
				/// 数据源工厂接口
				/// </summary>
				class EV_INTERFACE_DLL IDataSourceFactory :
					public EarthView::World::Core::CAllocatedObject
				{
				public:			
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
					virtual ~IDataSourceFactory();
                    /// <summary>
                    /// 返回对应的数据源类型
                    /// </summary>
                    /// <param name=""></param>
                    /// <returns>数据源类型</returns>
					virtual ev_int32 getType() const;
					/// <summary>
					/// 从XML创建数据源对象
					/// </summary>
					/// <param name="xml">xml字符串</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(const EVString& xml);
					/// <summary>
					/// 打开一个存在的数据源
					/// </summary>
					/// <param name="path">路径</param>
					/// <param name="fileName">文件名称</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(const EVString& path,const EVString& fileName);
					/// <summary>
					/// 打开一个存在的数据源
					/// </summary>
					/// <param name="connection">连接字符对</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * openDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
					/// <summary>
					/// 创建一个数据源
					/// </summary>
					/// <param name="path">路径</param>
					/// <param name="fileName">文件名称</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(const EVString& path,const EVString& fileName);
					/// <summary>
					/// 创建一个数据源
					/// </summary>
					/// <param name="connection">连接字符对</param>
					/// <returns>数据源对象</returns>
					virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
					/// <summary>
					/// 销毁一个数据源对象
					/// </summary>
					/// <param name="pDataSource">数据源对象</param>
					/// <returns></returns>
                    virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
					/// <summary>
					/// 判断一个数据源是否存在
					/// </summary>
					/// <param name="pDataSource">数据源对象</param>
					/// <returns></returns>
                    virtual ev_bool existDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const;
					///
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <param name="pList">参数健值对</param>
					/// <returns></returns>
					IDataSourceFactory( EarthView::World::Core::CNameValuePairList *pList );
					///
				protected:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
					IDataSourceFactory();
				private:
					C_DISABLE_COPY(IDataSourceFactory);

				public:
					static ev_void setDefaultDataSourcePath(const EVString& dsPath);
					static EVString getDefaultDataSourcePath();
				private:
					static EVString msDefaultDataSourcePath;
					
				};

				/// <summary>
				/// 数据源创建工厂容器
				/// </summary>
                class EV_INTERFACE_DLL CDataSourceFactoryEnumerator : public EarthView::World::Core::CAllocatedObject
                {
                public:
					/// <summary>
					/// 默认构造函数
					/// </summary>
					/// <returns></returns>
                    CDataSourceFactoryEnumerator();
					/// <summary>
					/// 默认析构函数
					/// </summary>
					/// <returns></returns>
                    ~CDataSourceFactoryEnumerator();
ev_private:
					/// <summary>
					/// 用于封装的构造函数
					/// </summary>
					/// <returns></returns>
                    CDataSourceFactoryEnumerator(EarthView::World::Core::CNameValuePairList* pList);

                public:
					/// <summary>
					/// 静态函数，获取对象单件
					/// </summary>
					/// <returns></returns>
                    static EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* getSingletonPtr();
                    /// <summary>
					/// 静态函数，获取对象单件
					/// </summary>
					/// <returns></returns>
					static EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator& getSingleton();
                protected:
                    static EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* mpSingleton;

                public:
					/// <summary>
					/// 是否存在指定类型的数据源创建工厂
					/// </summary>
					/// <param name="typeOfDataSource">指定数据源类型，用INT表示</param>
					/// <returns>ture，已经存在；false，不存在</returns>
                    ev_bool existDataSourceFactory(ev_int32 typeOfDataSource);
					/// <summary>
					/// 获取指定类型的数据源创建工厂
					/// </summary>
					/// <param name="typeOfDataSource">指定数据源类型，用INT表示</param>
					/// <returns>数据源工厂对象</returns>
                    IDataSourceFactory* getDataSourceFactory(ev_int32 typeOfDataSource);
					/// <summary>
					/// 添加数据源创建工厂
					/// </summary>
					/// <param name="factory">数据源工厂对象</param>
					/// <returns>true，成功添加；false，添加不成功</returns>
                    ev_bool addDataSourceFactory(IDataSourceFactory* ref_factory);
                    /// <summary>
					/// 移除指定类型的数据源创建工厂
					/// </summary>
					/// <param name="typeOfDataSource">指定数据源类型，用INT表示</param>
					/// <returns>true，成功移除；false，移除不成功</returns>
					ev_bool removeDataSourceFactory(ev_int32 typeOfDataSource);
					/// <summary>
					/// 移除数据源创建工厂
					/// </summary>
					/// <param name="factory">数据源工厂对象</param>
					/// <returns>true，成功移除；false，移除不成功</returns>
                    ev_bool removeDataSourceFactory(IDataSourceFactory* factory);
                    /// <summary>
					/// 移除所有数据源创建工厂
					/// </summary>
					/// <returns></returns>
					ev_void clearDataSourceFactory();

                protected:
                    typedef list<IDataSourceFactory*> DataSourceFactorys;
                    DataSourceFactorys mFactorys;
                };
			}
		}
	}
}

#endif
