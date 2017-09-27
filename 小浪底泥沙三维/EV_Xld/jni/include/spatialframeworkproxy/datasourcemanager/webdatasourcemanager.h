#ifndef WEB_DATASOURCE_MANAGER_H__
#define WEB_DATASOURCE_MANAGER_H__
#include "datasourcemanager.h"
namespace EarthView{namespace World{namespace Spatial{namespace GeoDataset{ class IDataSource; }}}}
namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{
				class WebDataSourceManager : public CDataSourceManager
				{
				protected:
					friend class CDataSourceManager;
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					WebDataSourceManager();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ~WebDataSourceManager();

				public:
					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="datasourceURL">数据源连接串</param>
					/// <returns></returns>					
					virtual ev_bool createDataSource(const CDataSourceURL& datasourceURL); 

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源连接串</param>
					/// <returns></returns>
					virtual ev_bool deleteDataSource(const CDataSourceURL& datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源连接串</param>
					/// <returns></returns>					
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
					/// <param name="dataSourceEvent">数据源事件类</param>
					/// <returns></returns>					
					virtual ev_bool closeDataSource(const CDataSourceActiveEvent& dataSourceEvent); 

					/// <summary>
					/// 打开数据集
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool openDataset(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent);


					/// <summary>
					/// 创建数据集
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool createDataset(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool closeDataset(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSourceType">数据源类别</param>
					/// <returns></returns>					
					virtual ev_bool closeAllDatasets(const CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType); 

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool closeAllDatasets(const CDataSourceActiveEvent& dataSourceEvent);

					/// <summary>
					/// 导入
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool importData(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 导出
					/// </summary>
					/// <param name="dataSourceEvent">需要填写完整的数据源url和数据源名称</param>
					/// <param name="dataSetEvent">需要填写数据源类型，数据集类型和数据集名称</param>
					/// <returns></returns>					
					virtual ev_bool exportData(const CDataSourceActiveEvent& dataSourceEvent, const CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 获取打开的数据源列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源列表</returns>					
					virtual const DataSourceActiveEventArr& getDataSourceActiveEventArr();

					/// <summary>
					/// 获取所有内部数据集列表引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					virtual EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getInternalDataSourceActiveEventArr();

					/// <summary>
					/// 获取打开的数据源列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源列表</returns>					
					virtual const DataSourceActiveEventArr& getDataSourceActiveEventArr(const CDataSourceURL& datasourceURL);

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					WebDataSourceManager(ev_int32 t):CDataSourceManager(t)
					{

					}

					/// <summary>
					/// 添加数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_void addDataSourcePtr(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				
					/// <summary>
					/// 获取EVServer数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					static ev_void getEVServerDataset(CDataSourceActiveEvent& datasource, EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, const EVString& sourcename);

					/// <summary>
					/// 获取OGCWMTS数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					static ev_void getOGCWMTSDataset(CDataSourceActiveEvent& datasource, EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, const EVString& sourcename);

					/// <summary>
					/// 获取OGCWMS数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					static ev_void getOGCWMSDataset(CDataSourceActiveEvent& datasource, EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, const EVString& sourcename);

					/// <summary>
					/// 获取OGCWFS数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					static ev_void getOGCWFSDataset(CDataSourceActiveEvent& datasource, EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource, const EVString& sourcename);;
				private:
				};
			}}}}
#endif 
