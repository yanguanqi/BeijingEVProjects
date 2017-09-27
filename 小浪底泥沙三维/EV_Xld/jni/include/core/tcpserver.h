#ifndef _TcpServer_H
#define _TcpServer_H

#pragma once

#include <set>

#include "core/global.h"
#include "core/multibytestring.h"
#include "core/object.h"

using namespace std;

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CSocket;
            class CMutex;
            class CBaseTcpServerJob;
            class CTcpAcceptJob;

			/// <summary>
			/// TCP服务端对象
			/// </summary>
            class EV_CORE_DLL CTcpServer : public EarthView::World::Core::CEventObject
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>				
				/// <returns></returns>
                CTcpServer();

				/// <summary>
				/// 析构函数
				/// </summary>				
				/// <returns></returns>
                ~CTcpServer();
ev_private:
				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                CTcpServer(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// TCP服务器开始启动，通过创建TcpAcceptJob实例来实现对客户端连接的接收
                /// </summary>
                /// <returns></returns>
                ev_void start();
                /// <summary>
                /// TCP服务器关闭，断开所有与客户端的连接
                /// </summary>
                /// <returns></returns>
                ev_void shutDown();
                /// <summary>
                /// 设置TCP服务器的最大客户端连接数量
                /// </summary>
                /// <param name=iClientCount>最大客户端连接数量</param>
                /// <returns></returns>
                ev_void setMaxClientCount(_in ev_int32 iClientCount);
                /// <summary>
                /// 设置TCP服务器的监听端口
                /// </summary>
                /// <param name=iPort>进行监听的端口号</param>
                /// <returns></returns>
                ev_void setTcpListenPort(_in ev_int16 iPort);
                /// <summary>
                /// 设置接收数据的缓冲区大小
                /// </summary>
                /// <param name=iBufSize>集体的缓冲区的值</param>
                /// <returns></returns>
                ev_void setBufByteSize(_in ev_int32 iBufSize);
            ev_internal:
                /// <summary>
                /// 虚函数，主要用于用户自己去实例化，创建新的线程
                /// </summary>
                /// <returns></returns>
                virtual  EarthView::World::Core::CBaseTcpServerJob *createJob();
                /// <summary>
                /// 当服务端有异常时，通知给用户，让用户能够自定义处理
                /// </summary>
                /// <param name=eErrorNo>错误宏值</param>
                /// <returns></returns>
                virtual ev_void onError(_in ev_int32 eErrorNo);
            private :
                set<EarthView::World::Core::CBaseTcpServerJob *> m_setJobs;
                CMutex *m_mutex;
                ev_int32 m_iMaxClientCount;
                ev_int16 m_iPort;
                ev_int32 m_iBufSize;
                CTcpAcceptJob *m_pAcceptJob;
                /// <summary>
                /// 当CTcpAcceptJob成功连接并取得连接套接字时，通知服务器已经连接成功
                /// </summary>
                /// <param name=pClient>需要通过CSocket来接收和发送数据</param>
                /// <returns></returns>
                void onConnected(_in EarthView::World::Core::CBaseTcpServerJob *job);
                /// <summary>
                ///捕获CTcpServer端出现的异常
                /// </summary>
                /// <param name=errorClient>代表出现异常的客户端的Socket指针</param>
                /// <param name=eErrorNo>错误宏值</param>
                /// <returns></returns>
                void onSocketError(_in EarthView::World::Core::CBaseTcpServerJob *job, _in ev_int32 eErrorNo);
                EarthView::World::Core::CBaseTcpServerJob *getIdleJob();
                friend class CTcpAcceptJob;
                friend class CBaseTcpServerJob;

            };
        }
    }
}

#endif

