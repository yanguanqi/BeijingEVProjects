/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/toolstop.h"
typedef void  ( _stdcall CNAToolStop_activate_void_Callback)();
typedef void  ( _stdcall CNAToolStop_deactivate_void_Callback)();
typedef ev_int32  ( _stdcall CNAToolStop_getCursor_ev_int32_Callback)();
typedef ev_bool  ( _stdcall CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolStop_onDoubleClick_ev_bool_Callback)();
typedef ev_bool  ( _stdcall CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
typedef ev_bool  ( _stdcall CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_uint32  ( _stdcall CNAToolStop_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNAToolStop_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNAToolStop_getName_EVString_Callback)();
typedef char*  ( _stdcall CNAToolStop_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNAToolStop_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNAToolStop_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNAToolStop_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolStop_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNAToolStop_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolStop_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNAToolStop_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolStop_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNAToolStop_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNAToolStop_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNAToolStopProxy : public CNAToolStop
{
private:
	CNAToolStop_activate_void_Callback* m_CNAToolStop_activate_void_Callback;
	CNAToolStop_deactivate_void_Callback* m_CNAToolStop_deactivate_void_Callback;
	CNAToolStop_getCursor_ev_int32_Callback* m_CNAToolStop_getCursor_ev_int32_Callback;
	CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolStop_onDoubleClick_ev_bool_Callback* m_CNAToolStop_onDoubleClick_ev_bool_Callback;
	CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback* m_CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback;
	CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback* m_CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback;
	CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback* m_CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback;
	CNAToolStop_getToolBarType_ev_uint32_Callback* m_CNAToolStop_getToolBarType_ev_uint32_Callback;
	CNAToolStop_getType_ev_uint32_Callback* m_CNAToolStop_getType_ev_uint32_Callback;
	CNAToolStop_getName_EVString_Callback* m_CNAToolStop_getName_EVString_Callback;
	CNAToolStop_getCategory_EVString_Callback* m_CNAToolStop_getCategory_EVString_Callback;
	CNAToolStop_getToolTip_EVString_Callback* m_CNAToolStop_getToolTip_EVString_Callback;
	CNAToolStop_getIcon_IBitmap_Callback* m_CNAToolStop_getIcon_IBitmap_Callback;
	CNAToolStop_isCheckable_ev_bool_Callback* m_CNAToolStop_isCheckable_ev_bool_Callback;
	CNAToolStop_onClicked_void_Callback* m_CNAToolStop_onClicked_void_Callback;
	CNAToolStop_getChecked_ev_bool_Callback* m_CNAToolStop_getChecked_ev_bool_Callback;
	CNAToolStop_setChecked_void_ev_bool_Callback* m_CNAToolStop_setChecked_void_ev_bool_Callback;
	CNAToolStop_getEnabled_ev_bool_Callback* m_CNAToolStop_getEnabled_ev_bool_Callback;
	CNAToolStop_setEnabled_void_ev_bool_Callback* m_CNAToolStop_setEnabled_void_ev_bool_Callback;
	CNAToolStop_create_void_ISpatialControl_Callback* m_CNAToolStop_create_void_ISpatialControl_Callback;
	CNAToolStop_update_ev_bool_CEvent_Callback* m_CNAToolStop_update_ev_bool_CEvent_Callback;
public:
	CNAToolStopProxy(EarthView::World::Core::CNameValuePairList *pList) : CNAToolStop(pList)
	{
		m_CNAToolStop_activate_void_Callback = NULL;
		m_CNAToolStop_deactivate_void_Callback = NULL;
		m_CNAToolStop_getCursor_ev_int32_Callback = NULL;
		m_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onDoubleClick_ev_bool_Callback = NULL;
		m_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolStop_getToolBarType_ev_uint32_Callback = NULL;
		m_CNAToolStop_getType_ev_uint32_Callback = NULL;
		m_CNAToolStop_getName_EVString_Callback = NULL;
		m_CNAToolStop_getCategory_EVString_Callback = NULL;
		m_CNAToolStop_getToolTip_EVString_Callback = NULL;
		m_CNAToolStop_getIcon_IBitmap_Callback = NULL;
		m_CNAToolStop_isCheckable_ev_bool_Callback = NULL;
		m_CNAToolStop_onClicked_void_Callback = NULL;
		m_CNAToolStop_getChecked_ev_bool_Callback = NULL;
		m_CNAToolStop_setChecked_void_ev_bool_Callback = NULL;
		m_CNAToolStop_getEnabled_ev_bool_Callback = NULL;
		m_CNAToolStop_setEnabled_void_ev_bool_Callback = NULL;
		m_CNAToolStop_create_void_ISpatialControl_Callback = NULL;
		m_CNAToolStop_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNAToolStopProxy)
public:
	ev_void registerCallback_CNAToolStop_activate_void(CNAToolStop_activate_void_Callback* pCallback)
	{
		m_CNAToolStop_activate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_deactivate_void(CNAToolStop_deactivate_void_Callback* pCallback)
	{
		m_CNAToolStop_deactivate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getCursor_ev_int32(CNAToolStop_getCursor_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_getCursor_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32(CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onDoubleClick_ev_bool(CNAToolStop_onDoubleClick_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_onDoubleClick_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32(CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32(CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onTouchDown_ev_bool_MotionEvent(CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onTouchUp_ev_bool_MotionEvent(CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onTouchMove_ev_bool_MotionEvent(CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getToolBarType_ev_uint32(CNAToolStop_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolStop_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getType_ev_uint32(CNAToolStop_getType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolStop_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getName_EVString(CNAToolStop_getName_EVString_Callback* pCallback)
	{
		m_CNAToolStop_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getCategory_EVString(CNAToolStop_getCategory_EVString_Callback* pCallback)
	{
		m_CNAToolStop_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getToolTip_EVString(CNAToolStop_getToolTip_EVString_Callback* pCallback)
	{
		m_CNAToolStop_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getIcon_IBitmap(CNAToolStop_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNAToolStop_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_isCheckable_ev_bool(CNAToolStop_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_onClicked_void(CNAToolStop_onClicked_void_Callback* pCallback)
	{
		m_CNAToolStop_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getChecked_ev_bool(CNAToolStop_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_setChecked_void_ev_bool(CNAToolStop_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_getEnabled_ev_bool(CNAToolStop_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_setEnabled_void_ev_bool(CNAToolStop_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolStop_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_create_void_ISpatialControl(CNAToolStop_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNAToolStop_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolStop_update_ev_bool_CEvent(CNAToolStop_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNAToolStop_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNAToolStop_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolStop_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNAToolStop_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolStop_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNAToolStop_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolStop_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNAToolStop_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolStop_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNAToolStop_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolStop_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getToolTip();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNAToolStop_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::isCheckable();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNAToolStop_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNAToolStop_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getIcon();
	}
	virtual ev_int32 getCursor()
	{
		if(m_CNAToolStop_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CNAToolStop_getCursor_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getCursor();
	}
	virtual void activate()
	{
		if(m_CNAToolStop_activate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_activate_void_Callback();
		}
		else
			return this->CNAToolStop::activate();
	}
	virtual void deactivate()
	{
		if(m_CNAToolStop_deactivate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_deactivate_void_Callback();
		}
		else
			return this->CNAToolStop::deactivate();
	}
	virtual void onClicked()
	{
		if(m_CNAToolStop_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_onClicked_void_Callback();
		}
		else
			return this->CNAToolStop::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNAToolStop_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNAToolStop_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNAToolStop::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNAToolStop_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNAToolStop_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNAToolStop::setEnabled(enabled);
	}
	virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolStop::onKeyDown(keyCode, shift);
	}
	virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolStop::onMouseDown(button, shift, x, y);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNAToolStop_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNAToolStop::update(e);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CNAToolStop_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolStop_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CNAToolStop::create(ref_ctrl);
	}
	virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolStop::onMouseMove(button, shift, x, y);
	}
	virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolStop::onMouseUp(button, shift, x, y);
	}
	virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
	{
		if(m_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
			return returnValue;
		}
		else
			return this->CNAToolStop::onMouseWheel(delta, x, y, flag);
	}
	virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolStop::onKeyUp(keyCode, shift);
	}
	virtual ev_bool onDoubleClick()
	{
		if(m_CNAToolStop_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onDoubleClick_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolStop::onDoubleClick();
	}
	virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolStop::onDoubleClick(button, shift, x, y);
	}
	virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolStop::onTouchDown(touchEvent);
	}
	virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolStop::onTouchUp(touchEvent);
	}
	virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolStop::onTouchMove(touchEvent);
	}
	virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
			return returnValue;
		}
		else
			return this->CNAToolStop::onContextMenu(x, y);
	}
};
REGISTER_FACTORY_CLASS(CNAToolStopProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolStop_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolStop::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getToolBarType_ev_uint32( void *pObjectXXXX, CNAToolStop_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolStop_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolStop::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolStop_getType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolStop::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getType_ev_uint32( void *pObjectXXXX, CNAToolStop_getType_ev_uint32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolStop_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolStop::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getName_EVString(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolStop::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getName_EVString( void *pObjectXXXX, CNAToolStop_getName_EVString_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolStop::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getCategory_EVString(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolStop::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getCategory_EVString( void *pObjectXXXX, CNAToolStop_getCategory_EVString_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolStop::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getToolTip_EVString(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolStop::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getToolTip_EVString( void *pObjectXXXX, CNAToolStop_getToolTip_EVString_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolStop_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolStop::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_isCheckable_ev_bool( void *pObjectXXXX, CNAToolStop_isCheckable_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolStop_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolStop::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getIcon_IBitmap( void *pObjectXXXX, CNAToolStop_getIcon_IBitmap_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolStop_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolStop::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolStop_getCursor_ev_int32(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CNAToolStop::getCursor();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCursor();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getCursor_ev_int32( void *pObjectXXXX, CNAToolStop_getCursor_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getCursor_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolStop_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CNAToolStop::getCursor();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_activate_void(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolStop::activate();
	else
		ptrNativeObject->activate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_activate_void( void *pObjectXXXX, CNAToolStop_activate_void_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_activate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_activate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ptrNativeObject->CNAToolStop::activate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_deactivate_void(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolStop::deactivate();
	else
		ptrNativeObject->deactivate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_deactivate_void( void *pObjectXXXX, CNAToolStop_deactivate_void_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_deactivate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_deactivate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ptrNativeObject->CNAToolStop::deactivate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_onClicked_void(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolStop::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onClicked_void( void *pObjectXXXX, CNAToolStop_onClicked_void_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ptrNativeObject->CNAToolStop::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getChecked_ev_bool( void *pObjectXXXX, CNAToolStop_getChecked_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolStop::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_setChecked_void_ev_bool( void *pObjectXXXX, CNAToolStop_setChecked_void_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ptrNativeObject->CNAToolStop::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_getEnabled_ev_bool( void *pObjectXXXX, CNAToolStop_getEnabled_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolStop::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_setEnabled_void_ev_bool( void *pObjectXXXX, CNAToolStop_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolStop_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ptrNativeObject->CNAToolStop::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::onKeyDown(keyCode, shift);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::onKeyDown(keyCode, shift);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::onMouseDown(button, shift, x, y);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::onMouseDown(button, shift, x, y);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	if (dynamic_cast<CNAToolStopProxy*>((CNAToolStop*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolStop::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_update_ev_bool_CEvent( void *pObjectXXXX, CNAToolStop_update_ev_bool_CEvent_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolStop_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolStop* ptrNativeObject = (CNAToolStop*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolStop::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onDoubleClick_ev_bool( void *pObjectXXXX, CNAToolStop_onDoubleClick_ev_bool_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onDoubleClick_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolStop_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onTouchDown_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolStop_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onTouchUp_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolStop_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_onTouchMove_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolStop_create_void_ISpatialControl( void *pObjectXXXX, CNAToolStop_create_void_ISpatialControl_Callback* pCallback )
{
	CNAToolStopProxy* ptr = dynamic_cast<CNAToolStopProxy*>((CNAToolStop*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolStop_create_void_ISpatialControl(pCallback);
	}
}
