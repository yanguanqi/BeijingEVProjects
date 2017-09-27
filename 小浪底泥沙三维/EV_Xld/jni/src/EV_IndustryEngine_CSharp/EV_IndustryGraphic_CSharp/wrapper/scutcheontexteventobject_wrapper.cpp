/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/scutcheontexteventobject.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CScutcheonTextEventObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback;
			public:
				CScutcheonTextEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CScutcheonTextEventObject(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent(EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual bool onMouseDownEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onMouseDownEvent(e);
				}
				virtual bool onMouseMoveEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onMouseMoveEvent(e);
				}
				virtual bool onMouseUpEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onMouseUpEvent(e);
				}
				virtual bool onKeyDownEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onKeyDownEvent(e);
				}
				virtual bool onKeyUpEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onKeyUpEvent(e);
				}
				virtual bool onSelectedEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onSelectedEvent(e);
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScutcheonTextEventObject::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CScutcheonTextEventObject::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CScutcheonTextEventObject::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CScutcheonTextEventObjectProxy);
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseDownEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseDownEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseDownEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseDownEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseMoveEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseMoveEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseMoveEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseMoveEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseUpEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseUpEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onMouseUpEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onMouseUpEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyDownEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onKeyDownEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyDownEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyDownEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyUpEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onKeyUpEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onKeyUpEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onKeyUpEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onSelectedEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onSelectedEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onSelectedEvent_bool_CScutcheonTextEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onSelectedEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				if (dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CScutcheonTextEventObjectProxy* ptr = dynamic_cast<CScutcheonTextEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEventObject_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
