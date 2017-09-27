/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/iitem.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback)(_in char*& category);
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback)(_in char*& toolTip);
				typedef EarthView::World::Display::IBitmap*  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback)(_in const EarthView::World::Display::IBitmap* bmp);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback)(_in ev_bool checkable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback)(_in ev_bool checked);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback)(_in ev_bool enabled);
				typedef EarthView::World::Spatial::SystemUI::ICommand*  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback)(_in EarthView::World::Core::CTimerEvent* e);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback)(_in EarthView::World::Core::CEvent* e);
				class IItemProxy : public EarthView::World::Spatial::SystemUI::IItem
				{
				private:
					EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback;
					EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback;
					EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback* m_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback;
					EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback* m_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback;
				public:
					IItemProxy(EarthView::World::Core::CNameValuePairList *pList) : IItem(pList)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IItemProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getName_EVString(EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString(EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString(EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString(EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString(EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString(EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap(EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap(EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool(EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool(EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool(EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool(EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool(EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand(EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent(EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent(EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent(EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IItem::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IItem::setName(name);
					}
					virtual EVString getCategory() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback();
							return returnValue;
						}
						else
							return this->IItem::getCategory();
					}
					virtual void setCategory(_in const EVString& category)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* category_Char = category.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback(category_Char);
						}
						else
							return this->IItem::setCategory(category);
					}
					virtual EVString getToolTip() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback();
							return returnValue;
						}
						else
							return this->IItem::getToolTip();
					}
					virtual void setToolTip(_in const EVString& toolTip)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* toolTip_Char = toolTip.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback(toolTip_Char);
						}
						else
							return this->IItem::setToolTip(toolTip);
					}
					virtual EarthView::World::Display::IBitmap* getIcon() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IBitmap* returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback();
							return returnValue;
						}
						else
							return this->IItem::getIcon();
					}
					virtual void setIcon(_in const EarthView::World::Display::IBitmap* bmp)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback(bmp);
						}
						else
							return this->IItem::setIcon(bmp);
					}
					virtual ev_bool isCheckable() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IItem::isCheckable();
					}
					virtual void setCheckable(_in ev_bool checkable)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback(checkable);
						}
						else
							return this->IItem::setCheckable(checkable);
					}
					virtual ev_bool getChecked() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IItem::getChecked();
					}
					virtual void setChecked(_in ev_bool checked)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback(checked);
						}
						else
							return this->IItem::setChecked(checked);
					}
					virtual ev_bool getEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IItem::getEnabled();
					}
					virtual void setEnabled(_in ev_bool enabled)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback(enabled);
						}
						else
							return this->IItem::setEnabled(enabled);
					}
					virtual EarthView::World::Spatial::SystemUI::ICommand* getCommand() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::ICommand* returnValue = m_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback();
							return returnValue;
						}
						else
							return this->IItem::getCommand();
					}
					virtual ev_bool onEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback(e);
							return returnValue;
						}
						else
							return this->IItem::onEvent(e);
					}
					virtual void onTimerEvent(_in EarthView::World::Core::CTimerEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback(e);
						}
						else
							return this->IItem::onTimerEvent(e);
					}
					virtual void onCustomEvent(_in EarthView::World::Core::CEvent* e)
					{
						if(m_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback(e);
						}
						else
							return this->IItem::onCustomEvent(e);
					}
				};
				REGISTER_FACTORY_CLASS(IItemProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getName_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getCategory();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getCategory();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getCategory_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getCategory();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString(void *pObjectXXXX, _in const char* category )
				{
					EarthView::World::Core::ev_string category1 = category;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setCategory(category1);
					else
						ptrNativeObject->setCategory(category1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setCategory_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* category )
				{
					EarthView::World::Core::ev_string category1 = category;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setCategory(category1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getToolTip();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getToolTip();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getToolTip_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getToolTip();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString(void *pObjectXXXX, _in const char* toolTip )
				{
					EarthView::World::Core::ev_string toolTip1 = toolTip;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setToolTip(toolTip1);
					else
						ptrNativeObject->setToolTip(toolTip1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setToolTip_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* toolTip )
				{
					EarthView::World::Core::ev_string toolTip1 = toolTip;
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setToolTip(toolTip1);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getIcon();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->getIcon();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IBitmap*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getIcon_IBitmap_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					EarthView::World::Display::IBitmap* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getIcon();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap(void *pObjectXXXX, _in const EarthView::World::Display::IBitmap* bmp )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setIcon(bmp);
					else
						ptrNativeObject->setIcon(bmp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setIcon_void_IBitmap_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Display::IBitmap* bmp )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setIcon(bmp);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::isCheckable();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCheckable();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_isCheckable_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::isCheckable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool(void *pObjectXXXX, _in ev_bool checkable )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setCheckable(checkable);
					else
						ptrNativeObject->setCheckable(checkable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setCheckable_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checkable )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setCheckable(checkable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getChecked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getChecked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_getChecked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getChecked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setChecked(checked);
					else
						ptrNativeObject->setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setChecked_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool checked )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setChecked(checked);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_getEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setEnabled(enabled);
					else
						ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IItem_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getCommand();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall EarthView_World_Spatial_SystemUI_IItem_getCommand_ICommand_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::getCommand();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					if (dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::onEvent(e);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->onEvent(e);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IItem_onEvent_ev_bool_CEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Core::CEvent* e )
				{
					EarthView::World::Spatial::SystemUI::IItem* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IItem::onEvent(e);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_onTimerEvent_void_CTimerEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent_Callback* pCallback )
				{
					IItemProxy* ptr = dynamic_cast<IItemProxy*>((EarthView::World::Spatial::SystemUI::IItem*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IItem_onCustomEvent_void_CEvent(pCallback);
					}
				}
			}
		}
	}
}
