/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheoneventobject.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback)(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CScreenScutcheonEventObjectProxy : public EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject
			{
			private:
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback;
			public:
				CScreenScutcheonEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CScreenScutcheonEventObject(pList)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent(EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual bool onMouseDownEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onMouseDownEvent(e);
				}
				virtual bool onMouseMoveEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onMouseMoveEvent(e);
				}
				virtual bool onMouseUpEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onMouseUpEvent(e);
				}
				virtual bool onMouseWheelEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onMouseWheelEvent(e);
				}
				virtual bool onKeyDownEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onKeyDownEvent(e);
				}
				virtual bool onKeyUpEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onKeyUpEvent(e);
				}
				virtual bool onSelectedEvent(_in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onSelectedEvent(e);
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CScreenScutcheonEventObject::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CScreenScutcheonEventObject::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CScreenScutcheonEventObject::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CScreenScutcheonEventObjectProxy);
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseDownEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseDownEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseDownEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseDownEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseMoveEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseMoveEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseMoveEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseMoveEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseUpEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseUpEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseUpEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseUpEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseWheelEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onMouseWheelEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onMouseWheelEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onMouseWheelEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyDownEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onKeyDownEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyDownEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyDownEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyUpEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onKeyUpEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onKeyUpEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onKeyUpEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onSelectedEvent(e);
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->onSelectedEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onSelectedEvent_bool_CScreenScutcheonEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onSelectedEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				if (dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onEvent(e);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->onEvent(e);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject::onEvent(e);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CScreenScutcheonEventObjectProxy* ptr = dynamic_cast<CScreenScutcheonEventObjectProxy*>((EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEventObject_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
