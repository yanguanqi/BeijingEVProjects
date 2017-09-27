/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/itoolbutton.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::SystemUI::ICommand*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback)();
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class IToolButtonProxy : public EarthView::World::Spatial::SystemUI::IToolButton
				{
				private:
					EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback;
					EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback;
				public:
					IToolButtonProxy(EarthView::World::Core::CNameValuePairList *pList) : IToolButton(pList)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IToolButtonProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand(EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32(EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32(EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32(EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32(EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString(EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString(EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString(EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap(EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool(EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void(EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool(EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool(EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool(EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl(EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent(EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback = pCallback;
					}
					virtual void addCommand(_in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback(ref_cmd);
						}
						else
							return this->IToolButton::addCommand(ref_cmd);
					}
					virtual ev_uint32 getCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getCount();
					}
					virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::ICommand* returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IToolButton::getCommand(index);
					}
					virtual ev_uint32 getToolBarType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getToolBarType();
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getName();
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getCategory();
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getToolTip();
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getIcon();
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::isCheckable();
					}
					virtual void onClicked()
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback();
						}
						else
							return this->IToolButton::onClicked();
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->IToolButton::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolButton::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->IToolButton::setEnabled(enabled);
					}
					virtual void create(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->IToolButton::create(ref_ctrl);
					}
					virtual ev_bool update(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->IToolButton::update(e);
					}
				};
				REGISTER_FACTORY_CLASS(IToolButtonProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
				{
					EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					if (dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::addCommand(ref_cmd);
					else
						ptrNativeObject->addCommand(ref_cmd);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_addCommand_void_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
				{
					EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::addCommand(ref_cmd);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					if (dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::getCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::getCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					if (dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::getCommand(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall EarthView_World_Spatial_SystemUI_IToolButton_getCommand_ICommand_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IToolButton* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolButton::getCommand(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolBarType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_onClicked_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_create_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent_Callback* pCallback )
				{
					IToolButtonProxy* ptr = dynamic_cast<IToolButtonProxy*>((EarthView::World::Spatial::SystemUI::IToolButton*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolButton_update_ev_bool_CEvent(pCallback);
					}
				}
			}
		}
	}
}
