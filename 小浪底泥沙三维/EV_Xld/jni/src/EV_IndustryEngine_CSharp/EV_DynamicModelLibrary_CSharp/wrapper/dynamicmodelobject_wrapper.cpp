/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/dynamicmodellibrary/dynamicmodelobject.h"
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
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject, _in ev_bool atttched);
			typedef char*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback)(_in char*& name);
			class CDynamicModelObjectResourceListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback;
			public:
				CDynamicModelObjectResourceListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObjectResourceListener(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback = pCallback;
				}
				virtual void afterAttached(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback(dynamicObject);
					}
					else
						return this->CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
				}
				virtual void beforeAttached(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback(dynamicObject);
					}
					else
						return this->CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
				}
				virtual void attachStateHasChanged(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject, _in ev_bool atttched)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback(dynamicObject, atttched);
					}
					else
						return this->CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
				}
				virtual EVString getName() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObjectResourceListener::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CDynamicModelObjectResourceListener::setName(name);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicModelObjectResourceListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
				else
					ptrNativeObject->afterAttached(dynamicObject);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_Callback* pCallback )
			{
				CDynamicModelObjectResourceListenerProxy* ptr = dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_afterAttached_void_CDynamicModelObject_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::afterAttached(dynamicObject);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
				else
					ptrNativeObject->beforeAttached(dynamicObject);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_Callback* pCallback )
			{
				CDynamicModelObjectResourceListenerProxy* ptr = dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_beforeAttached_void_CDynamicModelObject_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::beforeAttached(dynamicObject);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject, _in ev_bool atttched )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
				else
					ptrNativeObject->attachStateHasChanged(dynamicObject, atttched);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectResourceListenerProxy* ptr = dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_attachStateHasChanged_void_CDynamicModelObject_ev_bool_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* dynamicObject, _in ev_bool atttched )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::attachStateHasChanged(dynamicObject, atttched);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_Callback* pCallback )
			{
				CDynamicModelObjectResourceListenerProxy* ptr = dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::setName(name1);
				else
					ptrNativeObject->setName(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_Callback* pCallback )
			{
				CDynamicModelObjectResourceListenerProxy* ptr = dynamic_cast<CDynamicModelObjectResourceListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObjectResourceListener_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener::setName(name1);
			}
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback)(_in char*& dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback)(_in char*& dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback)(_in char*& dynamicModelObjectName, _in const ev_real64& timePosition);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback)(_in char*& dynamicModelObjectName, _in const ev_real64& timePosition);
			class CDynamicGlobeNodeTrackAnimationListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback;
			public:
				CDynamicGlobeNodeTrackAnimationListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicGlobeNodeTrackAnimationListener(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback = pCallback;
				}
				virtual void animationBeforeTimePositon(_in const EVString& dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* dynamicModelObjectName_Char = dynamicModelObjectName.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback(dynamicModelObjectName_Char, timePosition, isLooping);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
				virtual void animationAfterTimePositon(_in const EVString& dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* dynamicModelObjectName_Char = dynamicModelObjectName.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback(dynamicModelObjectName_Char, timePosition, isLooping);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName, timePosition, isLooping);
				}
				virtual void animationBeforeEnd(_in const EVString& dynamicModelObjectName, _in const ev_real64& timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						char* dynamicModelObjectName_Char = dynamicModelObjectName.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback(dynamicModelObjectName_Char, timePosition);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName, timePosition);
				}
				virtual void animationAfterEnd(_in const EVString& dynamicModelObjectName, _in const ev_real64& timePosition)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						char* dynamicModelObjectName_Char = dynamicModelObjectName.makeBuffer();
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback(dynamicModelObjectName_Char, timePosition);
					}
					else
						return this->CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName, timePosition);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicGlobeNodeTrackAnimationListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName1, timePosition, isLooping);
				else
					ptrNativeObject->animationBeforeTimePositon(dynamicModelObjectName1, timePosition, isLooping);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationListenerProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeTimePositon(dynamicModelObjectName1, timePosition, isLooping);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName1, timePosition, isLooping);
				else
					ptrNativeObject->animationAfterTimePositon(dynamicModelObjectName1, timePosition, isLooping);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationListenerProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterTimePositon_void_EVString_ev_real64_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition, _in const ev_bool& isLooping )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterTimePositon(dynamicModelObjectName1, timePosition, isLooping);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName1, timePosition);
				else
					ptrNativeObject->animationBeforeEnd(dynamicModelObjectName1, timePosition);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationListenerProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationBeforeEnd_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationBeforeEnd(dynamicModelObjectName1, timePosition);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName1, timePosition);
				else
					ptrNativeObject->animationAfterEnd(dynamicModelObjectName1, timePosition);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_Callback* pCallback )
			{
				CDynamicGlobeNodeTrackAnimationListenerProxy* ptr = dynamic_cast<CDynamicGlobeNodeTrackAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicGlobeNodeTrackAnimationListener_animationAfterEnd_void_EVString_ev_real64_NoVirtual(void *pObjectXXXX, _in const char* dynamicModelObjectName, _in const ev_real64& timePosition )
			{
				EarthView::World::Core::ev_string dynamicModelObjectName1 = dynamicModelObjectName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener::animationAfterEnd(dynamicModelObjectName1, timePosition);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->Time;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Time( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Time = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->Position;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Position( void *pObjectXXXX, void*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Position = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->Yaw;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Yaw( void *pObjectXXXX, void*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Yaw = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->Pitch;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Pitch( void *pObjectXXXX, void*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Pitch = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree &objXXXX = ptrNativeObject->Roll;
				EarthView::World::Spatial::Math::CDegree *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Roll( void *pObjectXXXX, void*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Roll = *(EarthView::World::Spatial::Math::CDegree*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale( void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 &objXXXX = ptrNativeObject->Scale;
				EarthView::World::Spatial::Math::CVector3 *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParam_Scale( void *pObjectXXXX, void*  value )
			{
				((EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)pObjectXXXX)->Scale = *(EarthView::World::Spatial::Math::CVector3*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_push_back_void_CCameraAnimationParam(void *pObjectXXXX, _in void* t )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_pop_back_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_front_CCameraAnimationParam(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& objXXXX = ptrNativeObject->front();
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_back_CCameraAnimationParam(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& objXXXX = ptrNativeObject->back();
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParam(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_insert_void_ev_uint32_CCameraAnimationParamSet(void *pObjectXXXX, _in ev_uint32 pos, _in void* other )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_OperatorIndex_CCameraAnimationParam_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet& objYYYY = *(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& objXXXX = objYYYY[n];
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_at_CCameraAnimationParam_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam& objXXXX = ptrNativeObject->at(n);
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CCameraAnimationParamSet_clear_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_push_back_void_CGlobeControlPoint(void *pObjectXXXX, _in void* t )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Spatial3D::CGlobeControlPoint*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_pop_back_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_front_CGlobeControlPoint(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = ptrNativeObject->front();
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_back_CGlobeControlPoint(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = ptrNativeObject->back();
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPoint(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Spatial3D::CGlobeControlPoint*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_insert_void_ev_uint32_CGlobeControlPointSet(void *pObjectXXXX, _in ev_uint32 pos, _in void* other )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*)other);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_OperatorIndex_CGlobeControlPoint_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet& objYYYY = *(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = objYYYY[n];
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_at_CGlobeControlPoint_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				EarthView::World::Spatial3D::CGlobeControlPoint& objXXXX = ptrNativeObject->at(n);
				EarthView::World::Spatial3D::CGlobeControlPoint *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CGlobeControlPointSet_clear_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback)(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback)(_in int altitudeMode);
			typedef int  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback)(_in const void* point);
			typedef void*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback)();
			typedef void*  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback)(_in const ev_real64& frequency);
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef Real  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback)();
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback)(_in const Real& scaleRatio);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback)(_in const ev_bool& enable);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback)();
			class CDynamicModelObjectProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback;
			public:
				CDynamicModelObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicModelObject(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback = pCallback;
				}
				virtual ev_bool addResourceListener(_in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback(ref_resourceListener);
						return returnValue;
					}
					else
						return this->CDynamicModelObject::addResourceListener(ref_resourceListener);
				}
				virtual ev_bool removeResourceListener(_in const EVString& name)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CDynamicModelObject::removeResourceListener(name);
				}
				virtual void setGlobeNodeTrackAltitudeMode(_in EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback((int)altitudeMode);
					}
					else
						return this->CDynamicModelObject::setGlobeNodeTrackAltitudeMode(altitudeMode);
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getGlobeNodeTrackAltitudeMode()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode returnValue = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
				}
				virtual void removeAllTrackTrailPoint()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback();
					}
					else
						return this->CDynamicModelObject::removeAllTrackTrailPoint();
				}
				virtual void addTrackTrailPoint(_in const EarthView::World::Spatial::Geometry::CCoordinate& point)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback(&point);
					}
					else
						return this->CDynamicModelObject::addTrackTrailPoint(point);
				}
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodeScale() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getCurrentNodeScale();
				}
				virtual EarthView::World::Spatial::Math::CVector3 getCurrentNodePosition() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CVector3 returnValue = *(EarthView::World::Spatial::Math::CVector3*)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getCurrentNodePosition();
				}
				virtual EarthView::World::Spatial::Math::CQuaternion getCurrentNodeQuaternion() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Math::CQuaternion returnValue = *(EarthView::World::Spatial::Math::CQuaternion*)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getCurrentNodeQuaternion();
				}
				virtual void setGlobeAnimationsetEnabled(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
				}
				virtual ev_bool getGlobeAnimationsetEnabled() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getGlobeAnimationsetEnabled();
				}
				virtual void setGlobeAnimationsetArouseFrequency(_in const ev_real64& frequency)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback(frequency);
					}
					else
						return this->CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
				}
				virtual ev_real64 getGlobeAnimationsetArouseFrequency() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
				}
				virtual void forceArouseGlobeAnimation()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback();
					}
					else
						return this->CDynamicModelObject::forceArouseGlobeAnimation();
				}
				virtual void setModelEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setModelEnable(enable);
				}
				virtual ev_bool getModelEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getModelEnable();
				}
				virtual void setParticleEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setParticleEnable(enable);
				}
				virtual ev_bool getParticleEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getParticleEnable();
				}
				virtual void setRibbonTrailEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setRibbonTrailEnable(enable);
				}
				virtual ev_bool getRibbonTrailEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getRibbonTrailEnable();
				}
				virtual void setScutcheonEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setScutcheonEnable(enable);
				}
				virtual ev_bool getScutcheonEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getScutcheonEnable();
				}
				virtual void setTrackTrailEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setTrackTrailEnable(enable);
				}
				virtual ev_bool getTrackTrailEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getTrackTrailEnable();
				}
				virtual ev_bool getPixelModeEnable() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getPixelModeEnable();
				}
				virtual void setPixelModeEnable(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setPixelModeEnable(enable);
				}
				virtual Real getPixelModeScaleRatio() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getPixelModeScaleRatio();
				}
				virtual void setPixelModeScaleRatio(_in const Real& scaleRatio)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback(scaleRatio);
					}
					else
						return this->CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
				}
				virtual void setCameraNodeTrackOnLineMode(_in const ev_bool& enable)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback(enable);
					}
					else
						return this->CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
				}
				virtual ev_bool getCameraNodeTrackOnLineMode() const
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CDynamicModelObject::getCameraNodeTrackOnLineMode();
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicModelObjectProxy);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback)(_in int altitudeMode);
			typedef int  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback)();
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback)(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf);
			typedef ev_real64  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB);
			typedef void  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback)(_in const void* yawA, _in const void* pitchA, _in const void* rollA, _in const void* yawB, _in const void* pitchB, _in const void* rollB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* roll);
			typedef ev_bool  ( _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback)(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const void* timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf);
			class CDynamicAnimationListenerProxy : public EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener
			{
			private:
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback;
				EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback;
			public:
				CDynamicAnimationListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CDynamicAnimationListener(pList)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback = NULL;
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback)
				{
					m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback = pCallback;
				}
				virtual ev_real64 getRadius(_in EarthView::World::Graphic::CSphereTransformKeyFrame* kf)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback(kf);
						return returnValue;
					}
					else
						return this->CDynamicAnimationListener::getRadius(kf);
				}
				virtual ev_real64 getHeading(_in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback(latA, lonA, latB, lonB);
						return returnValue;
					}
					else
						return this->CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
				}
				virtual void getEuler(_in const EarthView::World::Spatial::Math::CDegree& yawA, _in const EarthView::World::Spatial::Math::CDegree& pitchA, _in const EarthView::World::Spatial::Math::CDegree& bankA, _in const EarthView::World::Spatial::Math::CDegree& yawB, _in const EarthView::World::Spatial::Math::CDegree& pitchB, _in const EarthView::World::Spatial::Math::CDegree& bankB, _in ev_real64 timeRatio, _inout EarthView::World::Spatial::Math::CDegree& yaw, _inout EarthView::World::Spatial::Math::CDegree& pitch, _inout EarthView::World::Spatial::Math::CDegree& bank)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback(&yawA, &pitchA, &bankA, &yawB, &pitchB, &bankB, timeRatio, &yaw, &pitch, &bank);
					}
					else
						return this->CDynamicAnimationListener::getEuler(yawA, pitchA, bankA, yawB, pitchB, bankB, timeRatio, yaw, pitch, bank);
				}
				virtual void setAltitudeMode(_in EarthView::World::Spatial3D::CFLyParam::AltitudeMode altitudeMode)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback((int)altitudeMode);
					}
					else
						return this->CDynamicAnimationListener::setAltitudeMode(altitudeMode);
				}
				virtual EarthView::World::Spatial3D::CFLyParam::AltitudeMode getAltitudeMode()
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial3D::CFLyParam::AltitudeMode returnValue = (EarthView::World::Spatial3D::CFLyParam::AltitudeMode)m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback();
						return returnValue;
					}
					else
						return this->CDynamicAnimationListener::getAltitudeMode();
				}
				virtual ev_bool getInterpolatedKeyFrame(_in const EarthView::World::Graphic::CAnimationTrack* t, _in const EarthView::World::Graphic::CTimeIndex& timeIndex, _in EarthView::World::Graphic::CKeyFrame* kf)
				{
					if(m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback(t, &timeIndex, kf);
						return returnValue;
					}
					else
						return this->CDynamicAnimationListener::getInterpolatedKeyFrame(t, timeIndex, kf);
				}
			};
			REGISTER_FACTORY_CLASS(CDynamicAnimationListenerProxy);
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(void *pObjectXXXX, _in EarthView::World::Graphic::CSphereTransformKeyFrame* kf )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getRadius(kf);
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getRadius(kf);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getRadius_ev_real64_CSphereTransformKeyFrame_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CSphereTransformKeyFrame* kf )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getRadius(kf);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getHeading(latA, lonA, latB, lonB);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getHeading_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 latA, _in ev_real64 lonA, _in ev_real64 latB, _in ev_real64 lonB )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getHeading(latA, lonA, latB, lonB);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(void *pObjectXXXX, _in const void* yawA, _in const void* pitchA, _in const void* bankA, _in const void* yawB, _in const void* pitchB, _in const void* bankB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* bank )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)bankA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)bankB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)bank);
				else
					ptrNativeObject->getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)bankA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)bankB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)bank);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getEuler_void_CDegree_CDegree_CDegree_CDegree_CDegree_CDegree_ev_real64_CDegree_CDegree_CDegree_NoVirtual(void *pObjectXXXX, _in const void* yawA, _in const void* pitchA, _in const void* bankA, _in const void* yawB, _in const void* pitchB, _in const void* bankB, _in ev_real64 timeRatio, _inout void* yaw, _inout void* pitch, _inout void* bank )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getEuler(*(EarthView::World::Spatial::Math::CDegree*)yawA, *(EarthView::World::Spatial::Math::CDegree*)pitchA, *(EarthView::World::Spatial::Math::CDegree*)bankA, *(EarthView::World::Spatial::Math::CDegree*)yawB, *(EarthView::World::Spatial::Math::CDegree*)pitchB, *(EarthView::World::Spatial::Math::CDegree*)bankB, timeRatio, *(EarthView::World::Spatial::Math::CDegree*)yaw, *(EarthView::World::Spatial::Math::CDegree*)pitch, *(EarthView::World::Spatial::Math::CDegree*)bank);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
				else
					ptrNativeObject->setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_setAltitudeMode_void_AltitudeMode_NoVirtual(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::setAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				if (dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getAltitudeMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getAltitudeMode_AltitudeMode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener::getAltitudeMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame_Callback* pCallback )
			{
				CDynamicAnimationListenerProxy* ptr = dynamic_cast<CDynamicAnimationListenerProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::CDynamicAnimationListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_CDynamicAnimationListener_getInterpolatedKeyFrame_ev_bool_CAnimationTrack_CTimeIndex_CKeyFrame(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLoading_void_ev_bool(void *pObjectXXXX, _in ev_bool loading )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setIsLoading(loading);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_isLoading_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLoading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addResourceListener(ref_resourceListener);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->addResourceListener(ref_resourceListener);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addResourceListener_ev_bool_CDynamicModelObjectResourceListener_NoVirtual(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObjectResourceListener* ref_resourceListener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addResourceListener(ref_resourceListener);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeResourceListener(name1);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->removeResourceListener(name1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeResourceListener_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeResourceListener(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createGlobeNodeTrackAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->createGlobeNodeTrackAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setEnabledToGetHeading_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isEnable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setEnabledToGetHeading(isEnable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getEnabledToGetHeading_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabledToGetHeading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setFlySpeed_void_ev_real64(void *pObjectXXXX, _in const ev_real64& speed )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setFlySpeed(speed);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getFlySpeed_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getFlySpeed();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& interpolate )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setInterpolate(interpolate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getInterpolate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateStartPos_void_ev_real64(void *pObjectXXXX, _in const ev_real64& pos )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setInterpolateStartPos(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateStartPos_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getInterpolateStartPos();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setInterpolateSmoothFactor_void_ev_real64(void *pObjectXXXX, _in const ev_real64& smoothFactor )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setInterpolateSmoothFactor(smoothFactor);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getInterpolateSmoothFactor_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getInterpolateSmoothFactor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGlobeAnimationLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeAnimationLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getModelLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getScutcheonLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRibbonTrailLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setRibbonTrailLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getParticleLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setParticleLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTrackTrailLodStrategyItemEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailLodStrategyItemEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeAnimationLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getGlobeAnimationLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getGlobeAnimationLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getModelLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getModelLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setParticleLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getParticleLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getParticleLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getScutcheonLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getScutcheonLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getTrackTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getTrackTrailLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _in const Real& minVisibleValue, _in const Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setRibbonTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getRibbonTrailLodStrategyItemValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailLodStrategyItemSquareValue_void_Real_Real(void *pObjectXXXX, _out Real& minVisibleValue, _out Real& maxVisibleValue )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->getRibbonTrailLodStrategyItemSquareValue(minVisibleValue, maxVisibleValue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_createCameraNodeTrackAnimation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->createCameraNodeTrackAnimation(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->startCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_startGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->startGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartGlobeNodeTrack_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->canStartGlobeNodeTrack();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_canStartCameraNodeTrack_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->canStartCameraNodeTrack();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoint_void_CGlobeControlPoint(void *pObjectXXXX, _in void* globeControlPoint )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addGlobeNodeTrackPoint(*(EarthView::World::Spatial3D::CGlobeControlPoint*)globeControlPoint);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointSet(void *pObjectXXXX, _inout void* points )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addGlobeNodeTrackPoints(*(EarthView::IndustryEngine::DynamicModelLibrary::CGlobeControlPointSet*)points);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackPoints_void_CGlobeControlPointMap(void *pObjectXXXX, _inout void* points )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addGlobeNodeTrackPoints(*(EarthView::World::Spatial3D::CGlobeControlPointMap*)points);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllGlobeNodeTrackPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->clearAllGlobeNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshGlobeNodeTrackAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->refreshGlobeNodeTrackAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoint_void_CCameraAnimationParam(void *pObjectXXXX, _in void* point )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addCameraNodeTrackPoint(*(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParam*)point);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackPoints_void_CCameraAnimationParamSet(void *pObjectXXXX, _inout void* points )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addCameraNodeTrackPoints(*(EarthView::IndustryEngine::DynamicModelLibrary::CCameraAnimationParamSet*)points);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_clearAllCameraNodeTrackPoints_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->clearAllCameraNodeTrackPoints();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_refreshCameraNodeTrackAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->refreshCameraNodeTrackAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelScale_void_CVector3(void *pObjectXXXX, _in const void* scale )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelScale(*(EarthView::World::Spatial::Math::CVector3*)scale);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelScale();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelLocalOffsetVector_void_CVector3(void *pObjectXXXX, _in const void* offsetVector )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelLocalOffsetVector(*(EarthView::World::Spatial::Math::CVector3*)offsetVector);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalOffsetVector_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelLocalOffsetVector();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelRotateDegree_void_CVector3(void *pObjectXXXX, _in const void* rotateDegree )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelRotateDegree(*(EarthView::World::Spatial::Math::CVector3*)rotateDegree);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelRotateDegree_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getModelRotateDegree();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelVisible_void_bool(void *pObjectXXXX, _in bool modelVisible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelVisible(modelVisible);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelVisible_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getModelVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonVisible_void_bool(void *pObjectXXXX, _in bool visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonVisible_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getScutcheonVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineColor_void_CColourValue(void *pObjectXXXX, _in const void* lineColor )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonLineColor(*(EarthView::World::Graphic::CColourValue*)lineColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineColor_CColourValue(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getScutcheonLineColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonLineLength_void_Real(void *pObjectXXXX, _in const Real& lineLength )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonLineLength(lineLength);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonLineLength_Real(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getScutcheonLineLength();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonTextColor_void_CColourValue(void *pObjectXXXX, _in const void* textColor )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonTextColor(*(EarthView::World::Graphic::CColourValue*)textColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonTextColor_CColourValue(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getScutcheonTextColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonCaption_void_EVString(void *pObjectXXXX, _in const char* caption )
			{
				EarthView::World::Core::ev_string caption1 = caption;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonCaption(caption1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonCaption_EVString(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getScutcheonCaption();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonPosition_CVector3(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getScutcheonPosition();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontSize_void_ev_byte(void *pObjectXXXX, _in ev_byte size )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonFontSize(size);
			}
			extern "C" EV_DLL_EXPORT  ev_byte  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontSize_ev_byte(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_byte objXXXX = ptrNativeObject->getScutcheonFontSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonFontName_void_EVString(void *pObjectXXXX, _in char* fontName )
			{
				EarthView::World::Core::ev_string fontName1 = fontName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setScutcheonFontName(fontName1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonFontName_EVString(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getScutcheonFontName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScutcheonText*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheon_CScutcheonText(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* objXXXX = ptrNativeObject->getScutcheon();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_lockModelObject_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->lockModelObject();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unlockModelObject_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->unlockModelObject();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockDistance_void_ev_real64(void *pObjectXXXX, _in const ev_real64& distance )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setLockDistance(distance);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockDistance_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getLockDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setLockTilt_void_CDegree(void *pObjectXXXX, _in const void* tilt )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setLockTilt(*(EarthView::World::Spatial::Math::CDegree*)tilt);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getLockTilt_CDegree(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CDegree objXXXX = ptrNativeObject->getLockTilt();
				EarthView::World::Spatial::Math::CDegree *pXXXX = new EarthView::World::Spatial::Math::CDegree(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockDistance_void_ev_bool(void *pObjectXXXX, _in const ev_bool& locked )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setIsLockDistance(locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockDistance_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockTilt_void_ev_bool(void *pObjectXXXX, _in const ev_bool& locked )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setIsLockTilt(locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockTilt_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockTilt();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsLockHeading_void_ev_bool(void *pObjectXXXX, _in const ev_bool& locked )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setIsLockHeading(locked);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsLockHeading_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsLockHeading();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelHighLightColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelHighLightColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelHighLightColor_CColourValue(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getModelHighLightColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelIsHighLight_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getModelIsHighLight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelIsHighLight_void_ev_bool(void *pObjectXXXX, _in const ev_bool& highLight )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setModelIsHighLight(highLight);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityVisible_void_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 subEntityIndex, _in ev_bool visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityVisible(subEntityIndex, visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityVisible_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 subEntityIndex )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getSubEntityVisible(subEntityIndex);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_EVString_EVString(void *pObjectXXXX, _in bool visible, _in const char* subEntityName, _in const char* particleAliasName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityParticleVisible(visible, subEntityName1, particleAliasName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityParticleVisible_void_bool_ev_int32_EVString(void *pObjectXXXX, _in bool visible, _in ev_int32 subEntityIndex, _in const char* particleAliasName )
			{
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityParticleVisible(visible, subEntityIndex, particleAliasName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_ev_int32(void *pObjectXXXX, _in bool visible, _in ev_int32 subEntityIndex )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllParticleVisible(visible, subEntityIndex);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllParticleVisible_void_bool_EVString(void *pObjectXXXX, _in bool visible, _in const char* subEntityName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllParticleVisible(visible, subEntityName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleVisible_void_bool(void *pObjectXXXX, _in bool visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setParticleVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleVisible_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getParticleVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_EVString_EVString(void *pObjectXXXX, _in const char* subEntityName, _in const char* particleAliasName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSubEntityParticleVisible(subEntityName1, particleAliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleVisible_bool_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 subEntityIndex, _in const char* particleAliasName )
			{
				EarthView::World::Core::ev_string particleAliasName1 = particleAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSubEntityParticleVisible(subEntityIndex, particleAliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_EVString_EVString(void *pObjectXXXX, _in bool visible, _in const char* subEntityName, _in const char* ribbonAliasName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::World::Core::ev_string ribbonAliasName1 = ribbonAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityRibbonTrailVisible(visible, subEntityName1, ribbonAliasName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityRibbonTrailVisible_void_bool_ev_int32_EVString(void *pObjectXXXX, _in bool visible, _in ev_int32 subEntityIndex, _in const char* ribbonAliasName )
			{
				EarthView::World::Core::ev_string ribbonAliasName1 = ribbonAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityRibbonTrailVisible(visible, subEntityIndex, ribbonAliasName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_EVString(void *pObjectXXXX, _in bool visible, _in const char* subEntityName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllRibbonTrailVisible(visible, subEntityName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setSubEntityAllRibbonTrailVisible_void_bool_ev_int32(void *pObjectXXXX, _in bool visible, _in ev_int32 subEntityIndex )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setSubEntityAllRibbonTrailVisible(visible, subEntityIndex);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_EVString_EVString(void *pObjectXXXX, _in const char* subEntityName, _in const char* ribbonAliasName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::World::Core::ev_string ribbonAliasName1 = ribbonAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSubEntityRibbonTrailVisible(subEntityName1, ribbonAliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailVisible_bool_ev_int32_EVString(void *pObjectXXXX, _in ev_int32 subEntityIndex, _in const char* ribbonAliasName )
			{
				EarthView::World::Core::ev_string ribbonAliasName1 = ribbonAliasName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSubEntityRibbonTrailVisible(subEntityIndex, ribbonAliasName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_ev_int32(void *pObjectXXXX, _in ev_int32 subEntityIndex )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getSubEntityRibbonTrailObjectMap(subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_ev_int32(void *pObjectXXXX, _in ev_int32 subEntityIndex )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getSubEntityParticleObjectMap(subEntityIndex);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityRibbonTrailObjectMap_RibbonTrailObjectMap_EVString(void *pObjectXXXX, _in const char* subEntityName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap objXXXX = ptrNativeObject->getSubEntityRibbonTrailObjectMap(subEntityName1);
				EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::RibbonTrailObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityParticleObjectMap_EffectObjectMap_EVString(void *pObjectXXXX, _in const char* subEntityName )
			{
				EarthView::World::Core::ev_string subEntityName1 = subEntityName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap objXXXX = ptrNativeObject->getSubEntityParticleObjectMap(subEntityName1);
				EarthView::World::Spatial3D::ModelManager::EffectObjectMap *pXXXX = new EarthView::World::Spatial3D::ModelManager::EffectObjectMap(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSubEntityCount_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getSubEntityCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedParticleSubEntityIndexVector_IntVector(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getBindedParticleSubEntityIndexVector();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBindedRibbonTrailSubEntityIndexVector_IntVector(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Core::IntVector objXXXX = ptrNativeObject->getBindedRibbonTrailSubEntityIndexVector();
				EarthView::World::Core::IntVector *pXXXX = new EarthView::World::Core::IntVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->stopGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->pauseGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_stopCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->stopCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_pauseCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->pauseCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueCameraNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->continueCameraNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_continueGlobeNodeTrack_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->continueGlobeNodeTrack();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackCurrentFrameTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& curKeyFrameTime )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackCurrentFrameTime(curKeyFrameTime);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackCurrentFrameTime_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getGlobeNodeTrackCurrentFrameTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackCurrentFrameTime_void_ev_real64(void *pObjectXXXX, _in const ev_real64& curKeyFrameTime )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackCurrentFrameTime(curKeyFrameTime);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackCurrentFrameTime_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getCameraNodeTrackCurrentFrameTime();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackTimeRatio_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getCameraNodeTrackTimeRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackTimeRatio_void_ev_real64(void *pObjectXXXX, _in const ev_real64& timeRatio )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackTimeRatio(timeRatio);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackTimeRatio_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getGlobeNodeTrackTimeRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackTimeRatio_void_ev_real64(void *pObjectXXXX, _in const ev_real64& timeRatio )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackTimeRatio(timeRatio);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackIsLoop_void_ev_bool(void *pObjectXXXX, _in const ev_bool& loop )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackIsLoop(loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackIsLoop_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getGlobeNodeTrackIsLoop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeNodeTrackAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
				else
					ptrNativeObject->setGlobeNodeTrackAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAltitudeMode_void_AltitudeMode_NoVirtual(void *pObjectXXXX, _in int altitudeMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeNodeTrackAltitudeMode((EarthView::World::Spatial3D::CFLyParam::AltitudeMode)altitudeMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->getGlobeNodeTrackAltitudeMode();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAltitudeMode_AltitudeMode_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::CFLyParam::AltitudeMode objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeNodeTrackAltitudeMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackIsLoop_void_ev_bool(void *pObjectXXXX, _in const ev_bool& loop )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackIsLoop(loop);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackIsLoop_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getCameraNodeTrackIsLoop();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackInterpolationMode_void_InterpolationMode(void *pObjectXXXX, _in int interpolationmode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackInterpolationMode((EarthView::World::Graphic::CAnimation::InterpolationMode)interpolationmode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackInterpolationMode_InterpolationMode(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::InterpolationMode objXXXX = ptrNativeObject->getCameraNodeTrackInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackRotationInterpolationMode_void_RotationInterpolationMode(void *pObjectXXXX, _in int rotationInterpolationMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackRotationInterpolationMode((EarthView::World::Graphic::CAnimation::RotationInterpolationMode)rotationInterpolationMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackRotationInterpolationMode_RotationInterpolationMode(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CAnimation::RotationInterpolationMode objXXXX = ptrNativeObject->getCameraNodeTrackRotationInterpolationMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRibbonTrailVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setRibbonTrailVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_IsPositionChanged_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->IsPositionChanged();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneNode*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getSceneNode_CSceneNode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Graphic::CSceneNode* objXXXX = ptrNativeObject->getSceneNode();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelAxisAlignedBox_CAxisAlignedBox(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CAxisAlignedBox objXXXX = ptrNativeObject->getModelAxisAlignedBox();
				EarthView::World::Spatial::Math::CAxisAlignedBox *pXXXX = new EarthView::World::Spatial::Math::CAxisAlignedBox(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelLocalMatrix_CMatrix4(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CMatrix4 objXXXX = ptrNativeObject->getModelLocalMatrix();
				EarthView::World::Spatial::Math::CMatrix4 *pXXXX = new EarthView::World::Spatial::Math::CMatrix4(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getBoundingRadius_ev_real64(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->getBoundingRadius();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackLocalCenter_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCameraNodeTrackLocalCenter();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackLocalCenter_void_CVector3(void *pObjectXXXX, _in const void* localCenter )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setCameraNodeTrackLocalCenter(*(EarthView::World::Spatial::Math::CVector3*)localCenter);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setReflectable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setReflectable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getReflectable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getReflectable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRefractable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setRefractable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRefractable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRefractable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeNodeTrackAnimationListener_void_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* ref_listener )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setGlobeNodeTrackAnimationListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeNodeTrackAnimationListener_CDynamicGlobeNodeTrackAnimationListener(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicGlobeNodeTrackAnimationListener* objXXXX = ptrNativeObject->getGlobeNodeTrackAnimationListener();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addGlobeNodeTrackEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addGlobeNodeTrackEvent(ref_dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeGlobeNodeTrackEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->removeGlobeNodeTrackEvent(dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetGlobeNodeTrackEvents_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->resetGlobeNodeTrackEvents();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addCameraNodeTrackEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* ref_dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->addCameraNodeTrackEvent(ref_dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeCameraNodeTrackEvent_void_CDynamicObjectEvent(void *pObjectXXXX, _in EarthView::IndustryEngine::DynamicModelLibrary::CDynamicObjectEvent* dynamicObjectEvent )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->removeCameraNodeTrackEvent(dynamicObjectEvent);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_resetCameraNodeTrackEvents_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->resetCameraNodeTrackEvents();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CModelBaseObject*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelBaseObject_CModelBaseObject(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial3D::ModelManager::CModelBaseObject* objXXXX = ptrNativeObject->getModelBaseObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_EVString_ModelType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const char* meshName, _in int modelType )
			{
				EarthView::World::Core::ev_string meshName1 = meshName;
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bindModelParam(ref_dataSource, meshName1, (EarthView::World::Spatial3D::ModelType)modelType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelParam_ev_bool_IDataSource_ev_int32_ModelType(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ref_dataSource, _in const ev_int32& meshIndex, _in int modelType )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bindModelParam(ref_dataSource, meshIndex, (EarthView::World::Spatial3D::ModelType)modelType);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_bindModelBaseObject_ev_bool_CModelBaseObject(void *pObjectXXXX, _in EarthView::World::Spatial3D::ModelManager::CModelBaseObject* ref_modelBaseObject )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->bindModelBaseObject(ref_modelBaseObject);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_unBindModel_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->unBindModel();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setNeedUpdate_void_ev_bool(void *pObjectXXXX, _in const ev_bool& needUpdate )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setNeedUpdate(needUpdate);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getNeedUpdate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getNeedUpdate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailVisible_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTrackTrailVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailVisible_void_ev_bool(void *pObjectXXXX, _in const ev_bool& visible )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayPointNum_void_ev_int32(void *pObjectXXXX, _in const ev_int32& number )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailDisplayPointNum(number);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayPointNum_ev_int32(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTrackTrailDisplayPointNum();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailDisplayMode_void_EVDisplayMode(void *pObjectXXXX, _in int displayMode )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailDisplayMode((EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode)displayMode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailDisplayMode_EVDisplayMode(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CPolylineFeature::EVDisplayMode objXXXX = ptrNativeObject->getTrackTrailDisplayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* lineSymbol )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailSymbol(lineSymbol);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSymbol_ISymbol(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->getTrackTrailSymbol();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setIsTrackTrailHighLine_void_ev_bool(void *pObjectXXXX, _in const ev_bool& isHighLine )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setIsTrackTrailHighLine(isHighLine);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getIsTrackTrailHighLine_ev_bool(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getIsTrackTrailHighLine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineColorInfo_void_CRgbColor_CRgbColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CRgbColor* staticHighLineColor, _in EarthView::World::Spatial::Display::CRgbColor* dynamicHighLineColor )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setHighLineColorInfo(staticHighLineColor, dynamicHighLineColor);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setHighLineDistance_void_ev_real64(void *pObjectXXXX, _in const ev_real64& highLineDistance )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setHighLineDistance(highLineDistance);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getHighLineDistance_Real(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getHighLineDistance();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->setTrackTrailSpatialReference(ref_sr);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailSpatialReference_ISpatialReference(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getTrackTrailSpatialReference();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeAllTrackTrailPoint();
				else
					ptrNativeObject->removeAllTrackTrailPoint();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_removeAllTrackTrailPoint_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::removeAllTrackTrailPoint();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(void *pObjectXXXX, _in const void* point )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addTrackTrailPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
				else
					ptrNativeObject->addTrackTrailPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_addTrackTrailPoint_void_CCoordinate_NoVirtual(void *pObjectXXXX, _in const void* point )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::addTrackTrailPoint(*(EarthView::World::Spatial::Geometry::CCoordinate*)point);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCurrentNodeScale();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeScale_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeScale();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodePosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->getCurrentNodePosition();
					EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodePosition_CVector3_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector3 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodePosition();
				EarthView::World::Spatial::Math::CVector3 *pXXXX = new EarthView::World::Spatial::Math::CVector3(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->getCurrentNodeQuaternion();
					EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCurrentNodeQuaternion_CQuaternion_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				EarthView::World::Spatial::Math::CQuaternion objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCurrentNodeQuaternion();
				EarthView::World::Spatial::Math::CQuaternion *pXXXX = new EarthView::World::Spatial::Math::CQuaternion(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
				else
					ptrNativeObject->setGlobeAnimationsetEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetEnabled(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetEnabled();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getGlobeAnimationsetEnabled();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(void *pObjectXXXX, _in const ev_real64& frequency )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
				else
					ptrNativeObject->setGlobeAnimationsetArouseFrequency(frequency);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setGlobeAnimationsetArouseFrequency_void_ev_real64_NoVirtual(void *pObjectXXXX, _in const ev_real64& frequency )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setGlobeAnimationsetArouseFrequency(frequency);
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
					return objXXXX;
				}
				else
				{
					ev_real64 objXXXX = ptrNativeObject->getGlobeAnimationsetArouseFrequency();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getGlobeAnimationsetArouseFrequency_ev_real64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getGlobeAnimationsetArouseFrequency();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::forceArouseGlobeAnimation();
				else
					ptrNativeObject->forceArouseGlobeAnimation();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_forceArouseGlobeAnimation_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::forceArouseGlobeAnimation();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setModelEnable(enable);
				else
					ptrNativeObject->setModelEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setModelEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setModelEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getModelEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getModelEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getModelEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getModelEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setParticleEnable(enable);
				else
					ptrNativeObject->setParticleEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setParticleEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setParticleEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getParticleEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getParticleEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getParticleEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getParticleEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setRibbonTrailEnable(enable);
				else
					ptrNativeObject->setRibbonTrailEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setRibbonTrailEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setRibbonTrailEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getRibbonTrailEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getRibbonTrailEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getRibbonTrailEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getRibbonTrailEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setScutcheonEnable(enable);
				else
					ptrNativeObject->setScutcheonEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setScutcheonEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setScutcheonEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getScutcheonEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getScutcheonEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getScutcheonEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getScutcheonEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setTrackTrailEnable(enable);
				else
					ptrNativeObject->setTrackTrailEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setTrackTrailEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setTrackTrailEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getTrackTrailEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getTrackTrailEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getTrackTrailEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getTrackTrailEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeEnable();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPixelModeEnable();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeEnable_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeEnable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeEnable(enable);
				else
					ptrNativeObject->setPixelModeEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeEnable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeEnable(enable);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeScaleRatio();
					return objXXXX;
				}
				else
				{
					Real objXXXX = ptrNativeObject->getPixelModeScaleRatio();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getPixelModeScaleRatio_Real_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getPixelModeScaleRatio();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(void *pObjectXXXX, _in const Real& scaleRatio )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
				else
					ptrNativeObject->setPixelModeScaleRatio(scaleRatio);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setPixelModeScaleRatio_void_Real_NoVirtual(void *pObjectXXXX, _in const Real& scaleRatio )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setPixelModeScaleRatio(scaleRatio);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
				else
					ptrNativeObject->setCameraNodeTrackOnLineMode(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_setCameraNodeTrackOnLineMode_void_ev_bool_NoVirtual(void *pObjectXXXX, _in const ev_bool& enable )
			{
				EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::setCameraNodeTrackOnLineMode(enable);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				if (dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCameraNodeTrackOnLineMode();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCameraNodeTrackOnLineMode();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool( void *pObjectXXXX, EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_Callback* pCallback )
			{
				CDynamicModelObjectProxy* ptr = dynamic_cast<CDynamicModelObjectProxy*>((EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_DynamicModelLibrary_CDynamicModelObject_getCameraNodeTrackOnLineMode_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject* ptrNativeObject = (EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::IndustryEngine::DynamicModelLibrary::CDynamicModelObject::getCameraNodeTrackOnLineMode();
				return objXXXX;
			}
		}
	}
}
