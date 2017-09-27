#ifndef EARTHVIEW_WORLD_SPATIAL_CSATASOURCESERVERFACTORY_H
#define EARTHVIEW_WORLD_SPATIAL_CSATASOURCESERVERFACTORY_H
#include "spatialserverclient/spatialserverclientenums.h"
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialinterface/idatasource.h"
#include "spatialinterface/idatasourcefactory.h"

// using namespace EarthView::World::Spatial::GeoDataset;
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
            /// 服务连接类
            /// </summary>
			class CServerConnection;

			/// <summary>
            /// 服务连接类工厂
            /// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CDataSourceServerFactory
				:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			public:
				/// <summary>
                /// 关闭服务
                /// </summary>
				/// <param name="server">所要关闭的服务</param>
                /// <returns>成功返回true，否则返回false</returns>
				ev_bool close(_in const EarthView::World::Spatial::GeoDataset::IDataSource* server);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
                virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

				/// <summary>
                /// 获取数据源工厂类型
                /// </summary>
                /// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				virtual ev_int32 getType() const;

				/// <summary>
                /// 从xml还原数据源
                /// </summary>
				/// <param name="xml">xml描述</param>
                /// <returns>数据源对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml);
				//const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);

				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection);
				
				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
			
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~CDataSourceServerFactory();

				/// <summary>
                /// 获取对象指针
                /// </summary>
                /// <returns>对象指针</returns>
				static EarthView::World::Spatial::CDataSourceServerFactory* getInstance();
			ev_private:
				CDataSourceServerFactory(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CDataSourceServerFactory();
			private:
				static EarthView::World::Spatial::CDataSourceServerFactory* mpInstance;
				///打开WMS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWMS(_in const EarthView::World::Spatial::CServerConnection* connection);
				///打开WMTS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWMTS(_in const EarthView::World::Spatial::CServerConnection* connection);
				///打开WFS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWFS(_in const EarthView::World::Spatial::CServerConnection* connection);
				///打开EV数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openEVServer(_in const EarthView::World::Spatial::CServerConnection* connection);
				
			};
			class EV_SPATIALSERVERCLIENT_DLL COGCWMSDataSourceServerFactory
				:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			public:
				/// <summary>
                /// 关闭服务
                /// </summary>
				/// <param name="server">所要关闭的服务</param>
                /// <returns>成功返回true，否则返回false</returns>
				ev_bool close(_in const EarthView::World::Spatial::GeoDataset::IDataSource* server);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
                virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

				/// <summary>
                /// 获取数据源工厂类型
                /// </summary>
                /// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				virtual ev_int32 getType() const;

				/// <summary>
                /// 从xml还原数据源
                /// </summary>
				/// <param name="xml">xml描述</param>
                /// <returns>数据源对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml);
				//const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);

				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection);
				
				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
			
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMSDataSourceServerFactory();

				/// <summary>
                /// 获取对象指针
                /// </summary>
                /// <returns>对象指针</returns>
				static EarthView::World::Spatial::COGCWMSDataSourceServerFactory* getInstance();
			ev_private:
				COGCWMSDataSourceServerFactory(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMSDataSourceServerFactory();
			private:
				static EarthView::World::Spatial::COGCWMSDataSourceServerFactory* mpOGCWMSInstance;
				///打开WMS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWMS(_in const EarthView::World::Spatial::CServerConnection* connection);
			};
			class EV_SPATIALSERVERCLIENT_DLL COGCWMTSDataSourceServerFactory
				:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			public:
				/// <summary>
                /// 关闭服务
                /// </summary>
				/// <param name="server">所要关闭的服务</param>
                /// <returns>成功返回true，否则返回false</returns>
				ev_bool close(_in const EarthView::World::Spatial::GeoDataset::IDataSource* server);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
                virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

				/// <summary>
                /// 获取数据源工厂类型
                /// </summary>
                /// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				virtual ev_int32 getType() const;

				/// <summary>
                /// 从xml还原数据源
                /// </summary>
				/// <param name="xml">xml描述</param>
                /// <returns>数据源对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml);
				//const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);

				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection);
				
				/// <summary>
                /// 打开一个请求的服务
                /// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
                /// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet * connection);
			
				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				~COGCWMTSDataSourceServerFactory();

				/// <summary>
                /// 获取对象指针
                /// </summary>
                /// <returns>对象指针</returns>
				static EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* getInstance();
			ev_private:
				COGCWMTSDataSourceServerFactory(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				COGCWMTSDataSourceServerFactory();
			private:
				static EarthView::World::Spatial::COGCWMTSDataSourceServerFactory* mpOGCWMTSInstance;
				///打开WMTS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWMTS(_in const EarthView::World::Spatial::CServerConnection* connection);
			};
			class EV_SPATIALSERVERCLIENT_DLL COGCWFSDataSourceServerFactory
				:public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
			{
			public:
				/// <summary>
				/// 关闭服务
				/// </summary>
				/// <param name="server">所要关闭的服务</param>
				/// <returns>成功返回true，否则返回false</returns>
				ev_bool close(_in const EarthView::World::Spatial::GeoDataset::IDataSource* server);

				/// <summary>
				/// 销毁一个数据源对象
				/// </summary>
				/// <param name="pDataSource">数据源对象</param>
				/// <returns></returns>
				virtual ev_void destroyDataSource(EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);

				/// <summary>
				/// 获取数据源工厂类型
				/// </summary>
				/// <returns>DST_WEBSERVER_EARTHVIEW_SERVER</returns>
				virtual ev_int32 getType() const;

				/// <summary>
				/// 从xml还原数据源
				/// </summary>
				/// <param name="xml">xml描述</param>
				/// <returns>数据源对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml);
				//const EarthView::World::Spatial::GeoDataset::IDataSource* open(_in EVString connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* open(_in const EarthView::World::Spatial::CServerConnection* connection);

				/// <summary>
				/// 打开一个请求的服务
				/// </summary>
				/// <param name="connection">连接参数（全部小写）：url http://... + 端口；servername；type(用整形对应的字符串标识)；username；password</param>
				/// <returns>请求的服务对象指针，需用factory释放</returns>
				virtual EarthView::World::Spatial::GeoDataset::IDataSource * createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet * connection);

				/// <summary>
				/// 析构函数
				/// </summary>
				/// <returns></returns>
				~COGCWFSDataSourceServerFactory();

				/// <summary>
				/// 获取对象指针
				/// </summary>
				/// <returns>对象指针</returns>
				static EarthView::World::Spatial::COGCWFSDataSourceServerFactory* getInstance();
ev_private:
				COGCWFSDataSourceServerFactory(_in EarthView::World::Core::CNameValuePairList* pList);
			protected:
				/// <summary>
				/// 默认构造函数
				/// </summary>
				/// <returns></returns>
				COGCWFSDataSourceServerFactory();
			private:
				static EarthView::World::Spatial::COGCWFSDataSourceServerFactory* mpOGCWFSInstance;
				///打开WMTS数据服务
				EarthView::World::Spatial::GeoDataset::IDataSource* openOGCWFS(_in const EarthView::World::Spatial::CServerConnection* connection);
			};
		}
	}
}
#endif


