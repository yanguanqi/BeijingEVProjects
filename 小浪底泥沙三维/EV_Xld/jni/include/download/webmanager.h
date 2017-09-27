#ifndef EARTHVIEW_WORLD_SPATIAL_WEBMANAGER_H
#define EARTHVIEW_WORLD_SPATIAL_WEBMANAGER_H
#include "core/memoryallocatedobject.h"
#include "core/mutex.h"
#include "core/stringvector.h"
#include "download/downloadglobal.h"
namespace EarthView{	namespace World	{		namespace Core		{			class  CDynLib;		}	}}


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{
			class CWebServiceConnection;
			class CClientWebService;
			class ConnectionImpPlugin;
			class ConnectionImp;

			// <summary>
			// 
			// </summary>
			class EV_DOWNLOAD_DLL CWebManager : public EarthView::World::Core::CAllocatedObject
			{
			private:
				static EarthView::World::Spatial::Download::CWebManager *ms_Singleton;
ev_private:
				CWebManager(EarthView::World::Core::CNameValuePairList* pList);
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				CWebManager();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				virtual ~CWebManager();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Spatial::Download::CWebManager& getSingleton();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Spatial::Download::CWebManager* getSingletonPtr();

				/// <summary>
				/// 获取一个web服务客户端连接
				/// </summary>
				/// <param name="name">客户端连接名称</param>
				/// <returns></returns>		
				EarthView::World::Spatial::Download::CWebServiceConnection* getWebServiceConnection(const EVString& name , const EVString& url);


				/// <summary>
				/// 设置连接超时时间, 单位  秒
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void setConnectOutTime(ev_int32 outtime);

				/// <summary>
				/// 获取网络连接超时时间
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getConnectOutTime() const;

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_void setAutoConnectInterval(ev_int32 interval);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>		
				ev_int32 getAutoConnectInterval() const;

				/// <summary>
				/// 安装网络服务插件
				/// </summary>
				/// <param name="pluginFile">插件完整路径</param>
				/// <param name="host">插件对应的服务器（ip:port）</param>
				/// <returns></returns>
				ev_bool installServicePlugin(const EVString& pluginFile, const EVString& host);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EarthView::World::Spatial::Download::ConnectionImpPlugin* getConnectionImpPlugin(const EVString& pluginFile, const EVString& serverHost);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getPluginPath(const EVString& serverHost);

				/// <summary>
				/// 获取插件信息
				/// </summary>
				/// <param name="pluginsFolder">存放插件的文件夹路径，如果为空，默认为执行程序当前路径</param>
				/// <returns></returns>				
				EarthView::World::Core::StringVector getPluginsInfo(const EVString& pluginsFolder);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				EVString getPluginPathByPluginName(const EVString& pluginName);

			protected:
				friend class CWebServiceConnection;
				friend class CClientWebService;

				/// <summary>
				/// 移除一个web客户端
				//  !!!  这里并不会删除EarthView::World::Spatial::Download::CWebServiceConnection对象。
				//  !!!  removeWebServiceConnection函数会在EarthView::World::Spatial::Download::CWebServiceConnection析构函数中调用。
				//  !!!  所以这里遵循一个原则，  【谁申请的内存空间，谁进行维护。】
				//  !!!  再所以，如果用户自己调用该函数，记得要删除自己的EarthView::World::Spatial::Download::CWebServiceConnection对象。
				/// </summary>
				/// <param name="name">客户端连接名称</param>
				/// <returns>这里返回指针，以便客户端进行清理</returns>
		
				EarthView::World::Spatial::Download::CWebServiceConnection* removeWebServiceConnection(const EVString& name, const EVString& rul);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				ev_bool addWebServiceConnection( EarthView::World::Spatial::Download::CWebServiceConnection* pConnection);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
		
				EarthView::World::Spatial::Download::CWebServiceConnection* removeWebServiceConnection( EarthView::World::Spatial::Download::CWebServiceConnection* pConnection);


				/// <summary>
				/// 检查是否有重复名称的web客户端连接
				/// </summary>
				/// <param name=""></param>
				/// <returns>true: 重复名称， false：不重复名称</returns>
		
				ev_bool checkRenameConnection(EVString& name, const EVString& url);


			private:
				///web客户端集合,连接名称和连接对象
				ev_map<EVString, EarthView::World::Spatial::Download::CWebServiceConnection*> mConnections;
				//web客户端集合访问锁
				EarthView::World::Core::CRecursiveMutex mConnectionsMtx;
				///连接超时
				ev_int32 mConnectOutTime;
				///网络自动重连时间间隔
				ev_int32 mAutoConnectInterval;

			};


			// <summary>
			// 管理网络下载插件
			// 保证每一个插件动态库只会加载一次
			// 程序退出时是否加载的插件动态库
			// </summary>
			class ConnectionImpPluginManager
			{
			public:
				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				ConnectionImpPluginManager();

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				~ConnectionImpPluginManager();

				/// <summary>
				/// 获取插件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Spatial::Download::ConnectionImpPlugin* getConnectionImpPlugin(const EVString& _pluginFile, const EVString& serverHost);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				//static EarthView::World::Spatial::Download::ConnectionImpPlugin* getConnectionImpPlugin(const EVString& serverHost);


				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EVString getPluginPath(const EVString& serverHost);

				/// <summary>
				/// 获取给定文件夹下面的插件信息
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EarthView::World::Core::StringVector getPluginsInfo(const EVString& pluginsFolder);

				/// <summary>
				/// 获取给定插件名称的插件文件路径
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static EVString getPluginPathByPluginName(const EVString& pluginName);

				/// <summary>
				/// 卸载插件
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				static void unloadPlugin();
			protected:
			private:	

				static map<EVString, EarthView::World::Core::CDynLib*> pluginDynLib;  /// 插件文件路径和加载的动态库对象map
				static map<EVString, EVString> connectionImpPluginsNameAndPath;  ///插件名称和插件文件路径map
			};

		}}}}

#endif

