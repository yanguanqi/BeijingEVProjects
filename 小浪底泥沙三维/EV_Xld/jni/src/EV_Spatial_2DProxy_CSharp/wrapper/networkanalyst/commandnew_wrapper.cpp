/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commandnew.h"
typedef void  ( _stdcall CNACmdNew_addCommand_void_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd);
typedef ev_uint32  ( _stdcall CNACmdNew_getCount_ev_uint32_Callback)();
typedef EarthView::World::Spatial::SystemUI::ICommand*  ( _stdcall CNACmdNew_getCommand_ICommand_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CNACmdNew_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdNew_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdNew_getName_EVString_Callback)();
typedef char*  ( _stdcall CNACmdNew_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNACmdNew_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNACmdNew_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNACmdNew_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNew_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNACmdNew_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNew_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNACmdNew_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdNew_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNACmdNew_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNACmdNew_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNACmdNewProxy : public CNACmdNew
{
private:
	CNACmdNew_addCommand_void_ICommand_Callback* m_CNACmdNew_addCommand_void_ICommand_Callback;
	CNACmdNew_getCount_ev_uint32_Callback* m_CNACmdNew_getCount_ev_uint32_Callback;
	CNACmdNew_getCommand_ICommand_ev_uint32_Callback* m_CNACmdNew_getCommand_ICommand_ev_uint32_Callback;
	CNACmdNew_getToolBarType_ev_uint32_Callback* m_CNACmdNew_getToolBarType_ev_uint32_Callback;
	CNACmdNew_getType_ev_uint32_Callback* m_CNACmdNew_getType_ev_uint32_Callback;
	CNACmdNew_getName_EVString_Callback* m_CNACmdNew_getName_EVString_Callback;
	CNACmdNew_getCategory_EVString_Callback* m_CNACmdNew_getCategory_EVString_Callback;
	CNACmdNew_getToolTip_EVString_Callback* m_CNACmdNew_getToolTip_EVString_Callback;
	CNACmdNew_getIcon_IBitmap_Callback* m_CNACmdNew_getIcon_IBitmap_Callback;
	CNACmdNew_isCheckable_ev_bool_Callback* m_CNACmdNew_isCheckable_ev_bool_Callback;
	CNACmdNew_onClicked_void_Callback* m_CNACmdNew_onClicked_void_Callback;
	CNACmdNew_getChecked_ev_bool_Callback* m_CNACmdNew_getChecked_ev_bool_Callback;
	CNACmdNew_setChecked_void_ev_bool_Callback* m_CNACmdNew_setChecked_void_ev_bool_Callback;
	CNACmdNew_getEnabled_ev_bool_Callback* m_CNACmdNew_getEnabled_ev_bool_Callback;
	CNACmdNew_setEnabled_void_ev_bool_Callback* m_CNACmdNew_setEnabled_void_ev_bool_Callback;
	CNACmdNew_create_void_ISpatialControl_Callback* m_CNACmdNew_create_void_ISpatialControl_Callback;
	CNACmdNew_update_ev_bool_CEvent_Callback* m_CNACmdNew_update_ev_bool_CEvent_Callback;
public:
	CNACmdNewProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdNew(pList)
	{
		m_CNACmdNew_addCommand_void_ICommand_Callback = NULL;
		m_CNACmdNew_getCount_ev_uint32_Callback = NULL;
		m_CNACmdNew_getCommand_ICommand_ev_uint32_Callback = NULL;
		m_CNACmdNew_getToolBarType_ev_uint32_Callback = NULL;
		m_CNACmdNew_getType_ev_uint32_Callback = NULL;
		m_CNACmdNew_getName_EVString_Callback = NULL;
		m_CNACmdNew_getCategory_EVString_Callback = NULL;
		m_CNACmdNew_getToolTip_EVString_Callback = NULL;
		m_CNACmdNew_getIcon_IBitmap_Callback = NULL;
		m_CNACmdNew_isCheckable_ev_bool_Callback = NULL;
		m_CNACmdNew_onClicked_void_Callback = NULL;
		m_CNACmdNew_getChecked_ev_bool_Callback = NULL;
		m_CNACmdNew_setChecked_void_ev_bool_Callback = NULL;
		m_CNACmdNew_getEnabled_ev_bool_Callback = NULL;
		m_CNACmdNew_setEnabled_void_ev_bool_Callback = NULL;
		m_CNACmdNew_create_void_ISpatialControl_Callback = NULL;
		m_CNACmdNew_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNACmdNewProxy)
public:
	ev_void registerCallback_CNACmdNew_addCommand_void_ICommand(CNACmdNew_addCommand_void_ICommand_Callback* pCallback)
	{
		m_CNACmdNew_addCommand_void_ICommand_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getCount_ev_uint32(CNACmdNew_getCount_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNew_getCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getCommand_ICommand_ev_uint32(CNACmdNew_getCommand_ICommand_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNew_getCommand_ICommand_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getToolBarType_ev_uint32(CNACmdNew_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNew_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getType_ev_uint32(CNACmdNew_getType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdNew_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getName_EVString(CNACmdNew_getName_EVString_Callback* pCallback)
	{
		m_CNACmdNew_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getCategory_EVString(CNACmdNew_getCategory_EVString_Callback* pCallback)
	{
		m_CNACmdNew_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getToolTip_EVString(CNACmdNew_getToolTip_EVString_Callback* pCallback)
	{
		m_CNACmdNew_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getIcon_IBitmap(CNACmdNew_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNACmdNew_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_isCheckable_ev_bool(CNACmdNew_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNACmdNew_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_onClicked_void(CNACmdNew_onClicked_void_Callback* pCallback)
	{
		m_CNACmdNew_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getChecked_ev_bool(CNACmdNew_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNACmdNew_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_setChecked_void_ev_bool(CNACmdNew_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdNew_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_getEnabled_ev_bool(CNACmdNew_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNACmdNew_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_setEnabled_void_ev_bool(CNACmdNew_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdNew_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_create_void_ISpatialControl(CNACmdNew_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNACmdNew_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdNew_update_ev_bool_CEvent(CNACmdNew_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNACmdNew_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getCount() const
	{
		if(m_CNACmdNew_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdNew_getCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getCount();
	}
	virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand(_in ev_uint32 index) const
	{
		if(m_CNACmdNew_getCommand_ICommand_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Spatial::SystemUI::ICommand* returnValue = m_CNACmdNew_getCommand_ICommand_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CNACmdNew::getCommand(index);
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNACmdNew_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdNew_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNACmdNew_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdNew_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNACmdNew_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNew_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNACmdNew_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNew_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNACmdNew_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdNew_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNACmdNew_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNACmdNew_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNACmdNew_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNew_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CNACmdNew_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNew_onClicked_void_Callback();
		}
		else
			return this->CNACmdNew::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNACmdNew_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNew_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNACmdNew_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNew_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNACmdNew::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNACmdNew_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNew_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdNew::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNACmdNew_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNew_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNACmdNew::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if(m_CNACmdNew_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNew_create_void_ISpatialControl_Callback(ctrl);
		}
		else
			return this->CNACmdNew::create(ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNACmdNew_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdNew_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNACmdNew::update(e);
	}
	virtual void addCommand(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd)
	{
		if(m_CNACmdNew_addCommand_void_ICommand_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdNew_addCommand_void_ICommand_Callback(ref_cmd);
		}
		else
			return this->CNACmdNew::addCommand(ref_cmd);
	}
};
REGISTER_FACTORY_CLASS(CNACmdNewProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getCount_ev_uint32(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getCount_ev_uint32( void *pObjectXXXX, CNACmdNew_getCount_ev_uint32_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CNACmdNew_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->CNACmdNew::getCommand(index);
		return objXXXX;
	}
	else
	{
		EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(index);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getCommand_ICommand_ev_uint32( void *pObjectXXXX, CNACmdNew_getCommand_ICommand_ev_uint32_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getCommand_ICommand_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CNACmdNew_getCommand_ICommand_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->CNACmdNew::getCommand(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getToolBarType_ev_uint32( void *pObjectXXXX, CNACmdNew_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getType_ev_uint32( void *pObjectXXXX, CNACmdNew_getType_ev_uint32_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdNew_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdNew::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getName_EVString(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNew::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getName_EVString( void *pObjectXXXX, CNACmdNew_getName_EVString_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNew::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getCategory_EVString(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNew::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getCategory_EVString( void *pObjectXXXX, CNACmdNew_getCategory_EVString_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNew::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getToolTip_EVString(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdNew::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getToolTip_EVString( void *pObjectXXXX, CNACmdNew_getToolTip_EVString_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdNew_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdNew::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdNew_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdNew::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getIcon_IBitmap( void *pObjectXXXX, CNACmdNew_getIcon_IBitmap_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdNew_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdNew::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNew::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_isCheckable_ev_bool( void *pObjectXXXX, CNACmdNew_isCheckable_ev_bool_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNew::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_onClicked_void(void *pObjectXXXX )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNew::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_onClicked_void( void *pObjectXXXX, CNACmdNew_onClicked_void_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ptrNativeObject->CNACmdNew::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNew::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getChecked_ev_bool( void *pObjectXXXX, CNACmdNew_getChecked_ev_bool_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNew::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNew::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_setChecked_void_ev_bool( void *pObjectXXXX, CNACmdNew_setChecked_void_ev_bool_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ptrNativeObject->CNACmdNew::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNew::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_getEnabled_ev_bool( void *pObjectXXXX, CNACmdNew_getEnabled_ev_bool_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNew::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNew::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_setEnabled_void_ev_bool( void *pObjectXXXX, CNACmdNew_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ptrNativeObject->CNACmdNew::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdNew::create(ctrl);
	else
		ptrNativeObject->create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_create_void_ISpatialControl( void *pObjectXXXX, CNACmdNew_create_void_ISpatialControl_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdNew_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ptrNativeObject->CNACmdNew::create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	if (dynamic_cast<CNACmdNewProxy*>((CNACmdNew*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdNew::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_update_ev_bool_CEvent( void *pObjectXXXX, CNACmdNew_update_ev_bool_CEvent_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdNew_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdNew* ptrNativeObject = (CNACmdNew*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdNew::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdNew_addCommand_void_ICommand( void *pObjectXXXX, CNACmdNew_addCommand_void_ICommand_Callback* pCallback )
{
	CNACmdNewProxy* ptr = dynamic_cast<CNACmdNewProxy*>((CNACmdNew*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdNew_addCommand_void_ICommand(pCallback);
	}
}
