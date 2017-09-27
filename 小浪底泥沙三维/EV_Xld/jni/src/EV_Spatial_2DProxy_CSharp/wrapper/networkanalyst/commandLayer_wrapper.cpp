/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commandLayer.h"
typedef ev_uint32  ( _stdcall CNACmdLayer_getWidth_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdLayer_getEntryCount_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdLayer_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_int32  ( _stdcall CNACmdLayer_getCurrentIndex_ev_int32_Callback)();
typedef void  ( _stdcall CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CNACmdLayer_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdLayer_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdLayer_getName_EVString_Callback)();
typedef char*  ( _stdcall CNACmdLayer_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNACmdLayer_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNACmdLayer_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNACmdLayer_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdLayer_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNACmdLayer_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdLayer_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNACmdLayer_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdLayer_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNACmdLayer_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNACmdLayer_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNACmdLayerProxy : public CNACmdLayer
{
private:
	CNACmdLayer_getWidth_ev_uint32_Callback* m_CNACmdLayer_getWidth_ev_uint32_Callback;
	CNACmdLayer_getEntryCount_ev_uint32_Callback* m_CNACmdLayer_getEntryCount_ev_uint32_Callback;
	CNACmdLayer_getEntry_EVString_ev_uint32_Callback* m_CNACmdLayer_getEntry_EVString_ev_uint32_Callback;
	CNACmdLayer_getCurrentIndex_ev_int32_Callback* m_CNACmdLayer_getCurrentIndex_ev_int32_Callback;
	CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback* m_CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback;
	CNACmdLayer_getToolBarType_ev_uint32_Callback* m_CNACmdLayer_getToolBarType_ev_uint32_Callback;
	CNACmdLayer_getType_ev_uint32_Callback* m_CNACmdLayer_getType_ev_uint32_Callback;
	CNACmdLayer_getName_EVString_Callback* m_CNACmdLayer_getName_EVString_Callback;
	CNACmdLayer_getCategory_EVString_Callback* m_CNACmdLayer_getCategory_EVString_Callback;
	CNACmdLayer_getToolTip_EVString_Callback* m_CNACmdLayer_getToolTip_EVString_Callback;
	CNACmdLayer_getIcon_IBitmap_Callback* m_CNACmdLayer_getIcon_IBitmap_Callback;
	CNACmdLayer_isCheckable_ev_bool_Callback* m_CNACmdLayer_isCheckable_ev_bool_Callback;
	CNACmdLayer_onClicked_void_Callback* m_CNACmdLayer_onClicked_void_Callback;
	CNACmdLayer_getChecked_ev_bool_Callback* m_CNACmdLayer_getChecked_ev_bool_Callback;
	CNACmdLayer_setChecked_void_ev_bool_Callback* m_CNACmdLayer_setChecked_void_ev_bool_Callback;
	CNACmdLayer_getEnabled_ev_bool_Callback* m_CNACmdLayer_getEnabled_ev_bool_Callback;
	CNACmdLayer_setEnabled_void_ev_bool_Callback* m_CNACmdLayer_setEnabled_void_ev_bool_Callback;
	CNACmdLayer_create_void_ISpatialControl_Callback* m_CNACmdLayer_create_void_ISpatialControl_Callback;
	CNACmdLayer_update_ev_bool_CEvent_Callback* m_CNACmdLayer_update_ev_bool_CEvent_Callback;
public:
	CNACmdLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdLayer(pList)
	{
		m_CNACmdLayer_getWidth_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getEntryCount_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getEntry_EVString_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getCurrentIndex_ev_int32_Callback = NULL;
		m_CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getToolBarType_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getType_ev_uint32_Callback = NULL;
		m_CNACmdLayer_getName_EVString_Callback = NULL;
		m_CNACmdLayer_getCategory_EVString_Callback = NULL;
		m_CNACmdLayer_getToolTip_EVString_Callback = NULL;
		m_CNACmdLayer_getIcon_IBitmap_Callback = NULL;
		m_CNACmdLayer_isCheckable_ev_bool_Callback = NULL;
		m_CNACmdLayer_onClicked_void_Callback = NULL;
		m_CNACmdLayer_getChecked_ev_bool_Callback = NULL;
		m_CNACmdLayer_setChecked_void_ev_bool_Callback = NULL;
		m_CNACmdLayer_getEnabled_ev_bool_Callback = NULL;
		m_CNACmdLayer_setEnabled_void_ev_bool_Callback = NULL;
		m_CNACmdLayer_create_void_ISpatialControl_Callback = NULL;
		m_CNACmdLayer_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNACmdLayerProxy)
public:
	ev_void registerCallback_CNACmdLayer_getWidth_ev_uint32(CNACmdLayer_getWidth_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_getWidth_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getEntryCount_ev_uint32(CNACmdLayer_getEntryCount_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_getEntryCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getEntry_EVString_ev_uint32(CNACmdLayer_getEntry_EVString_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_getEntry_EVString_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getCurrentIndex_ev_int32(CNACmdLayer_getCurrentIndex_ev_int32_Callback* pCallback)
	{
		m_CNACmdLayer_getCurrentIndex_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_currentIndexChanged_void_ev_uint32(CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getToolBarType_ev_uint32(CNACmdLayer_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getType_ev_uint32(CNACmdLayer_getType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdLayer_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getName_EVString(CNACmdLayer_getName_EVString_Callback* pCallback)
	{
		m_CNACmdLayer_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getCategory_EVString(CNACmdLayer_getCategory_EVString_Callback* pCallback)
	{
		m_CNACmdLayer_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getToolTip_EVString(CNACmdLayer_getToolTip_EVString_Callback* pCallback)
	{
		m_CNACmdLayer_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getIcon_IBitmap(CNACmdLayer_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNACmdLayer_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_isCheckable_ev_bool(CNACmdLayer_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNACmdLayer_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_onClicked_void(CNACmdLayer_onClicked_void_Callback* pCallback)
	{
		m_CNACmdLayer_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getChecked_ev_bool(CNACmdLayer_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNACmdLayer_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_setChecked_void_ev_bool(CNACmdLayer_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdLayer_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_getEnabled_ev_bool(CNACmdLayer_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNACmdLayer_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_setEnabled_void_ev_bool(CNACmdLayer_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdLayer_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_create_void_ISpatialControl(CNACmdLayer_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNACmdLayer_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdLayer_update_ev_bool_CEvent(CNACmdLayer_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNACmdLayer_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_int32 getCurrentIndex() const
	{
		if(m_CNACmdLayer_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CNACmdLayer_getCurrentIndex_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getCurrentIndex();
	}
	virtual ev_uint32 getEntryCount() const
	{
		if(m_CNACmdLayer_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdLayer_getEntryCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getEntryCount();
	}
	virtual EVString getEntry(_in ev_uint32 index) const
	{
		if(m_CNACmdLayer_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdLayer_getEntry_EVString_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CNACmdLayer::getEntry(index);
	}
	virtual void currentIndexChanged(_in ev_uint32 index)
	{
		if(m_CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback(index);
		}
		else
			return this->CNACmdLayer::currentIndexChanged(index);
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNACmdLayer_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdLayer_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNACmdLayer_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdLayer_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNACmdLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdLayer_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNACmdLayer_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdLayer_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNACmdLayer_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdLayer_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNACmdLayer_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNACmdLayer_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNACmdLayer_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdLayer_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CNACmdLayer_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdLayer_onClicked_void_Callback();
		}
		else
			return this->CNACmdLayer::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNACmdLayer_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdLayer_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNACmdLayer_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdLayer_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNACmdLayer::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNACmdLayer_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdLayer_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNACmdLayer_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdLayer_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNACmdLayer::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if(m_CNACmdLayer_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdLayer_create_void_ISpatialControl_Callback(ctrl);
		}
		else
			return this->CNACmdLayer::create(ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNACmdLayer_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdLayer_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNACmdLayer::update(e);
	}
	virtual ev_uint32 getWidth() const
	{
		if(m_CNACmdLayer_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdLayer_getWidth_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdLayer::getWidth();
	}
};
REGISTER_FACTORY_CLASS(CNACmdLayerProxy);
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNACmdLayer_getCurrentIndex_ev_int32(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CNACmdLayer::getCurrentIndex();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getCurrentIndex_ev_int32( void *pObjectXXXX, CNACmdLayer_getCurrentIndex_ev_int32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getCurrentIndex_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNACmdLayer_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CNACmdLayer::getCurrentIndex();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getEntryCount_ev_uint32(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getEntryCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getEntryCount_ev_uint32( void *pObjectXXXX, CNACmdLayer_getEntryCount_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getEntryCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getEntryCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdLayer::getEntry(index);
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getEntry(index);
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getEntry_EVString_ev_uint32( void *pObjectXXXX, CNACmdLayer_getEntry_EVString_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getEntry_EVString_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdLayer::getEntry(index);
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdLayer::currentIndexChanged(index);
	else
		ptrNativeObject->currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, CNACmdLayer_currentIndexChanged_void_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_currentIndexChanged_void_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdLayer::currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getToolBarType_ev_uint32( void *pObjectXXXX, CNACmdLayer_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getType_ev_uint32( void *pObjectXXXX, CNACmdLayer_getType_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdLayer_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdLayer::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getName_EVString(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdLayer::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getName_EVString( void *pObjectXXXX, CNACmdLayer_getName_EVString_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdLayer::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getCategory_EVString(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdLayer::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getCategory_EVString( void *pObjectXXXX, CNACmdLayer_getCategory_EVString_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdLayer::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getToolTip_EVString(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdLayer::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getToolTip_EVString( void *pObjectXXXX, CNACmdLayer_getToolTip_EVString_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdLayer_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdLayer::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdLayer_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdLayer::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getIcon_IBitmap( void *pObjectXXXX, CNACmdLayer_getIcon_IBitmap_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdLayer_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdLayer::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdLayer::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_isCheckable_ev_bool( void *pObjectXXXX, CNACmdLayer_isCheckable_ev_bool_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdLayer::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_onClicked_void(void *pObjectXXXX )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdLayer::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_onClicked_void( void *pObjectXXXX, CNACmdLayer_onClicked_void_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdLayer::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdLayer::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getChecked_ev_bool( void *pObjectXXXX, CNACmdLayer_getChecked_ev_bool_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdLayer::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdLayer::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_setChecked_void_ev_bool( void *pObjectXXXX, CNACmdLayer_setChecked_void_ev_bool_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdLayer::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdLayer::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getEnabled_ev_bool( void *pObjectXXXX, CNACmdLayer_getEnabled_ev_bool_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdLayer::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdLayer::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_setEnabled_void_ev_bool( void *pObjectXXXX, CNACmdLayer_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdLayer::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdLayer::create(ctrl);
	else
		ptrNativeObject->create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_create_void_ISpatialControl( void *pObjectXXXX, CNACmdLayer_create_void_ISpatialControl_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdLayer_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ptrNativeObject->CNACmdLayer::create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	if (dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdLayer::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_update_ev_bool_CEvent( void *pObjectXXXX, CNACmdLayer_update_ev_bool_CEvent_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdLayer_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdLayer* ptrNativeObject = (CNACmdLayer*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdLayer::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdLayer_getWidth_ev_uint32( void *pObjectXXXX, CNACmdLayer_getWidth_ev_uint32_Callback* pCallback )
{
	CNACmdLayerProxy* ptr = dynamic_cast<CNACmdLayerProxy*>((CNACmdLayer*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdLayer_getWidth_ev_uint32(pCallback);
	}
}
