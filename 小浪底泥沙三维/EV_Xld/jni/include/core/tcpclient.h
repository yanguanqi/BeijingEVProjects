#ifndef _TcpClient_H_
#define _TcpClient_H_
#include "core/global.h"
#include "core/object.h"
namespace EarthView
{
    namespace World
    {
        namespace Core
        {

            class CTcpClientJob;
            class CSocket;

			/// <summary>
			/// TCP客户端对象
			/// </summary>
            class EV_CORE_DLL CTcpClient: public EarthView::World::Core::CEventObject
            {
            public:
				/// <summary>
				/// 构造函数
				/// </summary>				
				/// <returns></returns>
                CTcpClient();

				/// <summary>
				/// 析构函数
				/// </summary>				
				/// <returns></returns>
                virtual ~CTcpClient();
ev_private:

				/// <summary>
				/// 构造函数
				/// </summary>
				/// <param name="pList">构造函数参数键值对表</param>
				/// <returns></returns>
                CTcpClient(EarthView::World::Core::CNameValuePairList *pList);
            public:
                /// <summary>
                /// 异步连接TCP服务器
                /// </summary>
                /// <param name=strIp>TCP服务器IP地址</param>
                /// <param name=iPort>TCP服务器端口</param>
                /// <returns></returns>
                void connect(_in const ev_string &strIp, _in ev_int16 iPort);
                /// <summary>
                /// 向建立连接的SOCKET发送数据
                /// </summary>
                /// <param name=byBuf>存储发送的数据</param>
                /// <param name=iLen>数据的字节长长度</param>
                /// <returns>发送成功为发送的数据大小， 失败为-1</returns>
                ev_int32 send(_in ev_byte *byBuf, _in ev_int32 iLen);
                /// <summary>
                /// 设置数据缓存大小
                /// </summary>
                /// <param name=iBufSize>缓存大小</param>
                /// <returns></returns>
                void setBufByteSize(_in ev_int32 iBufSize);
                /// <summary>
                /// 设置客户端进行连接时，具体的超时时间
                /// </summary>
                /// <param name=iTimeOut>超时的时间</param>
                /// <param name=iLen>数据的字节长长度</param>
                /// <returns></returns>
                void setConnTimeOut(_in ev_int32 iTimeOut);
                /// <summary>
                ///主动关闭已经建立连接的SOCKET
                /// </summary>
                /// <returns>关闭成功则返回true，不成功则返回false</returns>
                ev_bool close();
                /// <summary>
                /// 判断是否存在连接
                /// </summary>
                /// <returns>是则返回true，否则返回false</returns>
                ev_bool isConnected();

            ev_internal:
                /// <summary>
                /// 当客户端有异常时，通知给用户，让用户能够自定义处理
                /// </summary>
                /// <param name=eErrorNo>错误代码宏值</param>
                /// <returns></returns>
                virtual void onError(_in ev_int32 eErrorNo);
                /// <summary>
                /// 当客户端接收到数据时，通过此函数主动的通知给用户，让用户进行处理
                /// </summary>
                /// <param name=byBuf>用于向用户传输接收到的数据</param>
                /// <param name=iLen>用于向用户传输接收到的数据的长度</param>
                /// <returns>成功返回true，失败false</returns>
                virtual ev_bool onReceive(_out ev_byte *byBuf, _in ev_int32 iLen);

            private :
                CSocket *m_pClient;
                /// <summary>
                ///当CTcpClient创建的CTcpClientJob与服务器成功连接并取得连接套接字时，TcpClientJob调用此方法，用来通知TcpClient已经连接成功
                /// </summary>
                /// <param name=pClient>成功连接后返回的Socket</param>
                /// <returns>查看是否构建实例成功，成功为true，不成功为false</returns>
                ev_bool onConnect(_in CSocket *pClient);
                /// <summary>
                /// 当服务器连接，或客户端异常时，通知CTcpClient
                /// </summary>
                /// <param name=errorClient>代表出现异常的客户端的Socket指针</param>
                /// <param name=eErrorNo>错误代码宏值</param>
                /// <returns></returns>
                void onSocketError(_in CSocket *errorClient, _in ev_int32 eErrorNo);
                ev_int32 m_iBufSize;
                ev_int32 m_iTimeOut;
                ev_bool m_bIsConnected;
                ev_bool m_bIsConnecting;
                CTcpClientJob *m_pJob;
                friend class CTcpClientJob;


            };
        }
    }
}

#endif

