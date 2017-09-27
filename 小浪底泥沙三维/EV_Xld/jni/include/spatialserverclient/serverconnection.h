#ifndef	EARTHVIEW_WORLD_SPATIAL_CSERVERCONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_CSERVERCONNECTION_H
#include "spatialserverclient/spatialserverclientexports.h"
#include "spatialserverclient/spatialserverclientenums.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			/// <summary>
			/// 空间服务器连接
			/// </summary>
			class EV_SPATIALSERVERCLIENT_DLL CServerConnection:
				public EarthView::World::Core::CAllocatedObject
			{
			public:
				
				/// <summary>
                /// 获取服务器地址
                /// </summary>
                /// <returns>服务器地址</returns>
				const EVString& getURL() const;

				/// <summary>
                /// 获取用户名
                /// </summary>
                /// <returns>用户名</returns>
				const EVString& getUserName() const;

				/// <summary>
                /// 获取连接名称
                /// </summary>
                /// <returns>连接名称</returns>
				const EVString& getConnectionName() const;

				/// <summary>
				/// 获取插件文件名称
				/// </summary>
				/// <returns>插件文件名称</returns>
				const EVString& getServerPluginFile() const;

				/// <summary>
                /// 获取服务类型
                /// </summary>
                /// <returns>服务类型</returns>
				const EarthView::World::Spatial::EVServerConnectionType getType() const;

				/// <summary>
                /// 设置服务器地址
                /// </summary>
				/// <param name="url">服务器地址</param>
                /// <returns></returns>
				ev_void setURL(_in const EVString& url);
				
				/// <summary>
                /// 设置用户名
                /// </summary>
				/// <param name="name">用户名</param>
                /// <returns></returns>
				ev_void setUserName(_in const EVString& name);
				
				/// <summary>
                /// 设置密码
                /// </summary>
				/// <param name="password">密码</param>
                /// <returns></returns>
				ev_void setPassword(_in const EVString& password);
				
				/// <summary>
                /// 设置连接名
                /// </summary>
				/// <param name="name">连接名</param>
                /// <returns></returns>
				ev_void setConnectionName(_in const EVString& name);

				/// <summary>
				/// 设置服务插件文件
				/// </summary>
				/// <param name="pluginfile">插件文件</param>
				/// <returns></returns>
				ev_void setServerPluginFile(_in const EVString& pluginfile);

				/// <summary>
                /// 析构函数
                /// </summary>
                /// <returns></returns>
				virtual ~CServerConnection();
				
			protected:
				/// <summary>
                /// 默认构造函数
                /// </summary>
                /// <returns></returns>
				CServerConnection();

				/// <summary>
                /// 拷贝构造函数
                /// </summary>
				/// <param name="serverconnection">拷贝对象</param>
                /// <returns></returns>
				CServerConnection(_in const CServerConnection& serverconnection);

			ev_private:
				CServerConnection(_in EarthView::World::Core::CNameValuePairList* pList);	
			
			protected:
				///服务器地址
				EVString mstrURL;
				///用户名
				EVString mstrUserName;
				///密码
				EVString mstrPassword;
				///服务连接名
				EVString mstrConnectionName;
				///服务类型
				EarthView::World::Spatial::EVServerConnectionType mnConnectionType;
				///务插件路径
				EVString mstrServerPluginFile;
				
			};
		}
	}
}
#endif


