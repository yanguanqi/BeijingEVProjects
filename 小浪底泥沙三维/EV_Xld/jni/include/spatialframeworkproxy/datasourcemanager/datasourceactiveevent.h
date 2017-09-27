#ifndef	DATASOURCE_ACTIVE_EVENT_H__
#define DATASOURCE_ACTIVE_EVENT_H__
#include "core/stdheaders.h"
#include "core/event.h"
#include "spatialframeworkproxy/frameworkproxy_config.h"
#include "spatialframeworkproxy/datasourcemanager/datasetactiveevent.h"
#include "spatialframeworkproxy/datasourcemanager/datasourceurl.h"


namespace EarthView{
	namespace World{
		namespace FrameWorkProxy{
			namespace DataSourceManager{

				///typedef vector<EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent> EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr;
				class EV_FRAMEWORKPROXY_DLL DatasetActiveEventArr : public EarthView::World::Core::CBaseObject
				{
ev_private:
					typedef vector<EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent> InternalList;
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
					DatasetActiveEventArr();
ev_private:
					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="pList">构造函数参数键值对表</param>
					/// <returns></returns>
					DatasetActiveEventArr(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					/// <summary>
					/// 在容器最后添加元素
					/// </summary>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void push_back( _in  EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent const &t);
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& front();
					/// <summary>
					/// 返回容器最后元素
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回容器最后元素</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& back();
					/// <summary>
					/// 容器中间位置插入元素
					/// </summary>
					/// <param name="pos">位置</param>
					/// <param name="t">元素值</param>
					/// <returns></returns>
					void insert(_in ev_uint32 pos, _in EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent const &t);
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
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& operator[](_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 重载[]操作符
					/// </summary>
					/// <param name="n">下标位置</param>
					/// <returns>返回下标对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent const &operator[](_in ev_size_t n) const
					{
						const_reference l =  mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& at(_in ev_size_t n)
					{
						reference l = mList[n];
						return l;
					}
					/// <summary>
					/// 返回某位置的元素值
					/// </summary>
					/// <param name="n">位置</param>
					/// <returns>返回位置对应的值</returns>
					EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent const &at(_in ev_size_t n) const
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

				class  EV_FRAMEWORKPROXY_DLL CDataSourceActiveEvent : public EarthView::World::Core::CEvent
				{
ev_private:
					CDataSourceActiveEvent(_in EarthView::World::Core::CNameValuePairList *pList);
				public:
					enum DataSourceState
					{
						DSS_Open,
						DSS_Close
					};
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					CDataSourceActiveEvent();

					/// <summary>
					/// 构造函数
					/// </summary>
					/// <param name="">事件类型，FrameworkEventType类型</param>
					/// <returns></returns>					
					CDataSourceActiveEvent(ev_int32 type);

					/// <summary>
					/// 析构函数
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>					
					~CDataSourceActiveEvent();

					/// <summary>
					/// 获取数据源名称
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源名称</returns>					
					const EVString& getName() const;

					/// <summary>
					/// 设置数据源名称
					/// </summary>
					/// <param name="name">数据源名称</param>
					/// <returns></returns>					
					ev_void setName(const EVString& name);

					/// <summary>
					/// 获取包含的数据集事件列表
					/// </summary>
					/// <param name=""></param>
					/// <returns>事件列表</returns>					
					const EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr& getDatasetActiveEventArr();

					/// <summary>
					/// 通过一个名称获取数据集事件对象
					/// </summary>
					/// <param name="name">名称</param>
					/// <returns></returns>					
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& getDatasetActiveEvent(const EVString& name);

					/// <summary>
					/// 获取数据源的URL
					/// </summary>
					/// <param name=""></param>
					/// <returns>数据源URL</returns>					
					const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& dataSourceURL() const;

					/// <summary>
					/// 设置数据源URL
					/// </summary>
					/// <param name="url">数据源RUL</param>
					/// <returns></returns>					
					ev_void setDataSourceURL(const EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL& url);

					/// <summary>
					/// 添加一个数据集事件对象
					/// </summary>
					/// <param name="datasetActiveEvent">数据集事件对象</param>
					/// <returns></returns>					
					ev_void addDatasetActiveEvent(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& datasetActiveEvent);

					/// <summary>
					/// 移除一个数据集事件对象
					/// </summary>
					/// <param name="datasetActiveEvent">数据集事件对象</param>
					/// <returns></returns>					
					ev_void removeDatasetActiveEvent(EarthView::World::FrameWorkProxy::DataSourceManager::CDatasetActiveEvent& datasetActiveEvent);

					/// <summary>
					/// 获取事件处理结果
					/// </summary>
					/// <param name=""></param>
					/// <returns>true成功， false失败</returns>					
					ev_bool getResponseState();

					/// <summary>
					/// 设置事件处理结果
					/// </summary>
					/// <param name="">true成功， false失败</param>
					/// <returns></returns>					
					ev_void setResponseState(ev_bool state);

					/// <summary>
					/// 获取事件中的错误消息
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回错误消息</returns>					
					EVString getErrorMessage() const;

					/// <summary>
					/// 设置事件中的错误消息
					/// </summary>
					/// <param name="msg">错误消息</param>
					/// <returns></returns>					
					void setErrorMessage(const EVString& msg);	

					/// <summary>
					/// 获取状态
					/// </summary>
					/// <param name=""></param>
					/// <returns>返回状态信息</returns>				
					DataSourceState getState() const;
				protected:
				private:
					EarthView::World::FrameWorkProxy::DataSourceManager::DatasetActiveEventArr mDataSetArr;
					EarthView::World::FrameWorkProxy::DataSourceManager::CDataSourceURL mDataSourceURL;
					EVString mDataSourceName;
					EVString errorMessage;
					ev_bool mResponseState;

					friend class CDataSourceManager;
					friend class FileDataSourceManager;
					friend class WebDataSourceManager;
					friend class DBDataSourceManager;

					DataSourceState mState;
					ev_void setState(DataSourceState state);

				};
			}}}}
#endif
