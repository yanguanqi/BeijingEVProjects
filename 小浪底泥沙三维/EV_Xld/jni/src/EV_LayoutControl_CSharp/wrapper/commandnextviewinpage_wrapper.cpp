/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/commandnextviewinpage.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandNextViewInPageProxy : public EarthView::World::Layout::Controls::CCommandNextViewInPage
				{
				private:
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback;
					EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback* m_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback;
				public:
					CCommandNextViewInPageProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandNextViewInPage(pList)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandNextViewInPageProxy)
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32(EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32(EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString(EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString(EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString(EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap(EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool(EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void(EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool(EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool(EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool(EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool(EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl(EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent(EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback();
						}
						else
							return this->CCommandNextViewInPage::onClicked();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::update(e);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandNextViewInPage::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandNextViewInPage::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandNextViewInPage::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommandNextViewInPage::create(ref_ctrl);
					}
				};
				REGISTER_FACTORY_CLASS(CCommandNextViewInPageProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					if (dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandNextViewInPage_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandNextViewInPage* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandNextViewInPage::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandNextViewInPageProxy* ptr = dynamic_cast<CCommandNextViewInPageProxy*>((EarthView::World::Layout::Controls::CCommandNextViewInPage*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandNextViewInPage_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
