/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/imenu.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback)(_in ev_bool enable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* ref_command);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::SystemUI::IItem*  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::SystemUI::IMenu*  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback)();
				typedef EarthView::World::Spatial::SystemUI::IMenu*  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback)();
				typedef EarthView::World::Spatial::SystemUI::IMenu*  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback)(_in ev_int32 x, _in ev_int32 y);
				class IMenuProxy : public EarthView::World::Spatial::SystemUI::IMenu
				{
				private:
					EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback* m_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback;
				public:
					IMenuProxy(EarthView::World::Core::CNameValuePairList *pList) : IMenu(pList)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IMenuProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_clear_void(EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback = pCallback;
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IMenu::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IMenu::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IMenu::setName(name);
					}
					virtual ev_bool isEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMenu::isEnabled();
					}
					virtual void setEnabled(_in ev_bool enable)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback(enable);
						}
						else
							return this->IMenu::setEnabled(enable);
					}
					virtual ev_bool appendItem(_in EarthView::World::Spatial::SystemUI::ICommand* ref_command)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback(ref_command);
							return returnValue;
						}
						else
							return this->IMenu::appendItem(ref_command);
					}
					virtual ev_bool insertItem(_in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback(index, ref_command);
							return returnValue;
						}
						else
							return this->IMenu::insertItem(index, ref_command);
					}
					virtual ev_uint32 getItemCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IMenu::getItemCount();
					}
					virtual ev_bool removeItem(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMenu::removeItem(index);
					}
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IItem* returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMenu::getItem(index);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback();
						}
						else
							return this->IMenu::clear();
					}
					virtual ev_bool appendSeperator()
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IMenu::appendSeperator();
					}
					virtual ev_bool insertSeperator(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMenu::insertSeperator(index);
					}
					virtual EarthView::World::Spatial::SystemUI::IMenu* appendSubMenu()
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IMenu* returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback();
							return returnValue;
						}
						else
							return this->IMenu::appendSubMenu();
					}
					virtual EarthView::World::Spatial::SystemUI::IMenu* insertSubMenu(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IMenu* returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMenu::insertSubMenu(index);
					}
					virtual ev_uint32 getSubMenuCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IMenu::getSubMenuCount();
					}
					virtual EarthView::World::Spatial::SystemUI::IMenu* getSubMenu(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IMenu* returnValue = m_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IMenu::getSubMenu(index);
					}
					virtual void popup(_in ev_int32 x, _in ev_int32 y) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback(x, y);
						}
						else
							return this->IMenu::popup(x, y);
					}
				};
				REGISTER_FACTORY_CLASS(IMenuProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::isEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_isEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::isEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::setEnabled(enable);
					else
						ptrNativeObject->setEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::setEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendItem(ref_command);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->appendItem(ref_command);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendItem_ev_bool_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendItem(ref_command);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertItem(index, ref_command);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertItem(index, ref_command);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertItem_ev_bool_ev_uint32_ICommand_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertItem(index, ref_command);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getItemCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getItemCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItemCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getItemCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::removeItem(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeItem(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_removeItem_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::removeItem(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getItem(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->getItem(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getItem_IItem_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getItem(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_clear_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_clear_void_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendSeperator();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->appendSeperator();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSeperator_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendSeperator();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertSeperator(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertSeperator(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSeperator_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertSeperator(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendSubMenu();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->appendSubMenu();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_appendSubMenu_IMenu_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::appendSubMenu();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertSubMenu(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->insertSubMenu(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_insertSubMenu_IMenu_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::insertSubMenu(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getSubMenuCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSubMenuCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenuCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getSubMenuCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getSubMenu(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->getSubMenu(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IMenu_getSubMenu_IMenu_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::getSubMenu(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					if (dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::popup(x, y);
					else
						ptrNativeObject->popup(x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_Callback* pCallback )
				{
					IMenuProxy* ptr = dynamic_cast<IMenuProxy*>((EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IMenu_popup_void_ev_int32_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 x, _in ev_int32 y )
				{
					const EarthView::World::Spatial::SystemUI::IMenu* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IMenu*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IMenu::popup(x, y);
				}
			}
		}
	}
}
