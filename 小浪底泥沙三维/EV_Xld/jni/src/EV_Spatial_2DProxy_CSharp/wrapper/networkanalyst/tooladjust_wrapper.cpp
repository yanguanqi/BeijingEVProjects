/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/tooladjust.h"
typedef void  ( _stdcall CNAToolAdjust_activate_void_Callback)();
typedef void  ( _stdcall CNAToolAdjust_deactivate_void_Callback)();
typedef ev_int32  ( _stdcall CNAToolAdjust_getCursor_ev_int32_Callback)();
typedef ev_bool  ( _stdcall CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolAdjust_onDoubleClick_ev_bool_Callback)();
typedef ev_bool  ( _stdcall CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
typedef ev_bool  ( _stdcall CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_uint32  ( _stdcall CNAToolAdjust_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNAToolAdjust_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNAToolAdjust_getName_EVString_Callback)();
typedef char*  ( _stdcall CNAToolAdjust_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNAToolAdjust_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNAToolAdjust_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNAToolAdjust_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolAdjust_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNAToolAdjust_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolAdjust_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNAToolAdjust_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolAdjust_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNAToolAdjust_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNAToolAdjust_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNAToolAdjustProxy : public CNAToolAdjust
{
private:
	CNAToolAdjust_activate_void_Callback* m_CNAToolAdjust_activate_void_Callback;
	CNAToolAdjust_deactivate_void_Callback* m_CNAToolAdjust_deactivate_void_Callback;
	CNAToolAdjust_getCursor_ev_int32_Callback* m_CNAToolAdjust_getCursor_ev_int32_Callback;
	CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onDoubleClick_ev_bool_Callback* m_CNAToolAdjust_onDoubleClick_ev_bool_Callback;
	CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback* m_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback;
	CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback* m_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback;
	CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback* m_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback;
	CNAToolAdjust_getToolBarType_ev_uint32_Callback* m_CNAToolAdjust_getToolBarType_ev_uint32_Callback;
	CNAToolAdjust_getType_ev_uint32_Callback* m_CNAToolAdjust_getType_ev_uint32_Callback;
	CNAToolAdjust_getName_EVString_Callback* m_CNAToolAdjust_getName_EVString_Callback;
	CNAToolAdjust_getCategory_EVString_Callback* m_CNAToolAdjust_getCategory_EVString_Callback;
	CNAToolAdjust_getToolTip_EVString_Callback* m_CNAToolAdjust_getToolTip_EVString_Callback;
	CNAToolAdjust_getIcon_IBitmap_Callback* m_CNAToolAdjust_getIcon_IBitmap_Callback;
	CNAToolAdjust_isCheckable_ev_bool_Callback* m_CNAToolAdjust_isCheckable_ev_bool_Callback;
	CNAToolAdjust_onClicked_void_Callback* m_CNAToolAdjust_onClicked_void_Callback;
	CNAToolAdjust_getChecked_ev_bool_Callback* m_CNAToolAdjust_getChecked_ev_bool_Callback;
	CNAToolAdjust_setChecked_void_ev_bool_Callback* m_CNAToolAdjust_setChecked_void_ev_bool_Callback;
	CNAToolAdjust_getEnabled_ev_bool_Callback* m_CNAToolAdjust_getEnabled_ev_bool_Callback;
	CNAToolAdjust_setEnabled_void_ev_bool_Callback* m_CNAToolAdjust_setEnabled_void_ev_bool_Callback;
	CNAToolAdjust_create_void_ISpatialControl_Callback* m_CNAToolAdjust_create_void_ISpatialControl_Callback;
	CNAToolAdjust_update_ev_bool_CEvent_Callback* m_CNAToolAdjust_update_ev_bool_CEvent_Callback;
public:
	CNAToolAdjustProxy(EarthView::World::Core::CNameValuePairList *pList) : CNAToolAdjust(pList)
	{
		m_CNAToolAdjust_activate_void_Callback = NULL;
		m_CNAToolAdjust_deactivate_void_Callback = NULL;
		m_CNAToolAdjust_getCursor_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onDoubleClick_ev_bool_Callback = NULL;
		m_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolAdjust_getToolBarType_ev_uint32_Callback = NULL;
		m_CNAToolAdjust_getType_ev_uint32_Callback = NULL;
		m_CNAToolAdjust_getName_EVString_Callback = NULL;
		m_CNAToolAdjust_getCategory_EVString_Callback = NULL;
		m_CNAToolAdjust_getToolTip_EVString_Callback = NULL;
		m_CNAToolAdjust_getIcon_IBitmap_Callback = NULL;
		m_CNAToolAdjust_isCheckable_ev_bool_Callback = NULL;
		m_CNAToolAdjust_onClicked_void_Callback = NULL;
		m_CNAToolAdjust_getChecked_ev_bool_Callback = NULL;
		m_CNAToolAdjust_setChecked_void_ev_bool_Callback = NULL;
		m_CNAToolAdjust_getEnabled_ev_bool_Callback = NULL;
		m_CNAToolAdjust_setEnabled_void_ev_bool_Callback = NULL;
		m_CNAToolAdjust_create_void_ISpatialControl_Callback = NULL;
		m_CNAToolAdjust_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNAToolAdjustProxy)
public:
	ev_void registerCallback_CNAToolAdjust_activate_void(CNAToolAdjust_activate_void_Callback* pCallback)
	{
		m_CNAToolAdjust_activate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_deactivate_void(CNAToolAdjust_deactivate_void_Callback* pCallback)
	{
		m_CNAToolAdjust_deactivate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getCursor_ev_int32(CNAToolAdjust_getCursor_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_getCursor_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32(CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onDoubleClick_ev_bool(CNAToolAdjust_onDoubleClick_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_onDoubleClick_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32(CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32(CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent(CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent(CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent(CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getToolBarType_ev_uint32(CNAToolAdjust_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolAdjust_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getType_ev_uint32(CNAToolAdjust_getType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolAdjust_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getName_EVString(CNAToolAdjust_getName_EVString_Callback* pCallback)
	{
		m_CNAToolAdjust_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getCategory_EVString(CNAToolAdjust_getCategory_EVString_Callback* pCallback)
	{
		m_CNAToolAdjust_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getToolTip_EVString(CNAToolAdjust_getToolTip_EVString_Callback* pCallback)
	{
		m_CNAToolAdjust_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getIcon_IBitmap(CNAToolAdjust_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNAToolAdjust_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_isCheckable_ev_bool(CNAToolAdjust_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_onClicked_void(CNAToolAdjust_onClicked_void_Callback* pCallback)
	{
		m_CNAToolAdjust_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getChecked_ev_bool(CNAToolAdjust_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_setChecked_void_ev_bool(CNAToolAdjust_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_getEnabled_ev_bool(CNAToolAdjust_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_setEnabled_void_ev_bool(CNAToolAdjust_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolAdjust_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_create_void_ISpatialControl(CNAToolAdjust_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNAToolAdjust_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolAdjust_update_ev_bool_CEvent(CNAToolAdjust_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNAToolAdjust_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNAToolAdjust_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolAdjust_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNAToolAdjust_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolAdjust_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNAToolAdjust_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolAdjust_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNAToolAdjust_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolAdjust_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNAToolAdjust_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolAdjust_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNAToolAdjust_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNAToolAdjust_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNAToolAdjust_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::isCheckable();
	}
	virtual ev_int32 getCursor()
	{
		if(m_CNAToolAdjust_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CNAToolAdjust_getCursor_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getCursor();
	}
	virtual void activate()
	{
		if(m_CNAToolAdjust_activate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_activate_void_Callback();
		}
		else
			return this->CNAToolAdjust::activate();
	}
	virtual void deactivate()
	{
		if(m_CNAToolAdjust_deactivate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_deactivate_void_Callback();
		}
		else
			return this->CNAToolAdjust::deactivate();
	}
	virtual void onClicked()
	{
		if(m_CNAToolAdjust_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_onClicked_void_Callback();
		}
		else
			return this->CNAToolAdjust::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNAToolAdjust_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNAToolAdjust_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNAToolAdjust::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNAToolAdjust_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNAToolAdjust_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNAToolAdjust::setEnabled(enabled);
	}
	virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onKeyDown(keyCode, shift);
	}
	virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onMouseDown(button, shift, x, y);
	}
	virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onMouseMove(button, shift, x, y);
	}
	virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onMouseUp(button, shift, x, y);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNAToolAdjust_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::update(e);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CNAToolAdjust_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolAdjust_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CNAToolAdjust::create(ref_ctrl);
	}
	virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
	{
		if(m_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onMouseWheel(delta, x, y, flag);
	}
	virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onKeyUp(keyCode, shift);
	}
	virtual ev_bool onDoubleClick()
	{
		if(m_CNAToolAdjust_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onDoubleClick_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onDoubleClick();
	}
	virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onDoubleClick(button, shift, x, y);
	}
	virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onTouchDown(touchEvent);
	}
	virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onTouchUp(touchEvent);
	}
	virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onTouchMove(touchEvent);
	}
	virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
			return returnValue;
		}
		else
			return this->CNAToolAdjust::onContextMenu(x, y);
	}
};
REGISTER_FACTORY_CLASS(CNAToolAdjustProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolAdjust_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolAdjust::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getToolBarType_ev_uint32( void *pObjectXXXX, CNAToolAdjust_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolAdjust_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolAdjust::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolAdjust_getType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolAdjust::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getType_ev_uint32( void *pObjectXXXX, CNAToolAdjust_getType_ev_uint32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolAdjust_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolAdjust::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getName_EVString(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolAdjust::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getName_EVString( void *pObjectXXXX, CNAToolAdjust_getName_EVString_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolAdjust::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getCategory_EVString(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolAdjust::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getCategory_EVString( void *pObjectXXXX, CNAToolAdjust_getCategory_EVString_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolAdjust::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getToolTip_EVString(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolAdjust::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getToolTip_EVString( void *pObjectXXXX, CNAToolAdjust_getToolTip_EVString_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolAdjust_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolAdjust::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolAdjust_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolAdjust::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getIcon_IBitmap( void *pObjectXXXX, CNAToolAdjust_getIcon_IBitmap_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolAdjust_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolAdjust::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_isCheckable_ev_bool( void *pObjectXXXX, CNAToolAdjust_isCheckable_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolAdjust_getCursor_ev_int32(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CNAToolAdjust::getCursor();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCursor();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getCursor_ev_int32( void *pObjectXXXX, CNAToolAdjust_getCursor_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getCursor_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolAdjust_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CNAToolAdjust::getCursor();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_activate_void(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolAdjust::activate();
	else
		ptrNativeObject->activate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_activate_void( void *pObjectXXXX, CNAToolAdjust_activate_void_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_activate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_activate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ptrNativeObject->CNAToolAdjust::activate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_deactivate_void(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolAdjust::deactivate();
	else
		ptrNativeObject->deactivate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_deactivate_void( void *pObjectXXXX, CNAToolAdjust_deactivate_void_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_deactivate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_deactivate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ptrNativeObject->CNAToolAdjust::deactivate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_onClicked_void(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolAdjust::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onClicked_void( void *pObjectXXXX, CNAToolAdjust_onClicked_void_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ptrNativeObject->CNAToolAdjust::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getChecked_ev_bool( void *pObjectXXXX, CNAToolAdjust_getChecked_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolAdjust::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_setChecked_void_ev_bool( void *pObjectXXXX, CNAToolAdjust_setChecked_void_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ptrNativeObject->CNAToolAdjust::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_getEnabled_ev_bool( void *pObjectXXXX, CNAToolAdjust_getEnabled_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolAdjust::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_setEnabled_void_ev_bool( void *pObjectXXXX, CNAToolAdjust_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolAdjust_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ptrNativeObject->CNAToolAdjust::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onKeyDown(keyCode, shift);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onKeyDown(keyCode, shift);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseDown(button, shift, x, y);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseDown(button, shift, x, y);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseMove(button, shift, x, y);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onMouseMove(button, shift, x, y);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseMove(button, shift, x, y);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseUp(button, shift, x, y);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onMouseUp(button, shift, x, y);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::onMouseUp(button, shift, x, y);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	if (dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_update_ev_bool_CEvent( void *pObjectXXXX, CNAToolAdjust_update_ev_bool_CEvent_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolAdjust_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolAdjust* ptrNativeObject = (CNAToolAdjust*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolAdjust::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onDoubleClick_ev_bool( void *pObjectXXXX, CNAToolAdjust_onDoubleClick_ev_bool_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onDoubleClick_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolAdjust_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onTouchDown_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolAdjust_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onTouchUp_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolAdjust_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_onTouchMove_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolAdjust_create_void_ISpatialControl( void *pObjectXXXX, CNAToolAdjust_create_void_ISpatialControl_Callback* pCallback )
{
	CNAToolAdjustProxy* ptr = dynamic_cast<CNAToolAdjustProxy*>((CNAToolAdjust*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolAdjust_create_void_ISpatialControl(pCallback);
	}
}
