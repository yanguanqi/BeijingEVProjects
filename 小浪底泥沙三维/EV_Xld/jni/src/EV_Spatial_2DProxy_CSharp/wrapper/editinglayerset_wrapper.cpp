/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/editinglayerset.h"
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
typedef ev_uint32  ( _stdcall CEditingLayerSet_getWidth_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CEditingLayerSet_getEntryCount_ev_uint32_Callback)();
typedef char*  ( _stdcall CEditingLayerSet_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_int32  ( _stdcall CEditingLayerSet_getCurrentIndex_ev_int32_Callback)();
typedef void  ( _stdcall CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CEditingLayerSet_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CEditingLayerSet_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CEditingLayerSet_getName_EVString_Callback)();
typedef char*  ( _stdcall CEditingLayerSet_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CEditingLayerSet_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CEditingLayerSet_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CEditingLayerSet_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CEditingLayerSet_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CEditingLayerSet_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CEditingLayerSet_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CEditingLayerSet_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CEditingLayerSet_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CEditingLayerSet_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CEditingLayerSet_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CEditingLayerSetProxy : public CEditingLayerSet
{
private:
	CEditingLayerSet_getWidth_ev_uint32_Callback* m_CEditingLayerSet_getWidth_ev_uint32_Callback;
	CEditingLayerSet_getEntryCount_ev_uint32_Callback* m_CEditingLayerSet_getEntryCount_ev_uint32_Callback;
	CEditingLayerSet_getEntry_EVString_ev_uint32_Callback* m_CEditingLayerSet_getEntry_EVString_ev_uint32_Callback;
	CEditingLayerSet_getCurrentIndex_ev_int32_Callback* m_CEditingLayerSet_getCurrentIndex_ev_int32_Callback;
	CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback* m_CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback;
	CEditingLayerSet_getToolBarType_ev_uint32_Callback* m_CEditingLayerSet_getToolBarType_ev_uint32_Callback;
	CEditingLayerSet_getType_ev_uint32_Callback* m_CEditingLayerSet_getType_ev_uint32_Callback;
	CEditingLayerSet_getName_EVString_Callback* m_CEditingLayerSet_getName_EVString_Callback;
	CEditingLayerSet_getCategory_EVString_Callback* m_CEditingLayerSet_getCategory_EVString_Callback;
	CEditingLayerSet_getToolTip_EVString_Callback* m_CEditingLayerSet_getToolTip_EVString_Callback;
	CEditingLayerSet_getIcon_IBitmap_Callback* m_CEditingLayerSet_getIcon_IBitmap_Callback;
	CEditingLayerSet_isCheckable_ev_bool_Callback* m_CEditingLayerSet_isCheckable_ev_bool_Callback;
	CEditingLayerSet_onClicked_void_Callback* m_CEditingLayerSet_onClicked_void_Callback;
	CEditingLayerSet_getChecked_ev_bool_Callback* m_CEditingLayerSet_getChecked_ev_bool_Callback;
	CEditingLayerSet_setChecked_void_ev_bool_Callback* m_CEditingLayerSet_setChecked_void_ev_bool_Callback;
	CEditingLayerSet_getEnabled_ev_bool_Callback* m_CEditingLayerSet_getEnabled_ev_bool_Callback;
	CEditingLayerSet_setEnabled_void_ev_bool_Callback* m_CEditingLayerSet_setEnabled_void_ev_bool_Callback;
	CEditingLayerSet_create_void_ISpatialControl_Callback* m_CEditingLayerSet_create_void_ISpatialControl_Callback;
	CEditingLayerSet_update_ev_bool_CEvent_Callback* m_CEditingLayerSet_update_ev_bool_CEvent_Callback;
public:
	CEditingLayerSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingLayerSet(pList)
	{
		m_CEditingLayerSet_getWidth_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getEntryCount_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getEntry_EVString_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getCurrentIndex_ev_int32_Callback = NULL;
		m_CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getToolBarType_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getType_ev_uint32_Callback = NULL;
		m_CEditingLayerSet_getName_EVString_Callback = NULL;
		m_CEditingLayerSet_getCategory_EVString_Callback = NULL;
		m_CEditingLayerSet_getToolTip_EVString_Callback = NULL;
		m_CEditingLayerSet_getIcon_IBitmap_Callback = NULL;
		m_CEditingLayerSet_isCheckable_ev_bool_Callback = NULL;
		m_CEditingLayerSet_onClicked_void_Callback = NULL;
		m_CEditingLayerSet_getChecked_ev_bool_Callback = NULL;
		m_CEditingLayerSet_setChecked_void_ev_bool_Callback = NULL;
		m_CEditingLayerSet_getEnabled_ev_bool_Callback = NULL;
		m_CEditingLayerSet_setEnabled_void_ev_bool_Callback = NULL;
		m_CEditingLayerSet_create_void_ISpatialControl_Callback = NULL;
		m_CEditingLayerSet_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CEditingLayerSetProxy)
public:
	ev_void registerCallback_CEditingLayerSet_getWidth_ev_uint32(CEditingLayerSet_getWidth_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_getWidth_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getEntryCount_ev_uint32(CEditingLayerSet_getEntryCount_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_getEntryCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getEntry_EVString_ev_uint32(CEditingLayerSet_getEntry_EVString_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_getEntry_EVString_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getCurrentIndex_ev_int32(CEditingLayerSet_getCurrentIndex_ev_int32_Callback* pCallback)
	{
		m_CEditingLayerSet_getCurrentIndex_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_currentIndexChanged_void_ev_uint32(CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getToolBarType_ev_uint32(CEditingLayerSet_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getType_ev_uint32(CEditingLayerSet_getType_ev_uint32_Callback* pCallback)
	{
		m_CEditingLayerSet_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getName_EVString(CEditingLayerSet_getName_EVString_Callback* pCallback)
	{
		m_CEditingLayerSet_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getCategory_EVString(CEditingLayerSet_getCategory_EVString_Callback* pCallback)
	{
		m_CEditingLayerSet_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getToolTip_EVString(CEditingLayerSet_getToolTip_EVString_Callback* pCallback)
	{
		m_CEditingLayerSet_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getIcon_IBitmap(CEditingLayerSet_getIcon_IBitmap_Callback* pCallback)
	{
		m_CEditingLayerSet_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_isCheckable_ev_bool(CEditingLayerSet_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CEditingLayerSet_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_onClicked_void(CEditingLayerSet_onClicked_void_Callback* pCallback)
	{
		m_CEditingLayerSet_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getChecked_ev_bool(CEditingLayerSet_getChecked_ev_bool_Callback* pCallback)
	{
		m_CEditingLayerSet_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_setChecked_void_ev_bool(CEditingLayerSet_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CEditingLayerSet_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_getEnabled_ev_bool(CEditingLayerSet_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CEditingLayerSet_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_setEnabled_void_ev_bool(CEditingLayerSet_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CEditingLayerSet_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_create_void_ISpatialControl(CEditingLayerSet_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CEditingLayerSet_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CEditingLayerSet_update_ev_bool_CEvent(CEditingLayerSet_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CEditingLayerSet_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CEditingLayerSet_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingLayerSet_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CEditingLayerSet_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingLayerSet_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getType();
	}
	virtual EVString getName() const
	{
		if(m_CEditingLayerSet_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingLayerSet_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CEditingLayerSet_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingLayerSet_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CEditingLayerSet_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingLayerSet_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CEditingLayerSet_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CEditingLayerSet_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CEditingLayerSet_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingLayerSet_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CEditingLayerSet_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingLayerSet_onClicked_void_Callback();
		}
		else
			return this->CEditingLayerSet::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CEditingLayerSet_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingLayerSet_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CEditingLayerSet_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingLayerSet_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CEditingLayerSet::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CEditingLayerSet_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingLayerSet_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CEditingLayerSet_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingLayerSet_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CEditingLayerSet::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CEditingLayerSet_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingLayerSet_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CEditingLayerSet::create(ref_ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CEditingLayerSet_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingLayerSet_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CEditingLayerSet::update(e);
	}
	virtual ev_uint32 getEntryCount() const
	{
		if(m_CEditingLayerSet_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingLayerSet_getEntryCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getEntryCount();
	}
	virtual EVString getEntry(_in ev_uint32 index) const
	{
		if(m_CEditingLayerSet_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingLayerSet_getEntry_EVString_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getEntry(index);
	}
	virtual ev_int32 getCurrentIndex() const
	{
		if(m_CEditingLayerSet_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CEditingLayerSet_getCurrentIndex_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getCurrentIndex();
	}
	virtual void currentIndexChanged(_in ev_uint32 index)
	{
		if(m_CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback(index);
		}
		else
			return this->CEditingLayerSet::currentIndexChanged(index);
	}
	virtual ev_uint32 getWidth() const
	{
		if(m_CEditingLayerSet_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingLayerSet_getWidth_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingLayerSet::getWidth();
	}
};
REGISTER_FACTORY_CLASS(CEditingLayerSetProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getToolBarType_ev_uint32( void *pObjectXXXX, CEditingLayerSet_getToolBarType_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getType_ev_uint32(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getType_ev_uint32( void *pObjectXXXX, CEditingLayerSet_getType_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getName_EVString(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingLayerSet::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getName_EVString( void *pObjectXXXX, CEditingLayerSet_getName_EVString_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingLayerSet::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getCategory_EVString(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingLayerSet::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getCategory_EVString( void *pObjectXXXX, CEditingLayerSet_getCategory_EVString_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingLayerSet::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getToolTip_EVString(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingLayerSet::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getToolTip_EVString( void *pObjectXXXX, CEditingLayerSet_getToolTip_EVString_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingLayerSet::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditingLayerSet_getIcon_IBitmap(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditingLayerSet::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getIcon_IBitmap( void *pObjectXXXX, CEditingLayerSet_getIcon_IBitmap_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditingLayerSet_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditingLayerSet::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_isCheckable_ev_bool( void *pObjectXXXX, CEditingLayerSet_isCheckable_ev_bool_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_onClicked_void(void *pObjectXXXX )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingLayerSet::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_onClicked_void( void *pObjectXXXX, CEditingLayerSet_onClicked_void_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ptrNativeObject->CEditingLayerSet::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_getChecked_ev_bool(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getChecked_ev_bool( void *pObjectXXXX, CEditingLayerSet_getChecked_ev_bool_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingLayerSet::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_setChecked_void_ev_bool( void *pObjectXXXX, CEditingLayerSet_setChecked_void_ev_bool_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ptrNativeObject->CEditingLayerSet::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getEnabled_ev_bool( void *pObjectXXXX, CEditingLayerSet_getEnabled_ev_bool_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingLayerSet::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_setEnabled_void_ev_bool( void *pObjectXXXX, CEditingLayerSet_setEnabled_void_ev_bool_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ptrNativeObject->CEditingLayerSet::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingLayerSet::create(ref_ctrl);
	else
		ptrNativeObject->create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_create_void_ISpatialControl( void *pObjectXXXX, CEditingLayerSet_create_void_ISpatialControl_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ptrNativeObject->CEditingLayerSet::create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_update_ev_bool_CEvent( void *pObjectXXXX, CEditingLayerSet_update_ev_bool_CEvent_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingLayerSet_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingLayerSet::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getEntryCount_ev_uint32(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getEntryCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getEntryCount_ev_uint32( void *pObjectXXXX, CEditingLayerSet_getEntryCount_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getEntryCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingLayerSet_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingLayerSet::getEntryCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingLayerSet::getEntry(index);
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getEntry(index);
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getEntry_EVString_ev_uint32( void *pObjectXXXX, CEditingLayerSet_getEntry_EVString_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getEntry_EVString_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingLayerSet_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingLayerSet::getEntry(index);
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CEditingLayerSet_getCurrentIndex_ev_int32(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CEditingLayerSet::getCurrentIndex();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getCurrentIndex_ev_int32( void *pObjectXXXX, CEditingLayerSet_getCurrentIndex_ev_int32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getCurrentIndex_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CEditingLayerSet_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CEditingLayerSet::getCurrentIndex();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	if (dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingLayerSet::currentIndexChanged(index);
	else
		ptrNativeObject->currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, CEditingLayerSet_currentIndexChanged_void_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_currentIndexChanged_void_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingLayerSet_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	ptrNativeObject->CEditingLayerSet::currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall CEditingLayerSet_getLayer_ILayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditingLayerSet* ptrNativeObject = (CEditingLayerSet*) pObjectXXXX;
	EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->getLayer(index);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingLayerSet_getWidth_ev_uint32( void *pObjectXXXX, CEditingLayerSet_getWidth_ev_uint32_Callback* pCallback )
{
	CEditingLayerSetProxy* ptr = dynamic_cast<CEditingLayerSetProxy*>((CEditingLayerSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingLayerSet_getWidth_ev_uint32(pCallback);
	}
}
