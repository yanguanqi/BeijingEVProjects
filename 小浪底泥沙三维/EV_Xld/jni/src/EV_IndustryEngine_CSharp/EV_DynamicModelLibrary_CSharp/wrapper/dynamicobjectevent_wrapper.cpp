/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicobjectevent.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
		}
	}
}
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback)(_in Real timePosition);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback)(_in ev_bool fired);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback)(_in Real timePosition);
			typedef char*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback)(_in char*& name);
			class CDynamicObjectEventProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback;
			public:
				CDynamicObjectEventProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicObjectEvent(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback = pCallback;
				}
				virtual void beforeEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback(manager, curAnimationTime, islooping);
					}
					else
						return this->CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
				}
				virtual void afterEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback(manager, curAnimationTime, isEnd);
					}
					else
						return this->CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
				}
				virtual void resetEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback(manager);
					}
					else
						return this->CDynamicObjectEvent::resetEvent(manager);
				}
				virtual void setTimePosition(_in Real timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback(timePosition);
					}
					else
						return this->CDynamicObjectEvent::setTimePosition(timePosition);
				}
				virtual Real getTimePosition() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback();
						return returnValue;
					}
					else
						return this->CDynamicObjectEvent::getTimePosition();
				}
				virtual void setIsFired(_in ev_bool fired)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback(fired);
					}
					else
						return this->CDynamicObjectEvent::setIsFired(fired);
				}
				virtual ev_bool getIsFired() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicObjectEvent::getIsFired();
				}
				virtual ev_bool canFired(_in Real timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback(timePosition);
						return returnValue;
					}
					else
						return this->CDynamicObjectEvent::canFired(timePosition);
				}
				virtual EarthView::World::Core::ev_string getName() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::ev_string returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback();
						return returnValue;
					}
					else
						return this->CDynamicObjectEvent::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicObjectEvent::setName(name);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicObjectEventProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
				else
					ptrNativeObject->beforeEvent(manager, curAnimationTime, islooping);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::beforeEvent(manager, curAnimationTime, islooping);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
				else
					ptrNativeObject->afterEvent(manager, curAnimationTime, isEnd);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::afterEvent(manager, curAnimationTime, isEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::resetEvent(manager);
				else
					ptrNativeObject->resetEvent(manager);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_resetEvent_void_CDynamicModelObjectManager_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::resetEvent(manager);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real(void *pObjectXXXX, _in Real timePosition )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setTimePosition(timePosition);
				else
					ptrNativeObject->setTimePosition(timePosition);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setTimePosition_void_Real_NoVirtual(void *pObjectXXXX, _in Real timePosition )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setTimePosition(timePosition);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getTimePosition();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getTimePosition();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getTimePosition_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getTimePosition();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool(void *pObjectXXXX, _in ev_bool fired )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setIsFired(fired);
				else
					ptrNativeObject->setIsFired(fired);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setIsFired_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool fired )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setIsFired(fired);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getIsFired();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getIsFired();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getIsFired_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getIsFired();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real(void *pObjectXXXX, _in Real timePosition )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::canFired(timePosition);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canFired(timePosition);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_canFired_ev_bool_Real_NoVirtual(void *pObjectXXXX, _in Real timePosition )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::canFired(timePosition);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EarthView::World::Core::ev_string objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_getName_EarthView_World_Core_ev_string_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				EarthView::World::Core::ev_string objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_Callback* pCallback )
			{
				CDynamicObjectEventProxy* ptr = dynamic_cast<CDynamicObjectEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEvent_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent::setName(name1);
			}
		}
	}
}
