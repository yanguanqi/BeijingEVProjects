#ifndef DATASOURCE_EVENT_OBJECT_H__
#define DATASOURCE_EVENT_OBJECT_H__

#include "core/object.h"
#include "datasourceurl.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "datasourceactiveevent.h"
#include "datasetactiveevent.h"

namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				class EV_FRAMEWORKPROXY_DLL CDataSourceEventObject : public EarthView::World::Core::CEventObject
				{
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					CDataSourceEventObject(_in EarthView::World::Core::CNameValuePairList *pList){}
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					CDataSourceEventObject();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ~CDataSourceEventObject();

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool deleteDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

					/// <summary>
					/// 删除数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>
					virtual ev_void onDeleteDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);

					/// <summary>
					/// 关闭数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool closeDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

					/// <summary>
					/// 创建模型数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="fields">数据集属性字段</param>
					/// <param name="isTemplate">是否为模板数据集</param>
					/// <param name="coordSysType">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createModelDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,
						const EVString& datasetName, 
						EarthView::World::Spatial::GeoDataset::CFields& fields,
						ev_bool isTemplate,
						ev_int32 coordSysType, 
						ev_int32 coordSys);

					/// <summary>
					/// 创建特效数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="coordsys">坐标系统</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createEffectDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,
						const EVString& datasetName,
						ev_int32 coordsys);

					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="datasourceURL">数据集描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">坐标系统类型</param>
					/// <param name="coordSys">坐标系统值</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createVectorDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,
						const EVString& datasetName, 
						const EarthView::World::Spatial::Geometry::EVGeometryType& type,
						const ev_int32& coordSys,
						EarthView::World::Spatial::GeoDataset::CFields& fields);

					/// <summary>
					/// 创建kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createKmlDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,
						const EVString& datasetName);

					/// <summary>
					/// 添加kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool addKmlDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource, EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataset);

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="sourcetype">数据源类型</param>
					/// <param name="datasettype">数据集类型</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool closeDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL, 
						const EVString& datasetName, 
						EarthView::World::Spatial::GeoDataset::EVDataSourceType sourcetype,
						EarthView::World::Spatial::GeoDataset::EVDatasetType datasettype); 

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasourcetype">数据源类型</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL, EarthView::World::Spatial::GeoDataset::EVDataSourceType datasourcetype);

					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns></returns>					
					ev_void createDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL); 

					/// <summary>
					/// 创建数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onCreateDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);


					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns></returns>					
					ev_void openDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL); 

					/// <summary>
					/// 打开数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onOpenDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);

					/// <summary>
					/// 关闭数据源事件响应函数
					/// </summary>
					/// <param name="dataSourceEvent">事件对象</param>
					/// <returns></returns>					
					ev_bool closeDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent); 

					/// <summary>
					/// 关闭数据源事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onCloseDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);

					/// <summary>
					/// 创建数据集
					/// </summary>
					/// <param name="dataSource">需要新建数据集的数据源</param>
					/// <param name="dataSet">需要新建数据集信息</param>
					/// <returns></returns>					
					ev_void createDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 创建数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onCreateDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);

					/// <summary>
					/// 打开数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onOpenDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);

					/// <summary>
					/// 关闭数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					ev_void closeDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 关闭数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onCloseDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent* pe);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">事件对象</param>
					/// <returns></returns>					
					ev_void closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent);

					/// <summary>
					/// 关闭所有数据集
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSourceType">数据源类别</param>
					/// <returns></returns>
					ev_void closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType); 

					/// <summary>
					/// 关闭所有数据集事件响应函数
					/// </summary>
					/// <param name="pe">事件对象</param>
					/// <returns></returns>					
					virtual ev_void onCloseAllDatasets(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent* pe);

					/// <summary>
					/// 数据导入
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					ev_void importData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 


					/// <summary>
					/// 数据导入响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_void onImportData();

					/// <summary>
					/// 数据导出
					/// </summary>
					/// <param name="dataSourceEvent">数据源事件对象</param>
					/// <param name="dataSetEvent">数据集事件对象</param>
					/// <returns></returns>					
					ev_void exportData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 数据导出响应函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual void onExportData();					

				ev_internal:
					/// <summary>
					/// 事件处理函数
					/// </summary>
					/// <param name="e">事件对象</param>
					/// <returns>成功返回true否则返回false</returns>					
					ev_bool onEvent(_in EarthView::World::Core::CEvent *e);

				protected:

				private:
				};
			}}}}
#endif
