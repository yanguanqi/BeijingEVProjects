#ifndef DATASOURCE_NAMAGER_H__
#define DATASOURCE_NAMAGER_H__
#include "core/memoryallocatedobject.h"
#include "core/stringinterface.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "spatialframeworkproxy/datasourcemanager/datasourceactiveevent.h"
#include "chart/chartdatasourcefactory.h"
#include "spatial2dgeodatabase/databasevectorsourcefactory.h"
#include "spatial3ddataset/effectdatasourcefactory.h"
#include "spatial3ddataset/modeldatasourcefactory.h"
#include "spatial3dengine/kmldatasourcefactory.h"
#include "spatialserverclient/datasourceserverfactory.h"
#include "rasterdataset/rasterdatasource.h"

// using namespace EarthView::World::Spatial3D::ModelManager;

namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace GeoDataset{
				class IDataSource;
			}}}}

namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				class FileDataSourceManager;
				class DBDataSourceManager;
				class WebDataSourceManager;
				class DataSourceProjectListener;

				class EV_FRAMEWORKPROXY_DLL DataSourceActiveEventArr : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				private:
					InternalList mList;
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					DataSourceActiveEventArr();
				ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					DataSourceActiveEventArr(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back( _in  EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& operator[](_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& at(_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent const &at(_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};

				class EV_FRAMEWORKPROXY_DLL DataSourceURLStructArr : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct> InternalList;
					typedef InternalList::iterator iterator;
					typedef InternalList::const_iterator const_iterator;
					typedef InternalList::reverse_iterator reverse_iterator;
					typedef InternalList::const_reverse_iterator const_reverse_iterator;
					typedef InternalList::reference reference;
					typedef InternalList::const_reference const_reference;
					typedef InternalList::value_type value_type;
					RESERVE_CONTAINER_FUNCTION_VECTOR(mList);			///保留部分容器的函数(与参数类型和返回值无关的函数，如begin/end)
				private:
					InternalList mList;
				public:
					DataSourceURLStructArr();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					DataSourceURLStructArr(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back( _in  EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct const &t);
					/// <summary>
					/// 删除容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void pop_back();
					/// <summary>
					/// 返回容器首个元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器首个元素</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct const &t);
					/// <summary>
					/// 删除容器中间位置元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <returns></returns>
					void remove(_in ev_size_t pos);
					/// <summary>
					/// 返回容器是否为空
					/// </summary>
					/// <param name=""></param>
					/// <returns>容器为空返回true，否则false</returns>
					ev_bool empty() const;
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& operator[](_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct& at(_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURLStruct const &at(_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回元素的数量大小
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回元素的数量大小</returns>
					ev_size_t size() const;
					/// <summary>
					/// 改变容器中元素数量大小
					/// </summary>
					/// <param name="newSize">改变的容器中元素数量大小</param>
					/// <returns></returns>
					void resize(_in ev_size_t newSize);
					/// <summary>
					/// 改变容器中最小的元素容纳数量
					/// </summary>
					/// <param name="count">最小的元素容纳数量</param>
					/// <returns></returns>
					void reserve(_in ev_size_t count);
					/// <summary>
					/// 清空所有元素
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					void clear();
				};

				class EV_FRAMEWORKPROXY_DLL CDataSourceManager : public EarthView::World::Core::CAllocatedObject
				{
				private:
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *ms_Singleton;
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">参数键值对</param>
					/// <returns></returns>					
					CDataSourceManager(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					CDataSourceManager();

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ~CDataSourceManager();

					/// <summary>
					/// 获取单件对象
					/// </summary>
					/// <param name=""></param>
					/// <returns>单件对象</returns>					
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager& getSingleton();

					/// <summary>
					/// 获取单件对象指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>单件对象指针</returns>					
					static EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager* getSingletonPtr();

					//--------------------------------------------------------------------------------------------------
					
					/// <summary>
					/// 创建数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool createDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL); 					

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool deleteDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

					/// <summary>
					/// 打开数据源
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <returns>成功返回true否则返回false</returns>
					virtual ev_bool openDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

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
					ev_bool createEffectDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,const EVString& datasetName,ev_int32 coordsys);

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
						EarthView::World::Spatial::GeoDataset::CFields& attrFields);
					/// <summary>
					/// 创建矢量数据集
					/// </summary>
					/// <param name="datasourceURL">数据集描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <param name="type">坐标系统类型</param>
					/// <param name="wktCoordSys">wkt坐标系</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createVectorDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,
						const EVString& datasetName, 
						const EarthView::World::Spatial::Geometry::EVGeometryType& type,
						const EVString& wktCoordSys,
						EarthView::World::Spatial::GeoDataset::CFields& attrFields);
					/// <summary>
					/// 创建kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool createKmlDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,const EVString& datasetName);

					/// <summary>
					/// 添加kml数据集
					/// </summary>
					/// <param name="datasourceURL">数据源描述</param>
					/// <param name="datasetName">数据集名称</param>
					/// <returns>成功返回true否则返回false</returns>
					ev_bool addKmlDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL,const EVString& datasetPath);

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
					/// 获取打开的数据库数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的数据库数据源描述列表</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr getDBDataSourceArr();

					/// <summary>
					/// 获取打开的文件数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的文件数据源描述列表</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr getFileDataSourceArr();

					/// <summary>
					/// 获取打开的网络数据源描述列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>打开的网络数据源描述列表</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceURLStructArr getWebDataSourceArr();
					//--------------------------------------------------------------------------------------------------

				public:

					/// <summary>
					/// 关闭一个数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool closeDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent); 
					
					/// <summary>
					/// 打开一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool openDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent);

					/// <summary>
					/// 创建一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool createDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 关闭一个数据集
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSetEvent">请求事件对象（用户需要填写数据源类型，数据集类型和数据集名称）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool closeDataset(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 关闭指定类型的所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <param name="dataSourceType">需要关闭的数据源类型</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::Spatial::GeoDataset::EVDataSourceType dataSourceType); 

					/// <summary>
					/// 通过数据源别名获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual EVString getDataSourceName(const EVString& aliasName);

					/// <summary>
					/// 关闭所有数据源
					/// </summary>
					/// <param name="dataSourceEvent">请求事件对象（用户需要设置对象的URL和事件对象的类型）</param>
					/// <returns>成功返回true,失败返回false</returns>					
					virtual ev_bool closeAllDatasets(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent);

					/// <summary>
					/// 导入数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_bool importData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 导出数据
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_bool exportData(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& dataSourceEvent, const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataSetEvent); 

					/// <summary>
					/// 获取所有数据集列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr();
					
					/// <summary>
					/// 获取所有内部数据集列表引用
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据集列表</returns>					
					virtual EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getInternalDataSourceActiveEventArr();

					/// <summary>
					/// 获取指定数据源的数据集列表
					/// </summary>
					/// <param name="datasourceURL">数据源URL</param>
					/// <returns>数据集列表</returns>					
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr& getDataSourceActiveEventArr(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& datasourceURL);

					/// <summary>
					/// 发送事件
					/// </summary>
					/// <param name="pEvent">事件对象</param>
					/// <returns></returns>					
					static ev_void sendActiveEvent(EarthView::World::Core::CEvent* pEvent);

					/// <summary>
					/// （用户）触发显示模型库管理事件。
					/// </summary>
					/// <param name="dataSourceName">数据源名称。</param>
					/// <returns></returns>
					ev_void showModelManager(const EVString& dataSourceName);

					/// <summary>
					/// （用户）触发显示特效库管理事件。
					/// </summary>
					/// <param name="dataSourceName">数据源名称。</param>
					/// <returns></returns>
					ev_void showEffectManager(const EVString& dataSourceName);

					enum CopyRetCode
					{
						CopySuccess,
						CopyFailed,
					};

					/// <summary>
					/// （用户）将一个数据集从一个数据源复制到另一个数据源。
					/// </summary>
					/// <param name="sourceSourceName">源数据源名称。</param>
					/// <param name="dsName">源数据源名称。</param>
					/// <param name="targetSourceName">目标数据源名称。</param>
					/// <returns>CopyRetCode。</returns>
					ev_int32 copyDataSetTo(const EVString& sourceSourceName, const EVString& dsName,
						const EVString& targetSourceName);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setLastErrorString(const EVString& error);

					/// <summary>
					///  获取错误描述
					/// </summary>
					/// <returns>错误描述</returns>
					EVString getLastErrorString() const;

					//------------其它接口--------------------------------------------------------------------------------------
					/// <summary>
					/// 获取模型数据源路径
					/// </summary>
					/// <param name="modelDataSourceName">模型数据源名称</param>
					/// <returns></returns>					
					EVString getModelDataSourcePath(const EVString& modelDataSourceName);

					/// <summary>
					/// 获取数据库数据源URL
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL getDBDataSourceURL(const EVString& datasourcename);

					/// <summary>
					/// 删除数据集，只对数据库和文件型数据集有效
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>	
					ev_bool deleteDataset( const EVString& dataSourceAliasName, const EVString& datasetName );

				protected:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					CDataSourceManager(ev_int32 t);

					/// <summary>
					/// 添加数据源
					/// </summary>
					/// <param name="datasource">数据源事件对象</param>
					/// <returns></returns>					
					virtual ev_void addDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource);

					/// <summary>
					/// 删除数据源
					/// </summary>
					/// <param name="datasource">数据源事件对象</param>
					/// <returns></returns>					
					ev_void removeDataSource(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setDataSourceClose(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource);

					/// <summary>
					/// 添加数据源
					/// </summary>
					/// <param name="datasource">数据源事件对象</param>
					/// <param name="dataset">数据集事件对象</param>
					/// <returns></returns>					
					ev_void addDatasetActiveEvent(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource, EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataset);

					/// <summary>
					/// 移除数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void removeDatasetActiveEvent(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource, EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataset);

					/// <summary>
					/// 移除数据集
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_bool removeDataset(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceActiveEvent& datasource, EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& dataset);

					/// <summary>
					/// 判断给定名称的数据源是否打开
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_bool haveRepeatedDataSource(const EVString& url);
					virtual ev_bool haveRepeatedDataSource(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& url);

					/// <summary>
					/// 判断给定名称的数据源和数据集是否打开
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_bool haveRepeatedDataSet(const EVString& sourcename, const EVString& setname);

					/// <summary>
					/// 添加数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					virtual ev_void addDataSourcePtr(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

					/// <summary>
					/// 是否有图层在被编辑
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool haveDatasetInEdit();

					/// <summary>
					/// 清理数据源
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_bool clearDataSourceArr();
										
					EarthView::World::FrameWorkProxy::DataSourceManager::DataSourceActiveEventArr mDataSourceArr;
					friend class DataSourceProjectListener;
					DataSourceProjectListener* mpDataSourceProjectListener;
					EVString mErrorMsg;
				private:
					FileDataSourceManager* mpFileDataSourceManager;
					DBDataSourceManager* mpDBDataSourceManager;
					WebDataSourceManager* mpWebDataSourceManager;

					//--------------------------------------------------------------------------------------------------
					//--------------------------------------------------------------------------------------------------
				public:
					// <summary>
					// string interface
					// </summary>
					class EV_FRAMEWORKPROXY_DLL CDataSourcePropertyStringInterface :  public EarthView::World::Core::CStringInterface
					{
ev_private:
						/// <summary>
						/// 
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>						
						CDataSourcePropertyStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">指向外部类的指针</param>
						/// <returns></returns>
						CDataSourcePropertyStringInterface(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *ref_parent);
					protected:
					private:
					};

					// <summary>
					// string interface
					// </summary>
					class EV_FRAMEWORKPROXY_DLL CDataSetPropertyStringInterface :  public EarthView::World::Core::CStringInterface
					{
ev_private:
						/// <summary>
						/// 
						/// </summary>
						/// <param name=""></param>
						/// <returns></returns>						
						CDataSetPropertyStringInterface(_in EarthView::World::Core::CNameValuePairList *pList);
					public:
						/// <summary>
						/// 构造函数
						/// </summary>
						/// <param name="parent">指向外部类的指针</param>
						/// <returns></returns>
						CDataSetPropertyStringInterface(EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager *ref_parent);
					protected:
					private:
					};

					/// <summary>
					/// 获得数据源属性内部类的指针
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回内部类的指针</returns>
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface *getDataSourcePropertyStringInterfacePtr();

					/// <summary>
					/// 获取数据集属性内部类指针
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface *getDataSetPropertyStringInterfacePtr();

					// <summary>
					// 数据源名字
					// </summary>
					class CCmdDataSourceName : public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据源类型
					// </summary>
					class CCmdDataSourceType: public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据源连接字符串
					// </summary>
					class CCmdDataSourceConnectString: public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据集类型
					// </summary>
					class CCmdDataSetType: public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据集名字
					// </summary>
					class CCmdDataSetName: public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据集坐标系统
					// </summary>
					class CCmdDataSetCoordSys: public EarthView::World::Core::CParamCommand
					{
					public:
						EVString doGet(const void *target) const;
					};

					// <summary>
					// 数据源树节点的类型
					// </summary>
					enum SelectedDataSourceType
					{
						SDST_NoSelected,
						SDST_FileDataSourceRootItem,
						SDST_DBDataSourceRootItem,
						SDST_WebDataSourceRootItem
					};
	
					/// <summary>
					/// 数据源树节点点击响应
					/// </summary>
					/// <param name="datasourcename">数据源名称</param>
					/// <param name="datasourcetype">数据源类别</param>
					/// <returns></returns>					
					ev_void showDataSourceProperty(const EVString& datasourcename, EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType datasourcetype);

					/// <summary>
					///  数据集树节点点击响应
					/// </summary>
					/// <param name="datasourcename">数据源名称</param>
					/// <param name="datasourcetype">数据源类别</param>
					/// <param name="datasetname">数据集名</param>
					/// <returns></returns>
					ev_void showDataSetProperty(const EVString& datasourcename, EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType datasourcetype, const EVString& datasetname);

				protected:
					/// <summary>
					/// 返回被点击的节点的属性
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					EVString getSelectedDataSourceName() const;
					EVString getSelectedDataSourceType() const;
					EVString getSelectedDataSourceConnectionString() const;
					EVString getSelectedDataSetName() const;
					EVString getSelectedDataSetType() const;
					EVString getSelectedDataSetCoordSys() const;
					EVString _getSelectedDataSourceConnectionString() const;
					EVString _getSelectedDataSetType() const;
					EVString _getSelectedDataSetCoordSys() const;


					ev_void clearSelectedInfo()
					{
						mSelectedDataSourceName = "";
						mSelectedDataSourceType = SDST_NoSelected;
						mSelectedDataSetName = "";
					}

					EVString mSelectedDataSourceName;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::SelectedDataSourceType mSelectedDataSourceType;
					EVString mSelectedDataSetName;


					///命令定义
					static CCmdDataSourceName msDataSourceName;
					static CCmdDataSourceType msDataSourceType;
					static CCmdDataSourceConnectString msDataSourceConnectString;
					static CCmdDataSetType msDataSetType;
					static CCmdDataSetName msDataSetName;
					static CCmdDataSetCoordSys msDataSetCoordSys;

					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSourcePropertyStringInterface* mpDataSourcePropertyStringInterface;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceManager::CDataSetPropertyStringInterface* mpDataSetPropertyStringInterface;

					/// <summary>
					/// 初始化stringinterface
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					ev_void initStringInterface();

					public:
						/// <summary>
						///  根据类别返回类别描述
						/// </summary>
						/// <param name="type">数据集类别</param>
						/// <returns></returns>						
						static EVString strDatasetType(EarthView::World::Spatial::GeoDataset::EVDatasetType type);

						/// <summary>
						///  根据空间参考返回描述
						/// </summary>
						/// <param name="coordSys">投影坐标系统</param>
						/// <param name="type">0：EVWellKnownGeoCSType 系统， 1：EVWellKnownProjCSType 系统</param>
						/// <returns></returns>						
						static EVString strCoordSys(ev_int32 coordSys, ev_int32 type);
						private:
					class CDataSourceManagerPrivate;
					CDataSourceManagerPrivate* privateData;
				};





			}}}}
#endif

