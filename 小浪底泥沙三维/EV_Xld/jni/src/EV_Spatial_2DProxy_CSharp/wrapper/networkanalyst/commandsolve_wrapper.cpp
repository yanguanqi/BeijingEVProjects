/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commandsolve.h"
typedef ev_uint32  ( _stdcall CNACmdSolve_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdSolve_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdSolve_getName_EVString_Callback)();
typedef char*  ( _stdcall CNACmdSolve_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNACmdSolve_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNACmdSolve_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNACmdSolve_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdSolve_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNACmdSolve_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdSolve_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNACmdSolve_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdSolve_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNACmdSolve_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNACmdSolve_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNACmdSolveProxy : public CNACmdSolve
{
private:
	CNACmdSolve_getToolBarType_ev_uint32_Callback* m_CNACmdSolve_getToolBarType_ev_uint32_Callback;
	CNACmdSolve_getType_ev_uint32_Callback* m_CNACmdSolve_getType_ev_uint32_Callback;
	CNACmdSolve_getName_EVString_Callback* m_CNACmdSolve_getName_EVString_Callback;
	CNACmdSolve_getCategory_EVString_Callback* m_CNACmdSolve_getCategory_EVString_Callback;
	CNACmdSolve_getToolTip_EVString_Callback* m_CNACmdSolve_getToolTip_EVString_Callback;
	CNACmdSolve_getIcon_IBitmap_Callback* m_CNACmdSolve_getIcon_IBitmap_Callback;
	CNACmdSolve_isCheckable_ev_bool_Callback* m_CNACmdSolve_isCheckable_ev_bool_Callback;
	CNACmdSolve_onClicked_void_Callback* m_CNACmdSolve_onClicked_void_Callback;
	CNACmdSolve_getChecked_ev_bool_Callback* m_CNACmdSolve_getChecked_ev_bool_Callback;
	CNACmdSolve_setChecked_void_ev_bool_Callback* m_CNACmdSolve_setChecked_void_ev_bool_Callback;
	CNACmdSolve_getEnabled_ev_bool_Callback* m_CNACmdSolve_getEnabled_ev_bool_Callback;
	CNACmdSolve_setEnabled_void_ev_bool_Callback* m_CNACmdSolve_setEnabled_void_ev_bool_Callback;
	CNACmdSolve_create_void_ISpatialControl_Callback* m_CNACmdSolve_create_void_ISpatialControl_Callback;
	CNACmdSolve_update_ev_bool_CEvent_Callback* m_CNACmdSolve_update_ev_bool_CEvent_Callback;
public:
	CNACmdSolveProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdSolve(pList)
	{
		m_CNACmdSolve_getToolBarType_ev_uint32_Callback = NULL;
		m_CNACmdSolve_getType_ev_uint32_Callback = NULL;
		m_CNACmdSolve_getName_EVString_Callback = NULL;
		m_CNACmdSolve_getCategory_EVString_Callback = NULL;
		m_CNACmdSolve_getToolTip_EVString_Callback = NULL;
		m_CNACmdSolve_getIcon_IBitmap_Callback = NULL;
		m_CNACmdSolve_isCheckable_ev_bool_Callback = NULL;
		m_CNACmdSolve_onClicked_void_Callback = NULL;
		m_CNACmdSolve_getChecked_ev_bool_Callback = NULL;
		m_CNACmdSolve_setChecked_void_ev_bool_Callback = NULL;
		m_CNACmdSolve_getEnabled_ev_bool_Callback = NULL;
		m_CNACmdSolve_setEnabled_void_ev_bool_Callback = NULL;
		m_CNACmdSolve_create_void_ISpatialControl_Callback = NULL;
		m_CNACmdSolve_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNACmdSolveProxy)
public:
	ev_void registerCallback_CNACmdSolve_getToolBarType_ev_uint32(CNACmdSolve_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdSolve_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getType_ev_uint32(CNACmdSolve_getType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdSolve_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getName_EVString(CNACmdSolve_getName_EVString_Callback* pCallback)
	{
		m_CNACmdSolve_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getCategory_EVString(CNACmdSolve_getCategory_EVString_Callback* pCallback)
	{
		m_CNACmdSolve_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getToolTip_EVString(CNACmdSolve_getToolTip_EVString_Callback* pCallback)
	{
		m_CNACmdSolve_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getIcon_IBitmap(CNACmdSolve_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNACmdSolve_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_isCheckable_ev_bool(CNACmdSolve_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNACmdSolve_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_onClicked_void(CNACmdSolve_onClicked_void_Callback* pCallback)
	{
		m_CNACmdSolve_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getChecked_ev_bool(CNACmdSolve_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNACmdSolve_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_setChecked_void_ev_bool(CNACmdSolve_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdSolve_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_getEnabled_ev_bool(CNACmdSolve_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNACmdSolve_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_setEnabled_void_ev_bool(CNACmdSolve_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdSolve_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_create_void_ISpatialControl(CNACmdSolve_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNACmdSolve_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdSolve_update_ev_bool_CEvent(CNACmdSolve_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNACmdSolve_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNACmdSolve_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdSolve_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNACmdSolve_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdSolve_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNACmdSolve_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdSolve_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNACmdSolve_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdSolve_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNACmdSolve_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdSolve_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNACmdSolve_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNACmdSolve_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNACmdSolve_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdSolve_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CNACmdSolve_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdSolve_onClicked_void_Callback();
		}
		else
			return this->CNACmdSolve::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNACmdSolve_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdSolve_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNACmdSolve_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdSolve_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNACmdSolve::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNACmdSolve_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdSolve_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdSolve::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNACmdSolve_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdSolve_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNACmdSolve::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if(m_CNACmdSolve_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdSolve_create_void_ISpatialControl_Callback(ctrl);
		}
		else
			return this->CNACmdSolve::create(ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNACmdSolve_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdSolve_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNACmdSolve::update(e);
	}
};
REGISTER_FACTORY_CLASS(CNACmdSolveProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdSolve_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdSolve::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getToolBarType_ev_uint32( void *pObjectXXXX, CNACmdSolve_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdSolve_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdSolve::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdSolve_getType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdSolve::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getType_ev_uint32( void *pObjectXXXX, CNACmdSolve_getType_ev_uint32_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdSolve_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdSolve::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getName_EVString(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdSolve::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getName_EVString( void *pObjectXXXX, CNACmdSolve_getName_EVString_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdSolve::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getCategory_EVString(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdSolve::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getCategory_EVString( void *pObjectXXXX, CNACmdSolve_getCategory_EVString_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdSolve::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getToolTip_EVString(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdSolve::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getToolTip_EVString( void *pObjectXXXX, CNACmdSolve_getToolTip_EVString_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdSolve_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdSolve::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdSolve_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdSolve::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getIcon_IBitmap( void *pObjectXXXX, CNACmdSolve_getIcon_IBitmap_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdSolve_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdSolve::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdSolve::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_isCheckable_ev_bool( void *pObjectXXXX, CNACmdSolve_isCheckable_ev_bool_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdSolve::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_onClicked_void(void *pObjectXXXX )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdSolve::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_onClicked_void( void *pObjectXXXX, CNACmdSolve_onClicked_void_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ptrNativeObject->CNACmdSolve::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdSolve::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getChecked_ev_bool( void *pObjectXXXX, CNACmdSolve_getChecked_ev_bool_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdSolve::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdSolve::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_setChecked_void_ev_bool( void *pObjectXXXX, CNACmdSolve_setChecked_void_ev_bool_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ptrNativeObject->CNACmdSolve::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdSolve::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_getEnabled_ev_bool( void *pObjectXXXX, CNACmdSolve_getEnabled_ev_bool_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdSolve::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdSolve::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_setEnabled_void_ev_bool( void *pObjectXXXX, CNACmdSolve_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ptrNativeObject->CNACmdSolve::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdSolve::create(ctrl);
	else
		ptrNativeObject->create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_create_void_ISpatialControl( void *pObjectXXXX, CNACmdSolve_create_void_ISpatialControl_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdSolve_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ptrNativeObject->CNACmdSolve::create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	if (dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdSolve::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdSolve_update_ev_bool_CEvent( void *pObjectXXXX, CNACmdSolve_update_ev_bool_CEvent_Callback* pCallback )
{
	CNACmdSolveProxy* ptr = dynamic_cast<CNACmdSolveProxy*>((CNACmdSolve*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdSolve_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdSolve_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdSolve* ptrNativeObject = (CNACmdSolve*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdSolve::update(e);
	return objXXXX;
}
