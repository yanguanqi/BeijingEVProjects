/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globecommand.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Controls
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class CGlobeCommandProxy : public EarthView::World::Spatial3D::Controls::CGlobeCommand
				{
				private:
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback;
				public:
					CGlobeCommandProxy(EarthView::World::Core::CNameValuePairList *pList) : CGlobeCommand(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CGlobeCommandProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32(EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString(EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString(EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString(EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap(EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void(EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool(EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl(EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent(EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->CGlobeCommand::create(ref_ctrl);
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback();
						}
						else
							return this->CGlobeCommand::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->CGlobeCommand::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->CGlobeCommand::setEnabled(enabled);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->CGlobeCommand::update(e);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CGlobeCommand::getToolBarType();
					}
				};
				REGISTER_FACTORY_CLASS(CGlobeCommandProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::create(ref_ctrl);
					else
						ptrNativeObject->create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_create_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::create(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::onClicked();
					else
						ptrNativeObject->onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_onClicked_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::onClicked();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					if (dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::update(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CGlobeCommand_update_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CGlobeCommand::update(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_bChecked( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bChecked;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_bChecked( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeCommand*)pObjectXXXX)->m_bChecked = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_bEnabled( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->m_bEnabled;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_bEnabled( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeCommand*)pObjectXXXX)->m_bEnabled = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeCommand_mpGlobeControl( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->mpGlobeControl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeCommand_mpGlobeControl( void *pObjectXXXX, EarthView::World::Spatial3D::Controls::CGlobeControl*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeCommand*)pObjectXXXX)->mpGlobeControl = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall Get_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_pIcon( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CGlobeCommand* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->m_pIcon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CGlobeCommand_m_pIcon( void *pObjectXXXX, EarthView::World::Display::IBitmap*  value )
				{
					((EarthView::World::Spatial3D::Controls::CGlobeCommand*)pObjectXXXX)->m_pIcon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32_Callback* pCallback )
				{
					CGlobeCommandProxy* ptr = dynamic_cast<CGlobeCommandProxy*>((EarthView::World::Spatial3D::Controls::CGlobeCommand*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CGlobeCommand_getToolBarType_ev_uint32(pCallback);
					}
				}
			}
		}
	}
}
