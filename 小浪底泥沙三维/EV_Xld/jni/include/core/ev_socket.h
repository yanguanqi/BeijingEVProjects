// <summary>
//  对Socket包进行了跨平台统一封装，提供给上层TCP、UDP等协议调用	
//  版    本：1.0;  创建日期：2012年2月13日; 作    者：张超
// </summary>
#ifndef _CSOCKET_H_
#define _CSOCKET_H_
#pragma once
#include "core/global.h"
#ifdef EV_OS_WIN
#include <winsock2.h>
typedef ev_int32   socklen_t;
#else
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
typedef ev_int32				SOCKET;

//#pragma region define win32 const variable in linux
#define INVALID_SOCKET	-1
#define SOCKET_ERROR	-1
//#pragma endregion
#endif

#include "core/multibytestring.h"
//#include "core/error.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
			// <summary>
			//  通信协议族枚举
			//  版    本：1.0;  创建日期：2012年2月13日; 作    者：张超
			// </summary>
			enum EVProtocolAF
			{

				PR_AFUNSPEC      = 0       ,        /* unspecified */
				PR_AFUNIX        = 1       ,        /* local to host (pipes, portals) */
				PR_AFINET        = 2       ,        /* internetwork: UDP, TCP, etc. */
				PR_AFIMPLINK      =3       ,        /* arpanet imp addresses */
				PR_AFPUP          =4       ,        /* pup protocols: e.g. BSP */
				PR_AFCHAOS       = 5       ,        /* mit CHAOS protocols */
				PR_AFIPX          =6       ,        /* IPX and SPX */
				PR_AFNS          = 6       ,        /* XEROX NS protocols */
				PR_AFISO          =7       ,        /* ISO protocols */
				PR_AFOSI          =7       ,   /* OSI is ISO */
				PR_AFECMA         =8       ,        /* european computer manufacturers */
				PR_AFDATAKIT      =9       ,        /* datakit protocols */
				PR_AFCCITT        =10      ,        /* CCITT protocols, X.25 etc */
				PR_AFSNA          =11      ,        /* IBM SNA */
				PR_AFDECnet       =12      ,        /* DECnet */
				PR_AFDLI          =13      ,        /* Direct data link interface */
				PR_AFLAT          =14      ,        /* LAT */
				PR_AFHYLINK       =15      ,        /* NSC Hyperchannel */
				PR_AFAPPLETALK    =16      ,        /* AppleTalk */
				PR_AFNETBIOS      =17      ,        /* NetBios-style addresses */
				PR_AFVOICEVIEW    =18      ,        /* VoiceView */
				PR_AFFIREFOX      =19      ,        /* FireFox */
				PR_AFUNKNOWN1     =20      ,        /* Somebody is using this! */
				PR_AFBAN         = 21      ,        /* Banyan */

				PR_AFMAX          =22

			};
			// <summary>
			//  数据报、数据流类型枚举
			//  版    本：1.0;  创建日期：2012年2月13日; 作    者：张超
			// </summary>
			enum EVProtocolDataTypes
			{

				PR_TypeSTREAM    = 1     ,          /* stream socket */
				PR_TypeDGRAM     = 2     ,          /* datagram socket */
				PR_TypeRAW       = 3     ,          /* raw-protocol interface */
				PR_TypeRDM        =4               /* reliably-delivered message */


			};
			// <summary>
			//  通信协议类型枚举
			//  版    本：1.0;  创建日期：2012年2月13日; 作    者：张超
			// </summary>
			enum EVProtocolTypes
			{

				PR_ProtocolIP =             0             ,  /* dummy for IP */
				PR_ProtocolICMP      =      1              , /* control message protocol */
				PR_ProtocolIGMP       =     2              , /* group management protocol */
				PR_ProtocolGGP          =   3              , /* gateway^2 (deprecated) */
				PR_ProtocolTCP           =  6             ,  /* tcp */
				PR_ProtocolPUP            = 12             , /* pup */
				PR_ProtocolUDP            = 17             , /* user datagram protocol */
				PR_ProtocolIDP            = 22            ,  /* xns idp */
				PR_ProtocolND             = 77             , /* UNOFFICIAL net disk proto */

				PR_ProtocolRAW            = 255            , /* raw IP packet */
				PR_ProtocolMAX           =  256


			};
			enum
			{
				EV_MAX_ADDRESS_LENGTH =  sizeof(struct sockaddr_in)

				/// Maximum length in bytes of a socket address.
			};

			// <summary>
			//  标志位枚举
			//  版    本：1.0;  创建日期：2012年2月13日; 作    者：张超
			// </summary>
			enum EVFlagsTypes
			{
				PR_FlagNull=0

			};

			class EV_CORE_DLL CSocket {

			public:
				CSocket();
				~CSocket();

				// <summary>
				// 初始化Socket接口，windows是必须初始化的，Linux不需要，方法中有宏判断
				// </summary>
				// <returns>返回是否成功初始化，成功为true 失败为false</returns>
				ev_bool init();	

				// <summary>
				// 返回socket中可读数据长度
				// </summary>
				// <returns>可读数据长度</returns>
				ev_int32 available() const;

				// <summary>
				// 当socket出现错误时，调用此方法来清理socket资源
				// </summary>
				// <returns>返回是否成功清理，成功为true 失败为false</returns>
				ev_bool clean();
				//#pragma endregion

				// <summary>
				// 实例化Socket对象，构建一个Socket实例
				// </summary>
				// <param name=eAF>地址族</param>
				// <param name=eType>数据类型</param>
				// <param name=eProtocol>所使用的协议</param>
				// <returns>返回是否成功创建，成功为true 失败为false</returns>
				ev_bool create(_in EVProtocolAF eAF, _in EVProtocolDataTypes eType, _in EVProtocolTypes eProtocol);
				// <summary>
				// CP客户端通过此方法来连接TCP服务器
				// </summary>
				// <param name=strIp>连接TCP服务器的IP地址</param>
				// <param name=iPort>连接TCP服务器的端口</param>
				// <param name=iTimeOut>超时时间</param>
				// <returns>返回是否成功连接，成功为true 失败为false</returns>
				ev_bool connect(_in ev_string& strIp, _in ev_int16 iPort,_in ev_int32 iTimeOut);
				// <summary>
				// TCP服务端通过绑定端口，为监听做准备
				// </summary>
				// <param name=iPort>连接TCP服务器的端口</param>
				// <returns>返回是否成功绑定，成功为true 失败为false</returns>
				ev_bool bind(_in ev_int16 iPort);
				// <summary>
				// TCP服务端通过监听端口，来侦测是否有客户端连接
				// </summary>
				// <param name=iClientCount>最多连接的客户端数量</param>
				// <param name=iLen>数据的字节长长度</param>
				// <returns>返回是否成功监听，成功为true 失败为false</returns>
				ev_bool listen(_in ev_int32 iClientCount); 
				// <summary>
				// TCP服务端通过监听端口，如果有客户端连入则返回连接成功的Socket
				// </summary>
				// <param name=strIp>连接的客户端IP地址</param>
				// <returns>返回与客户端成功连接的SOCKET</returns>
				SOCKET accept(_out ev_string& strIp);
				// <summary>
				//  向建立连接的SOCKET发送数据
				// </summary>
				// <param name=byBuf>发送的数据</param>
				// <param name=iLen>数据的长度</param>
				// <returns>返回发送数据的长度</returns>
				ev_int32 send(_in ev_byte* byBuf, _in ev_int32 iLen);
				// <summary>
				// 向建立连接的SOCKET接收数据
				// </summary>
				// <param name=byBuf>接收的数据</param>
				// <param name=iLen>数据的长度</param>
				// <returns>返回接收数据的长度</returns>
				ev_int32 recv(_out ev_byte* byBuf, _in ev_int32 iLen);
				// <summary>
				// 主动关闭已经建立连接的SOCKET
				// </summary>
				// <returns>关闭成功则返回true，不成功则返回false</returns>
				ev_bool close();
				// <summary>
				// 设置发送数据的超时时间
				// </summary>
				// <param name=iTimeOut>超时的时间</param>
				// <returns>成功则返回true，不成功则返回false</returns>
				ev_bool setSendTimeOut(ev_uint32 iTimeOut);
				// <summary>
				// 获取发送数据的超时时间
				// </summary>
				// <param name=iTimeOut></param>
				// <returns>超时时间</returns>
				ev_int32 getSendTimeOut() const;

				// <summary>
				// 设置接收数据的超时时间
				// </summary>
				// <param name=iTimeOut>超时的时间,单位  毫秒</param>
				// <returns>成功则返回true，不成功则返回false</returns>
				ev_bool setRecvTimeOut(ev_uint32 iTimeOut);

				// <summary>
				// 获取接收数据的超时时间
				// </summary>
				// <param name=iTimeOut></param>
				// <returns>接收数据超时时间</returns>
				ev_int32 getRecvTimeOut() const;
				// <summary>
				// 当socket出现错误时，调用此方法来得到错误代码
				// </summary>
				// <returns>返回的错误宏的值</returns>
				ev_int32 getError();

				// <summary>
				// 设置socket阻塞属性
				// </summary>
				// <param name=flag></param>
				// <returns></returns>
				ev_void setBlocking(ev_bool flag);

				// <summary>
				// 获取socket阻塞属性
				// </summary>
				// <param name=flag></param>
				// <returns></returns>
				ev_bool getBlocking() const;

				// <summary>
				// 设置发送数据缓存大小
				// </summary>
				// <param name=size></param>
				// <returns></returns>
				ev_void setSendBufferSize(ev_int32 size);

				// <summary>
				// 获取发送数据缓存大小
				// </summary>
				// <returns></returns>
				ev_int32 getSendBufferSize() const;

				// <summary>
				// 设置接收数据缓存大小
				// </summary>
				// <param name=size></param>
				// <returns></returns>
				ev_void setReceiveBufferSize(ev_int32 size);

				// <summary>
				// 获取接收数据缓存大小
				// </summary>
				// <returns></returns>
				ev_int32 getReceiveBufferSize() const;

				// <summary>
				// 关闭网络数据接收
				// </summary>
				// <returns></returns>
				ev_void shutdownReceive();

				// <summary>
				// 关闭网络数据发送
				// </summary>
				// <returns></returns>
				ev_void shutdownSend();

				// <summary>
				// 关闭网络数据发送与接收
				// </summary>
				// <returns></returns>
				ev_void shutdown();

				// <summary>
				//向指定地址发送udp数据
				// </summary>
				// <returns></returns>
				ev_int32 sendTo(const ev_void* buffer, ev_int32 length, const ev_string& address, ev_int16 port, ev_int32 flags = 0);

				// <summary>
				// 接收udp网络数据
				// </summary>
				// <returns></returns>
				ev_int32 receiveFrom(ev_void* buffer, ev_int32 length, ev_string& address, ev_int16& port, ev_int32 flags = 0);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool setBroadcast(ev_bool flags);

				/// <summary>
				/// 
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				ev_bool getBroadcast() const;

				/// <summary>
				/// 获取主机名
				/// </summary>
				/// <param name=""></param>
				/// <returns></returns>
				/// <memo></memo>
				EVString getHostName();

			private:
				ev_int32 ioctl(ev_uint32 request, int& arg);

			public:
				SOCKET m_sock;
				ev_string m_strIp;
			private:
				ev_bool m_bBlocking;

			};
		}
	}
}


#endif
