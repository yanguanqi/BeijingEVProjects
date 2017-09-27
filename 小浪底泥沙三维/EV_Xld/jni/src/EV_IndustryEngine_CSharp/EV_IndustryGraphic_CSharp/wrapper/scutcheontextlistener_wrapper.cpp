/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/scutcheontextlistener.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CScutcheonTextListenerProxy : public EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CScutcheonTextListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CScutcheonTextListener(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CScutcheonTextListener::frameStarted(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CScutcheonTextListener::frameRenderingQueued(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CScutcheonTextListener::frameEnded(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CScutcheonTextListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextListenerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener::frameStarted(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CScutcheonTextListenerProxy* ptr = dynamic_cast<CScutcheonTextListenerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameStarted_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener::frameStarted(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_addScutcheonText_void_CScutcheonText(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* ref_scutcheonText )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX;
				ptrNativeObject->addScutcheonText(ref_scutcheonText);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_removeScutcheonText_void_CScutcheonText(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* scutcheonText )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX;
				ptrNativeObject->removeScutcheonText(scutcheonText);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CScutcheonTextListenerProxy* ptr = dynamic_cast<CScutcheonTextListenerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CScutcheonTextListenerProxy* ptr = dynamic_cast<CScutcheonTextListenerProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextListener_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
		}
	}
}
