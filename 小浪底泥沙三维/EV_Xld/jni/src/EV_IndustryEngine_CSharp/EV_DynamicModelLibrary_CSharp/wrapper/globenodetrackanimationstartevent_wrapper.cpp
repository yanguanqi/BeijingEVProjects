/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/globenodetrackanimationstartevent.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback)(_in Real timePosition);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback)(_in ev_bool fired);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback)(_in Real timePosition);
			typedef char*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback)(_in char*& name);
			class CGlobeNodeTrackAnimationStartEventProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback;
			public:
				CGlobeNodeTrackAnimationStartEventProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeNodeTrackAnimationStartEvent(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback = pCallback;
				}
				virtual void beforeEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback(manager, curAnimationTime, islooping);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::beforeEvent(manager, curAnimationTime, islooping);
				}
				virtual void afterEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback(manager, curAnimationTime, isEnd);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::afterEvent(manager, curAnimationTime, isEnd);
				}
				virtual void resetEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback(manager);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::resetEvent(manager);
				}
				virtual void setTimePosition(_in Real timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback(timePosition);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::setTimePosition(timePosition);
				}
				virtual Real getTimePosition() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback();
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::getTimePosition();
				}
				virtual void setIsFired(_in ev_bool fired)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback(fired);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::setIsFired(fired);
				}
				virtual ev_bool getIsFired() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::getIsFired();
				}
				virtual ev_bool canFired(_in Real timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback(timePosition);
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::canFired(timePosition);
				}
				virtual EarthView::World::Core::ev_string getName() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::ev_string returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback();
						return returnValue;
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CGlobeNodeTrackAnimationStartEvent::setName(name);
				}
			};
			REGISTER_FACTORY_CLASS(CGlobeNodeTrackAnimationStartEventProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				if (dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::beforeEvent(manager, curAnimationTime, islooping);
				else
					ptrNativeObject->beforeEvent(manager, curAnimationTime, islooping);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_beforeEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool islooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::beforeEvent(manager, curAnimationTime, islooping);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				if (dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::afterEvent(manager, curAnimationTime, isEnd);
				else
					ptrNativeObject->afterEvent(manager, curAnimationTime, isEnd);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_afterEvent_void_CDynamicModelObjectManager_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager, _in Real curAnimationTime, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::afterEvent(manager, curAnimationTime, isEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				if (dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::resetEvent(manager);
				else
					ptrNativeObject->resetEvent(manager);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_resetEvent_void_CDynamicModelObjectManager_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectManager* manager )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent::resetEvent(manager);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setTimePosition_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getTimePosition_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setIsFired_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getIsFired_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_canFired_ev_bool_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_getName_EarthView_World_Core_ev_string(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString_Callback* pCallback )
			{
				CGlobeNodeTrackAnimationStartEventProxy* ptr = dynamic_cast<CGlobeNodeTrackAnimationStartEventProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CGlobeNodeTrackAnimationStartEvent*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CGlobeNodeTrackAnimationStartEvent_setName_void_EVString(pCallback);
				}
			}
		}
	}
}
