/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/backgroundworkemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Geometry3D
		{
			typedef ev_uint64  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback)(_inout void* request);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback)(_in ev_uint64 ticket);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback)();
			class CBackgroundWorkQueueProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue
			{
			private:
				EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback;
			public:
				CBackgroundWorkQueueProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundWorkQueue(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest(EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64(EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void(EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void(EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString(EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString(EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback = pCallback;
				}
				virtual ev_uint64 addRequest(_inout EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest& request)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback(&request);
						return returnValue;
					}
					else
						return this->CBackgroundWorkQueue::addRequest(request);
				}
				virtual EVString getGroupName() const
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBackgroundWorkQueue::getGroupName();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CBackgroundWorkQueue::getName();
				}
				virtual void initialise()
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback();
					}
					else
						return this->CBackgroundWorkQueue::initialise();
				}
				virtual void shutdown()
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback();
					}
					else
						return this->CBackgroundWorkQueue::shutdown();
				}
				virtual void abortRequest(_in ev_uint64 ticket)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback(ticket);
					}
					else
						return this->CBackgroundWorkQueue::abortRequest(ticket);
				}
			};
			REGISTER_FACTORY_CLASS(CBackgroundWorkQueueProxy);
			typedef EarthView::World::Core::CWorkQueue::ResponsePara*  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback)();
			class BackgroundResponseProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse
			{
			private:
				EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback;
			public:
				BackgroundResponseProxy(EarthView::World::Core::CNameValuePairList *pList) : BackgroundResponse(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara(EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback = pCallback;
				}
				virtual EarthView::World::Core::CWorkQueue::ResponsePara* clone() const
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::ResponsePara* returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->BackgroundResponse::clone();
				}
			};
			REGISTER_FACTORY_CLASS(BackgroundResponseProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::ResponsePara*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*) pObjectXXXX;
				if (dynamic_cast<BackgroundResponseProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_Callback* pCallback )
			{
				BackgroundResponseProxy* ptr = dynamic_cast<BackgroundResponseProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::ResponsePara*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundResponse_clone_ResponsePara_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::ResponsePara* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundResponse::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef EarthView::World::Core::CWorkQueue::RequestPara*  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback)();
			class BackgroundRequestProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest
			{
			private:
				EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback;
			public:
				BackgroundRequestProxy(EarthView::World::Core::CNameValuePairList *pList) : BackgroundRequest(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara(EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback = pCallback;
				}
				virtual EarthView::World::Core::CWorkQueue::RequestPara* clone() const
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::RequestPara* returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->BackgroundRequest::clone();
				}
			};
			REGISTER_FACTORY_CLASS(BackgroundRequestProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CVisibleObject*  _stdcall Get_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mpObj( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX;
				EarthView::World::Geometry3D::CVisibleObject* objXXXX = ptrNativeObject->mpObj;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mpObj( void *pObjectXXXX, EarthView::World::Geometry3D::CVisibleObject*  value )
			{
				((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjectXXXX)->mpObj = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mReqType( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX;
				EarthView::World::Geometry3D::BackgroundRequestType objXXXX = ptrNativeObject->mReqType;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mReqType( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjectXXXX)->mReqType = (EarthView::World::Geometry3D::BackgroundRequestType)value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CNode*  _stdcall Get_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mpNode( void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX;
				EarthView::World::Graphic::CNode* objXXXX = ptrNativeObject->mpNode;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_mpNode( void *pObjectXXXX, EarthView::World::Graphic::CNode*  value )
			{
				((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)pObjectXXXX)->mpNode = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::RequestPara*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX;
				if (dynamic_cast<BackgroundRequestProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_Callback* pCallback )
			{
				BackgroundRequestProxy* ptr = dynamic_cast<BackgroundRequestProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::RequestPara*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_BackgroundRequest_clone_RequestPara_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::RequestPara* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ);
			typedef EarthView::World::Core::CWorkQueue::CResponse*  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ);
			class CBackgroundRequestHandlerProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler
			{
			private:
				EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback;
			public:
				CBackgroundRequestHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundRequestHandler(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback = pCallback;
				}
				virtual ev_bool canHandleRequest(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback(req, srcQ);
						return returnValue;
					}
					else
						return this->CBackgroundRequestHandler::canHandleRequest(req, srcQ);
				}
				virtual EarthView::World::Core::CWorkQueue::CResponse* handleRequest(_in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CWorkQueue::CResponse* returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback(req, srcQ);
						return returnValue;
					}
					else
						return this->CBackgroundRequestHandler::handleRequest(req, srcQ);
				}
			};
			REGISTER_FACTORY_CLASS(CBackgroundRequestHandlerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX;
				if (dynamic_cast<CBackgroundRequestHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::canHandleRequest(req, srcQ);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canHandleRequest(req, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_Callback* pCallback )
			{
				CBackgroundRequestHandlerProxy* ptr = dynamic_cast<CBackgroundRequestHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_canHandleRequest_ev_bool_CRequest_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::canHandleRequest(req, srcQ);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX;
				if (dynamic_cast<CBackgroundRequestHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::handleRequest(req, srcQ);
					return objXXXX;
				}
				else
				{
					EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->handleRequest(req, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_Callback* pCallback )
			{
				CBackgroundRequestHandlerProxy* ptr = dynamic_cast<CBackgroundRequestHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue::CResponse*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundRequestHandler_handleRequest_CResponse_CRequest_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CRequest* req, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue::CResponse* objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundRequestHandler::handleRequest(req, srcQ);
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ);
			typedef void  ( _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback)(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ);
			class CBackgroundResponseHandlerProxy : public EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler
			{
			private:
				EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback;
				EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback;
			public:
				CBackgroundResponseHandlerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundResponseHandler(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue(EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback = pCallback;
				}
				virtual ev_bool canHandleResponse(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback(res, srcQ);
						return returnValue;
					}
					else
						return this->CBackgroundResponseHandler::canHandleResponse(res, srcQ);
				}
				virtual void handleResponse(_in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback(res, srcQ);
					}
					else
						return this->CBackgroundResponseHandler::handleResponse(res, srcQ);
				}
			};
			REGISTER_FACTORY_CLASS(CBackgroundResponseHandlerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX;
				if (dynamic_cast<CBackgroundResponseHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::canHandleResponse(res, srcQ);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canHandleResponse(res, srcQ);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_Callback* pCallback )
			{
				CBackgroundResponseHandlerProxy* ptr = dynamic_cast<CBackgroundResponseHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_canHandleResponse_ev_bool_CResponse_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::canHandleResponse(res, srcQ);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX;
				if (dynamic_cast<CBackgroundResponseHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::handleResponse(res, srcQ);
				else
					ptrNativeObject->handleResponse(res, srcQ);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_Callback* pCallback )
			{
				CBackgroundResponseHandlerProxy* ptr = dynamic_cast<CBackgroundResponseHandlerProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_CBackgroundResponseHandler_handleResponse_void_CResponse_CWorkQueue_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Core::CWorkQueue::CResponse* res, _in const EarthView::World::Core::CWorkQueue* srcQ )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::CBackgroundResponseHandler::handleResponse(res, srcQ);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CBackgroundWorkQueue*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getSingletonPtr_CBackgroundWorkQueue( )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* objXXXX = EarthView::World::Geometry3D::CBackgroundWorkQueue::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_releaseSingleton_void( )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue::releaseSingleton();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest(void *pObjectXXXX, _inout void* request )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::addRequest(*(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)request);
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->addRequest(*(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)request);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_addRequest_ev_uint64_BackgroundRequest_NoVirtual(void *pObjectXXXX, _inout void* request )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::addRequest(*(EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest*)request);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::getGroupName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getGroupName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getGroupName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::getGroupName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::initialise();
				else
					ptrNativeObject->initialise();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_initialise_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::initialise();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::shutdown();
				else
					ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_shutdown_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::shutdown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64(void *pObjectXXXX, _in ev_uint64 ticket )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				if (dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::abortRequest(ticket);
				else
					ptrNativeObject->abortRequest(ticket);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_Callback* pCallback )
			{
				CBackgroundWorkQueueProxy* ptr = dynamic_cast<CBackgroundWorkQueueProxy*>((EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkQueue_abortRequest_void_ev_uint64_NoVirtual(void *pObjectXXXX, _in ev_uint64 ticket )
			{
				EarthView::World::Geometry3D::CBackgroundWorkQueue* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkQueue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Geometry3D::CBackgroundWorkQueue::abortRequest(ticket);
			}
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CBackgroundQueueListenerProxy : public EarthView::World::Geometry3D::CBackgroundQueueListener
			{
			private:
				EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CBackgroundQueueListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CBackgroundQueueListener(pList)
				{
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent(EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent(EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CBackgroundQueueListener::frameEnded(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CBackgroundQueueListener::frameStarted(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CBackgroundQueueListener::frameRenderingQueued(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CBackgroundQueueListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Geometry3D::CBackgroundQueueListener* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjectXXXX;
				if (dynamic_cast<CBackgroundQueueListenerProxy*>((EarthView::World::Geometry3D::CBackgroundQueueListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundQueueListener::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CBackgroundQueueListenerProxy* ptr = dynamic_cast<CBackgroundQueueListenerProxy*>((EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Geometry3D_CBackgroundQueueListener_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Geometry3D::CBackgroundQueueListener* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Geometry3D::CBackgroundQueueListener::frameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CBackgroundQueueListenerProxy* ptr = dynamic_cast<CBackgroundQueueListenerProxy*>((EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CBackgroundQueueListenerProxy* ptr = dynamic_cast<CBackgroundQueueListenerProxy*>((EarthView::World::Geometry3D::CBackgroundQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Geometry3D_CBackgroundQueueListener_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Geometry3D::CBackgroundWorkManager*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_getSingletonPtr_CBackgroundWorkManager( )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* objXXXX = EarthView::World::Geometry3D::CBackgroundWorkManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_releaseSingleton_void( )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager::releaseSingleton();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_init_void(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjectXXXX;
				ptrNativeObject->init();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_addReqeust_void_BackgroundRequest(void *pObjectXXXX, _in EarthView::World::Geometry3D::CBackgroundWorkQueue::BackgroundRequest* req )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjectXXXX;
				ptrNativeObject->addReqeust(req);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_abortRequest_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjectXXXX;
				ptrNativeObject->abortRequest(pObj);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_syncAbortRequest_void_CVisibleObject(void *pObjectXXXX, _in EarthView::World::Geometry3D::CVisibleObject* pObj )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjectXXXX;
				ptrNativeObject->syncAbortRequest(pObj);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Geometry3D_CBackgroundWorkManager_getWorkQuque_CWorkQueue(void *pObjectXXXX )
			{
				EarthView::World::Geometry3D::CBackgroundWorkManager* ptrNativeObject = (EarthView::World::Geometry3D::CBackgroundWorkManager*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWorkQuque();
				return objXXXX;
			}
		}
	}
}
