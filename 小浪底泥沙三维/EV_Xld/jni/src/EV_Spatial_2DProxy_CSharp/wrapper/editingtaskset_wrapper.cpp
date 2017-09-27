/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/editingtaskset.h"
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
typedef ev_uint32  ( _stdcall CEditingTaskSet_getWidth_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CEditingTaskSet_getEntryCount_ev_uint32_Callback)();
typedef char*  ( _stdcall CEditingTaskSet_getEntry_EVString_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_int32  ( _stdcall CEditingTaskSet_getCurrentIndex_ev_int32_Callback)();
typedef void  ( _stdcall CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback)(_in ev_uint32 index);
typedef ev_uint32  ( _stdcall CEditingTaskSet_getToolBarType_ev_uint32_Callback)();
typedef ev_uint32  ( _stdcall CEditingTaskSet_getType_ev_uint32_Callback)();
typedef char*  ( _stdcall CEditingTaskSet_getName_EVString_Callback)();
typedef char*  ( _stdcall CEditingTaskSet_getCategory_EVString_Callback)();
typedef char*  ( _stdcall CEditingTaskSet_getToolTip_EVString_Callback)();
typedef EarthView::World::Display::IBitmap*  ( _stdcall CEditingTaskSet_getIcon_IBitmap_Callback)();
typedef ev_bool  ( _stdcall CEditingTaskSet_isCheckable_ev_bool_Callback)();
typedef void  ( _stdcall CEditingTaskSet_onClicked_void_Callback)();
typedef ev_bool  ( _stdcall CEditingTaskSet_getChecked_ev_bool_Callback)();
typedef void  ( _stdcall CEditingTaskSet_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
typedef ev_bool  ( _stdcall CEditingTaskSet_getEnabled_ev_bool_Callback)();
typedef void  ( _stdcall CEditingTaskSet_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
typedef void  ( _stdcall CEditingTaskSet_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
typedef ev_bool  ( _stdcall CEditingTaskSet_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
class CEditingTaskSetProxy : public CEditingTaskSet
{
private:
	CEditingTaskSet_getWidth_ev_uint32_Callback* m_CEditingTaskSet_getWidth_ev_uint32_Callback;
	CEditingTaskSet_getEntryCount_ev_uint32_Callback* m_CEditingTaskSet_getEntryCount_ev_uint32_Callback;
	CEditingTaskSet_getEntry_EVString_ev_uint32_Callback* m_CEditingTaskSet_getEntry_EVString_ev_uint32_Callback;
	CEditingTaskSet_getCurrentIndex_ev_int32_Callback* m_CEditingTaskSet_getCurrentIndex_ev_int32_Callback;
	CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback* m_CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback;
	CEditingTaskSet_getToolBarType_ev_uint32_Callback* m_CEditingTaskSet_getToolBarType_ev_uint32_Callback;
	CEditingTaskSet_getType_ev_uint32_Callback* m_CEditingTaskSet_getType_ev_uint32_Callback;
	CEditingTaskSet_getName_EVString_Callback* m_CEditingTaskSet_getName_EVString_Callback;
	CEditingTaskSet_getCategory_EVString_Callback* m_CEditingTaskSet_getCategory_EVString_Callback;
	CEditingTaskSet_getToolTip_EVString_Callback* m_CEditingTaskSet_getToolTip_EVString_Callback;
	CEditingTaskSet_getIcon_IBitmap_Callback* m_CEditingTaskSet_getIcon_IBitmap_Callback;
	CEditingTaskSet_isCheckable_ev_bool_Callback* m_CEditingTaskSet_isCheckable_ev_bool_Callback;
	CEditingTaskSet_onClicked_void_Callback* m_CEditingTaskSet_onClicked_void_Callback;
	CEditingTaskSet_getChecked_ev_bool_Callback* m_CEditingTaskSet_getChecked_ev_bool_Callback;
	CEditingTaskSet_setChecked_void_ev_bool_Callback* m_CEditingTaskSet_setChecked_void_ev_bool_Callback;
	CEditingTaskSet_getEnabled_ev_bool_Callback* m_CEditingTaskSet_getEnabled_ev_bool_Callback;
	CEditingTaskSet_setEnabled_void_ev_bool_Callback* m_CEditingTaskSet_setEnabled_void_ev_bool_Callback;
	CEditingTaskSet_create_void_ISpatialControl_Callback* m_CEditingTaskSet_create_void_ISpatialControl_Callback;
	CEditingTaskSet_update_ev_bool_CEvent_Callback* m_CEditingTaskSet_update_ev_bool_CEvent_Callback;
public:
	CEditingTaskSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditingTaskSet(pList)
	{
		m_CEditingTaskSet_getWidth_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getEntryCount_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getEntry_EVString_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getCurrentIndex_ev_int32_Callback = NULL;
		m_CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getToolBarType_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getType_ev_uint32_Callback = NULL;
		m_CEditingTaskSet_getName_EVString_Callback = NULL;
		m_CEditingTaskSet_getCategory_EVString_Callback = NULL;
		m_CEditingTaskSet_getToolTip_EVString_Callback = NULL;
		m_CEditingTaskSet_getIcon_IBitmap_Callback = NULL;
		m_CEditingTaskSet_isCheckable_ev_bool_Callback = NULL;
		m_CEditingTaskSet_onClicked_void_Callback = NULL;
		m_CEditingTaskSet_getChecked_ev_bool_Callback = NULL;
		m_CEditingTaskSet_setChecked_void_ev_bool_Callback = NULL;
		m_CEditingTaskSet_getEnabled_ev_bool_Callback = NULL;
		m_CEditingTaskSet_setEnabled_void_ev_bool_Callback = NULL;
		m_CEditingTaskSet_create_void_ISpatialControl_Callback = NULL;
		m_CEditingTaskSet_update_ev_bool_CEvent_Callback = NULL;
	}
protected:
	C_DISABLE_COPY(CEditingTaskSetProxy)
public:
	ev_void registerCallback_CEditingTaskSet_getWidth_ev_uint32(CEditingTaskSet_getWidth_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_getWidth_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getEntryCount_ev_uint32(CEditingTaskSet_getEntryCount_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_getEntryCount_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getEntry_EVString_ev_uint32(CEditingTaskSet_getEntry_EVString_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_getEntry_EVString_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getCurrentIndex_ev_int32(CEditingTaskSet_getCurrentIndex_ev_int32_Callback* pCallback)
	{
		m_CEditingTaskSet_getCurrentIndex_ev_int32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_currentIndexChanged_void_ev_uint32(CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getToolBarType_ev_uint32(CEditingTaskSet_getToolBarType_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_getToolBarType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getType_ev_uint32(CEditingTaskSet_getType_ev_uint32_Callback* pCallback)
	{
		m_CEditingTaskSet_getType_ev_uint32_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getName_EVString(CEditingTaskSet_getName_EVString_Callback* pCallback)
	{
		m_CEditingTaskSet_getName_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getCategory_EVString(CEditingTaskSet_getCategory_EVString_Callback* pCallback)
	{
		m_CEditingTaskSet_getCategory_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getToolTip_EVString(CEditingTaskSet_getToolTip_EVString_Callback* pCallback)
	{
		m_CEditingTaskSet_getToolTip_EVString_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getIcon_IBitmap(CEditingTaskSet_getIcon_IBitmap_Callback* pCallback)
	{
		m_CEditingTaskSet_getIcon_IBitmap_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_isCheckable_ev_bool(CEditingTaskSet_isCheckable_ev_bool_Callback* pCallback)
	{
		m_CEditingTaskSet_isCheckable_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_onClicked_void(CEditingTaskSet_onClicked_void_Callback* pCallback)
	{
		m_CEditingTaskSet_onClicked_void_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getChecked_ev_bool(CEditingTaskSet_getChecked_ev_bool_Callback* pCallback)
	{
		m_CEditingTaskSet_getChecked_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_setChecked_void_ev_bool(CEditingTaskSet_setChecked_void_ev_bool_Callback* pCallback)
	{
		m_CEditingTaskSet_setChecked_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_getEnabled_ev_bool(CEditingTaskSet_getEnabled_ev_bool_Callback* pCallback)
	{
		m_CEditingTaskSet_getEnabled_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_setEnabled_void_ev_bool(CEditingTaskSet_setEnabled_void_ev_bool_Callback* pCallback)
	{
		m_CEditingTaskSet_setEnabled_void_ev_bool_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_create_void_ISpatialControl(CEditingTaskSet_create_void_ISpatialControl_Callback* pCallback)
	{
		m_CEditingTaskSet_create_void_ISpatialControl_Callback = pCallback;
	}
	ev_void registerCallback_CEditingTaskSet_update_ev_bool_CEvent(CEditingTaskSet_update_ev_bool_CEvent_Callback* pCallback)
	{
		m_CEditingTaskSet_update_ev_bool_CEvent_Callback = pCallback;
	}
	virtual ev_uint32 getToolBarType() const
	{
		if(m_CEditingTaskSet_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingTaskSet_getToolBarType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getToolBarType();
	}
	virtual ev_uint32 getType() const
	{
		if(m_CEditingTaskSet_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingTaskSet_getType_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getType();
	}
	virtual EVString getName() const
	{
		if(m_CEditingTaskSet_getName_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingTaskSet_getName_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getName();
	}
	virtual EVString getCategory() const
	{
		if(m_CEditingTaskSet_getCategory_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingTaskSet_getCategory_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getCategory();
	}
	virtual EVString getToolTip() const
	{
		if(m_CEditingTaskSet_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingTaskSet_getToolTip_EVString_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getToolTip();
	}
	virtual EarthView::World::Display::IBitmap* getIcon() const
	{
		if(m_CEditingTaskSet_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
		{
			EarthView::World::Display::IBitmap* returnValue = m_CEditingTaskSet_getIcon_IBitmap_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getIcon();
	}
	virtual ev_bool isCheckable() const
	{
		if(m_CEditingTaskSet_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingTaskSet_isCheckable_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::isCheckable();
	}
	virtual void onClicked()
	{
		if(m_CEditingTaskSet_onClicked_void_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingTaskSet_onClicked_void_Callback();
		}
		else
			return this->CEditingTaskSet::onClicked();
	}
	virtual ev_bool getChecked() const
	{
		if(m_CEditingTaskSet_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingTaskSet_getChecked_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getChecked();
	}
	virtual void setChecked(_in ev_bool checked)
	{
		if(m_CEditingTaskSet_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingTaskSet_setChecked_void_ev_bool_Callback(checked);
		}
		else
			return this->CEditingTaskSet::setChecked(checked);
	}
	virtual ev_bool getEnabled() const
	{
		if(m_CEditingTaskSet_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingTaskSet_getEnabled_ev_bool_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getEnabled();
	}
	virtual void setEnabled(_in ev_bool enabled)
	{
		if(m_CEditingTaskSet_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingTaskSet_setEnabled_void_ev_bool_Callback(enabled);
		}
		else
			return this->CEditingTaskSet::setEnabled(enabled);
	}
	virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
	{
		if(m_CEditingTaskSet_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingTaskSet_create_void_ISpatialControl_Callback(ref_ctrl);
		}
		else
			return this->CEditingTaskSet::create(ref_ctrl);
	}
	virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
	{
		if(m_CEditingTaskSet_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
		{
			ev_bool returnValue = m_CEditingTaskSet_update_ev_bool_CEvent_Callback(e);
			return returnValue;
		}
		else
			return this->CEditingTaskSet::update(e);
	}
	virtual ev_uint32 getEntryCount() const
	{
		if(m_CEditingTaskSet_getEntryCount_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingTaskSet_getEntryCount_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getEntryCount();
	}
	virtual EVString getEntry(_in ev_uint32 index) const
	{
		if(m_CEditingTaskSet_getEntry_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			EVString returnValue = m_CEditingTaskSet_getEntry_EVString_ev_uint32_Callback(index);
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getEntry(index);
	}
	virtual ev_int32 getCurrentIndex() const
	{
		if(m_CEditingTaskSet_getCurrentIndex_ev_int32_Callback != NULL && this->isCustomExtend())
		{
			ev_int32 returnValue = m_CEditingTaskSet_getCurrentIndex_ev_int32_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getCurrentIndex();
	}
	virtual void currentIndexChanged(_in ev_uint32 index)
	{
		if(m_CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			m_CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback(index);
		}
		else
			return this->CEditingTaskSet::currentIndexChanged(index);
	}
	virtual ev_uint32 getWidth() const
	{
		if(m_CEditingTaskSet_getWidth_ev_uint32_Callback != NULL && this->isCustomExtend())
		{
			ev_uint32 returnValue = m_CEditingTaskSet_getWidth_ev_uint32_Callback();
			return returnValue;
		}
		else
			return this->CEditingTaskSet::getWidth();
	}
};
REGISTER_FACTORY_CLASS(CEditingTaskSetProxy);
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getToolBarType_ev_uint32(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getToolBarType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getToolBarType_ev_uint32( void *pObjectXXXX, CEditingTaskSet_getToolBarType_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getToolBarType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getToolBarType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getType_ev_uint32(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getType();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getType();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getType_ev_uint32( void *pObjectXXXX, CEditingTaskSet_getType_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getType_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getType();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getName_EVString(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingTaskSet::getName();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getName();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getName_EVString( void *pObjectXXXX, CEditingTaskSet_getName_EVString_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getName_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getName_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingTaskSet::getName();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getCategory_EVString(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingTaskSet::getCategory();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getCategory();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getCategory_EVString( void *pObjectXXXX, CEditingTaskSet_getCategory_EVString_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getCategory_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getCategory_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingTaskSet::getCategory();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getToolTip_EVString(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingTaskSet::getToolTip();
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getToolTip();
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getToolTip_EVString( void *pObjectXXXX, CEditingTaskSet_getToolTip_EVString_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getToolTip_EVString(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingTaskSet::getToolTip();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditingTaskSet_getIcon_IBitmap(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditingTaskSet::getIcon();
		return objXXXX;
	}
	else
	{
		EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getIcon_IBitmap( void *pObjectXXXX, CEditingTaskSet_getIcon_IBitmap_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getIcon_IBitmap(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall CEditingTaskSet_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->CEditingTaskSet::getIcon();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_isCheckable_ev_bool(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::isCheckable();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->isCheckable();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_isCheckable_ev_bool( void *pObjectXXXX, CEditingTaskSet_isCheckable_ev_bool_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_isCheckable_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::isCheckable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_onClicked_void(void *pObjectXXXX )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingTaskSet::onClicked();
	else
		ptrNativeObject->onClicked();
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_onClicked_void( void *pObjectXXXX, CEditingTaskSet_onClicked_void_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_onClicked_void(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_onClicked_void_NoVirtual(void *pObjectXXXX )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ptrNativeObject->CEditingTaskSet::onClicked();
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_getChecked_ev_bool(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::getChecked();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getChecked();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getChecked_ev_bool( void *pObjectXXXX, CEditingTaskSet_getChecked_ev_bool_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getChecked_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::getChecked();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingTaskSet::setChecked(checked);
	else
		ptrNativeObject->setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_setChecked_void_ev_bool( void *pObjectXXXX, CEditingTaskSet_setChecked_void_ev_bool_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_setChecked_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ptrNativeObject->CEditingTaskSet::setChecked(checked);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_getEnabled_ev_bool(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::getEnabled();
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->getEnabled();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getEnabled_ev_bool( void *pObjectXXXX, CEditingTaskSet_getEnabled_ev_bool_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getEnabled_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::getEnabled();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingTaskSet::setEnabled(enabled);
	else
		ptrNativeObject->setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_setEnabled_void_ev_bool( void *pObjectXXXX, CEditingTaskSet_setEnabled_void_ev_bool_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_setEnabled_void_ev_bool(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ptrNativeObject->CEditingTaskSet::setEnabled(enabled);
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingTaskSet::create(ref_ctrl);
	else
		ptrNativeObject->create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_create_void_ISpatialControl( void *pObjectXXXX, CEditingTaskSet_create_void_ISpatialControl_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_create_void_ISpatialControl(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ptrNativeObject->CEditingTaskSet::create(ref_ctrl);
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::update(e);
		return objXXXX;
	}
	else
	{
		ev_bool objXXXX = ptrNativeObject->update(e);
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_update_ev_bool_CEvent( void *pObjectXXXX, CEditingTaskSet_update_ev_bool_CEvent_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_update_ev_bool_CEvent(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall CEditingTaskSet_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->CEditingTaskSet::update(e);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getEntryCount_ev_uint32(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getEntryCount();
		return objXXXX;
	}
	else
	{
		ev_uint32 objXXXX = ptrNativeObject->getEntryCount();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getEntryCount_ev_uint32( void *pObjectXXXX, CEditingTaskSet_getEntryCount_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getEntryCount_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall CEditingTaskSet_getEntryCount_ev_uint32_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_uint32 objXXXX = ptrNativeObject->CEditingTaskSet::getEntryCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getEntry_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		EVString objXXXX = ptrNativeObject->CEditingTaskSet::getEntry(index);
		return objXXXX.makeBuffer();
	}
	else
	{
		EVString objXXXX = ptrNativeObject->getEntry(index);
		return objXXXX.makeBuffer();
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getEntry_EVString_ev_uint32( void *pObjectXXXX, CEditingTaskSet_getEntry_EVString_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getEntry_EVString_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  char*  _stdcall CEditingTaskSet_getEntry_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->CEditingTaskSet::getEntry(index);
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CEditingTaskSet_getCurrentIndex_ev_int32(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
	{
		ev_int32 objXXXX = ptrNativeObject->CEditingTaskSet::getCurrentIndex();
		return objXXXX;
	}
	else
	{
		ev_int32 objXXXX = ptrNativeObject->getCurrentIndex();
		return objXXXX;
	}
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getCurrentIndex_ev_int32( void *pObjectXXXX, CEditingTaskSet_getCurrentIndex_ev_int32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getCurrentIndex_ev_int32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CEditingTaskSet_getCurrentIndex_ev_int32_NoVirtual(void *pObjectXXXX )
{
	const CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->CEditingTaskSet::getCurrentIndex();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_currentIndexChanged_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	if (dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*)ptrNativeObject) != NULL)
		ptrNativeObject->CEditingTaskSet::currentIndexChanged(index);
	else
		ptrNativeObject->currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_currentIndexChanged_void_ev_uint32( void *pObjectXXXX, CEditingTaskSet_currentIndexChanged_void_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_currentIndexChanged_void_ev_uint32(pCallback);
	}
}
extern "C" EV_DLL_EXPORT  void  _stdcall CEditingTaskSet_currentIndexChanged_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
{
	CEditingTaskSet* ptrNativeObject = (CEditingTaskSet*) pObjectXXXX;
	ptrNativeObject->CEditingTaskSet::currentIndexChanged(index);
}
extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_CEditingTaskSet_getWidth_ev_uint32( void *pObjectXXXX, CEditingTaskSet_getWidth_ev_uint32_Callback* pCallback )
{
	CEditingTaskSetProxy* ptr = dynamic_cast<CEditingTaskSetProxy*>((CEditingTaskSet*) pObjectXXXX);
	if(ptr != NULL)
	{
		ptr->registerCallback_CEditingTaskSet_getWidth_ev_uint32(pCallback);
	}
}
