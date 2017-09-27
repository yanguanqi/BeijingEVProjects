/**
* Copyright (C) 2011，北京国遥新天地信息技术有限公司(http://www.ev-image.com)
* All rights reserved.
*
* 文件名称：error.h
* 摘    要：该文件的主要内容为异常描述信息。
*
* 当前版本：1.0
* 作    者：赵 威
* 完成日期：2012年2月10日
*
* 修改历史：
* [修改序列]   [修改日期]    [修改者] [修改内容]
*			1				2012-2-10		赵    威		1.0.0版本的内容声明
*
**/
#pragma once
#include <map>
#include "core/global.h"
#include "core/multibytestring.h"
#include "core/mutex.h"
#include "core/thread.h"

using namespace std;
#define EV_ERR_CORE_DEFAULT 10000                                                                                                               ///所有错误码的开始值
///各模块开发者在以下位置自行定义各自的错误码，并在getErrorMessage函数中定义错误的详细描述信息
///每个模块错误起始码以1000递增
///错误码命名以EV_ERR_开始,后接模块名 + 错误定义
///
///-------------------------------------开始文件系统错误码定义--------------------------------------------------------
#define EV_ERR_FILESYSTEM_DEFAULT                                                                            EV_ERR_CORE_DEFAULT + 1000
#define EV_ERR_FILESYSTEM_FILE_NOTFOUND						                                    EV_ERR_FILESYSTEM_DEFAULT+1   	///没有此文件或路径非法
#define EV_ERR_FILESYSTEM_FILE_NAMETOOLONG					                                EV_ERR_FILESYSTEM_DEFAULT+2		///文件名字太长
#define EV_ERR_FILESYSTEM_FILE_INVALIDNAME					                                    EV_ERR_FILESYSTEM_DEFAULT+3		///文件名称有非法符号，或参数非有效值
#define EV_ERR_FILESYSTEM_FILE_TOOLARGE						                                        EV_ERR_FILESYSTEM_DEFAULT+4		///文件太大无法打开
#define EV_ERR_FILESYSTEM_FILE_SHARINGEXCEEDED				                            EV_ERR_FILESYSTEM_DEFAULT+5		///打开共享文件太多
#define EV_ERR_FILESYSTEM_FILE_SHARINGVIOLATION				                            EV_ERR_FILESYSTEM_DEFAULT+6		///文件正在被其它进程访问
#define EV_ERR_FILESYSTEM_FILE_EXISTS						                                                EV_ERR_FILESYSTEM_DEFAULT+7		///文件已存在
#define EV_ERR_FILESYSTEM_FILE_INVALIDHANDLE				                                    EV_ERR_FILESYSTEM_DEFAULT+8		///非法文件句柄
#define EV_ERR_FILESYSTEM_FILE_BADFILENUMBER											EV_ERR_FILESYSTEM_DEFAULT+9  ///错误文件号，以读方式打开文件写数据时会发生	
#define EV_ERR_FILESYSTEM_FILE_ACCESSDENIED					                                EV_ERR_FILESYSTEM_DEFAULT+299	///文件权限不足

#define EV_ERR_FILESYSTEM_DIRECTORY_NOTFOUND				                            EV_ERR_FILESYSTEM_DEFAULT+300	///没有此目录或路径非法
#define EV_ERR_FILESYSTEM_DIRECTORY_EXISTS					                                    EV_ERR_FILESYSTEM_DEFAULT+301	///目录已存在
#define EV_ERR_FILESYSTEM_DIRECTORY_NOTEMPTY				                                EV_ERR_FILESYSTEM_DEFAULT+302	///目录非空
#define EV_ERR_FILESYSTEM_DIRECTORY_NAMETOOLONG			                	    EV_ERR_FILESYSTEM_DEFAULT+303	///目录名字太长
#define EV_ERR_FILESYSTEM_DIRECTORY_INVALIDNAME				                        EV_ERR_FILESYSTEM_DEFAULT+304	///目录名称有非法符号
#define EV_ERR_FILESYSTEM_DIRECTORY_ACCESSDENIED			                        EV_ERR_FILESYSTEM_DEFAULT+599	///目录权限不足

