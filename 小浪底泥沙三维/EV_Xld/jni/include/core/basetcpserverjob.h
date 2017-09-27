#ifndef _TcpServerAbstractJob_H
#define _TcpServerAbstractJob_H
#pragma once

#include "core/global.h"
#include "core/thread.h"  
#include "core/object.h"  

namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CSocket;
            class CTcpServer;
            class CTcpAcceptJob;
            class EV_CORE_DLL CBaseTcpServerJob : public EarthView::World::Core::CThread
            {
            public:
                CBaseTcpServerJob();
                ~CBaseTcpServerJob();
                ///<summary>
                /// 向客户端发送数据
                ///</summary>
                ///<param name=buf>存储发送的数据</param>
                ///<param name=iLen>数据的字节长长度</param>
                ///<returns>发送成功为发送的数据大小， 失败为-1</returns>
                ev_int32 send(ev_byte *buf, ev_int32 iLen);

            ev_private:
                CBaseTcpServerJob(EarthView::World::Core::CNameValuePairList *pList);

            ev_internal:
                /// <summary>
                /// 函数没有具体实现，需要用户继承于此类来完成具体数据的接收后的操作
                /// </summary>
                /// <param name=byBuf>存储接收的数据</param>
                /// <param name=iLen>数据的字节长长度</param>
                /// <returns>接收成功为true 失败为false</returns>
                virtual ev_bool onReceive(_out ev_byte *byBuf, ev_int32 iLen);

                /// <summary>
                /// 对每个连接的客户端，单独开个线程来实现数据的接收和发送
                /// </summary>
                /// <returns>成功连接则循环接收数据，失败返回-1</returns>
                virtual ev_int32 run();
            private :
                /// <summary>
                /// 用于接收数据时，设置客户端的套接字
                /// </summary>
                /// <param name=pClient>客户端套接字</param>
                /// <returns></returns>
                ev_void setClientSocket(_in CSocket *pClient);

                CSocket *m_pClient;
                CTcpServer *m_pServer;
                ev_bool m_done;
                friend class CTcpServer;
                friend class CTcpAcceptJob;
            };
        }
    }
}

#endif

