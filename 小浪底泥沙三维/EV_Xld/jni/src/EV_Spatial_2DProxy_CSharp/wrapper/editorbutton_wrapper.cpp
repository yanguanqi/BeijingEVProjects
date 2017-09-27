/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/editorbutton.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
			}
		}
	}
}
typedef void  ( _stdcall CEditorButton_addCommand_void_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd);
typedef ev_uint32  ( _stdcall CEditorButton_getCount_ev_uint32_Callback)();
typedef EarthView::World::Spatial::SystemUI::ICommand*  ( _stdcall CEditorButton_getCommand_ICommand_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CEditorButton_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CEditorButton_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CEditorButton_getName_EVString_Callback)();
typedef char*  ( _stdcall CEditorButton_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CEditorButton_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CEditorButton_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CEditorButton_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CEditorButton_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CEditorButton_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CEditorButton_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CEditorButton_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CEditorButton_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CEditorButton_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CEditorButton_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CEditorButtonProxy : public CEditorButton
{
private:
	CEditorButton_addCommand_void_ICommand_Callback* m_CEditorButton_addCommand_void_ICommand_Callback;
	CEditorButton_getCount_ev_uint32_Callback* m_CEditorButton_getCount_ev_uint32_Callback;
	CEditorButton_getCommand_ICommand_ev_uint32_Callback* m_CEditorButton_getCommand_ICommand_ev_uint32_Callback;
	CEditorButton_getToolBarType_ev_uint32_Callback* m_CEditorButton_getToolBarType_ev_uint32_Callback;
	CEditorButton_getType_ev_uint32_Callback* m_CEditorButton_getType_ev_uint32_Callback;
	CEditorButton_getName_EVString_Callback* m_CEditorButton_getName_EVString_Callback;
	CEditorButton_getCategory_EVString_Callback* m_CEditorButton_getCategory_EVString_Callback;
	CEditorButton_getToolTip_EVString_Callback* m_CEditorButton_getToolTip_EVString_Callback;
	CEditorButton_getIcon_IBitmap_Callback* m_CEditorButton_getIcon_IBitmap_Callback;
	CEditorButton_isCheckable_ev_bool_Callback* m_CEditorButton_isCheckable_ev_bool_Callback;
	CEditorButton_onClicked_void_Callback* m_CEditorButton_onClicked_void_Callback;
	CEditorButton_getChecked_ev_bool_Callback* m_CEditorButton_getChecked_ev_bool_Callback;
	CEditorButton_setChecked_void_ev_bool_Callback* m_CEditorButton_setChecked_void_ev_bool_Callback;
	CEditorButton_getEnabled_ev_bool_Callback* m_CEditorButton_getEnabled_ev_bool_Callback;
	CEditorButton_setEnabled_void_ev_bool_Callback* m_CEditorButton_setEnabled_void_ev_bool_Callback;
	CEditorButton_create_void_ISpatialControl_Callback* m_CEditorButton_create_void_ISpatialControl_Callback;
	CEditorButton_update_ev_bool_CEvent_Callback* m_CEditorButton_update_ev_bool_CEvent_Callback;
public:
	CEditorButtonProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditorButton(pList)
	{
		m_CEditorButton_addCommand_void_ICommand_Callback = NULL;
		m_CEditorButton_getCount_ev_uint32_Callback = NULL;
		m_CEditorButton_getCommand_ICommand_ev_uint32_Callback = NULL;
		m_CEditorButton_getToolBarType_ev_uint32_Callback = NULL;
		m_CEditorButton_getType_ev_uint32_Callback = NULL;
		m_CEditorButton_getName_EVString_Callback = NULL;
		m_CEditorButton_getCategory_EVString_Callback = NULL;
		m_CEditorButton_getToolTip_EVString_Callback = NULL;
		m_CEditorButton_getIcon_IBitmap_Callback = NULL;
		m_CEditorButton_isCheckable_ev_bool_Callback = NULL;
		m_CEditorButton_onClicked_void_Callback = NULL;
		m_CEditorButton_getChecked_ev_bool_Callback = NULL;
		m_CEditorButton_setChecked_void_ev_bool_Callback = NULL;
		m_CEditorButton_getEnabled_ev_bool_Callback = NULL;
		m_CEditorButton_setEnabled_void_ev_bool_Callback = NULL;
		m_CEditorButton_create_void_ISpatialControl_Callback = NULL;
		m_CEditorButton_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CEditorButtonProxy)
public:
	ev_void registerCallback_CEditorButton_addCommand_void_ICommand(CEditorButton_addCommand_void_ICommand_Callback* pCallback)
	{
		m_CEditorButton_addCommand_void_ICommand_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getCount_ev_uint32(CEditorButton_getCount_ev_uint32_Callback* pCallback)
	{
		m_CEditorButton_getCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getCommand_ICommand_ev_uint32(CEditorButton_getCommand_ICommand_ev_uint32_Callback* pCallback)
	{
		m_CEditorButton_getCommand_ICommand_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getToolBarType_ev_uint32(CEditorButton_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CEditorButton_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getType_ev_uint32(CEditorButton_getType_ev_uint32_Callback* pCallback)
	{
		m_CEditorButton_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getName_EVString(CEditorButton_getName_EVString_Callback* pCallback)
	{
		m_CEditorButton_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getCategory_EVString(CEditorButton_getCategory_EVString_Callback* pCallback)
	{
		m_CEditorButton_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getToolTip_EVString(CEditorButton_getToolTip_EVString_Callback* pCallback)
	{
		m_CEditorButton_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getIcon_IBitmap(CEditorButton_getIcon_IBitmap_Callback* pCallback)
	{
		m_CEditorButton_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_isCheckable_ev_bool(CEditorButton_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CEditorButton_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_onClicked_void(CEditorButton_onClicked_void_Callback* pCallback)
	{
		m_CEditorButton_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getChecked_ev_bool(CEditorButton_getChecked_ev_bool_Callback* pCallback)
	{
		m_CEditorButton_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_setChecked_void_ev_bool(CEditorButton_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CEditorButton_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_getEnabled_ev_bool(CEditorButton_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CEditorButton_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_setEnabled_void_ev_bool(CEditorButton_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CEditorButton_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_create_void_ISpatialControl(CEditorButton_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CEditorButton_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CEditorButton_update_ev_bool_CEvent(CEditorButton_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CEditorButton_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CEditorButton_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditorButton_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CEditorButton_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditorButton_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getType();
	}
	virtual EVString getName() const
	{
		if(m_CEditorButton_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditorButton_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CEditorButton_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditorButton_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CEditorButton_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditorButton_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CEditorButton_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CEditorButton_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CEditorButton_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditorButton_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CEditorButton_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CEditorButton_onClicked_void_Callback();
		}
		else
			return this->CEditorButton::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CEditorButton_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditorButton_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CEditorButton_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditorButton_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CEditorButton::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CEditorButton_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditorButton_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CEditorButton_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditorButton_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CEditorButton::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CEditorButton_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CEditorButton_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CEditorButton::create(ref_ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CEditorButton_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditorButton_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CEditorButton::update(e);
	}
	virtual void addCommand(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd)
	{
		if(m_CEditorButton_addCommand_void_ICommand_Callback != NULL && this->isCustomExtend())
		{
			m_CEditorButton_addCommand_void_ICommand_Callback(ref_cmd);
		}
		else
			return this->CEditorButton::addCommand(ref_cmd);
	}
	virtual ev_uint32 getCount() const
	{
		if(m_CEditorButton_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditorButton_getCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditorButton::getCount();
	}
	virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand(_in ev_uint32 index) const
	{
		if(m_CEditorButton_getCommand_ICommand_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Spatial::SystemUI::ICommand* returnValue = m_CEditorButton_getCommand_ICommand_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CEditorButton::getCommand(index);
	}
};
REGISTER_FACTORY_CLASS(CEditorButtonProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getToolBarType_ev_uint32( void *pObjectXXXX, CEditorButton_getToolBarType_ev_uint32_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getType_ev_uint32(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getType_ev_uint32( void *pObjectXXXX, CEditorButton_getType_ev_uint32_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getName_EVString(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditorButton::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getName_EVString( void *pObjectXXXX, CEditorButton_getName_EVString_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditorButton::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getCategory_EVString(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditorButton::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getCategory_EVString( void *pObjectXXXX, CEditorButton_getCategory_EVString_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditorButton::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getToolTip_EVString(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditorButton::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getToolTip_EVString( void *pObjectXXXX, CEditorButton_getToolTip_EVString_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditorButton_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditorButton::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditorButton_getIcon_IBitmap(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditorButton::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getIcon_IBitmap( void *pObjectXXXX, CEditorButton_getIcon_IBitmap_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditorButton_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditorButton::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditorButton::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_isCheckable_ev_bool( void *pObjectXXXX, CEditorButton_isCheckable_ev_bool_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditorButton::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_onClicked_void(void *pObjectXXXX )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditorButton::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_onClicked_void( void *pObjectXXXX, CEditorButton_onClicked_void_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ptrNativeObject->CEditorButton::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_getChecked_ev_bool(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditorButton::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getChecked_ev_bool( void *pObjectXXXX, CEditorButton_getChecked_ev_bool_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditorButton::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditorButton::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_setChecked_void_ev_bool( void *pObjectXXXX, CEditorButton_setChecked_void_ev_bool_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ptrNativeObject->CEditorButton::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditorButton::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getEnabled_ev_bool( void *pObjectXXXX, CEditorButton_getEnabled_ev_bool_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditorButton::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditorButton::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_setEnabled_void_ev_bool( void *pObjectXXXX, CEditorButton_setEnabled_void_ev_bool_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ptrNativeObject->CEditorButton::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditorButton::create(ref_ctrl);
	else
		ptrNativeObject->create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_create_void_ISpatialControl( void *pObjectXXXX, CEditorButton_create_void_ISpatialControl_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ptrNativeObject->CEditorButton::create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditorButton::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_update_ev_bool_CEvent( void *pObjectXXXX, CEditorButton_update_ev_bool_CEvent_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditorButton_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditorButton::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_addCommand_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditorButton::addCommand(ref_cmd);
	else
		ptrNativeObject->addCommand(ref_cmd);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_addCommand_void_ICommand( void *pObjectXXXX, CEditorButton_addCommand_void_ICommand_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_addCommand_void_ICommand(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditorButton_addCommand_void_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
{
	CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ptrNativeObject->CEditorButton::addCommand(ref_cmd);
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getCount_ev_uint32(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getCount_ev_uint32( void *pObjectXXXX, CEditorButton_getCount_ev_uint32_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditorButton_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditorButton::getCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CEditorButton_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	if (dynamic_cast<CEditorButtonProxy*>((CEditorButton*)ptrNativeObject) != NULL)
	{
		EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->CEditorButton::getCommand(index);
		return objXXXX;
	}
	else
	{
		EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(index);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditorButton_getCommand_ICommand_ev_uint32( void *pObjectXXXX, CEditorButton_getCommand_ICommand_ev_uint32_Callback* pCallback )
{
	CEditorButtonProxy* ptr = dynamic_cast<CEditorButtonProxy*>((CEditorButton*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditorButton_getCommand_ICommand_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CEditorButton_getCommand_ICommand_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditorButton* ptrNativeObject = (CEditorButton*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->CEditorButton::getCommand(index);
	return objXXXX;
}
