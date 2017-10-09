#ifndef EARTHVIEW_WORLD_SPATIAL_COGCSPATIALSERVER_H
#define EARTHVIEW_WORLD_SPATIAL_COGCSPATIALSERVER_H
#include "spatialserverclient/serverinfo.h"
#include "spatialserverclient/spatialserver.h"
#include "spatialserverclient/spatialserverclientexports.h"
// using namespace EarthView::World::Spatial;
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// OGC空间服务类
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL COGCSpatialServer
				:public EarthView::World::Spatial::CSpatialServer
			{
			public:
				/// <summary>
                /// 获取数据类型
                /// </summary>
                /// <returns>数据类型</returns>
				//virtual EVDataSourceType getType() const;

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~COGCSpatialServer();

				/// <summary>
                /// 获取服务名称
                /// </summary>
                /// <returns>服务名称</returns>
				virtual const EVString getServerName() const;

				/// <summary>
                /// 获取服务描述
                /// </summary>
                /// <returns>服务描述</returns>
				virtual const EVString getServerAbstract() const;

				/// <summary>
                /// 获取服务标题
                /// </summary>
                /// <returns>服务标题</returns>
				virtual const EVString getServerTitle() const;

				/// <summary>
                /// 获取服务器地址
                /// </summary>
                /// <returns>服务器地址</returns>
				virtual const EVString getServerUrl() const;

				/// <summary>
                /// 生成当前数据源xml描述
                /// </summary>
                /// <returns>xml</returns>
				virtual EVString toXML() const;

				/// <summary>
                /// 是否可以连接到服务器
                /// </summary>
                /// <returns>如果可以连接，返回true</returns>
				virtual ev_bool isConnected();

				/// <summary>
                /// 重新连接
                /// </summary>
                /// <returns>重新连接成功，返回true</returns>
				virtual ev_bool reconnect();

				/// <summary>
                /// 断开连接连接
                /// </summary>
                /// <returns></returns>
				virtual ev_void disConnect();

				//virtual const CServerInfo* getServerInfo() const; 
			protected:
				////构造函数
				COGCSpatialServer();
			protected:
				///服务信息
				CServerInfo* mpServerInfo;
			ev_private:
				COGCSpatialServer(_in EarthView::World::Core::CNameValuePairList* pList);
			};

		}
	}
}
#endif

