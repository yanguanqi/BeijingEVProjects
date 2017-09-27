/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/compositorchain.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstances_push_back_void_CCompositorInstance(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance*& ref_t )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstances_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CompositorInstances_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstances_OperatorIndex_CCompositorInstance_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CompositorInstances& objYYYY = *(EarthView::World::Graphic::CompositorInstances*) pObjXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstances_at_CCompositorInstance_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CompositorInstances_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstances_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstances_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstances_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstances* ptrNativeObject = (EarthView::World::Graphic::CompositorInstances*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_getCurrent_CCompositorInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getCurrent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_next_CCompositorInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_getBegin_CCompositorInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CompositorInstanceIterator_getEnd_CCompositorInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CompositorInstanceIterator* ptrNativeObject = (EarthView::World::Graphic::CompositorInstanceIterator*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getEnd();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*  ( _stdcall EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback)(_in const void* evt);
			class CCompositorChainProxy : public EarthView::World::Graphic::CCompositorChain
			{
			private:
				EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback;
				EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback* m_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback;
				EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback;
				EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback;
				EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback;
				EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback* m_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback;
			public:
				CCompositorChainProxy(EarthView::World::Core::CNameValuePairList *pList) : CCompositorChain(pList)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport(EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport(EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport(EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener(EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent(EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent(EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent(EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent(EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback = pCallback;
				}
				virtual void viewportCameraChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CCompositorChain::viewportCameraChanged(viewport);
				}
				virtual void viewportDimensionsChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CCompositorChain::viewportDimensionsChanged(viewport);
				}
				virtual void viewportDestroyed(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback(viewport);
					}
					else
						return this->CCompositorChain::viewportDestroyed(viewport);
				}
				virtual const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* getViewportListenerPtr()
				{
					if(m_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* returnValue = m_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback();
						return returnValue;
					}
					else
						return this->CCompositorChain::getViewportListenerPtr();
				}
				virtual void preRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::preRenderTargetUpdate(evt);
				}
				virtual void postRenderTargetUpdate(_in const EarthView::World::Graphic::RenderTargetEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::postRenderTargetUpdate(evt);
				}
				virtual void preViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::preViewportUpdate(evt);
				}
				virtual void postViewportUpdate(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::postViewportUpdate(evt);
				}
				virtual void viewportAdded(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::viewportAdded(evt);
				}
				virtual void viewportRemoved(_in const EarthView::World::Graphic::RenderTargetViewportEvent& evt)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback(&evt);
					}
					else
						return this->CCompositorChain::viewportRemoved(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CCompositorChainProxy);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback)(_in EarthView::World::Graphic::CViewport* viewport);
			class CInternalViewportListenerProxy : public EarthView::World::Graphic::CCompositorChain::CInternalViewportListener
			{
			private:
				EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback;
				EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback* m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback;
			public:
				CInternalViewportListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CInternalViewportListener(pList)
				{
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport(EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport(EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport(EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback = pCallback;
				}
				virtual void viewportCameraChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CInternalViewportListener::viewportCameraChanged(viewport);
				}
				virtual void viewportDimensionsChanged(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback(viewport);
					}
					else
						return this->CInternalViewportListener::viewportDimensionsChanged(viewport);
				}
				virtual void viewportDestroyed(_in EarthView::World::Graphic::CViewport* viewport)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback(viewport);
					}
					else
						return this->CInternalViewportListener::viewportDestroyed(viewport);
				}
			};
			REGISTER_FACTORY_CLASS(CInternalViewportListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				if (dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportCameraChanged(viewport);
				else
					ptrNativeObject->viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_Callback* pCallback )
			{
				CInternalViewportListenerProxy* ptr = dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportCameraChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				if (dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDimensionsChanged(viewport);
				else
					ptrNativeObject->viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_Callback* pCallback )
			{
				CInternalViewportListenerProxy* ptr = dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDimensionsChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				if (dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDestroyed(viewport);
				else
					ptrNativeObject->viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_Callback* pCallback )
			{
				CInternalViewportListenerProxy* ptr = dynamic_cast<CInternalViewportListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CInternalViewportListener_viewportDestroyed_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CInternalViewportListener::viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportCameraChanged(viewport);
				else
					ptrNativeObject->viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportCameraChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportCameraChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportDimensionsChanged(viewport);
				else
					ptrNativeObject->viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportDimensionsChanged_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportDimensionsChanged(viewport);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportDestroyed(viewport);
				else
					ptrNativeObject->viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_viewportDestroyed_void_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* viewport )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::viewportDestroyed(viewport);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*  _stdcall EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositorChain::getViewportListenerPtr();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* objXXXX = ptrNativeObject->getViewportListenerPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener*  _stdcall EarthView_World_Graphic_CCompositorChain_getViewportListenerPtr_CInternalViewportListener_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				const EarthView::World::Graphic::CCompositorChain::CInternalViewportListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CCompositorChain::getViewportListenerPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint64   _stdcall Get_EarthView_World_Graphic_CCompositorChain_LAST()
			{
				const ev_size_t objXXXX = EarthView::World::Graphic::CCompositorChain::LAST;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_uint64   _stdcall Get_EarthView_World_Graphic_CCompositorChain_BEST()
			{
				const ev_size_t objXXXX = EarthView::World::Graphic::CCompositorChain::BEST;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain_addCompositor_CCompositorInstance_CCompositorPtr_ev_size_t_EVString(void *pObjectXXXX, _in void* filter, _in ev_uint64  addPosition, _in const char* scheme )
			{
				EarthView::World::Core::ev_string scheme1 = scheme;
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->addCompositor(*(EarthView::World::Graphic::CCompositorPtr*)filter, addPosition, scheme1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_removeCompositor_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  position )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->removeCompositor(position);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CCompositorChain_getNumCompositors_ev_size_t(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->getNumCompositors();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_removeAllCompositors_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->removeAllCompositors();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain_getCompositor_CCompositorInstance_ev_size_t(void *pObjectXXXX, _in ev_uint64  index )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getCompositor(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain_getCompositor_CCompositorInstance_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getCompositor(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain__getOriginalSceneCompositor_CCompositorInstance(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->_getOriginalSceneCompositor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CCompositorChain_getCompositors_CompositorInstanceIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CompositorInstanceIterator objXXXX = ptrNativeObject->getCompositors();
				EarthView::World::Graphic::CompositorInstanceIterator *pXXXX = new EarthView::World::Graphic::CompositorInstanceIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_setCompositorEnabled_void_ev_size_t_ev_bool(void *pObjectXXXX, _in ev_uint64  position, _in ev_bool state )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->setCompositorEnabled(position, state);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
				else
					ptrNativeObject->preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_preRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::preRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
				else
					ptrNativeObject->postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_postRenderTargetUpdate_void_RenderTargetEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::postRenderTargetUpdate(*(EarthView::World::Graphic::RenderTargetEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_preViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::preViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				if (dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
				else
					ptrNativeObject->postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_postViewportUpdate_void_RenderTargetViewportEvent_NoVirtual(void *pObjectXXXX, _in const void* evt )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::postViewportUpdate(*(EarthView::World::Graphic::RenderTargetViewportEvent*)evt);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain__markDirty_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->_markDirty();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CViewport*  _stdcall EarthView_World_Graphic_CCompositorChain_getViewport_CViewport(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CViewport* objXXXX = ptrNativeObject->getViewport();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain__removeInstance_void_CCompositorInstance(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* i )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->_removeInstance(i);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain__queuedOperation_void_CRenderSystemOperation(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance::CRenderSystemOperation* ref_op )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->_queuedOperation(ref_op);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain__compile_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				ptrNativeObject->_compile();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain_getPreviousInstance_CCompositorInstance_CCompositorInstance_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* curr, _in ev_bool activeOnly )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getPreviousInstance(curr, activeOnly);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CCompositorInstance*  _stdcall EarthView_World_Graphic_CCompositorChain_getNextInstance_CCompositorInstance_CCompositorInstance_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance* curr, _in ev_bool activeOnly )
			{
				EarthView::World::Graphic::CCompositorChain* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain*) pObjectXXXX;
				EarthView::World::Graphic::CCompositorInstance* objXXXX = ptrNativeObject->getNextInstance(curr, activeOnly);
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in char*& invocation, _inout ev_bool& skipThisInvocation);
			typedef void  ( _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback)(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 queueGroupId, _in char*& invocation, _inout ev_bool& repeatThisInvocation);
			class CRQListenerProxy : public EarthView::World::Graphic::CCompositorChain::CRQListener
			{
			private:
				EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback* m_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback;
				EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback* m_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback;
				EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback;
			public:
				CRQListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CRQListener(pList)
				{
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void(EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void(EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback = pCallback;
				}
				virtual void renderQueueStarted(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const EVString& invocation, _inout ev_bool& skipThisQueue)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback(pSceneMgr, id, invocation_Char, skipThisQueue);
					}
					else
						return this->CRQListener::renderQueueStarted(pSceneMgr, id, invocation, skipThisQueue);
				}
				virtual void renderQueueEnded(_in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const EVString& invocation, _inout ev_bool& repeatThisQueue)
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* invocation_Char = invocation.makeBuffer();
						m_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback(pSceneMgr, id, invocation_Char, repeatThisQueue);
					}
					else
						return this->CRQListener::renderQueueEnded(pSceneMgr, id, invocation, repeatThisQueue);
				}
				virtual void preRenderQueues()
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback();
					}
					else
						return this->CRQListener::preRenderQueues();
				}
				virtual void postRenderQueues()
				{
					if(m_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback();
					}
					else
						return this->CRQListener::postRenderQueues();
				}
			};
			REGISTER_FACTORY_CLASS(CRQListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const char* invocation, _inout ev_bool& skipThisQueue )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				if (dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueStarted(pSceneMgr, id, invocation1, skipThisQueue);
				else
					ptrNativeObject->renderQueueStarted(pSceneMgr, id, invocation1, skipThisQueue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback )
			{
				CRQListenerProxy* ptr = dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueStarted_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const char* invocation, _inout ev_bool& skipThisQueue )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueStarted(pSceneMgr, id, invocation1, skipThisQueue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const char* invocation, _inout ev_bool& repeatThisQueue )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				if (dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueEnded(pSceneMgr, id, invocation1, repeatThisQueue);
				else
					ptrNativeObject->renderQueueEnded(pSceneMgr, id, invocation1, repeatThisQueue);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_Callback* pCallback )
			{
				CRQListenerProxy* ptr = dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_renderQueueEnded_void_CSceneManager_ev_uint8_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* pSceneMgr, _in ev_uint8 id, _in const char* invocation, _inout ev_bool& repeatThisQueue )
			{
				EarthView::World::Core::ev_string invocation1 = invocation;
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CCompositorChain::CRQListener::renderQueueEnded(pSceneMgr, id, invocation1, repeatThisQueue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_setOperation_void_CTargetOperation_CSceneManager_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CCompositorInstance::CTargetOperation* ref_op, _in EarthView::World::Graphic::CSceneManager* ref_sm, _in EarthView::World::Graphic::CRenderSystem* ref_rs )
			{
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				ptrNativeObject->setOperation(ref_op, ref_sm, ref_rs);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_notifyViewport_void_CViewport(void *pObjectXXXX, _in EarthView::World::Graphic::CViewport* ref_vp )
			{
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				ptrNativeObject->notifyViewport(ref_vp);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CCompositorChain_CRQListener_flushUpTo_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 id )
			{
				EarthView::World::Graphic::CCompositorChain::CRQListener* ptrNativeObject = (EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX;
				ptrNativeObject->flushUpTo(id);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void_Callback* pCallback )
			{
				CRQListenerProxy* ptr = dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_preRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void_Callback* pCallback )
			{
				CRQListenerProxy* ptr = dynamic_cast<CRQListenerProxy*>((EarthView::World::Graphic::CCompositorChain::CRQListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_CRQListener_postRenderQueues_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_viewportAdded_void_RenderTargetViewportEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent( void *pObjectXXXX, EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent_Callback* pCallback )
			{
				CCompositorChainProxy* ptr = dynamic_cast<CCompositorChainProxy*>((EarthView::World::Graphic::CCompositorChain*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CCompositorChain_viewportRemoved_void_RenderTargetViewportEvent(pCallback);
				}
			}
		}
	}
}
