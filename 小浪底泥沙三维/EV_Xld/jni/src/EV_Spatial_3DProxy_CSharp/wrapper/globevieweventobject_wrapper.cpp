/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dproxy/globevieweventobject.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3DProxy
		{
			typedef ev_bool  ( _stdcall EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
			typedef void  ( _stdcall EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
			class CGlobeViewEventObjectProxy : public EarthView::World::Spatial3DProxy::CGlobeViewEventObject
			{
			private:
				EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback;
				EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback;
				EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback;
			public:
				CGlobeViewEventObjectProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeViewEventObject(pList)
				{
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback = NULL;
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent(EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent(EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback* pCallback)
				{
					m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback = pCallback;
				}
				virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback(e);
						return returnValue;
					}
					else
						return this->CGlobeViewEventObject::onEvent(e);
				}
				virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback(e);
					}
					else
						return this->CGlobeViewEventObject::onTimerEvent(e);
				}
				virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
				{
					if(m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback(e);
					}
					else
						return this->CGlobeViewEventObject::onCustomEvent(e);
				}
			};
			REGISTER_FACTORY_CLASS(CGlobeViewEventObjectProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3DProxy_CGlobeViewEventObject_dragDrop_void_ev_uint32_ILayer_CGlobeControl_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 id, _in EarthView::World::Spatial::Atlas::ILayer* layer, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globecontrol, _in ev_uint32 dropx, _in ev_uint32 dropy )
			{
				EarthView::World::Spatial3DProxy::CGlobeViewEventObject* ptrNativeObject = (EarthView::World::Spatial3DProxy::CGlobeViewEventObject*) pObjectXXXX;
				ptrNativeObject->dragDrop(id, layer, globecontrol, dropx, dropy);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent_Callback* pCallback )
			{
				CGlobeViewEventObjectProxy* ptr = dynamic_cast<CGlobeViewEventObjectProxy*>((EarthView::World::Spatial3DProxy::CGlobeViewEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onEvent_ev_bool_CEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent_Callback* pCallback )
			{
				CGlobeViewEventObjectProxy* ptr = dynamic_cast<CGlobeViewEventObjectProxy*>((EarthView::World::Spatial3DProxy::CGlobeViewEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onTimerEvent_void_CTimerEvent(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent_Callback* pCallback )
			{
				CGlobeViewEventObjectProxy* ptr = dynamic_cast<CGlobeViewEventObjectProxy*>((EarthView::World::Spatial3DProxy::CGlobeViewEventObject*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial3DProxy_CGlobeViewEventObject_onCustomEvent_void_CEvent(pCallback);
				}
			}
		}
	}
}
