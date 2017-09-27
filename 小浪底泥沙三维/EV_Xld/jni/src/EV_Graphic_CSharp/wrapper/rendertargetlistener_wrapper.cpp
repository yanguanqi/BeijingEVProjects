/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/rendertargetlistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall Get_EarthView_World_Graphic_RenderTargetEvent_source( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderTargetEvent* ptrNativeObject = (EarthView::World::Graphic::RenderTargetEvent*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->source;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderTargetEvent_source( void *pObjectXXXX, EarthView::World::Graphic::CRenderTarget*  value )
			{
				((EarthView::World::Graphic::RenderTargetEvent*)pObjectXXXX)->source = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall Get_EarthView_World_Graphic_RenderTargetViewportEvent_source( void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderTargetViewportEvent* ptrNativeObject = (EarthView::World::Graphic::RenderTargetViewportEvent*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->source;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_RenderTargetViewportEvent_source( void *pObjectXXXX, EarthView::World::Graphic::CViewport*  value )
			{
				((EarthView::World::Graphic::RenderTargetViewportEvent*)pObjectXXXX)->source = value;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			class CRenderTargetListenerProxy : public EarthView::World::Graphic::CRenderTargetListener
			{
			private:
				EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback;
				EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback;
				EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback;
			public:
				CRenderTargetListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderTargetListener(pList)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
					m_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
					m_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				virtual void preRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::preRenderTargetUpdate(evt);
				}
				virtual void postRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::postRenderTargetUpdate(evt);
				}
				virtual void preViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::preViewportUpdate(evt);
				}
				virtual void postViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::postViewportUpdate(evt);
				}
				virtual void viewportAdded(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::viewportAdded(evt);
				}
				virtual void viewportRemoved(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CRenderTargetListener::viewportRemoved(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CRenderTargetListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
				else
					ptrNativeObject->preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_preRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
				else
					ptrNativeObject->postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_postRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_preViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_postViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::viewportAdded(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->viewportAdded(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportAdded_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::viewportAdded(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				if (dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::viewportRemoved(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->viewportRemoved(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CRenderTargetListenerProxy* ptr = dynamic_cast<CRenderTargetListenerProxy*>((EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderTargetListener_viewportRemoved_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CRenderTargetListener* ptrNativeObject = (EarthView::World::Graphic::CRenderTargetListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CRenderTargetListener::viewportRemoved(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
		}
	}
}
