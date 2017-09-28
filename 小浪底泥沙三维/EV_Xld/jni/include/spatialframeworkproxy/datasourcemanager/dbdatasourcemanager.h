#ifndef DB_DATASOURCE_MANAGER_H__
#define DB_DATASOURCE_MANAGER_H__
#include "datasourcemanager.h"
namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{
				class  DBDataSourceManager : public CDataSourceManager
				{
				protected:
					friend class CDataSourceManager;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					DBDataSourceManager();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ~DBDataSourceManager();

				public:
					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述对象</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool createDataSource(const CDataSourceURL& datasourceURL); 

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述对象</param>
					/// <returns>成功返回true失败返回false</returns>
					virtual ev_bool deleteDataSource(const CDataSourceURL& datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述对象</param>
					/// <returns>成功返回true失败返回false</returns>				
					virtual ev_bool openDataSource(const CDataSourceURL& datasourceURL); 

					/// <summary>
					/// 是否有图层在被编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_bool haveDatasetInEdit();

					/// <summary>
					/// 关闭数据源
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象，内有数据源描述</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool closeDataSource(const CDataSourceActiveEvent& dataSourceEvent); 


					/// <summary>
					/// 打开数据集
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool openDataset(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent);


					/// <summary>
					/// 创建数据集
					/// </summary>
					/// <param name="dataSource">需要新建数据集的数据源</param>
					/// <param name="dataSet">需要新建数据集信息</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool createDataset(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 
					
					/// <summary>
					/// 移除数据集
					/// </summary>
					/// <param name="datasource">数据源事件对象</param>
					/// <param name="dataset">数据集事件对象</param>
					/// <returns>成功返回true失败返回false</returns>
					virtual ev_bool removeDataset(CDataSourceActiveEvent& datasource, CDatasetActiveEvent& dataset);
				
					/// <summary>
					/// 关闭给定类型数据源的所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSourceType">数据源类型</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool closeAllDatasets(const CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType); 


					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool closeAllDatasets(const CDataSourceActiveEvent& dataSourceEvent);

					/// <summary>
					/// 导入
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool importData(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 导出
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns>成功返回true失败返回false</returns>					
					virtual ev_bool exportData(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 获取所有打开的数据源事件列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>所有打开的数据源事件列表</returns>					
					virtual const DataSourceActiveEventArr& getDataSourceActiveEventArr();

					/// <summary>
					/// 获取所有内部数据集列表引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					virtual EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getInternalDataSourceActiveEventArr();


					/// <summary>
					///  获取给定数据源描述的所有打开的数据源事件列表
					/// </summary>
					/// <param name="datasourceURL">数据源连接串</param>
					/// <returns>所有打开的数据源事件列表</returns>
					virtual const DataSourceActiveEventArr& getDataSourceActiveEventArr(const CDataSourceURL& datasourceURL);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					DBDataSourceManager(ev_int32 t):CDataSourceManager(t)
					{

					}

					/// <summary>
					/// 创建模型数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="attrFields">用户定义的数据集属性表字段</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="isTemplate">是否为模板数据集</param>
					/// <param name="coordSys">坐标系统</param>
					/// <returns>模型数据集元信息对象</returns>					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* createModelDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, 
						const EarthView::World::Spatial::GeoDataset::CFields& attrFields, 
						const EVString& datasetName,
						ev_bool isTemplate,
						ev_int32 coordSys);

					/// <summary>
					/// 创建特效数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="coordsys">坐标系统</param>
					/// <returns>特效数据集元信息对象</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* createEffectDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName,ev_int32 coordsys);

					/// <summary>
					/// 创建栅格数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="coordsys">坐标系统</param>
					/// <returns>栅格数据集元信息对象</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* createRasterDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName,ev_int32 coordsys);

					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">数据集类型</param>
					/// <param name="coordSys">坐标系统</param>
					/// <returns>矢量数据集元信息对象</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* createVectorDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource,
						const EVString& datasetName, 
						EarthView::World::Spatial::Geometry::EVGeometryType type, 
						ev_int32 coordSys,
						const EarthView::World::Spatial::GeoDataset::CFields& attrFields);
					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">数据集类型</param>
					/// <param name="wktCoordSys">坐标系统</param>
					/// <returns>矢量数据集元信息对象</returns>
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* createVectorDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource,
						const EVString& datasetName, 
						EarthView::World::Spatial::Geometry::EVGeometryType type, 
						EVString wktCoordSys,
						const EarthView::World::Spatial::GeoDataset::CFields& attrFields
						);
					/// <summary>
					/// 打开模型数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>模型数据集元信息对象</returns>					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* openModelDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 打开特效数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>特效数据集元信息对象</returns>					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* openEffectDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 打开矢量数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>矢量数据集元信息对象</returns>					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* openVectorDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 打开栅格数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>栅格数据集元信息对象</returns>					
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* openRasterDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);
					
					/// <summary>
					/// 移除模型数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool removeModelDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 移除特效数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool removeEffectDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 移除栅格数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool removeRasterDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);

					/// <summary>
					/// 移除矢量数据集
					/// </summary>
					/// <param name="pdataSource">数据源对象</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool removeVectorDataset(EarthView::World::Spatial::GeoDataset::IDataSource* pdataSource, const EVString& datasetName);
					
					/// <summary>
					/// 解析sqlite数据库连接参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool parseConnectParameter_sqlite(const EVString& connectParameter, 
						EVString& path, 
						EVString& dbname, 
						EVString& username, 
						EVString& passworld, 
						EVString& sourcename);

					/// <summary>
					/// 解析sqlserver数据库连接参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool parseConnectParameter_sqlserver(const EVString& connectParameter, 
						EVString& ip, 
						EVString& port, 
						EVString& username, 
						EVString& passworld, 
						EVString& sourcename);

					/// <summary>
					/// 解析oracle数据流连接参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool parseConnectParameter_oracle(const EVString& connectParameter, 
						EVString& ip, 
						EVString& port, 
						EVString& username, 
						EVString& passworld, 
						EVString& sourcename);	

					/// <summary>
					/// 解析postgis数据库连接参数
					/// </summary>
					/// <param name=""></param>
					/// <returns>成功返回true失败返回false</returns>					
					ev_bool parseConnectParameter_postgis(const EVString& connectParameter, 
						EVString& ip, 
						EVString& port, 
						EVString& username, 
						EVString& passworld, 
						EVString& sourcename);
					//---add end

					/// <summary>
					/// 添加数据源对象
					/// </summary>
					/// <param name="pDataSource">数据源对象</param>
					/// <returns></returns>					
					virtual ev_void addDataSourcePtr(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				private:
				};
			}}}}
#endif
