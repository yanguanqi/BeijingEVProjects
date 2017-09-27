/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/destroylater.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CDestroyLaterProxy : public EarthView::World::Spatial2D::Controls::CDestroyLater
				{
				private:
					EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback;
				public:
					CDestroyLaterProxy(EarthView::World::Core::CNameValuePairList *pList) : CDestroyLater(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent(EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CDestroyLater::onEvent(e);
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->CDestroyLater::onTimerEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->CDestroyLater::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(CDestroyLaterProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CDestroyLater*  _stdcall EarthView_World_Spatial2D_Controls_CDestroyLater_getInstance_CDestroyLater( )
				{
					EarthView::World::Spatial2D::Controls::CDestroyLater* objXXXX = EarthView::World::Spatial2D::Controls::CDestroyLater::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CDestroyLater_destroy_void_CBaseObject(void *pObjectXXXX, _in const EarthView::World::Core::CBaseObject* obj )
				{
					EarthView::World::Spatial2D::Controls::CDestroyLater* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CDestroyLater*) pObjectXXXX;
					ptrNativeObject->destroy(obj);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					CDestroyLaterProxy* ptr = dynamic_cast<CDestroyLaterProxy*>((EarthView::World::Spatial2D::Controls::CDestroyLater*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					CDestroyLaterProxy* ptr = dynamic_cast<CDestroyLaterProxy*>((EarthView::World::Spatial2D::Controls::CDestroyLater*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					CDestroyLaterProxy* ptr = dynamic_cast<CDestroyLaterProxy*>((EarthView::World::Spatial2D::Controls::CDestroyLater*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CDestroyLater_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
