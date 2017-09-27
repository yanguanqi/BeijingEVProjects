/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/pagelayoutcontrolspace.h"
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
typedef ev_bool  ( _stdcall CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
typedef void  ( _stdcall CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
typedef void  ( _stdcall CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CPageLayoutControlSpaceProxy : public CPageLayoutControlSpace
{
private:
	CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback* m_CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback;
	CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback* m_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback;
	CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback* m_CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback;
public:
	CPageLayoutControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CPageLayoutControlSpace(pList)
	{
		m_CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback = NULL;
		m_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback = NULL;
		m_CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback = NULL;
	}
public:
	ev_void registerCallback_CPageLayoutControlSpace_onEvent_ev_bool_CEvent(CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback)
	{
		m_CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback = pCallback;
	}
	ev_void registerCallback_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent(CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback)
	{
		m_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback = pCallback;
	}
	ev_void registerCallback_CPageLayoutControlSpace_onCustomEvent_void_CEvent(CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback* pCallback)
	{
		m_CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback = pCallback;
	}
	virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CPageLayoutControlSpace::onEvent(e);
	}
	virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
	{
		if(m_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback(e);
		}
		else
			return this->CPageLayoutControlSpace::onTimerEvent(e);
	}
	virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback(e);
		}
		else
			return this->CPageLayoutControlSpace::onCustomEvent(e);
	}
};
REGISTER_FACTORY_CLASS(CPageLayoutControlSpaceProxy);
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CPageLayoutControlSpace_onEvent_ev_bool_CEvent( void *pObjectXXXX, CPageLayoutControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback )
{
	CPageLayoutControlSpaceProxy* ptr = dynamic_cast<CPageLayoutControlSpaceProxy*>((CPageLayoutControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CPageLayoutControlSpace_onEvent_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback )
{
	CPageLayoutControlSpaceProxy* ptr = dynamic_cast<CPageLayoutControlSpaceProxy*>((CPageLayoutControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CPageLayoutControlSpace_onTimerEvent_void_CTimerEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CPageLayoutControlSpace_onCustomEvent_void_CEvent( void *pObjectXXXX, CPageLayoutControlSpace_onCustomEvent_void_CEvent_Callback* pCallback )
{
	CPageLayoutControlSpaceProxy* ptr = dynamic_cast<CPageLayoutControlSpaceProxy*>((CPageLayoutControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CPageLayoutControlSpace_onCustomEvent_void_CEvent(pCallback);
	}
}
