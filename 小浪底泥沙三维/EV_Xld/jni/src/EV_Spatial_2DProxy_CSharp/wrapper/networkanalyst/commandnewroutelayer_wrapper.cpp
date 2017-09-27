/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commandnewroutelayer.h"
typedef ev_uint32  ( _stdcall CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdNewRouteLayer_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdNewRouteLayer_getName_EVString_Callback)();
typedef char*  ( _stdcall CNACmdNewRouteLayer_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNACmdNewRouteLayer_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNACmdNewRouteLayer_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNACmdNewRouteLayer_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNewRouteLayer_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNACmdNewRouteLayer_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNACmdNewRouteLayer_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNACmdNewRouteLayer_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNACmdNewRouteLayerProxy : public CNACmdNewRouteLayer
{
private:
	CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback* m_CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback;
	CNACmdNewRouteLayer_getType_ev_uint32_Callback* m_CNACmdNewRouteLayer_getType_ev_uint32_Callback;
	CNACmdNewRouteLayer_getName_EVString_Callback* m_CNACmdNewRouteLayer_getName_EVString_Callback;
	CNACmdNewRouteLayer_getCategory_EVString_Callback* m_CNACmdNewRouteLayer_getCategory_EVString_Callback;
	CNACmdNewRouteLayer_getToolTip_EVString_Callback* m_CNACmdNewRouteLayer_getToolTip_EVString_Callback;
	CNACmdNewRouteLayer_getIcon_IBitmap_Callback* m_CNACmdNewRouteLayer_getIcon_IBitmap_Callback;
	CNACmdNewRouteLayer_isCheckable_ev_bool_Callback* m_CNACmdNewRouteLayer_isCheckable_ev_bool_Callback;
	CNACmdNewRouteLayer_onClicked_void_Callback* m_CNACmdNewRouteLayer_onClicked_void_Callback;
	CNACmdNewRouteLayer_getChecked_ev_bool_Callback* m_CNACmdNewRouteLayer_getChecked_ev_bool_Callback;
	CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback* m_CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback;
	CNACmdNewRouteLayer_getEnabled_ev_bool_Callback* m_CNACmdNewRouteLayer_getEnabled_ev_bool_Callback;
	CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback* m_CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback;
	CNACmdNewRouteLayer_create_void_ISpatialControl_Callback* m_CNACmdNewRouteLayer_create_void_ISpatialControl_Callback;
	CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback* m_CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback;
public:
	CNACmdNewRouteLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdNewRouteLayer(pList)
	{
		m_CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback = NULL;
		m_CNACmdNewRouteLayer_getType_ev_uint32_Callback = NULL;
		m_CNACmdNewRouteLayer_getName_EVString_Callback = NULL;
		m_CNACmdNewRouteLayer_getCategory_EVString_Callback = NULL;
		m_CNACmdNewRouteLayer_getToolTip_EVString_Callback = NULL;
		m_CNACmdNewRouteLayer_getIcon_IBitmap_Callback = NULL;
		m_CNACmdNewRouteLayer_isCheckable_ev_bool_Callback = NULL;
		m_CNACmdNewRouteLayer_onClicked_void_Callback = NULL;
		m_CNACmdNewRouteLayer_getChecked_ev_bool_Callback = NULL;
		m_CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback = NULL;
		m_CNACmdNewRouteLayer_getEnabled_ev_bool_Callback = NULL;
		m_CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback = NULL;
		m_CNACmdNewRouteLayer_create_void_ISpatialControl_Callback = NULL;
		m_CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNACmdNewRouteLayerProxy)
public:
	ev_void registerCallback_CNACmdNewRouteLayer_getToolBarType_ev_uint32(CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getType_ev_uint32(CNACmdNewRouteLayer_getType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getName_EVString(CNACmdNewRouteLayer_getName_EVString_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getCategory_EVString(CNACmdNewRouteLayer_getCategory_EVString_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getToolTip_EVString(CNACmdNewRouteLayer_getToolTip_EVString_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getIcon_IBitmap(CNACmdNewRouteLayer_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_isCheckable_ev_bool(CNACmdNewRouteLayer_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_onClicked_void(CNACmdNewRouteLayer_onClicked_void_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getChecked_ev_bool(CNACmdNewRouteLayer_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_setChecked_void_ev_bool(CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_getEnabled_ev_bool(CNACmdNewRouteLayer_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_setEnabled_void_ev_bool(CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_create_void_ISpatialControl(CNACmdNewRouteLayer_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNewRouteLayer_update_ev_bool_CEvent(CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNACmdNewRouteLayer_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdNewRouteLayer_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNACmdNewRouteLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNewRouteLayer_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNACmdNewRouteLayer_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNewRouteLayer_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNACmdNewRouteLayer_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNewRouteLayer_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNACmdNewRouteLayer_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNACmdNewRouteLayer_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNACmdNewRouteLayer_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNewRouteLayer_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CNACmdNewRouteLayer_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNewRouteLayer_onClicked_void_Callback();
		}
		else
			return this->CNACmdNewRouteLayer::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNACmdNewRouteLayer_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNewRouteLayer_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNACmdNewRouteLayer::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNACmdNewRouteLayer_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNewRouteLayer_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNACmdNewRouteLayer::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if(m_CNACmdNewRouteLayer_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNewRouteLayer_create_void_ISpatialControl_Callback(ctrl);
		}
		else
			return this->CNACmdNewRouteLayer::create(ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNACmdNewRouteLayer::update(e);
	}
};
REGISTER_FACTORY_CLASS(CNACmdNewRouteLayerProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNewRouteLayer_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getToolBarType_ev_uint32( void *pObjectXXXX, CNACmdNewRouteLayer_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNewRouteLayer_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNewRouteLayer_getType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getType_ev_uint32( void *pObjectXXXX, CNACmdNewRouteLayer_getType_ev_uint32_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNewRouteLayer_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getName_EVString(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getName_EVString( void *pObjectXXXX, CNACmdNewRouteLayer_getName_EVString_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getCategory_EVString(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getCategory_EVString( void *pObjectXXXX, CNACmdNewRouteLayer_getCategory_EVString_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getToolTip_EVString(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getToolTip_EVString( void *pObjectXXXX, CNACmdNewRouteLayer_getToolTip_EVString_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNewRouteLayer_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdNewRouteLayer_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getIcon_IBitmap( void *pObjectXXXX, CNACmdNewRouteLayer_getIcon_IBitmap_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdNewRouteLayer_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_isCheckable_ev_bool( void *pObjectXXXX, CNACmdNewRouteLayer_isCheckable_ev_bool_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_onClicked_void(void *pObjectXXXX )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNewRouteLayer::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_onClicked_void( void *pObjectXXXX, CNACmdNewRouteLayer_onClicked_void_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdNewRouteLayer::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getChecked_ev_bool( void *pObjectXXXX, CNACmdNewRouteLayer_getChecked_ev_bool_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNewRouteLayer::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_setChecked_void_ev_bool( void *pObjectXXXX, CNACmdNewRouteLayer_setChecked_void_ev_bool_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdNewRouteLayer::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_getEnabled_ev_bool( void *pObjectXXXX, CNACmdNewRouteLayer_getEnabled_ev_bool_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNewRouteLayer::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_setEnabled_void_ev_bool( void *pObjectXXXX, CNACmdNewRouteLayer_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdNewRouteLayer::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNewRouteLayer::create(ctrl);
	else
		ptrNativeObject->create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_create_void_ISpatialControl( void *pObjectXXXX, CNACmdNewRouteLayer_create_void_ISpatialControl_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNewRouteLayer_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdNewRouteLayer::create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNewRouteLayer_update_ev_bool_CEvent( void *pObjectXXXX, CNACmdNewRouteLayer_update_ev_bool_CEvent_Callback* pCallback )
{
	CNACmdNewRouteLayerProxy* ptr = dynamic_cast<CNACmdNewRouteLayerProxy*>((CNACmdNewRouteLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNewRouteLayer_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNewRouteLayer_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdNewRouteLayer* ptrNativeObject = (CNACmdNewRouteLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNewRouteLayer::update(e);
	return objXXXX;
}
