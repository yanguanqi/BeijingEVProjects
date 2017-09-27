/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/framelistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CFrameListenerProxy : public EarthView::World::Graphic::CFrameListener
			{
			private:
				EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CFrameListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrameListener(pList)
				{
					m_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CFrameListener::frameStarted(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CFrameListener::frameRenderingQueued(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CFrameListener::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CFrameListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				if (dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameStarted(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CFrameListenerProxy* ptr = dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameStarted(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				if (dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameRenderingQueued(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameRenderingQueued(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CFrameListenerProxy* ptr = dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameRenderingQueued_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				if (dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CFrameListenerProxy* ptr = dynamic_cast<CFrameListenerProxy*>((EarthView::World::Graphic::CFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameListener::frameEnded(evt);
				return objXXXX;
			}
		}
	}
}
