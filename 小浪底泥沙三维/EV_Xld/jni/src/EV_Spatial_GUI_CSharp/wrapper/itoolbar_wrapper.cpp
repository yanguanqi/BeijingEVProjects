/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/itoolbar.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Atlas
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback)(_in ev_bool enable);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef EarthView::World::Spatial::SystemUI::IItem*  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* ref_command);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback)(_in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback)(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl);
				class IToolBarProxy : public EarthView::World::Spatial::SystemUI::IToolBar
				{
				private:
					EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback* m_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback;
				public:
					IToolBarProxy(EarthView::World::Core::CNameValuePairList *pList) : IToolBar(pList)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IToolBarProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32(EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString(EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString(EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool(EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool(EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool(EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool(EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32(EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32(EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32(EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_clear_void(EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand(EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand(EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool(EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32(EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl(EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback = pCallback;
					}
					virtual ev_uint32 getType() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::getName();
					}
					virtual void setName(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback(name_Char);
						}
						else
							return this->IToolBar::setName(name);
					}
					virtual ev_bool isEnabled() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::isEnabled();
					}
					virtual void setEnabled(_in ev_bool enable)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback(enable);
						}
						else
							return this->IToolBar::setEnabled(enable);
					}
					virtual ev_bool isVisible() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::isVisible();
					}
					virtual void setVisible(_in ev_bool visible)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback(visible);
						}
						else
							return this->IToolBar::setVisible(visible);
					}
					virtual ev_uint32 getItemCount() const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::getItemCount();
					}
					virtual ev_bool removeItem(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IToolBar::removeItem(index);
					}
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IItem* returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IToolBar::getItem(index);
					}
					virtual void clear()
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback();
						}
						else
							return this->IToolBar::clear();
					}
					virtual ev_bool appendItem(_in EarthView::World::Spatial::SystemUI::ICommand* ref_command)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback(ref_command);
							return returnValue;
						}
						else
							return this->IToolBar::appendItem(ref_command);
					}
					virtual ev_bool insertItem(_in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback(index, ref_command);
							return returnValue;
						}
						else
							return this->IToolBar::insertItem(index, ref_command);
					}
					virtual ev_bool appendSeperator()
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IToolBar::appendSeperator();
					}
					virtual ev_bool insertSeperator(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->IToolBar::insertSeperator(index);
					}
					virtual void connect(_in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl)
					{
						if(m_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback(ref_ctrl);
						}
						else
							return this->IToolBar::connect(ref_ctrl);
					}
				};
				REGISTER_FACTORY_CLASS(IToolBarProxy);
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getType();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getType_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setName(name1);
					else
						ptrNativeObject->setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setName_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setName(name1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::isEnabled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEnabled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isEnabled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::isEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setEnabled(enable);
					else
						ptrNativeObject->setEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setEnabled_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool enable )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setEnabled(enable);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::isVisible();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isVisible();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_isVisible_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::isVisible();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setVisible(visible);
					else
						ptrNativeObject->setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_setVisible_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool visible )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::setVisible(visible);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getItemCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getItemCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItemCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getItemCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::removeItem(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->removeItem(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_removeItem_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::removeItem(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getItem(index);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->getItem(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_getItem_IItem_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::getItem(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::clear();
					else
						ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_clear_void( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_clear_void_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_clear_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_clear_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::clear();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::appendItem(ref_command);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->appendItem(ref_command);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendItem_ev_bool_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::appendItem(ref_command);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::insertItem(index, ref_command);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertItem(index, ref_command);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertItem_ev_bool_ev_uint32_ICommand_NoVirtual(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial::SystemUI::ICommand* ref_command )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::insertItem(index, ref_command);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::appendSeperator();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->appendSeperator();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_appendSeperator_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::appendSeperator();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::insertSeperator(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insertSeperator(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_insertSeperator_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::insertSeperator(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					if (dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::connect(ref_ctrl);
					else
						ptrNativeObject->connect(ref_ctrl);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_Callback* pCallback )
				{
					IToolBarProxy* ptr = dynamic_cast<IToolBarProxy*>((EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IToolBar_connect_void_ISpatialControl_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ISpatialControl* ref_ctrl )
				{
					EarthView::World::Spatial::SystemUI::IToolBar* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IToolBar*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IToolBar::connect(ref_ctrl);
				}
			}
		}
	}
}
