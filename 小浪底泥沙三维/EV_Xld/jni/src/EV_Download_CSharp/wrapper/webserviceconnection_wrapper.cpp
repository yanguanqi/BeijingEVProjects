/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/webserviceconnection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback)(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);
				typedef void  ( _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback)();
				class CWebServiceConnectionProxy : public EarthView::World::Spatial::Download::CWebServiceConnection
				{
				private:
					EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback* m_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback;
					EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback* m_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback;
					EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback* m_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback;
				public:
					CWebServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebServiceConnection(pList)
					{
						m_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback = NULL;
						m_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp(EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void(EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void(EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback = pCallback;
					}
					virtual void setConnectionImp(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if(m_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback(ref_pImp);
						}
						else
							return this->CWebServiceConnection::setConnectionImp(ref_pImp);
					}
					virtual void closeConnect()
					{
						if(m_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback();
						}
						else
							return this->CWebServiceConnection::closeConnect();
					}
					virtual void openConnect()
					{
						if(m_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback();
						}
						else
							return this->CWebServiceConnection::openConnect();
					}
				};
				REGISTER_FACTORY_CLASS(CWebServiceConnectionProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_getUrl_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getUrl();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_getPluginFile_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					const EVString& objXXXX = ptrNativeObject->getPluginFile();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					if (dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::setConnectionImp(ref_pImp);
					else
						ptrNativeObject->setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp( void *pObjectXXXX, EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback )
				{
					CWebServiceConnectionProxy* ptr = dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_setConnectionImp_void_ConnectionImp_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					if (dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::closeConnect();
					else
						ptrNativeObject->closeConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_Callback* pCallback )
				{
					CWebServiceConnectionProxy* ptr = dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_closeConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::closeConnect();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					if (dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::openConnect();
					else
						ptrNativeObject->openConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_Callback* pCallback )
				{
					CWebServiceConnectionProxy* ptr = dynamic_cast<CWebServiceConnectionProxy*>((EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_openConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::CWebServiceConnection::openConnect();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_reConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->reConnect();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_setConnectAble_void_ev_bool(void *pObjectXXXX, _in ev_bool connectAble )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->setConnectAble(connectAble);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_setConnected_void_ev_bool(void *pObjectXXXX, _in ev_bool connected )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ptrNativeObject->setConnected(connected);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_isConnectAble_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::CWebServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::CWebServiceConnection*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isConnectAble();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_convertSendStringCode_EVString_EVString(_inout char*& sendStr )
				{
					EarthView::World::Core::ev_string sendStr1 = sendStr;
					EVString& objXXXX = EarthView::World::Spatial::Download::CWebServiceConnection::convertSendStringCode(sendStr1);
					sendStr=sendStr1.makeBuffer();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_convertRecvStringCode_EVString_EVString(_inout char*& recvStr )
				{
					EarthView::World::Core::ev_string recvStr1 = recvStr;
					EVString& objXXXX = EarthView::World::Spatial::Download::CWebServiceConnection::convertRecvStringCode(recvStr1);
					recvStr=recvStr1.makeBuffer();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_CWebServiceConnection_host_EVString_EVString(_in const char* url )
				{
					EarthView::World::Core::ev_string url1 = url;
					EVString objXXXX = EarthView::World::Spatial::Download::CWebServiceConnection::host(url1);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
