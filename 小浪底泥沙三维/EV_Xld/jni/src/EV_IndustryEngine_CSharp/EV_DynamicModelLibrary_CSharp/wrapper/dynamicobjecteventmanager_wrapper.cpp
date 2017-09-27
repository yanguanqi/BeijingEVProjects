/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicobjecteventmanager.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace DynamicModelLibrary
		{
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback)(_in Real time, _in ev_bool isLooping);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback)(_in Real time, _in ev_bool isEnd);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback)(_in Real time);
			typedef const char*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback)(_in char*& name);
			class CDynamicObjectEventManagerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback;
			public:
				CDynamicObjectEventManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicObjectEventManager(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback = pCallback;
				}
				virtual void addDynamicObjectEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback(ref_dynamicObjectEvent);
					}
					else
						return this->CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
				}
				virtual void removeDynamicObjectEvent(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback(dynamicObjectEvent);
					}
					else
						return this->CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
				}
				virtual void beforeTimePosition(_in Real time, _in ev_bool isLooping)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback(time, isLooping);
					}
					else
						return this->CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
				}
				virtual void afterTimePosition(_in Real time, _in ev_bool isEnd)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback(time, isEnd);
					}
					else
						return this->CDynamicObjectEventManager::afterTimePosition(time, isEnd);
				}
				virtual void resetEvent()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback();
					}
					else
						return this->CDynamicObjectEventManager::resetEvent();
				}
				virtual void setTimePosition(_in Real time)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback(time);
					}
					else
						return this->CDynamicObjectEventManager::setTimePosition(time);
				}
				virtual const EVString& getName() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						const EVString& returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDynamicObjectEventManager::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicObjectEventManager::setName(name);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicObjectEventManagerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
				else
					ptrNativeObject->addDynamicObjectEvent(ref_dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_addDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::addDynamicObjectEvent(ref_dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
				else
					ptrNativeObject->removeDynamicObjectEvent(dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_removeDynamicObjectEvent_void_CDynamicObjectEvent_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::removeDynamicObjectEvent(dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(void *pObjectXXXX, _in Real time, _in ev_bool isLooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
				else
					ptrNativeObject->beforeTimePosition(time, isLooping);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_beforeTimePosition_void_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real time, _in ev_bool isLooping )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::beforeTimePosition(time, isLooping);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(void *pObjectXXXX, _in Real time, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::afterTimePosition(time, isEnd);
				else
					ptrNativeObject->afterTimePosition(time, isEnd);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_afterTimePosition_void_Real_ev_bool_NoVirtual(void *pObjectXXXX, _in Real time, _in ev_bool isEnd )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::afterTimePosition(time, isEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::resetEvent();
				else
					ptrNativeObject->resetEvent();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_resetEvent_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::resetEvent();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(void *pObjectXXXX, _in Real time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setTimePosition(time);
				else
					ptrNativeObject->setTimePosition(time);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setTimePosition_void_Real_NoVirtual(void *pObjectXXXX, _in Real time )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setTimePosition(time);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
				{
					const EVString& objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					const EVString& objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				if (dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_Callback* pCallback )
			{
				CDynamicObjectEventManagerProxy* ptr = dynamic_cast<CDynamicObjectEventManagerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicObjectEventManager_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEventManager::setName(name1);
			}
		}
	}
}
