/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/iactionfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				typedef EarthView::World::Spatial::SystemUI::IToolBar*  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback)(_in ev_uint32 type);
				typedef EarthView::World::Spatial::SystemUI::IMenu*  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback)(_in ev_uint32 type);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback)(_in EarthView::World::Spatial::SystemUI::IToolBar* bar);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback)(_in EarthView::World::Spatial::SystemUI::IMenu* menu);
				typedef EarthView::World::Spatial::SystemUI::IItem*  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback)(_in EarthView::World::Spatial::SystemUI::ICommand* cmd);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback)(_in char*& text);
				typedef void  ( _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback)(_in char*& text);
				class IActionFactoryProxy : public EarthView::World::Spatial::SystemUI::IActionFactory
				{
				private:
					EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback;
					EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback* m_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback;
				public:
					IActionFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IActionFactory(pList)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(IActionFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::SystemUI::IToolBar* createToolBar(_in ev_uint32 type)
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IToolBar* returnValue = m_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback(type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IActionFactory::createToolBar(type);
					}
					virtual EarthView::World::Spatial::SystemUI::IMenu* createMenu(_in ev_uint32 type) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IMenu* returnValue = m_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback(type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->IActionFactory::createMenu(type);
					}
					virtual void destoryToolBar(_in EarthView::World::Spatial::SystemUI::IToolBar* bar) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback(bar);
						}
						else
							return this->IActionFactory::destoryToolBar(bar);
					}
					virtual void destoryMenu(_in EarthView::World::Spatial::SystemUI::IMenu* menu) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback(menu);
						}
						else
							return this->IActionFactory::destoryMenu(menu);
					}
					virtual EarthView::World::Spatial::SystemUI::IItem* getItem(_in EarthView::World::Spatial::SystemUI::ICommand* cmd) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::SystemUI::IItem* returnValue = m_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback(cmd);
							return returnValue;
						}
						else
							return this->IActionFactory::getItem(cmd);
					}
					virtual ev_bool question(_in const EVString& text) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* text_Char = text.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback(text_Char);
							return returnValue;
						}
						else
							return this->IActionFactory::question(text);
					}
					virtual void information(_in const EVString& text) const
					{
						if(m_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* text_Char = text.makeBuffer();
							m_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback(text_Char);
						}
						else
							return this->IActionFactory::information(text);
					}
				};
				REGISTER_FACTORY_CLASS(IActionFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IToolBar*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
				{
					EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::createToolBar(type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->createToolBar(type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IToolBar*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createToolBar_IToolBar_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 type )
				{
					EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IToolBar* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::createToolBar(type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(void *pObjectXXXX, _in ev_uint32 type )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::createMenu(type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->createMenu(type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IMenu*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_createMenu_IMenu_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 type )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IMenu* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::createMenu(type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IToolBar* bar )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::destoryToolBar(bar);
					else
						ptrNativeObject->destoryToolBar(bar);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryToolBar_void_IToolBar_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IToolBar* bar )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::destoryToolBar(bar);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IMenu* menu )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::destoryMenu(menu);
					else
						ptrNativeObject->destoryMenu(menu);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_destoryMenu_void_IMenu_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::IMenu* menu )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::destoryMenu(menu);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* cmd )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::getItem(cmd);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->getItem(cmd);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::IItem*  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_getItem_IItem_ICommand_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* cmd )
				{
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::IItem* objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::getItem(cmd);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::question(text1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->question(text1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_question_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::question(text1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					if (dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::information(text1);
					else
						ptrNativeObject->information(text1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_Callback* pCallback )
				{
					IActionFactoryProxy* ptr = dynamic_cast<IActionFactoryProxy*>((EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_IActionFactory_information_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					const EarthView::World::Spatial::SystemUI::IActionFactory* ptrNativeObject = (EarthView::World::Spatial::SystemUI::IActionFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::SystemUI::IActionFactory::information(text1);
				}
			}
		}
	}
}
