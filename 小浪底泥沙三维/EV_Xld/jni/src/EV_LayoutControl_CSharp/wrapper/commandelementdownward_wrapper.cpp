/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "layoutcontrol/commandelementdownward.h"
namespace EarthView
{
	namespace World
	{
		namespace Layout
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CCommandElementDownwardProxy : public EarthView::World::Layout::Controls::CCommandElementDownward
				{
				private:
					EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback;
					EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback* m_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback;
				public:
					CCommandElementDownwardProxy(EarthView::World::Core::CNameValuePairList *pList) : CCommandElementDownward(pList)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCommandElementDownwardProxy)
				public:
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32(EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32(EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString(EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString(EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString(EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap(EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool(EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void(EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool(EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool(EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool(EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool(EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl(EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent(EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback();
						}
						else
							return this->CCommandElementDownward::onClicked();
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CCommandElementDownward::update(e);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CCommandElementDownward::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCommandElementDownward::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CCommandElementDownward::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CCommandElementDownward::create(ref_ctrl);
					}
				};
				REGISTER_FACTORY_CLASS(CCommandElementDownwardProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getToolBarType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getToolBarType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolBarType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getToolBarType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					if (dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Layout_Controls_CCommandElementDownward_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Layout::Controls::CCommandElementDownward* ptrNativeObject = (EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Layout::Controls::CCommandElementDownward::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl_Callback* pCallback )
				{
					CCommandElementDownwardProxy* ptr = dynamic_cast<CCommandElementDownwardProxy*>((EarthView::World::Layout::Controls::CCommandElementDownward*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Layout_Controls_CCommandElementDownward_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
