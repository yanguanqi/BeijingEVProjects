#ifndef EARTHVIEW_WORLD_SPATIAL_WEBSERVICECONNECTION_H
#define EARTHVIEW_WORLD_SPATIAL_WEBSERVICECONNECTION_H
#include "core/memoryallocatedobject.h"
#include "core/mutex.h"
#include "core/ev_time.h"
#include "core/multibytestring.h"
#include "download/downloadglobal.h"


namespace EarthView{
	namespace World{
		namespace Spatial{
			namespace Download{
				class ConnectionImp;
				class EV_DOWNLOAD_DLL CWebServiceConnection : public EarthView::World::Core::CAllocatedObject
				{
					friend class CWebManager;
ev_private:
					CWebServiceConnection(EarthView::World::Core::CNameValuePairList* plist){};
				protected:
					CWebServiceConnection();
				public:

					CWebServiceConnection(EVString& name, EVString& url, EVString& pluginFile);

					virtual ~CWebServiceConnection();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
			
					//ev_void setConnection(const EVString& name, const EVString&url);

					/// <summary>
					/// 设置web连接名称
					/// </summary>
					/// <param name="name"></param>
					/// <returns></returns>
					//ev_void setName(const EVString& name);

					/// <summary>
					/// 获取web连接名称
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getName() const;

					/// <summary>
					/// 设置服务端url
					/// </summary>
					/// <param name="url"></param>
					/// <returns></returns>
					//ev_void setUrl(EVString& url);

					/// <summary>
					/// 获取服务端rul
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getUrl() const;

					/// <summary>
					/// 获取设置的插件文件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					const EVString& getPluginFile() const;

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_int32 getType()const;

					/// <summary>
					/// 设置网络下载插件
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					virtual ev_void setConnectionImp(ConnectionImp* ref_pImp);

					/// <summary>
					/// 断开与web服务器的连接
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					virtual ev_void  closeConnect();

					/// <summary>
					/// 连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					virtual ev_void openConnect();

					/// <summary>
					/// 重新连接web服务器
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_void reConnect();

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					ev_void setConnectAble(ev_bool connectAble);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					ev_void setConnected(ev_bool connected);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
			
					ev_bool isConnectAble();

					/// <summary>
					/// 转换发送字符串编码
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>			
					static EVString& convertSendStringCode(EVString& sendStr);
					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EVString& convertRecvStringCode(EVString& recvStr);

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
					static EVString host(const EVString& url);
				protected:
					/// <summary>
					/// 添加到webmanaer中
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
			
					ev_bool addToWebManager();
				private:

					/// <summary>
					/// 
					/// </summary>
					/// <param name=""></param>
					/// <returns></returns>
			
					ev_void removeFromWebManager();	
				protected:
					///服务端url
					EVString mUrl;		
					///web连接名称
					EVString mName;
					///连接类型，对应不同的服务器
					ev_int32 mType;
					///对web连接对象的使用需要加锁
					//EarthView::World::Core::CRecursiveMutex mMtx;
					///对象是否可用标记，只有被CWebManager管理时，网络连接客户端才可以被使用
					ev_bool mUesable;

					/// 网络连接是否可用
					ev_bool mConnectAble;
					///用于网络连接不上时的重连接计时
					EarthView::World:: Core::CCoreTime mUnConnetAbleElapsed;
					/// 
					ev_bool mbIsConnected;
					EVString mPluginFile;
				};

			}
		}
	}
}
#endif  //EARTHVIEW_WORLD_SPATIAL_WEBSERVICECONNECTION_H
