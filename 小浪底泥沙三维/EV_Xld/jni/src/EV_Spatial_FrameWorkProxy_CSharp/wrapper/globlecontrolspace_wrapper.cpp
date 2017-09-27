/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/globlecontrolspace.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
typedef ev_bool  ( _stdcall CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
typedef void  ( _stdcall CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
typedef void  ( _stdcall CGlobleControlSpace_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CGlobleControlSpaceProxy : public CGlobleControlSpace
{
private:
	CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback* m_CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback;
	CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback* m_CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback;
	CGlobleControlSpace_onCustomEvent_void_CEvent_Callback* m_CGlobleControlSpace_onCustomEvent_void_CEvent_Callback;
public:
	CGlobleControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobleControlSpace(pList)
	{
		m_CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback = NULL;
		m_CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback = NULL;
		m_CGlobleControlSpace_onCustomEvent_void_CEvent_Callback = NULL;
	}
public:
	ev_void registerCallback_CGlobleControlSpace_onEvent_ev_bool_CEvent(CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback)
	{
		m_CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback = pCallback;
	}
	ev_void registerCallback_CGlobleControlSpace_onTimerEvent_void_CTimerEvent(CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback)
	{
		m_CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback = pCallback;
	}
	ev_void registerCallback_CGlobleControlSpace_onCustomEvent_void_CEvent(CGlobleControlSpace_onCustomEvent_void_CEvent_Callback* pCallback)
	{
		m_CGlobleControlSpace_onCustomEvent_void_CEvent_Callback = pCallback;
	}
	virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CGlobleControlSpace::onEvent(e);
	}
	virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
	{
		if(m_CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback(e);
		}
		else
			return this->CGlobleControlSpace::onTimerEvent(e);
	}
	virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CGlobleControlSpace_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CGlobleControlSpace_onCustomEvent_void_CEvent_Callback(e);
		}
		else
			return this->CGlobleControlSpace::onCustomEvent(e);
	}
};
REGISTER_FACTORY_CLASS(CGlobleControlSpaceProxy);
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CGlobleControlSpace_onEvent_ev_bool_CEvent( void *pObjectXXXX, CGlobleControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback )
{
	CGlobleControlSpaceProxy* ptr = dynamic_cast<CGlobleControlSpaceProxy*>((CGlobleControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CGlobleControlSpace_onEvent_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CGlobleControlSpace_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, CGlobleControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback )
{
	CGlobleControlSpaceProxy* ptr = dynamic_cast<CGlobleControlSpaceProxy*>((CGlobleControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CGlobleControlSpace_onTimerEvent_void_CTimerEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CGlobleControlSpace_onCustomEvent_void_CEvent( void *pObjectXXXX, CGlobleControlSpace_onCustomEvent_void_CEvent_Callback* pCallback )
{
	CGlobleControlSpaceProxy* ptr = dynamic_cast<CGlobleControlSpaceProxy*>((CGlobleControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CGlobleControlSpace_onCustomEvent_void_CEvent(pCallback);
	}
}
