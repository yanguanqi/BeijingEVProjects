/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/commanddataset.h"
typedef ev_uint32  ( _stdcall CNACmdDataset_getWidth_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdDataset_getEntryCount_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdDataset_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_int32  ( _stdcall CNACmdDataset_getCurrentIndex_ev_int32_Callback)();
typedef void  ( _stdcall CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CNACmdDataset_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CNACmdDataset_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CNACmdDataset_getName_EVString_Callback)();
typedef char*  ( _stdcall CNACmdDataset_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CNACmdDataset_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CNACmdDataset_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CNACmdDataset_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdDataset_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CNACmdDataset_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdDataset_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CNACmdDataset_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CNACmdDataset_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CNACmdDataset_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CNACmdDataset_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CNACmdDatasetProxy : public CNACmdDataset
{
private:
	CNACmdDataset_getWidth_ev_uint32_Callback* m_CNACmdDataset_getWidth_ev_uint32_Callback;
	CNACmdDataset_getEntryCount_ev_uint32_Callback* m_CNACmdDataset_getEntryCount_ev_uint32_Callback;
	CNACmdDataset_getEntry_EVString_ev_uint32_Callback* m_CNACmdDataset_getEntry_EVString_ev_uint32_Callback;
	CNACmdDataset_getCurrentIndex_ev_int32_Callback* m_CNACmdDataset_getCurrentIndex_ev_int32_Callback;
	CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback* m_CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback;
	CNACmdDataset_getToolBarType_ev_uint32_Callback* m_CNACmdDataset_getToolBarType_ev_uint32_Callback;
	CNACmdDataset_getType_ev_uint32_Callback* m_CNACmdDataset_getType_ev_uint32_Callback;
	CNACmdDataset_getName_EVString_Callback* m_CNACmdDataset_getName_EVString_Callback;
	CNACmdDataset_getCategory_EVString_Callback* m_CNACmdDataset_getCategory_EVString_Callback;
	CNACmdDataset_getToolTip_EVString_Callback* m_CNACmdDataset_getToolTip_EVString_Callback;
	CNACmdDataset_getIcon_IBitmap_Callback* m_CNACmdDataset_getIcon_IBitmap_Callback;
	CNACmdDataset_isCheckable_ev_bool_Callback* m_CNACmdDataset_isCheckable_ev_bool_Callback;
	CNACmdDataset_onClicked_void_Callback* m_CNACmdDataset_onClicked_void_Callback;
	CNACmdDataset_getChecked_ev_bool_Callback* m_CNACmdDataset_getChecked_ev_bool_Callback;
	CNACmdDataset_setChecked_void_ev_bool_Callback* m_CNACmdDataset_setChecked_void_ev_bool_Callback;
	CNACmdDataset_getEnabled_ev_bool_Callback* m_CNACmdDataset_getEnabled_ev_bool_Callback;
	CNACmdDataset_setEnabled_void_ev_bool_Callback* m_CNACmdDataset_setEnabled_void_ev_bool_Callback;
	CNACmdDataset_create_void_ISpatialControl_Callback* m_CNACmdDataset_create_void_ISpatialControl_Callback;
	CNACmdDataset_update_ev_bool_CEvent_Callback* m_CNACmdDataset_update_ev_bool_CEvent_Callback;
public:
	CNACmdDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CNACmdDataset(pList)
	{
		m_CNACmdDataset_getWidth_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getEntryCount_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getEntry_EVString_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getCurrentIndex_ev_int32_Callback = NULL;
		m_CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getToolBarType_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getType_ev_uint32_Callback = NULL;
		m_CNACmdDataset_getName_EVString_Callback = NULL;
		m_CNACmdDataset_getCategory_EVString_Callback = NULL;
		m_CNACmdDataset_getToolTip_EVString_Callback = NULL;
		m_CNACmdDataset_getIcon_IBitmap_Callback = NULL;
		m_CNACmdDataset_isCheckable_ev_bool_Callback = NULL;
		m_CNACmdDataset_onClicked_void_Callback = NULL;
		m_CNACmdDataset_getChecked_ev_bool_Callback = NULL;
		m_CNACmdDataset_setChecked_void_ev_bool_Callback = NULL;
		m_CNACmdDataset_getEnabled_ev_bool_Callback = NULL;
		m_CNACmdDataset_setEnabled_void_ev_bool_Callback = NULL;
		m_CNACmdDataset_create_void_ISpatialControl_Callback = NULL;
		m_CNACmdDataset_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CNACmdDatasetProxy)
public:
	ev_void registerCallback_CNACmdDataset_getWidth_ev_uint32(CNACmdDataset_getWidth_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_getWidth_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getEntryCount_ev_uint32(CNACmdDataset_getEntryCount_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_getEntryCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getEntry_EVString_ev_uint32(CNACmdDataset_getEntry_EVString_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_getEntry_EVString_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getCurrentIndex_ev_int32(CNACmdDataset_getCurrentIndex_ev_int32_Callback* pCallback)
	{
		m_CNACmdDataset_getCurrentIndex_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_currentIndexChanged_void_ev_uint32(CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getToolBarType_ev_uint32(CNACmdDataset_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getType_ev_uint32(CNACmdDataset_getType_ev_uint32_Callback* pCallback)
	{
		m_CNACmdDataset_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getName_EVString(CNACmdDataset_getName_EVString_Callback* pCallback)
	{
		m_CNACmdDataset_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getCategory_EVString(CNACmdDataset_getCategory_EVString_Callback* pCallback)
	{
		m_CNACmdDataset_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getToolTip_EVString(CNACmdDataset_getToolTip_EVString_Callback* pCallback)
	{
		m_CNACmdDataset_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getIcon_IBitmap(CNACmdDataset_getIcon_IBitmap_Callback* pCallback)
	{
		m_CNACmdDataset_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_isCheckable_ev_bool(CNACmdDataset_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CNACmdDataset_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_onClicked_void(CNACmdDataset_onClicked_void_Callback* pCallback)
	{
		m_CNACmdDataset_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getChecked_ev_bool(CNACmdDataset_getChecked_ev_bool_Callback* pCallback)
	{
		m_CNACmdDataset_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_setChecked_void_ev_bool(CNACmdDataset_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdDataset_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_getEnabled_ev_bool(CNACmdDataset_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CNACmdDataset_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_setEnabled_void_ev_bool(CNACmdDataset_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CNACmdDataset_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_create_void_ISpatialControl(CNACmdDataset_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CNACmdDataset_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CNACmdDataset_update_ev_bool_CEvent(CNACmdDataset_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CNACmdDataset_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_int32 getCurrentIndex() const
	{
		if(m_CNACmdDataset_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CNACmdDataset_getCurrentIndex_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getCurrentIndex();
	}
	virtual ev_uint32 getEntryCount() const
	{
		if(m_CNACmdDataset_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdDataset_getEntryCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getEntryCount();
	}
	virtual EVString getEntry(_in ev_uint32 index) const
	{
		if(m_CNACmdDataset_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdDataset_getEntry_EVString_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CNACmdDataset::getEntry(index);
	}
	virtual void currentIndexChanged(_in ev_uint32 index)
	{
		if(m_CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback(index);
		}
		else
			return this->CNACmdDataset::currentIndexChanged(index);
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CNACmdDataset_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdDataset_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CNACmdDataset_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdDataset_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getType();
	}
	virtual EVString getName() const
	{
		if(m_CNACmdDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdDataset_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CNACmdDataset_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdDataset_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CNACmdDataset_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CNACmdDataset_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CNACmdDataset_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CNACmdDataset_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CNACmdDataset_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdDataset_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CNACmdDataset_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdDataset_onClicked_void_Callback();
		}
		else
			return this->CNACmdDataset::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CNACmdDataset_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdDataset_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CNACmdDataset_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdDataset_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CNACmdDataset::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CNACmdDataset_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdDataset_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CNACmdDataset_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdDataset_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CNACmdDataset::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl)
	{
		if(m_CNACmdDataset_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CNACmdDataset_create_void_ISpatialControl_Callback(ctrl);
		}
		else
			return this->CNACmdDataset::create(ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CNACmdDataset_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CNACmdDataset_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CNACmdDataset::update(e);
	}
	virtual ev_uint32 getWidth() const
	{
		if(m_CNACmdDataset_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CNACmdDataset_getWidth_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CNACmdDataset::getWidth();
	}
};
REGISTER_FACTORY_CLASS(CNACmdDatasetProxy);
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNACmdDataset_getCurrentIndex_ev_int32(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CNACmdDataset::getCurrentIndex();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getCurrentIndex_ev_int32( void *pObjectXXXX, CNACmdDataset_getCurrentIndex_ev_int32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getCurrentIndex_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNACmdDataset_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CNACmdDataset::getCurrentIndex();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getEntryCount_ev_uint32(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getEntryCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getEntryCount_ev_uint32( void *pObjectXXXX, CNACmdDataset_getEntryCount_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getEntryCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getEntryCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdDataset::getEntry(index);
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getEntry(index);
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getEntry_EVString_ev_uint32( void *pObjectXXXX, CNACmdDataset_getEntry_EVString_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getEntry_EVString_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdDataset::getEntry(index);
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdDataset::currentIndexChanged(index);
	else
		ptrNativeObject->currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, CNACmdDataset_currentIndexChanged_void_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_currentIndexChanged_void_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ptrNativeObject->CNACmdDataset::currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getToolBarType_ev_uint32( void *pObjectXXXX, CNACmdDataset_getToolBarType_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getType_ev_uint32(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getType_ev_uint32( void *pObjectXXXX, CNACmdDataset_getType_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CNACmdDataset_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CNACmdDataset::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getName_EVString(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdDataset::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getName_EVString( void *pObjectXXXX, CNACmdDataset_getName_EVString_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdDataset::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getCategory_EVString(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdDataset::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getCategory_EVString( void *pObjectXXXX, CNACmdDataset_getCategory_EVString_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdDataset::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getToolTip_EVString(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CNACmdDataset::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getToolTip_EVString( void *pObjectXXXX, CNACmdDataset_getToolTip_EVString_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CNACmdDataset_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CNACmdDataset::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdDataset_getIcon_IBitmap(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdDataset::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getIcon_IBitmap( void *pObjectXXXX, CNACmdDataset_getIcon_IBitmap_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CNACmdDataset_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CNACmdDataset::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdDataset::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_isCheckable_ev_bool( void *pObjectXXXX, CNACmdDataset_isCheckable_ev_bool_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdDataset::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_onClicked_void(void *pObjectXXXX )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdDataset::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_onClicked_void( void *pObjectXXXX, CNACmdDataset_onClicked_void_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ptrNativeObject->CNACmdDataset::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_getChecked_ev_bool(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdDataset::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getChecked_ev_bool( void *pObjectXXXX, CNACmdDataset_getChecked_ev_bool_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdDataset::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdDataset::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_setChecked_void_ev_bool( void *pObjectXXXX, CNACmdDataset_setChecked_void_ev_bool_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ptrNativeObject->CNACmdDataset::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdDataset::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getEnabled_ev_bool( void *pObjectXXXX, CNACmdDataset_getEnabled_ev_bool_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdDataset::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdDataset::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_setEnabled_void_ev_bool( void *pObjectXXXX, CNACmdDataset_setEnabled_void_ev_bool_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ptrNativeObject->CNACmdDataset::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
		ptrNativeObject->CNACmdDataset::create(ctrl);
	else
		ptrNativeObject->create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_create_void_ISpatialControl( void *pObjectXXXX, CNACmdDataset_create_void_ISpatialControl_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CNACmdDataset_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ctrl )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ptrNativeObject->CNACmdDataset::create(ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	if (dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CNACmdDataset::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_update_ev_bool_CEvent( void *pObjectXXXX, CNACmdDataset_update_ev_bool_CEvent_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CNACmdDataset_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CNACmdDataset::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall CNACmdDataset_getCurrentDataset_IDataset(void *pObjectXXXX )
{
	const CNACmdDataset* ptrNativeObject = (CNACmdDataset*) pObjectXXXX;
	EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getCurrentDataset();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CNACmdDataset_getWidth_ev_uint32( void *pObjectXXXX, CNACmdDataset_getWidth_ev_uint32_Callback* pCallback )
{
	CNACmdDatasetProxy* ptr = dynamic_cast<CNACmdDatasetProxy*>((CNACmdDataset*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CNACmdDataset_getWidth_ev_uint32(pCallback);
	}
}
