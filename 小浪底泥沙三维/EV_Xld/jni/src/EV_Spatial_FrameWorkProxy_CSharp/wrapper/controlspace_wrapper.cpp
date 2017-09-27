/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/controlspace.h"
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
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
			}
		}
	}
}
typedef ev_bool  ( _stdcall CControlSpace_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
typedef void  ( _stdcall CControlSpace_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
typedef void  ( _stdcall CControlSpace_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CControlSpaceProxy : public CControlSpace
{
private:
	CControlSpace_onEvent_ev_bool_CEvent_Callback* m_CControlSpace_onEvent_ev_bool_CEvent_Callback;
	CControlSpace_onTimerEvent_void_CTimerEvent_Callback* m_CControlSpace_onTimerEvent_void_CTimerEvent_Callback;
	CControlSpace_onCustomEvent_void_CEvent_Callback* m_CControlSpace_onCustomEvent_void_CEvent_Callback;
public:
	CControlSpaceProxy(EarthView::World::Core::CNameValuePairList *pList) : CControlSpace(pList)
	{
		m_CControlSpace_onEvent_ev_bool_CEvent_Callback = NULL;
		m_CControlSpace_onTimerEvent_void_CTimerEvent_Callback = NULL;
		m_CControlSpace_onCustomEvent_void_CEvent_Callback = NULL;
	}
public:
	ev_void registerCallback_CControlSpace_onEvent_ev_bool_CEvent(CControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback)
	{
		m_CControlSpace_onEvent_ev_bool_CEvent_Callback = pCallback;
	}
	ev_void registerCallback_CControlSpace_onTimerEvent_void_CTimerEvent(CControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback)
	{
		m_CControlSpace_onTimerEvent_void_CTimerEvent_Callback = pCallback;
	}
	ev_void registerCallback_CControlSpace_onCustomEvent_void_CEvent(CControlSpace_onCustomEvent_void_CEvent_Callback* pCallback)
	{
		m_CControlSpace_onCustomEvent_void_CEvent_Callback = pCallback;
	}
	virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CControlSpace_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CControlSpace_onEvent_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CControlSpace::onEvent(e);
	}
	virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
	{
		if(m_CControlSpace_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CControlSpace_onTimerEvent_void_CTimerEvent_Callback(e);
		}
		else
			return this->CControlSpace::onTimerEvent(e);
	}
	virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CControlSpace_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
		{
			m_CControlSpace_onCustomEvent_void_CEvent_Callback(e);
		}
		else
			return this->CControlSpace::onCustomEvent(e);
	}
};
REGISTER_FACTORY_CLASS(CControlSpaceProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CControlSpace_getToolBarCount_ev_uint32(void *pObjectXXXX )
{
	const CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->getToolBarCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IToolBar*  _stdcall CControlSpace_getToolBar_IToolBar_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->getToolBar(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IToolBar*  _stdcall CControlSpace_getToolBarForType_IToolBar_ev_int32(void *pObjectXXXX, _in ev_int32 type )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->getToolBarForType(type);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CControlSpace_getMenuCount_ev_uint32(void *pObjectXXXX )
{
	const CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->getMenuCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall CControlSpace_getMenu_IMenu_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->getMenu(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ISpatialControl*  _stdcall CControlSpace_getControl_ISpatialControl(void *pObjectXXXX )
{
	const CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ISpatialControl* objXXXX = ptrNativeObject->getControl();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CControlSpace_initialize_void(void *pObjectXXXX )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	ptrNativeObject->initialize();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CControlSpace_initialize_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 toolbarEnabled )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	ptrNativeObject->initialize(toolbarEnabled);
}
extern "C" EV_DLL_EXPORT  CCommandPool*  _stdcall CControlSpace_getCommandPool_CCommandPool(void *pObjectXXXX )
{
	const CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	CCommandPool* objXXXX = ptrNativeObject->getCommandPool();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CControlSpace_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	if (dynamic_cast<CControlSpaceProxy*>((CControlSpace*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CControlSpace::onEvent(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onEvent(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CControlSpace_onEvent_ev_bool_CEvent( void *pObjectXXXX, CControlSpace_onEvent_ev_bool_CEvent_Callback* pCallback )
{
	CControlSpaceProxy* ptr = dynamic_cast<CControlSpaceProxy*>((CControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CControlSpace_onEvent_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CControlSpace_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CControlSpace* ptrNativeObject = (CControlSpace*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CControlSpace::onEvent(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CControlSpace_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, CControlSpace_onTimerEvent_void_CTimerEvent_Callback* pCallback )
{
	CControlSpaceProxy* ptr = dynamic_cast<CControlSpaceProxy*>((CControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CControlSpace_onTimerEvent_void_CTimerEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CControlSpace_onCustomEvent_void_CEvent( void *pObjectXXXX, CControlSpace_onCustomEvent_void_CEvent_Callback* pCallback )
{
	CControlSpaceProxy* ptr = dynamic_cast<CControlSpaceProxy*>((CControlSpace*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CControlSpace_onCustomEvent_void_CEvent(pCallback);
	}
}
