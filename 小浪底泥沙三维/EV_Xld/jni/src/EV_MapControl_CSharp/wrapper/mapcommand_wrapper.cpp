/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mapcontrol/mapcommand.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CMapCommandProxy : public EarthView::World::Spatial2D::Controls::CMapCommand
				{
				private:
					EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback;
				public:
					CMapCommandProxy(EarthView::World::Core::CNameValuePairList *pList) : CMapCommand(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CMapCommandProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString(EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString(EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void(EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback();
						}
						else
							return this->CMapCommand::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CMapCommand::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CMapCommand::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CMapCommand::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CMapCommand::update(e);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMapCommand::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CMapCommandProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::create(ref_ctrl);
					else
						ptrNativeObject->create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					if (dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CMapCommand_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CMapCommand::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Controls::CMapControl*  _stdcall Get_EarthView_World_Spatial2D_Controls_CMapCommand_mpMapControl( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EarthView::World::Spatial2D::Controls::CMapControl* objXXXX = ptrNativeObject->mpMapControl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CMapCommand_mpMapControl( void *pObjectXXXX, EarthView::World::Spatial2D::Controls::CMapControl*  value )
				{
					((EarthView::World::Spatial2D::Controls::CMapCommand*)pObjectXXXX)->mpMapControl = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CMapCommand_m_bChecked( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bChecked;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CMapCommand_m_bChecked( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CMapCommand*)pObjectXXXX)->m_bChecked = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial2D_Controls_CMapCommand_m_bEnabled( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bEnabled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CMapCommand_m_bEnabled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial2D::Controls::CMapCommand*)pObjectXXXX)->m_bEnabled = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall Get_EarthView_World_Spatial2D_Controls_CMapCommand_m_pIcon( void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Controls::CMapCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->m_pIcon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial2D_Controls_CMapCommand_m_pIcon( void *pObjectXXXX, EarthView::World::Display::IBitmap*  value )
				{
					((EarthView::World::Spatial2D::Controls::CMapCommand*)pObjectXXXX)->m_pIcon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32_Callback* pCallback )
				{
					CMapCommandProxy* ptr = dynamic_cast<CMapCommandProxy*>((EarthView::World::Spatial2D::Controls::CMapCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CMapCommand_getType_ev_uint32(pCallback);
					}
				}
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CEditCommandProxy : public EarthView::World::Spatial2D::Controls::CEditCommand
				{
				private:
					EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback;
				public:
					CEditCommandProxy(EarthView::World::Core::CNameValuePairList *pList) : CEditCommand(pList)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CEditCommandProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32(EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32(EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString(EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString(EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString(EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap(EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool(EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void(EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool(EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool(EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool(EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool(EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl(EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent(EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CEditCommand::update(e);
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback();
						}
						else
							return this->CEditCommand::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CEditCommand::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CEditCommand::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CEditCommand::create(ref_ctrl);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEditCommand::getType();
					}
				};
				REGISTER_FACTORY_CLASS(CEditCommandProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CEditCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX;
					if (dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditCommand::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Controls_CEditCommand_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial2D::Controls::CEditCommand* ptrNativeObject = (EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Controls::CEditCommand::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl_Callback* pCallback )
				{
					CEditCommandProxy* ptr = dynamic_cast<CEditCommandProxy*>((EarthView::World::Spatial2D::Controls::CEditCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Controls_CEditCommand_create_void_ISpatialControl(pCallback);
					}
				}
			}
		}
	}
}
