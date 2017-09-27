/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/predefinedcontrollers.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef EarthView::World::Graphic::CFrameListener*  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback)();
			typedef Real  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CFrameTimeControllerValueProxy : public EarthView::World::Graphic::CFrameTimeControllerValue
			{
			private:
				EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback;
			public:
				CFrameTimeControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CFrameTimeControllerValue(pList)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CFrameTimeControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CFrameTimeControllerValue::setValue(value);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CFrameTimeControllerValue::frameStarted(evt);
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CFrameTimeControllerValue::frameEnded(evt);
				}
				virtual EarthView::World::Graphic::CFrameListener* getListenerPtr()
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::CFrameListener* returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback();
						return returnValue;
					}
					else
						return this->CFrameTimeControllerValue::getListenerPtr();
				}
			};
			REGISTER_FACTORY_CLASS(CFrameTimeControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_Callback* pCallback )
			{
				CFrameTimeControllerValueProxy* ptr = dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CFrameTimeControllerValueProxy* ptr = dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::setValue(value);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getTimeFactor_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTimeFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setTimeFactor_void_Real(void *pObjectXXXX, _in Real tf )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ptrNativeObject->setTimeFactor(tf);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getFrameDelay_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFrameDelay();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setFrameDelay_void_Real(void *pObjectXXXX, _in Real fd )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ptrNativeObject->setFrameDelay(fd);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getElapsedTime_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getElapsedTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_setElapsedTime_void_Real(void *pObjectXXXX, _in Real elapsedTime )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ptrNativeObject->setElapsedTime(elapsedTime);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::frameStarted(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CFrameTimeControllerValueProxy* ptr = dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameStarted_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::frameStarted(evt);
				return objXXXX;
			}
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback)(_in const EarthView::World::Graphic::FrameEvent& evt);
			class CInternalFrameListenerProxy : public EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener
			{
			private:
				EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback;
				EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback* m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback;
			public:
				CInternalFrameListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CInternalFrameListener(pList)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = NULL;
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback = pCallback;
				}
				virtual ev_bool frameEnded(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CInternalFrameListener::frameEnded(evt);
				}
				virtual ev_bool frameStarted(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CInternalFrameListener::frameStarted(evt);
				}
				virtual ev_bool frameRenderingQueued(_in const EarthView::World::Graphic::FrameEvent& evt)
				{
					if(m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback(evt);
						return returnValue;
					}
					else
						return this->CInternalFrameListener::frameRenderingQueued(evt);
				}
			};
			REGISTER_FACTORY_CLASS(CInternalFrameListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX;
				if (dynamic_cast<CInternalFrameListenerProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CInternalFrameListenerProxy* ptr = dynamic_cast<CInternalFrameListenerProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX;
				if (dynamic_cast<CInternalFrameListenerProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameStarted(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameStarted(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_Callback* pCallback )
			{
				CInternalFrameListenerProxy* ptr = dynamic_cast<CInternalFrameListenerProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameStarted_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener::frameStarted(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent_Callback* pCallback )
			{
				CInternalFrameListenerProxy* ptr = dynamic_cast<CInternalFrameListenerProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue::CInternalFrameListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_CInternalFrameListener_frameRenderingQueued_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::frameEnded(evt);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->frameEnded(evt);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_Callback* pCallback )
			{
				CFrameTimeControllerValueProxy* ptr = dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_frameEnded_ev_bool_FrameEvent_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::frameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFrameListener*  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CFrameListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::getListenerPtr();
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CFrameListener* objXXXX = ptrNativeObject->getListenerPtr();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener( void *pObjectXXXX, EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_Callback* pCallback )
			{
				CFrameTimeControllerValueProxy* ptr = dynamic_cast<CFrameTimeControllerValueProxy*>((EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CFrameListener*  _stdcall EarthView_World_Graphic_CFrameTimeControllerValue_getListenerPtr_CFrameListener_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CFrameTimeControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFrameTimeControllerValue*) pObjectXXXX;
				EarthView::World::Graphic::CFrameListener* objXXXX = ptrNativeObject->EarthView::World::Graphic::CFrameTimeControllerValue::getListenerPtr();
				return objXXXX;
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CTextureFrameControllerValueProxy : public EarthView::World::Graphic::CTextureFrameControllerValue
			{
			private:
				EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback;
			public:
				CTextureFrameControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextureFrameControllerValue(pList)
				{
					m_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CTextureFrameControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CTextureFrameControllerValue::setValue(value);
				}
			};
			REGISTER_FACTORY_CLASS(CTextureFrameControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureFrameControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX;
				if (dynamic_cast<CTextureFrameControllerValueProxy*>((EarthView::World::Graphic::CTextureFrameControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureFrameControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_Callback* pCallback )
			{
				CTextureFrameControllerValueProxy* ptr = dynamic_cast<CTextureFrameControllerValueProxy*>((EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureFrameControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CTextureFrameControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureFrameControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX;
				if (dynamic_cast<CTextureFrameControllerValueProxy*>((EarthView::World::Graphic::CTextureFrameControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTextureFrameControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CTextureFrameControllerValueProxy* ptr = dynamic_cast<CTextureFrameControllerValueProxy*>((EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureFrameControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTextureFrameControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTextureFrameControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTextureFrameControllerValue::setValue(value);
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CTexCoordModifierControllerValueProxy : public EarthView::World::Graphic::CTexCoordModifierControllerValue
			{
			private:
				EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback;
			public:
				CTexCoordModifierControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CTexCoordModifierControllerValue(pList)
				{
					m_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CTexCoordModifierControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CTexCoordModifierControllerValue::setValue(value);
				}
			};
			REGISTER_FACTORY_CLASS(CTexCoordModifierControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexCoordModifierControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX;
				if (dynamic_cast<CTexCoordModifierControllerValueProxy*>((EarthView::World::Graphic::CTexCoordModifierControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexCoordModifierControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_Callback* pCallback )
			{
				CTexCoordModifierControllerValueProxy* ptr = dynamic_cast<CTexCoordModifierControllerValueProxy*>((EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTexCoordModifierControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CTexCoordModifierControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTexCoordModifierControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX;
				if (dynamic_cast<CTexCoordModifierControllerValueProxy*>((EarthView::World::Graphic::CTexCoordModifierControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CTexCoordModifierControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CTexCoordModifierControllerValueProxy* ptr = dynamic_cast<CTexCoordModifierControllerValueProxy*>((EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTexCoordModifierControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CTexCoordModifierControllerValue* ptrNativeObject = (EarthView::World::Graphic::CTexCoordModifierControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CTexCoordModifierControllerValue::setValue(value);
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback)(_in Real value);
			class CFloatGpuParameterControllerValueProxy : public EarthView::World::Graphic::CFloatGpuParameterControllerValue
			{
			private:
				EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback* m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback;
				EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback* m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback;
			public:
				CFloatGpuParameterControllerValueProxy(EarthView::World::Core::CNameValuePairList *pList) : CFloatGpuParameterControllerValue(pList)
				{
					m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback = NULL;
					m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback = pCallback;
				}
				virtual Real getValue() const
				{
					if(m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback();
						return returnValue;
					}
					else
						return this->CFloatGpuParameterControllerValue::getValue();
				}
				virtual void setValue(_in Real value)
				{
					if(m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback(value);
					}
					else
						return this->CFloatGpuParameterControllerValue::setValue(value);
				}
			};
			REGISTER_FACTORY_CLASS(CFloatGpuParameterControllerValueProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFloatGpuParameterControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFloatGpuParameterControllerValueProxy*>((EarthView::World::Graphic::CFloatGpuParameterControllerValue*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFloatGpuParameterControllerValue::getValue();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getValue();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real( void *pObjectXXXX, EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_Callback* pCallback )
			{
				CFloatGpuParameterControllerValueProxy* ptr = dynamic_cast<CFloatGpuParameterControllerValueProxy*>((EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_getValue_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CFloatGpuParameterControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CFloatGpuParameterControllerValue::getValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CFloatGpuParameterControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX;
				if (dynamic_cast<CFloatGpuParameterControllerValueProxy*>((EarthView::World::Graphic::CFloatGpuParameterControllerValue*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CFloatGpuParameterControllerValue::setValue(value);
				else
					ptrNativeObject->setValue(value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real( void *pObjectXXXX, EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_Callback* pCallback )
			{
				CFloatGpuParameterControllerValueProxy* ptr = dynamic_cast<CFloatGpuParameterControllerValueProxy*>((EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CFloatGpuParameterControllerValue_setValue_void_Real_NoVirtual(void *pObjectXXXX, _in Real value )
			{
				EarthView::World::Graphic::CFloatGpuParameterControllerValue* ptrNativeObject = (EarthView::World::Graphic::CFloatGpuParameterControllerValue*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CFloatGpuParameterControllerValue::setValue(value);
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback)(_in Real sourceValue);
			class CPassthroughControllerFunctionProxy : public EarthView::World::Graphic::CPassthroughControllerFunction
			{
			private:
				EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback* m_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback;
			public:
				CPassthroughControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CPassthroughControllerFunction(pList)
				{
					m_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback = pCallback;
				}
				virtual Real calculate(_in Real source)
				{
					if(m_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback(source);
						return returnValue;
					}
					else
						return this->CPassthroughControllerFunction::calculate(source);
				}
			};
			REGISTER_FACTORY_CLASS(CPassthroughControllerFunctionProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CPassthroughControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CPassthroughControllerFunction*) pObjectXXXX;
				if (dynamic_cast<CPassthroughControllerFunctionProxy*>((EarthView::World::Graphic::CPassthroughControllerFunction*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPassthroughControllerFunction::calculate(source);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->calculate(source);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_Callback* pCallback )
			{
				CPassthroughControllerFunctionProxy* ptr = dynamic_cast<CPassthroughControllerFunctionProxy*>((EarthView::World::Graphic::CPassthroughControllerFunction*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CPassthroughControllerFunction_calculate_Real_Real_NoVirtual(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CPassthroughControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CPassthroughControllerFunction*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CPassthroughControllerFunction::calculate(source);
				return objXXXX;
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback)(_in Real sourceValue);
			class CAnimationControllerFunctionProxy : public EarthView::World::Graphic::CAnimationControllerFunction
			{
			private:
				EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback* m_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback;
			public:
				CAnimationControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CAnimationControllerFunction(pList)
				{
					m_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback = pCallback;
				}
				virtual Real calculate(_in Real source)
				{
					if(m_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback(source);
						return returnValue;
					}
					else
						return this->CAnimationControllerFunction::calculate(source);
				}
			};
			REGISTER_FACTORY_CLASS(CAnimationControllerFunctionProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CAnimationControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjectXXXX;
				if (dynamic_cast<CAnimationControllerFunctionProxy*>((EarthView::World::Graphic::CAnimationControllerFunction*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationControllerFunction::calculate(source);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->calculate(source);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_Callback* pCallback )
			{
				CAnimationControllerFunctionProxy* ptr = dynamic_cast<CAnimationControllerFunctionProxy*>((EarthView::World::Graphic::CAnimationControllerFunction*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CAnimationControllerFunction_calculate_Real_Real_NoVirtual(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CAnimationControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CAnimationControllerFunction::calculate(source);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationControllerFunction_setTime_void_Real(void *pObjectXXXX, _in Real timeVal )
			{
				EarthView::World::Graphic::CAnimationControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjectXXXX;
				ptrNativeObject->setTime(timeVal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CAnimationControllerFunction_setSequenceTime_void_Real(void *pObjectXXXX, _in Real seqVal )
			{
				EarthView::World::Graphic::CAnimationControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CAnimationControllerFunction*) pObjectXXXX;
				ptrNativeObject->setSequenceTime(seqVal);
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback)(_in Real sourceValue);
			class CScaleControllerFunctionProxy : public EarthView::World::Graphic::CScaleControllerFunction
			{
			private:
				EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback* m_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback;
			public:
				CScaleControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CScaleControllerFunction(pList)
				{
					m_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback = pCallback;
				}
				virtual Real calculate(_in Real source)
				{
					if(m_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback(source);
						return returnValue;
					}
					else
						return this->CScaleControllerFunction::calculate(source);
				}
			};
			REGISTER_FACTORY_CLASS(CScaleControllerFunctionProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CScaleControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CScaleControllerFunction*) pObjectXXXX;
				if (dynamic_cast<CScaleControllerFunctionProxy*>((EarthView::World::Graphic::CScaleControllerFunction*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScaleControllerFunction::calculate(source);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->calculate(source);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_Callback* pCallback )
			{
				CScaleControllerFunctionProxy* ptr = dynamic_cast<CScaleControllerFunctionProxy*>((EarthView::World::Graphic::CScaleControllerFunction*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CScaleControllerFunction_calculate_Real_Real_NoVirtual(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CScaleControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CScaleControllerFunction*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CScaleControllerFunction::calculate(source);
				return objXXXX;
			}
			typedef Real  ( _stdcall EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback)(_in Real sourceValue);
			class CWaveformControllerFunctionProxy : public EarthView::World::Graphic::CWaveformControllerFunction
			{
			private:
				EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback* m_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback;
			public:
				CWaveformControllerFunctionProxy(EarthView::World::Core::CNameValuePairList *pList) : CWaveformControllerFunction(pList)
				{
					m_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback = pCallback;
				}
				virtual Real calculate(_in Real source)
				{
					if(m_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback(source);
						return returnValue;
					}
					else
						return this->CWaveformControllerFunction::calculate(source);
				}
			};
			REGISTER_FACTORY_CLASS(CWaveformControllerFunctionProxy);
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CWaveformControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CWaveformControllerFunction*) pObjectXXXX;
				if (dynamic_cast<CWaveformControllerFunctionProxy*>((EarthView::World::Graphic::CWaveformControllerFunction*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CWaveformControllerFunction::calculate(source);
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->calculate(source);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real( void *pObjectXXXX, EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_Callback* pCallback )
			{
				CWaveformControllerFunctionProxy* ptr = dynamic_cast<CWaveformControllerFunctionProxy*>((EarthView::World::Graphic::CWaveformControllerFunction*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CWaveformControllerFunction_calculate_Real_Real_NoVirtual(void *pObjectXXXX, _in Real source )
			{
				EarthView::World::Graphic::CWaveformControllerFunction* ptrNativeObject = (EarthView::World::Graphic::CWaveformControllerFunction*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::World::Graphic::CWaveformControllerFunction::calculate(source);
				return objXXXX;
			}
		}
	}
}
