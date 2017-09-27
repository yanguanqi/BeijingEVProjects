/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/mapcontrolspace.h"
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
typedef ev_bool  ( _stdcall CMapControlSpace_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
typedef void  ( _stdcall CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
typedef void  ( _stdcall CMapControlSpace_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CMapControlSpaceProxy : public CMapControlSpace
{
private:
	CMapControlSpace_onEvent_ev_bool_CEvent_Callback* m_CMapControlSpace_onEvent_ev_bool_CEvent_Callback;
	CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback* m_CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback;
	CMapControlSpace_onCustomEvent_void_CEvent_Callback* m_CMapControlSpace_onCustomEvent_void_CEvent_Callback;
public:
	CMapControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapControlSpace(pList)
	{
		m_CMapControlSpace_onEvent_ev_bool_CEvent_Callback = NULL;
		m_CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback = NULL;
		m_CMapControlSpace_onCustomEvent_void_CEvent_Callback = NULL;
	}
public:
	ev_void registerCallback_CMapControlSpace_onEvent_ev_bool_CEvent(CMapControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback)
	{
		m_CMapControlSpace_onEvent_ev_bool_CEvent_Callback = pCallback;
	}
	ev_void registerCallback_CMapControlSpace_onTimerEvent_void_CTimerEvent(CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback)
	{
		m_CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback = pCallback;
	}
	ev_void registerCallback_CMapControlSpace_onCustomEvent_void_CEvent(CMapControlSpace_onCustomEvent_void_CEvent_Callback* pCallback)
	{
		m_CMapControlSpace_onCustomEvent_void_CEvent_Callback = pCallback;
	}
	virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CMapControlSpace_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CMapControlSpace_onEvent_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CMapControlSpace::onEvent(e);
	}
	virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
	{
		if(m_CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback(e);
		}
		else
			return this->CMapControlSpace::onTimerEvent(e);
	}
	virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CMapControlSpace_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CMapControlSpace_onCustomEvent_void_CEvent_Callback(e);
		}
		else
			return this->CMapControlSpace::onCustomEvent(e);
	}
};
REGISTER_FACTORY_CLASS(CMapControlSpaceProxy);
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CMapControlSpace_onEvent_ev_bool_CEvent( void *pObjectXXXX, CMapControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback )
{
	CMapControlSpaceProxy* ptr = dynamic_cast<CMapControlSpaceProxy*>((CMapControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CMapControlSpace_onEvent_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CMapControlSpace_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, CMapControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback )
{
	CMapControlSpaceProxy* ptr = dynamic_cast<CMapControlSpaceProxy*>((CMapControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CMapControlSpace_onTimerEvent_void_CTimerEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CMapControlSpace_onCustomEvent_void_CEvent( void *pObjectXXXX, CMapControlSpace_onCustomEvent_void_CEvent_Callback* pCallback )
{
	CMapControlSpaceProxy* ptr = dynamic_cast<CMapControlSpaceProxy*>((CMapControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CMapControlSpace_onCustomEvent_void_CEvent(pCallback);
	}
}