#define EV_ERR_FILESYSTEM_FILEMAPPING						                                           EV_ERR_FILESYSTEM_DEFAULT+600   ///文件映射
///-------------------------------------结束 文件系统错误码定义-------------------------------------------------------
///-------------------------------------开始 网络错误码定义-------------------------------------------------------------
#define EV_ERR_NETWORK_DEFAULT                                                                            EV_ERR_CORE_DEFAULT + 2000
#define EV_ERR_NETWORK_CREATESOCKETFAILED                                                EV_ERR_NETWORK_DEFAULT + 1                               ///套接字创建失败
#define EV_ERR_NETWORK_PORTBEINGUSED                                                            EV_ERR_NETWORK_DEFAULT + 2                               ///端口已经被占用 
#define EV_ERR_NETWORK_SOCKETError                                                                     EV_ERR_NETWORK_DEFAULT + 3     ////< Generic SOCKET error translates to error below.
#define EV_ERR_NETWORK_SOCKETSuccess                                                              EV_ERR_NETWORK_DEFAULT + 4     ////< No SOCKET error.
#define EV_ERR_NETWORK_SOCKETInvalidSocket                                                  EV_ERR_NETWORK_DEFAULT + 5     ////< Invalid SOCKET handle.
#define EV_ERR_NETWORK_SOCKETInvalidAddress                                               EV_ERR_NETWORK_DEFAULT + 6    ////< Invalid destination address specified.
#define EV_ERR_NETWORK_SOCKETInvalidPort                                                       EV_ERR_NETWORK_DEFAULT + 7    ////< Invalid destination port specified.
#define EV_ERR_NETWORK_SOCKETConnectionRefused                                   EV_ERR_NETWORK_DEFAULT + 8    ////< No server is listening at remote address.
#define EV_ERR_NETWORK_SOCKETTimedout                                                         EV_ERR_NETWORK_DEFAULT + 9    ////< Timed out while attempting operation.
#define EV_ERR_NETWORK_SOCKETEwouldblock                                                 EV_ERR_NETWORK_DEFAULT + 10   ////< Operation would block if SOCKET were blocking.
#define EV_ERR_NETWORK_SOCKETNotconnected                                              EV_ERR_NETWORK_DEFAULT + 11   ////< Currently not connected.
#define EV_ERR_NETWORK_SOCKETEinprogress                                                     EV_ERR_NETWORK_DEFAULT + 12   ////< SOCKET is non-blocking and the connection cannot be completed immediately
#define EV_ERR_NETWORK_SOCKETInterrupted                                                      EV_ERR_NETWORK_DEFAULT + 13   ////< Call was interrupted by a signal that was caught before a valid connection arrived.
#define EV_ERR_NETWORK_SOCKETConnectionAborted                                  EV_ERR_NETWORK_DEFAULT + 14   ////< The connection has been aborted.
#define EV_ERR_NETWORK_SOCKETProtocolError                                                 EV_ERR_NETWORK_DEFAULT + 15   ////< Invalid protocol for operation.
#define EV_ERR_NETWORK_SOCKETFirewallError                                                   EV_ERR_NETWORK_DEFAULT + 16   ////< Firewall rules forbid connection.
#define EV_ERR_NETWORK_SOCKETInvalidSocketBuffer                                    EV_ERR_NETWORK_DEFAULT + 17   ////< The receive buffer point outside the process's address space.
#define EV_ERR_NETWORK_SOCKETConnectionReset                                        EV_ERR_NETWORK_DEFAULT + 18   ////< Connection was forcibly closed by the remote host.
#define EV_ERR_NETWORK_SOCKETAddressInUse                                                EV_ERR_NETWORK_DEFAULT + 19   ////< Address already in use.
#define EV_ERR_NETWORK_SOCKETInvalidPointer                                               EV_ERR_NETWORK_DEFAULT + 20   ////< Pointer type supplied as argument is invalid.
#define EV_ERR_NETWORK_SOCKETWSAEMSGSIZE                                               EV_ERR_NETWORK_DEFAULT + 21   ////Message too long. 
#define EV_ERR_NETWORK_SOCKETWSAEALREADY                                            EV_ERR_NETWORK_DEFAULT + 22   ////An operation was attempted on a nonblocking socket with an operation already in progress—that is, calling connect a second time on a nonblocking socket that is already connecting, or canceling an asynchronous request (WSAAsyncGetXbyY) that has already been canceled or completed. 
#define EV_ERR_NETWORK_SOCKETWSAEDESTADDRREQ                                EV_ERR_NETWORK_DEFAULT + 23   ////A required address was omitted from an operation on a socket. For example, this error is returned if sendto is called with the remote address of ADDR_ANY. 
#define EV_ERR_NETWORK_SOCKETWSAEPROTOTYPE                                       EV_ERR_NETWORK_DEFAULT + 24 ////A protocol was specified in the socket function call that does not support the semantics of the socket type requested. For example, the ARPA Internet UDP protocol cannot be specified with a socket type of SOCK_STREAM. 
#define EV_ERR_NETWORK_SOCKETWSAENOPROTOOPT                                 EV_ERR_NETWORK_DEFAULT + 25 ////An unknown, invalid or unsupported option or level was specified in a getsockopt or setsockopt call. 
#define EV_ERR_NETWORK_SOCKETWSAESOCKTNOSUPPORT                       EV_ERR_NETWORK_DEFAULT + 26 ////The support for the specified socket type does not exist in this address family. For example, the optional type SOCK_RAW might be selected in a socket call, and the implementation does not support SOCK_RAW sockets at all. 
#define EV_ERR_NETWORK_SOCKETWSAEOPNOTSUPP                                     EV_ERR_NETWORK_DEFAULT + 27 ////The attempted operation is not supported for the type of object referenced. Usually this occurs when a socket descriptor to a socket that cannot support this operation is trying to accept a connection on a datagram socket. 
#define EV_ERR_NETWORK_SOCKETWSAEPFNOSUPPORT                                EV_ERR_NETWORK_DEFAULT + 28 ////The protocol family has not been configured into the system or no implementation for it exists. This message has a slightly different meaning from WSAEAFNOSUPPORT. However, it is interchangeable in most cases, and all Windows Sockets functions that return one of these messages also specify WSAEAFNOSUPPORT. 
#define EV_ERR_NETWORK_SOCKETWSAEADDRNOTAVAIL                            EV_ERR_NETWORK_DEFAULT + 29 ////Cannot assign requested address. The requested address is not valid in its context. This normally results from an attempt to bind to an address that is not valid for the local computer. This can also result from connect, sendto, WSAConnect, WSAJoinLeaf, or WSASendTo when the remote address or port is not valid for a remote computer (for example, address or port 0). 
#define EV_ERR_NETWORK_SOCKETWSAENETDOWN                                        EV_ERR_NETWORK_DEFAULT + 30 ////Network is down. A socket operation encountered a dead network. This could indicate a serious failure of the network system (that is, the protocol stack that the Windows Sockets DLL runs over), the network interface, or the local network itself. 
#define EV_ERR_NETWORK_SOCKETWSAENETUNREACH                                 EV_ERR_NETWORK_DEFAULT + 31 ////Network is unreachable. A socket operation was attempted to an unreachable network. This usually means the local software knows no route to reach the remote host. 
#define EV_ERR_NETWORK_SOCKETWSAENETRESET                                           EV_ERR_NETWORK_DEFAULT + 32 ////Network dropped connection on reset. 
#define EV_ERR_NETWORK_SOCKETWSAEISCONN                                             EV_ERR_NETWORK_DEFAULT + 33 ////Socket is already connected. 
#define EV_ERR_NETWORK_SOCKETWSAESHUTDOWN                                      EV_ERR_NETWORK_DEFAULT + 34 ////Cannot send after socket shutdown. 
#define EV_ERR_NETWORK_SOCKETWSAEHOSTDOWN                                     EV_ERR_NETWORK_DEFAULT + 35 ////Host is down. 
#define EV_ERR_NETWORK_SOCKETWSAEHOSTUNREACH                              EV_ERR_NETWORK_DEFAULT + 36 ////No route to host.
#define EV_ERR_NETWORK_SOCKETWSAEPROCLIM                                          EV_ERR_NETWORK_DEFAULT + 37 ////Too many processes. 
#define EV_ERR_NETWORK_SOCKETWSAESYSNOTREADY                               EV_ERR_NETWORK_DEFAULT + 38 ////Network subsystem is unavailable.
#define EV_ERR_NETWORK_SOCKETWSAVERNOTSUPPORTED                      EV_ERR_NETWORK_DEFAULT + 39 ////Winsock.dll version out of range. 
#define EV_ERR_NETWORK_SOCKETWSANOTINITIALISED                                EV_ERR_NETWORK_DEFAULT + 40 ////Successful WSAStartup not yet performed. 
#define EV_ERR_NETWORK_SOCKETWSAEDISCON                                            EV_ERR_NETWORK_DEFAULT + 41 ////Graceful shutdown in progress. 
#define EV_ERR_NETWORK_SOCKETWSATYPE_NOT_FOUND                         EV_ERR_NETWORK_DEFAULT + 42 ////Class type not found.
#define EV_ERR_NETWORK_SOCKETWSAHOST_NOT_FOUND                        EV_ERR_NETWORK_DEFAULT + 43 ////Host not found. 
#define EV_ERR_NETWORK_SOCKETWSATRY_AGAIN                                       EV_ERR_NETWORK_DEFAULT + 44 ////Nonauthoritative host not found. 
#define EV_ERR_NETWORK_SOCKETWSANO_RECOVERY                               EV_ERR_NETWORK_DEFAULT + 45 ////This is a nonrecoverable error.
#define EV_ERR_NETWORK_SOCKETWSA_INVALID_HANDLE                         EV_ERR_NETWORK_DEFAULT + 46 ////Specified event object handle is invalid. 
#define EV_ERR_NETWORK_SOCKETWSA_INVALID_PARAMETER                 EV_ERR_NETWORK_DEFAULT + 47 ////One or more parameters are invalid. 
#define EV_ERR_NETWORK_SOCKETWSA_IO_INCOMPLETE                            EV_ERR_NETWORK_DEFAULT + 48 ////Overlapped I/O event object not in signaled state.
#define EV_ERR_NETWORK_SOCKETWSA_IO_PENDING                                   EV_ERR_NETWORK_DEFAULT + 49 ////Overlapped operations will complete later.
#define EV_ERR_NETWORK_SOCKETWSA_NOT_ENOUGH_MEMORY          EV_ERR_NETWORK_DEFAULT + 50 ////Insufficient memory available. 
#define EV_ERR_NETWORK_SOCKETWSA_OPERATION_ABORTED               EV_ERR_NETWORK_DEFAULT + 51 ////Overlapped operation aborted.
#define EV_ERR_NETWORK_SOCKETEunknown                                                   EV_ERR_NETWORK_DEFAULT + 52   ////< Unknown error please report to mark@carrierlabs.com
///-------------------------------------结束 网络错误码定义-------------------------------------------------------------

///-------------------------------------开始 线程错误码定义-------------------------------------------------------------
#define EV_ERR_THREAD_DEFAULT                                                                            EV_ERR_CORE_DEFAULT + 3000

///-------------------------------------结束 线程错误码定义-------------------------------------------------------------


///-----------------------------------------------------错误码处理---------------------------------------------------------------------------
#define CASE_PROCESSOR(nErrCode,strMsg) \
    case nErrCode:\
    return strMsg
EV_DLL_EXPORT_C  EV_CORE_DLL ev_char *__stdcall ev_getErrorMessage(ev_uint32 nErrCode);
EV_DLL_EXPORT_C  EV_CORE_DLL ev_bool __stdcall ev_setLastError(ev_uint32 nErrCode);
EV_DLL_EXPORT_C  EV_CORE_DLL ev_uint32 __stdcall ev_getLastError();

