/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/toolbarriar.h"
typedef void  ( _stdcall CNAToolBarriar_activate_void_Callback)();
typedef void  ( _stdcall CNAToolBarriar_deactivate_void_Callback)();
typedef ev_int32  ( _stdcall CNAToolBarriar_getCursor_ev_int32_Callback)();
typedef ev_bool  ( _stdcall CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolBarriar_onDoubleClick_ev_bool_Callback)();
typedef ev_bool  ( _stdcall CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback)(_in ev_int32 keyCode, _in ev_int32 shift);
typedef ev_bool  ( _stdcall CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y);
typedef ev_bool  ( _stdcall CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback)(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag);
typedef ev_bool  ( _stdcall CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_bool  ( _stdcall CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback)(_in const void* touchEvent);
typedef ev_uint32  ( _stdcall CNAToolBarriar_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNAToolBarriar_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNAToolBarriar_getName_EVString_Callback)();
typedef char*  ( _stdcall CNAToolBarriar_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNAToolBarriar_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNAToolBarriar_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNAToolBarriar_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolBarriar_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNAToolBarriar_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolBarriar_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNAToolBarriar_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNAToolBarriar_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNAToolBarriar_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNAToolBarriar_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNAToolBarriarProxy : public CNAToolBarriar
{
private:
	CNAToolBarriar_activate_void_Callback* m_CNAToolBarriar_activate_void_Callback;
	CNAToolBarriar_deactivate_void_Callback* m_CNAToolBarriar_deactivate_void_Callback;
	CNAToolBarriar_getCursor_ev_int32_Callback* m_CNAToolBarriar_getCursor_ev_int32_Callback;
	CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onDoubleClick_ev_bool_Callback* m_CNAToolBarriar_onDoubleClick_ev_bool_Callback;
	CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* m_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback;
	CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback* m_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback;
	CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback* m_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback;
	CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback* m_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback;
	CNAToolBarriar_getToolBarType_ev_uint32_Callback* m_CNAToolBarriar_getToolBarType_ev_uint32_Callback;
	CNAToolBarriar_getType_ev_uint32_Callback* m_CNAToolBarriar_getType_ev_uint32_Callback;
	CNAToolBarriar_getName_EVString_Callback* m_CNAToolBarriar_getName_EVString_Callback;
	CNAToolBarriar_getCategory_EVString_Callback* m_CNAToolBarriar_getCategory_EVString_Callback;
	CNAToolBarriar_getToolTip_EVString_Callback* m_CNAToolBarriar_getToolTip_EVString_Callback;
	CNAToolBarriar_getIcon_IBitmap_Callback* m_CNAToolBarriar_getIcon_IBitmap_Callback;
	CNAToolBarriar_isCheckable_ev_bool_Callback* m_CNAToolBarriar_isCheckable_ev_bool_Callback;
	CNAToolBarriar_onClicked_void_Callback* m_CNAToolBarriar_onClicked_void_Callback;
	CNAToolBarriar_getChecked_ev_bool_Callback* m_CNAToolBarriar_getChecked_ev_bool_Callback;
	CNAToolBarriar_setChecked_void_ev_bool_Callback* m_CNAToolBarriar_setChecked_void_ev_bool_Callback;
	CNAToolBarriar_getEnabled_ev_bool_Callback* m_CNAToolBarriar_getEnabled_ev_bool_Callback;
	CNAToolBarriar_setEnabled_void_ev_bool_Callback* m_CNAToolBarriar_setEnabled_void_ev_bool_Callback;
	CNAToolBarriar_create_void_ISpatialControl_Callback* m_CNAToolBarriar_create_void_ISpatialControl_Callback;
	CNAToolBarriar_update_ev_bool_CEvent_Callback* m_CNAToolBarriar_update_ev_bool_CEvent_Callback;
public:
	CNAToolBarriarProxy(EarthView::World::Core::CNameValuePairList *pList) : CNAToolBarriar(pList)
	{
		m_CNAToolBarriar_activate_void_Callback = NULL;
		m_CNAToolBarriar_deactivate_void_Callback = NULL;
		m_CNAToolBarriar_getCursor_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onDoubleClick_ev_bool_Callback = NULL;
		m_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = NULL;
		m_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback = NULL;
		m_CNAToolBarriar_getToolBarType_ev_uint32_Callback = NULL;
		m_CNAToolBarriar_getType_ev_uint32_Callback = NULL;
		m_CNAToolBarriar_getName_EVString_Callback = NULL;
		m_CNAToolBarriar_getCategory_EVString_Callback = NULL;
		m_CNAToolBarriar_getToolTip_EVString_Callback = NULL;
		m_CNAToolBarriar_getIcon_IBitmap_Callback = NULL;
		m_CNAToolBarriar_isCheckable_ev_bool_Callback = NULL;
		m_CNAToolBarriar_onClicked_void_Callback = NULL;
		m_CNAToolBarriar_getChecked_ev_bool_Callback = NULL;
		m_CNAToolBarriar_setChecked_void_ev_bool_Callback = NULL;
		m_CNAToolBarriar_getEnabled_ev_bool_Callback = NULL;
		m_CNAToolBarriar_setEnabled_void_ev_bool_Callback = NULL;
		m_CNAToolBarriar_create_void_ISpatialControl_Callback = NULL;
		m_CNAToolBarriar_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNAToolBarriarProxy)
public:
	ev_void registerCallback_CNAToolBarriar_activate_void(CNAToolBarriar_activate_void_Callback* pCallback)
	{
		m_CNAToolBarriar_activate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_deactivate_void(CNAToolBarriar_deactivate_void_Callback* pCallback)
	{
		m_CNAToolBarriar_deactivate_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getCursor_ev_int32(CNAToolBarriar_getCursor_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_getCursor_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32(CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onDoubleClick_ev_bool(CNAToolBarriar_onDoubleClick_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_onDoubleClick_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32(CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32(CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback)
	{
		m_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent(CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent(CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent(CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback* pCallback)
	{
		m_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getToolBarType_ev_uint32(CNAToolBarriar_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolBarriar_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getType_ev_uint32(CNAToolBarriar_getType_ev_uint32_Callback* pCallback)
	{
		m_CNAToolBarriar_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getName_EVString(CNAToolBarriar_getName_EVString_Callback* pCallback)
	{
		m_CNAToolBarriar_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getCategory_EVString(CNAToolBarriar_getCategory_EVString_Callback* pCallback)
	{
		m_CNAToolBarriar_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getToolTip_EVString(CNAToolBarriar_getToolTip_EVString_Callback* pCallback)
	{
		m_CNAToolBarriar_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getIcon_IBitmap(CNAToolBarriar_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNAToolBarriar_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_isCheckable_ev_bool(CNAToolBarriar_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_onClicked_void(CNAToolBarriar_onClicked_void_Callback* pCallback)
	{
		m_CNAToolBarriar_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getChecked_ev_bool(CNAToolBarriar_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_setChecked_void_ev_bool(CNAToolBarriar_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_getEnabled_ev_bool(CNAToolBarriar_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_setEnabled_void_ev_bool(CNAToolBarriar_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNAToolBarriar_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_create_void_ISpatialControl(CNAToolBarriar_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNAToolBarriar_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNAToolBarriar_update_ev_bool_CEvent(CNAToolBarriar_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNAToolBarriar_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNAToolBarriar_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolBarriar_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNAToolBarriar_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNAToolBarriar_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNAToolBarriar_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolBarriar_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNAToolBarriar_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolBarriar_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNAToolBarriar_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNAToolBarriar_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNAToolBarriar_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNAToolBarriar_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNAToolBarriar_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::isCheckable();
	}
	virtual ev_int32 getCursor()
	{
		if(m_CNAToolBarriar_getCursor_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CNAToolBarriar_getCursor_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getCursor();
	}
	virtual void activate()
	{
		if(m_CNAToolBarriar_activate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_activate_void_Callback();
		}
		else
			return this->CNAToolBarriar::activate();
	}
	virtual void deactivate()
	{
		if(m_CNAToolBarriar_deactivate_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_deactivate_void_Callback();
		}
		else
			return this->CNAToolBarriar::deactivate();
	}
	virtual void onClicked()
	{
		if(m_CNAToolBarriar_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_onClicked_void_Callback();
		}
		else
			return this->CNAToolBarriar::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNAToolBarriar_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNAToolBarriar_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNAToolBarriar::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNAToolBarriar_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNAToolBarriar_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNAToolBarriar::setEnabled(enabled);
	}
	virtual ev_bool onKeyDown(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onKeyDown(keyCode, shift);
	}
	virtual ev_bool onMouseDown(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onMouseDown(button, shift, x, y);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNAToolBarriar_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::update(e);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CNAToolBarriar_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNAToolBarriar_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CNAToolBarriar::create(ref_ctrl);
	}
	virtual ev_bool onMouseMove(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onMouseMove(button, shift, x, y);
	}
	virtual ev_bool onMouseUp(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onMouseUp(button, shift, x, y);
	}
	virtual ev_bool onMouseWheel(_in ev_int32 delta, _in ev_int32 x, _in ev_int32 y, _in ev_int32 flag)
	{
		if(m_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(delta, x, y, flag);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onMouseWheel(delta, x, y, flag);
	}
	virtual ev_bool onKeyUp(_in ev_int32 keyCode, _in ev_int32 shift)
	{
		if(m_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback(keyCode, shift);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onKeyUp(keyCode, shift);
	}
	virtual ev_bool onDoubleClick()
	{
		if(m_CNAToolBarriar_onDoubleClick_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onDoubleClick_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onDoubleClick();
	}
	virtual ev_bool onDoubleClick(_in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback(button, shift, x, y);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onDoubleClick(button, shift, x, y);
	}
	virtual ev_bool onTouchDown(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onTouchDown(touchEvent);
	}
	virtual ev_bool onTouchUp(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onTouchUp(touchEvent);
	}
	virtual ev_bool onTouchMove(_in const EarthView::World::Spatial::SystemUI::MotionEvent& touchEvent)
	{
		if(m_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback(&touchEvent);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onTouchMove(touchEvent);
	}
	virtual ev_bool onContextMenu(_in ev_int32 x, _in ev_int32 y)
	{
		if(m_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback(x, y);
			return returnValue;
		}
		else
			return this->CNAToolBarriar::onContextMenu(x, y);
	}
};
REGISTER_FACTORY_CLASS(CNAToolBarriarProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolBarriar_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolBarriar::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getToolBarType_ev_uint32( void *pObjectXXXX, CNAToolBarriar_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolBarriar_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolBarriar::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolBarriar_getType_ev_uint32(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNAToolBarriar::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getType_ev_uint32( void *pObjectXXXX, CNAToolBarriar_getType_ev_uint32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNAToolBarriar_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNAToolBarriar::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getName_EVString(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolBarriar::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getName_EVString( void *pObjectXXXX, CNAToolBarriar_getName_EVString_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolBarriar::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getCategory_EVString(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolBarriar::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getCategory_EVString( void *pObjectXXXX, CNAToolBarriar_getCategory_EVString_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolBarriar::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getToolTip_EVString(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNAToolBarriar::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getToolTip_EVString( void *pObjectXXXX, CNAToolBarriar_getToolTip_EVString_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNAToolBarriar_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNAToolBarriar::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolBarriar_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolBarriar::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getIcon_IBitmap( void *pObjectXXXX, CNAToolBarriar_getIcon_IBitmap_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNAToolBarriar_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNAToolBarriar::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_isCheckable_ev_bool( void *pObjectXXXX, CNAToolBarriar_isCheckable_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolBarriar_getCursor_ev_int32(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CNAToolBarriar::getCursor();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCursor();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getCursor_ev_int32( void *pObjectXXXX, CNAToolBarriar_getCursor_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getCursor_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNAToolBarriar_getCursor_ev_int32_NoVirtual(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CNAToolBarriar::getCursor();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_activate_void(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolBarriar::activate();
	else
		ptrNativeObject->activate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_activate_void( void *pObjectXXXX, CNAToolBarriar_activate_void_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_activate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_activate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ptrNativeObject->CNAToolBarriar::activate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_deactivate_void(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolBarriar::deactivate();
	else
		ptrNativeObject->deactivate();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_deactivate_void( void *pObjectXXXX, CNAToolBarriar_deactivate_void_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_deactivate_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_deactivate_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ptrNativeObject->CNAToolBarriar::deactivate();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_onClicked_void(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolBarriar::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onClicked_void( void *pObjectXXXX, CNAToolBarriar_onClicked_void_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ptrNativeObject->CNAToolBarriar::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getChecked_ev_bool( void *pObjectXXXX, CNAToolBarriar_getChecked_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolBarriar::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_setChecked_void_ev_bool( void *pObjectXXXX, CNAToolBarriar_setChecked_void_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ptrNativeObject->CNAToolBarriar::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_getEnabled_ev_bool( void *pObjectXXXX, CNAToolBarriar_getEnabled_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
		ptrNativeObject->CNAToolBarriar::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_setEnabled_void_ev_bool( void *pObjectXXXX, CNAToolBarriar_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNAToolBarriar_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ptrNativeObject->CNAToolBarriar::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::onKeyDown(keyCode, shift);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onKeyDown(keyCode, shift);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_onKeyDown_ev_bool_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 keyCode, _in ev_int32 shift )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::onKeyDown(keyCode, shift);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::onMouseDown(button, shift, x, y);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->onMouseDown(button, shift, x, y);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_onMouseDown_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 button, _in ev_int32 shift, _in ev_int32 x, _in ev_int32 y )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::onMouseDown(button, shift, x, y);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	if (dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_update_ev_bool_CEvent( void *pObjectXXXX, CNAToolBarriar_update_ev_bool_CEvent_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNAToolBarriar_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNAToolBarriar* ptrNativeObject = (CNAToolBarriar*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNAToolBarriar::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onContextMenu_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onDoubleClick_ev_bool( void *pObjectXXXX, CNAToolBarriar_onDoubleClick_ev_bool_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onDoubleClick_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onDoubleClick_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onKeyUp_ev_bool_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onMouseMove_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onMouseUp_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32( void *pObjectXXXX, CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onMouseWheel_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolBarriar_onTouchDown_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onTouchDown_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolBarriar_onTouchUp_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onTouchUp_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent( void *pObjectXXXX, CNAToolBarriar_onTouchMove_ev_bool_MotionEvent_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_onTouchMove_ev_bool_MotionEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNAToolBarriar_create_void_ISpatialControl( void *pObjectXXXX, CNAToolBarriar_create_void_ISpatialControl_Callback* pCallback )
{
	CNAToolBarriarProxy* ptr = dynamic_cast<CNAToolBarriarProxy*>((CNAToolBarriar*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNAToolBarriar_create_void_ISpatialControl(pCallback);
	}
}
