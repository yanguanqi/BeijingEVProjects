/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/renderqueuelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in char*& invocation, _inout ev_bool& skipThisInvocation);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in char*& invocation, _inout ev_bool& repeatThisInvocation);
			class CRenderQueueListenerProxy : public EarthView::World::Graphic::CRenderQueueListener
			{
			private:
				EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback* m_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback;
				EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback* m_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback;
				EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback;
			public:
				CRenderQueueListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderQueueListener(pList)
				{
					m_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = pCallback;
				}
				virtual void preRenderQueues()
				{
					if(m_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback();
					}
					else
						return this->CRenderQueueListener::preRenderQueues();
				}
				virtual void postRenderQueues()
				{
					if(m_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback();
					}
					else
						return this->CRenderQueueListener::postRenderQueues();
				}
				virtual void renderQueueStarted(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const EVString& invocation, _inout ev_bool& skipThisInvocation)
				{
					if(m_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						m_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback(pSceneMgr, queueGroupId, invocation_Char, skipThisInvocation);
					}
					else
						return this->CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation, skipThisInvocation);
				}
				virtual void renderQueueEnded(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const EVString& invocation, _inout ev_bool& repeatThisInvocation)
				{
					if(m_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						m_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback(pSceneMgr, queueGroupId, invocation_Char, repeatThisInvocation);
					}
					else
						return this->CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation, repeatThisInvocation);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderQueueListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::preRenderQueues();
				else
					ptrNativeObject->preRenderQueues();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_Callback* pCallback )
			{
				CRenderQueueListenerProxy* ptr = dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_preRenderQueues_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::preRenderQueues();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::postRenderQueues();
				else
					ptrNativeObject->postRenderQueues();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_Callback* pCallback )
			{
				CRenderQueueListenerProxy* ptr = dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_postRenderQueues_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::postRenderQueues();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const char* invocation, _inout ev_bool& skipThisInvocation )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation1, skipThisInvocation);
				else
					ptrNativeObject->renderQueueStarted(pSceneMgr, queueGroupId, invocation1, skipThisInvocation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback )
			{
				CRenderQueueListenerProxy* ptr = dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const char* invocation, _inout ev_bool& skipThisInvocation )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::renderQueueStarted(pSceneMgr, queueGroupId, invocation1, skipThisInvocation);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const char* invocation, _inout ev_bool& repeatThisInvocation )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				if (dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation1, repeatThisInvocation);
				else
					ptrNativeObject->renderQueueEnded(pSceneMgr, queueGroupId, invocation1, repeatThisInvocation);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback )
			{
				CRenderQueueListenerProxy* ptr = dynamic_cast<CRenderQueueListenerProxy*>((EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderQueueListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in const char* invocation, _inout ev_bool& repeatThisInvocation )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CRenderQueueListener* ptrNativeObject = (EarthView::World::Graphic::CRenderQueueListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderQueueListener::renderQueueEnded(pSceneMgr, queueGroupId, invocation1, repeatThisInvocation);
			}
		}
	}
}
