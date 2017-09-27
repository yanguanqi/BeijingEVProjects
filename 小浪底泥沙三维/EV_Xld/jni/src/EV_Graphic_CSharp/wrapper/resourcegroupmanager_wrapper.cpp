/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/resourcegroupmanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback)(_in char*& groupName, _in ev_uint64  scriptCount);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback)(_in char*& scriptName, _inout ev_bool& skipThisScript);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback)(_in char*& scriptName, _in ev_bool skipped);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback)(_in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback)(_in char*& groupName, _in ev_uint64  resourceCount);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback)(_in const void* resource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback)(_in char*& description);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback)(_in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback)(_in char*& groupName, _in ev_uint64  resourceCount);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback)(_in const void* resource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback)(_in char*& description);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback)(_in char*& groupName);
			class CResourceGroupListenerProxy : public EarthView::World::Graphic::CResourceGroupListener
			{
			private:
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback;
				EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback;
				EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback* m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback;
				EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback* m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback;
				EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback* m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback;
				EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback* m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback;
				EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback* m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback;
			public:
				CResourceGroupListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceGroupListener(pList)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback = NULL;
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t(EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool(EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool(EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString(EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t(EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr(EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void(EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString(EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void(EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString(EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t(EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr(EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void(EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString(EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void(EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString(EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback = pCallback;
				}
				virtual void resourceGroupScriptingStarted(_in const EVString& groupName, _in ev_size_t scriptCount)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback(groupName_Char, scriptCount);
					}
					else
						return this->CResourceGroupListener::resourceGroupScriptingStarted(groupName, scriptCount);
				}
				virtual void scriptParseStarted(_in const EVString& scriptName, _inout ev_bool& skipThisScript)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* scriptName_Char = scriptName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback(scriptName_Char, skipThisScript);
					}
					else
						return this->CResourceGroupListener::scriptParseStarted(scriptName, skipThisScript);
				}
				virtual void scriptParseEnded(_in const EVString& scriptName, _in ev_bool skipped)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* scriptName_Char = scriptName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback(scriptName_Char, skipped);
					}
					else
						return this->CResourceGroupListener::scriptParseEnded(scriptName, skipped);
				}
				virtual void resourceGroupScriptingEnded(_in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback(groupName_Char);
					}
					else
						return this->CResourceGroupListener::resourceGroupScriptingEnded(groupName);
				}
				virtual void resourceGroupPrepareStarted(_in const EVString& groupName, _in ev_size_t resourceCount)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback(groupName_Char, resourceCount);
					}
					else
						return this->CResourceGroupListener::resourceGroupPrepareStarted(groupName, resourceCount);
				}
				virtual void resourcePrepareStarted(_in const EarthView::World::Graphic::ResourcePtr& resource)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback(&resource);
					}
					else
						return this->CResourceGroupListener::resourcePrepareStarted(resource);
				}
				virtual void resourcePrepareEnded()
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback();
					}
					else
						return this->CResourceGroupListener::resourcePrepareEnded();
				}
				virtual void worldGeometryPrepareStageStarted(_in const EVString& description)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* description_Char = description.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback(description_Char);
					}
					else
						return this->CResourceGroupListener::worldGeometryPrepareStageStarted(description);
				}
				virtual void worldGeometryPrepareStageEnded()
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback();
					}
					else
						return this->CResourceGroupListener::worldGeometryPrepareStageEnded();
				}
				virtual void resourceGroupPrepareEnded(_in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback(groupName_Char);
					}
					else
						return this->CResourceGroupListener::resourceGroupPrepareEnded(groupName);
				}
				virtual void resourceGroupLoadStarted(_in const EVString& groupName, _in ev_size_t resourceCount)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback(groupName_Char, resourceCount);
					}
					else
						return this->CResourceGroupListener::resourceGroupLoadStarted(groupName, resourceCount);
				}
				virtual void resourceLoadStarted(_in const EarthView::World::Graphic::ResourcePtr& resource)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback(&resource);
					}
					else
						return this->CResourceGroupListener::resourceLoadStarted(resource);
				}
				virtual void resourceLoadEnded()
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback();
					}
					else
						return this->CResourceGroupListener::resourceLoadEnded();
				}
				virtual void worldGeometryStageStarted(_in const EVString& description)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* description_Char = description.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback(description_Char);
					}
					else
						return this->CResourceGroupListener::worldGeometryStageStarted(description);
				}
				virtual void worldGeometryStageEnded()
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback();
					}
					else
						return this->CResourceGroupListener::worldGeometryStageEnded();
				}
				virtual void resourceGroupLoadEnded(_in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback(groupName_Char);
					}
					else
						return this->CResourceGroupListener::resourceGroupLoadEnded(groupName);
				}
			};
			REGISTER_FACTORY_CLASS(CResourceGroupListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  scriptCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingStarted(groupName1, scriptCount);
				else
					ptrNativeObject->resourceGroupScriptingStarted(groupName1, scriptCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingStarted_void_EVString_ev_size_t_NoVirtual(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  scriptCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingStarted(groupName1, scriptCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool(void *pObjectXXXX, _in const char* scriptName, _inout ev_bool& skipThisScript )
			{
				EarthView::World::Core::ev_string scriptName1 = scriptName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::scriptParseStarted(scriptName1, skipThisScript);
				else
					ptrNativeObject->scriptParseStarted(scriptName1, skipThisScript);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseStarted_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* scriptName, _inout ev_bool& skipThisScript )
			{
				EarthView::World::Core::ev_string scriptName1 = scriptName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::scriptParseStarted(scriptName1, skipThisScript);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool(void *pObjectXXXX, _in const char* scriptName, _in ev_bool skipped )
			{
				EarthView::World::Core::ev_string scriptName1 = scriptName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::scriptParseEnded(scriptName1, skipped);
				else
					ptrNativeObject->scriptParseEnded(scriptName1, skipped);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_scriptParseEnded_void_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* scriptName, _in ev_bool skipped )
			{
				EarthView::World::Core::ev_string scriptName1 = scriptName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::scriptParseEnded(scriptName1, skipped);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingEnded(groupName1);
				else
					ptrNativeObject->resourceGroupScriptingEnded(groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupScriptingEnded_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupScriptingEnded(groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  resourceCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareStarted(groupName1, resourceCount);
				else
					ptrNativeObject->resourceGroupPrepareStarted(groupName1, resourceCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareStarted_void_EVString_ev_size_t_NoVirtual(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  resourceCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareStarted(groupName1, resourceCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr(void *pObjectXXXX, _in const void* resource )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
				else
					ptrNativeObject->resourcePrepareStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareStarted_void_ResourcePtr_NoVirtual(void *pObjectXXXX, _in const void* resource )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareEnded();
				else
					ptrNativeObject->resourcePrepareEnded();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourcePrepareEnded_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourcePrepareEnded();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageStarted(description1);
				else
					ptrNativeObject->worldGeometryPrepareStageStarted(description1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageStarted_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageStarted(description1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageEnded();
				else
					ptrNativeObject->worldGeometryPrepareStageEnded();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryPrepareStageEnded_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryPrepareStageEnded();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareEnded(groupName1);
				else
					ptrNativeObject->resourceGroupPrepareEnded(groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupPrepareEnded_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupPrepareEnded(groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  resourceCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadStarted(groupName1, resourceCount);
				else
					ptrNativeObject->resourceGroupLoadStarted(groupName1, resourceCount);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadStarted_void_EVString_ev_size_t_NoVirtual(void *pObjectXXXX, _in const char* groupName, _in ev_uint64  resourceCount )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadStarted(groupName1, resourceCount);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr(void *pObjectXXXX, _in const void* resource )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceLoadStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
				else
					ptrNativeObject->resourceLoadStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadStarted_void_ResourcePtr_NoVirtual(void *pObjectXXXX, _in const void* resource )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceLoadStarted(*(EarthView::World::Graphic::ResourcePtr*)resource);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceLoadEnded();
				else
					ptrNativeObject->resourceLoadEnded();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceLoadEnded_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceLoadEnded();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageStarted(description1);
				else
					ptrNativeObject->worldGeometryStageStarted(description1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageStarted_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageStarted(description1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageEnded();
				else
					ptrNativeObject->worldGeometryStageEnded();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_worldGeometryStageEnded_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::worldGeometryStageEnded();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				if (dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadEnded(groupName1);
				else
					ptrNativeObject->resourceGroupLoadEnded(groupName1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_Callback* pCallback )
			{
				CResourceGroupListenerProxy* ptr = dynamic_cast<CResourceGroupListenerProxy*>((EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupListener_resourceGroupLoadEnded_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupListener* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceGroupListener::resourceGroupLoadEnded(groupName1);
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback)(_in char*& name, _in char*& group, _in EarthView::World::Graphic::CResource* resource);
			typedef void  ( _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback)(_in char*& name, _in char*& group, _in EarthView::World::Graphic::CResource* resource, _inout void* dataStream);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback)(_in EarthView::World::Graphic::CResource* resource, _in EarthView::World::Graphic::CResourceManager* resourceManager);
			class CResourceLoadingListenerProxy : public EarthView::World::Graphic::CResourceLoadingListener
			{
			private:
				EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback* m_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback;
				EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback* m_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback;
				EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback* m_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback;
			public:
				CResourceLoadingListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceLoadingListener(pList)
				{
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback = NULL;
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource(EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr(EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager(EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback = pCallback;
				}
				virtual EarthView::World::Core::DataStreamPtr resourceLoading(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::CResource* resource)
				{
					if(m_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Core::DataStreamPtr returnValue = *(EarthView::World::Core::DataStreamPtr*)m_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback(name_Char, group_Char, resource);
						return returnValue;
					}
					else
						return this->CResourceLoadingListener::resourceLoading(name, group, resource);
				}
				virtual void resourceStreamOpened(_in const EVString& name, _in const EVString& group, _in EarthView::World::Graphic::CResource* resource, _inout EarthView::World::Core::DataStreamPtr& dataStream)
				{
					if(m_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						m_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback(name_Char, group_Char, resource, &dataStream);
					}
					else
						return this->CResourceLoadingListener::resourceStreamOpened(name, group, resource, dataStream);
				}
				virtual ev_bool resourceCollision(_in EarthView::World::Graphic::CResource* resource, _in EarthView::World::Graphic::CResourceManager* resourceManager)
				{
					if(m_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback(resource, resourceManager);
						return returnValue;
					}
					else
						return this->CResourceLoadingListener::resourceCollision(resource, resourceManager);
				}
			};
			REGISTER_FACTORY_CLASS(CResourceLoadingListenerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource(void *pObjectXXXX, _in const char* name, _in const char* group, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				if (dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceLoading(name1, group1, resource);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->resourceLoading(name1, group1, resource);
					EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource( void *pObjectXXXX, EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_Callback* pCallback )
			{
				CResourceLoadingListenerProxy* ptr = dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceLoading_DataStreamPtr_EVString_EVString_CResource_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in EarthView::World::Graphic::CResource* resource )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceLoading(name1, group1, resource);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr(void *pObjectXXXX, _in const char* name, _in const char* group, _in EarthView::World::Graphic::CResource* resource, _inout void* dataStream )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				if (dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceStreamOpened(name1, group1, resource, *(EarthView::World::Core::DataStreamPtr*)dataStream);
				else
					ptrNativeObject->resourceStreamOpened(name1, group1, resource, *(EarthView::World::Core::DataStreamPtr*)dataStream);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr( void *pObjectXXXX, EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_Callback* pCallback )
			{
				CResourceLoadingListenerProxy* ptr = dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceStreamOpened_void_EVString_EVString_CResource_DataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* name, _in const char* group, _in EarthView::World::Graphic::CResource* resource, _inout void* dataStream )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceStreamOpened(name1, group1, resource, *(EarthView::World::Core::DataStreamPtr*)dataStream);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource, _in EarthView::World::Graphic::CResourceManager* resourceManager )
			{
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				if (dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceCollision(resource, resourceManager);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->resourceCollision(resource, resourceManager);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager( void *pObjectXXXX, EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_Callback* pCallback )
			{
				CResourceLoadingListenerProxy* ptr = dynamic_cast<CResourceLoadingListenerProxy*>((EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceLoadingListener_resourceCollision_ev_bool_CResource_CResourceManager_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResource* resource, _in EarthView::World::Graphic::CResourceManager* resourceManager )
			{
				EarthView::World::Graphic::CResourceLoadingListener* ptrNativeObject = (EarthView::World::Graphic::CResourceLoadingListener*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Graphic::CResourceLoadingListener::resourceCollision(resource, resourceManager);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getSingleton_CResourceGroupManager( )
			{
				EarthView::World::Graphic::CResourceGroupManager& objXXXX = EarthView::World::Graphic::CResourceGroupManager::getSingleton();
				EarthView::World::Graphic::CResourceGroupManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getSingletonPtr_CResourceGroupManager( )
			{
				EarthView::World::Graphic::CResourceGroupManager* objXXXX = EarthView::World::Graphic::CResourceGroupManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME()
			{
				EVString objXXXX = EarthView::World::Graphic::CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_DEFAULT_RESOURCE_GROUP_NAME( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CResourceGroupManager::DEFAULT_RESOURCE_GROUP_NAME = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME()
			{
				EVString objXXXX = EarthView::World::Graphic::CResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_INTERNAL_RESOURCE_GROUP_NAME( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CResourceGroupManager::INTERNAL_RESOURCE_GROUP_NAME = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME()
			{
				EVString objXXXX = EarthView::World::Graphic::CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_AUTODETECT_RESOURCE_GROUP_NAME( char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				EarthView::World::Graphic::CResourceGroupManager::AUTODETECT_RESOURCE_GROUP_NAME = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS()
			{
				ev_size_t objXXXX = EarthView::World::Graphic::CResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS( ev_uint64   value )
			{
				EarthView::World::Graphic::CResourceGroupManager::RESOURCE_SYSTEM_NUM_REFERENCE_COUNTS = value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_resourceName( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->resourceName;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_resourceName( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjectXXXX)->resourceName = value1;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_resourceType( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->resourceType;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_resourceType( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjectXXXX)->resourceType = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CManualResourceLoader*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_loader( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) pObjectXXXX;
				EarthView::World::Graphic::CManualResourceLoader* objXXXX = ptrNativeObject->loader;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_loader( void *pObjectXXXX, EarthView::World::Graphic::CManualResourceLoader*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjectXXXX)->loader = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_parameters( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*) pObjectXXXX;
				EarthView::World::Core::CommonStringPairList &objXXXX = ptrNativeObject->parameters;
				EarthView::World::Core::CommonStringPairList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceDeclaration_parameters( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)pObjectXXXX)->parameters = *(EarthView::World::Core::CommonStringPairList*)value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_push_back_void_ResourceDeclaration(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_push_front_void_ResourceDeclaration(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_front_ResourceDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_back_ResourceDeclaration(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_at_ResourceDeclaration_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_insert_void_ev_uint32_ResourceDeclaration(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclaration*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceDeclarationList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_push_ev_bool_EVString_CResourceManager(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CResourceManager*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_OperatorIndex_CResourceManager_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap& objYYYY = *(EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_get_CResourceManager_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMapPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMapPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMapPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_ResourceManagerMapPair_second( void *pObjectXXXX, EarthView::World::Graphic::CResourceManager*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_nextValue_CResourceManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager**  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_nextValuePtr_CResourceManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_next_CResourceManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_getBegin_ResourceManagerMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_getEnd_ResourceManagerMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceManagerIterator_getCurrent_ResourceManagerMapPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CResourceGroupManager::ResourceManagerMapPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceLocation_archive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->archive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceLocation_archive( void *pObjectXXXX, EarthView::World::Core::CArchive*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjectXXXX)->archive = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceLocation_recursive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->recursive;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceLocation_recursive( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*)pObjectXXXX)->recursive = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_push_back_void_CResourceLocation(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& ref_t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_push_front_void_CResourceLocation(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& ref_t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->push_front(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_front_CResourceLocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_back_CResourceLocation(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_at_CResourceLocation_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceLocation* objXXXX = ptrNativeObject->at(pos);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_insert_void_ev_uint32_CResourceLocation(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CResourceGroupManager::CResourceLocation*& ref_t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LocationList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LocationList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LocationList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_push_ev_bool_EVString_CArchive(void *pObjectXXXX, _in const char* key, _in EarthView::World::Core::CArchive*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_OperatorIndex_CArchive_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex& objYYYY = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjXXXX;
				EarthView::World::Core::CArchive* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CArchive*  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_get_CArchive_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				EarthView::World::Core::CArchive* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_ResourceLocationIndex_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_push_back_void_ResourcePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::Graphic::ResourcePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_push_front_void_ResourcePtr(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->push_front(*(EarthView::World::Graphic::ResourcePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_pop_front_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->pop_front();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_front_ResourcePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr& objXXXX = ptrNativeObject->front();
				EarthView::World::Graphic::ResourcePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_back_ResourcePtr(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr& objXXXX = ptrNativeObject->back();
				EarthView::World::Graphic::ResourcePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_at_ResourcePtr_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				EarthView::World::Graphic::ResourcePtr& objXXXX = ptrNativeObject->at(pos);
				EarthView::World::Graphic::ResourcePtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_insert_void_ev_uint32_ResourcePtr(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::Graphic::ResourcePtr*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_LoadUnloadResourceList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_name( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_groupStatus( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status objXXXX = ptrNativeObject->groupStatus;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_groupStatus( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->groupStatus = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::Status)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_locationList( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::LocationList &objXXXX = ptrNativeObject->locationList;
				EarthView::World::Graphic::CResourceGroupManager::LocationList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_locationList( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->locationList = *(EarthView::World::Graphic::CResourceGroupManager::LocationList*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceIndexCaseSensitive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex &objXXXX = ptrNativeObject->resourceIndexCaseSensitive;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceIndexCaseSensitive( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->resourceIndexCaseSensitive = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceIndexCaseInsensitive( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex &objXXXX = ptrNativeObject->resourceIndexCaseInsensitive;
				EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceIndexCaseInsensitive( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->resourceIndexCaseInsensitive = *(EarthView::World::Graphic::CResourceGroupManager::ResourceLocationIndex*)value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceDeclarations( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList &objXXXX = ptrNativeObject->resourceDeclarations;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_resourceDeclarations( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->resourceDeclarations = *(EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList*)value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_push_ev_bool_Real_LoadUnloadResourceList(void *pObjectXXXX, _in const Real& key, _in EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*& ref_val )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_exist_ev_bool_Real(void *pObjectXXXX, _in const Real& key )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_OperatorIndex_LoadUnloadResourceList_Real(void *pObjXXXX, _in const Real& key )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap& objYYYY = *(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjXXXX;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList*  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_get_LoadUnloadResourceList_Real(void *pObjectXXXX, _in const Real& key )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::LoadUnloadResourceList* objXXXX = ptrNativeObject->get(key);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_erase_void_Real(void *pObjectXXXX, _in const Real& key )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ptrNativeObject->erase(key);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_LoadUnloadResourceOrderMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_loadResourceOrderMap( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap &objXXXX = ptrNativeObject->loadResourceOrderMap;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_loadResourceOrderMap( void *pObjectXXXX, void*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->loadResourceOrderMap = *(EarthView::World::Graphic::CResourceGroupManager::CResourceGroup::LoadUnloadResourceOrderMap*)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_worldGeometry( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->worldGeometry;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_worldGeometry( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->worldGeometry = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_worldGeometrySceneManager( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->worldGeometrySceneManager;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_worldGeometrySceneManager( void *pObjectXXXX, EarthView::World::Graphic::CSceneManager*  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->worldGeometrySceneManager = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_inGlobalPool( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->inGlobalPool;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_inGlobalPool( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->inGlobalPool = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_addToIndex_void_EVString_CArchive(void *pObjectXXXX, _in const char* filename, _in EarthView::World::Core::CArchive* ref_arch )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				ptrNativeObject->addToIndex(filename1, ref_arch);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_removeFromIndex_void_EVString_CArchive(void *pObjectXXXX, _in const char* filename, _in EarthView::World::Core::CArchive* arch )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				ptrNativeObject->removeFromIndex(filename1, arch);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_removeFromIndex_void_CArchive(void *pObjectXXXX, _in EarthView::World::Core::CArchive* arch )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				ptrNativeObject->removeFromIndex(arch);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_mRefCount( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->mRefCount;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CResourceGroupManager_CResourceGroup_mRefCount( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*)pObjectXXXX)->mRefCount = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResourceGroup_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool inGlobalPool )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->createResourceGroup(name1, inGlobalPool);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->createResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResourceGroupWithRefCount_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const ev_bool inGlobalPool )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->createResourceGroupWithRefCount(name1, inGlobalPool);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResourceGroupWithRefCount_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->createResourceGroupWithRefCount(name1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceGroupManager::CResourceGroup*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getResourceGroup_CResourceGroup_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* objXXXX = ptrNativeObject->getResourceGroup(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_initialiseResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->initialiseResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_parseScript_ev_bool_DataStreamPtr_EVString(void *pObjectXXXX, _in void* stream, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->parseScript(*(EarthView::World::Core::DataStreamPtr*)stream, groupName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_initialiseAllResourceGroups_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->initialiseAllResourceGroups();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_prepareResourceGroup_void_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool prepareMainResources, _in ev_bool prepareWorldGeom )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->prepareResourceGroup(name1, prepareMainResources, prepareWorldGeom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_prepareResourceGroup_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool prepareMainResources )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->prepareResourceGroup(name1, prepareMainResources);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_prepareResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->prepareResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_loadResourceGroup_void_EVString_ev_bool_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool loadMainResources, _in ev_bool loadWorldGeom )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->loadResourceGroup(name1, loadMainResources, loadWorldGeom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_loadResourceGroup_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool loadMainResources )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->loadResourceGroup(name1, loadMainResources);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_loadResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->loadResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_unloadResourceGroup_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool reloadableOnly )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->unloadResourceGroup(name1, reloadableOnly);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_unloadResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->unloadResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_unloadUnreferencedResourcesInGroup_void_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_bool reloadableOnly )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->unloadUnreferencedResourcesInGroup(name1, reloadableOnly);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_unloadUnreferencedResourcesInGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->unloadUnreferencedResourcesInGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_clearResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->clearResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_destroyResourceGroup_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->destroyResourceGroup(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_destroyResourceGroupWithRefCount_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->destroyResourceGroupWithRefCount(name1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_isResourceGroupInitialised_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isResourceGroupInitialised(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_isResourceGroupLoaded_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isResourceGroupLoaded(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceGroupExists_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceGroupExists(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_addResourceLocation_void_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* resGroup, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1, resGroup1, recursive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_addResourceLocation_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* resGroup )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1, resGroup1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_addResourceLocation_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_removeResourceLocation_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* resGroup )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->removeResourceLocation(name1, resGroup1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_removeResourceLocation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->removeResourceLocation(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_setResourceLocation_void_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* resGroup, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->setResourceLocation(name1, locType1, resGroup1, recursive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_setResourceLocation_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* resGroup )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->setResourceLocation(name1, locType1, resGroup1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_setResourceLocation_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->setResourceLocation(name1, locType1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceLocationExists_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* resGroup )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resGroup1 = resGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceLocationExists(name1, resGroup1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceLocationExists_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceLocationExists(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_declareResource_void_EVString_EVString_EVString_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in const char* resourceType, _in const char* groupName, _in const void* loadParameters )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->declareResource(name1, resourceType1, groupName1, *(EarthView::World::Core::CommonStringPairList*)loadParameters);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_declareResource_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* resourceType, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->declareResource(name1, resourceType1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_declareResource_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* resourceType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->declareResource(name1, resourceType1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_declareResource_void_EVString_EVString_EVString_CManualResourceLoader_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in const char* resourceType, _in const char* groupName, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const void* loadParameters )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->declareResource(name1, resourceType1, groupName1, ref_loader, *(EarthView::World::Core::CommonStringPairList*)loadParameters);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_declareResource_void_EVString_EVString_EVString_CManualResourceLoader(void *pObjectXXXX, _in const char* name, _in const char* resourceType, _in const char* groupName, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->declareResource(name1, resourceType1, groupName1, ref_loader);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_undeclareResource_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->undeclareResource(name1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResource_DataStreamPtr_EVString_EVString_ev_bool_CResource(void *pObjectXXXX, _in const char* resourceName, _in const char* groupName, _in ev_bool searchGroupsIfNotFound, _in EarthView::World::Graphic::CResource* resourceBeingLoaded )
			{
				EarthView::World::Core::ev_string resourceName1 = resourceName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openResource(resourceName1, groupName1, searchGroupsIfNotFound, resourceBeingLoaded);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResource_DataStreamPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* resourceName, _in const char* groupName, _in ev_bool searchGroupsIfNotFound )
			{
				EarthView::World::Core::ev_string resourceName1 = resourceName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openResource(resourceName1, groupName1, searchGroupsIfNotFound);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResource_DataStreamPtr_EVString_EVString(void *pObjectXXXX, _in const char* resourceName, _in const char* groupName )
			{
				EarthView::World::Core::ev_string resourceName1 = resourceName;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openResource(resourceName1, groupName1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResource_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* resourceName )
			{
				EarthView::World::Core::ev_string resourceName1 = resourceName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openResource(resourceName1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResources_DataStreamListPtr_EVString_EVString(void *pObjectXXXX, _in const char* pattern, _in const char* groupName )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamListPtr objXXXX = ptrNativeObject->openResources(pattern1, groupName1);
				EarthView::World::Core::DataStreamListPtr *pXXXX = new EarthView::World::Core::DataStreamListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_openResources_DataStreamListPtr_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamListPtr objXXXX = ptrNativeObject->openResources(pattern1);
				EarthView::World::Core::DataStreamListPtr *pXXXX = new EarthView::World::Core::DataStreamListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_listResourceNames_StringVectorPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* groupName, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->listResourceNames(groupName1, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_listResourceNames_StringVectorPtr_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->listResourceNames(groupName1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_listResourceFileInfo_FileInfoListPtr_EVString_ev_bool(void *pObjectXXXX, _in const char* groupName, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->listResourceFileInfo(groupName1, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_listResourceFileInfo_FileInfoListPtr_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->listResourceFileInfo(groupName1);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findResourceNames_StringVectorPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* groupName, _in const char* pattern, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->findResourceNames(groupName1, pattern1, dirs);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findResourceNames_StringVectorPtr_EVString_EVString(void *pObjectXXXX, _in const char* groupName, _in const char* pattern )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->findResourceNames(groupName1, pattern1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceExists_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* group, _in const char* filename )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceExists(group1, filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceExists_ev_bool_CResourceGroup_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* group, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceExists(group, filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceExistsInAnyGroup_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->resourceExistsInAnyGroup(filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findGroupContainingResource_EVString_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->findGroupContainingResource(filename1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findResourceFileInfo_FileInfoListPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* group, _in const char* pattern, _in ev_bool dirs )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->findResourceFileInfo(group1, pattern1, dirs);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findResourceFileInfo_FileInfoListPtr_EVString_EVString(void *pObjectXXXX, _in const char* group, _in const char* pattern )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::FileInfoListPtr objXXXX = ptrNativeObject->findResourceFileInfo(group1, pattern1);
				EarthView::World::Core::FileInfoListPtr *pXXXX = new EarthView::World::Core::FileInfoListPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceModifiedTime_ev_int64_EVString_EVString(void *pObjectXXXX, _in const char* group, _in const char* filename )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->resourceModifiedTime(group1, filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_listResourceLocations_StringVectorPtr_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->listResourceLocations(groupName1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_findResourceLocation_StringVectorPtr_EVString_EVString(void *pObjectXXXX, _in const char* groupName, _in const char* pattern )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVectorPtr objXXXX = ptrNativeObject->findResourceLocation(groupName1, pattern1);
				EarthView::World::Core::StringVectorPtr *pXXXX = new EarthView::World::Core::StringVectorPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Graphic_CResourceGroupManager_resourceModifiedTime_ev_int64_CResourceGroup_EVString(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupManager::CResourceGroup* group, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->resourceModifiedTime(group, filename1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResource_DataStreamPtr_EVString_EVString_ev_bool_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in ev_bool overwrite, _in const char* locationPattern )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string locationPattern1 = locationPattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createResource(filename1, groupName1, overwrite, locationPattern1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResource_DataStreamPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in ev_bool overwrite )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createResource(filename1, groupName1, overwrite);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResource_DataStreamPtr_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createResource(filename1, groupName1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_createResource_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createResource(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteResource_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in const char* locationPattern )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string locationPattern1 = locationPattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteResource(filename1, groupName1, locationPattern1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteResource_void_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteResource(filename1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteResource_void_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteResource(filename1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteMatchingResources_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filePattern, _in const char* groupName, _in const char* locationPattern )
			{
				EarthView::World::Core::ev_string filePattern1 = filePattern;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string locationPattern1 = locationPattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteMatchingResources(filePattern1, groupName1, locationPattern1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteMatchingResources_void_EVString_EVString(void *pObjectXXXX, _in const char* filePattern, _in const char* groupName )
			{
				EarthView::World::Core::ev_string filePattern1 = filePattern;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteMatchingResources(filePattern1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_deleteMatchingResources_void_EVString(void *pObjectXXXX, _in const char* filePattern )
			{
				EarthView::World::Core::ev_string filePattern1 = filePattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->deleteMatchingResources(filePattern1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_addResourceGroupListener_void_CResourceGroupListener(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupListener* ref_l )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->addResourceGroupListener(ref_l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_removeResourceGroupListener_void_CResourceGroupListener(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceGroupListener* l )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->removeResourceGroupListener(l);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_setWorldResourceGroupName_void_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->setWorldResourceGroupName(groupName1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getWorldResourceGroupName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getWorldResourceGroupName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_linkWorldGeometryToResourceGroup_void_EVString_EVString_CSceneManager(void *pObjectXXXX, _in const char* group, _in const char* worldGeometry, _in EarthView::World::Graphic::CSceneManager* ref_sceneManager )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Core::ev_string worldGeometry1 = worldGeometry;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->linkWorldGeometryToResourceGroup(group1, worldGeometry1, ref_sceneManager);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_unlinkWorldGeometryFromResourceGroup_void_EVString(void *pObjectXXXX, _in const char* group )
			{
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->unlinkWorldGeometryFromResourceGroup(group1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CResourceGroupManager_isResourceGroupInGlobalPool_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isResourceGroupInGlobalPool(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_shutdownAll_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->shutdownAll();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__registerResourceManager_void_EVString_CResourceManager(void *pObjectXXXX, _in const char* resourceType, _in EarthView::World::Graphic::CResourceManager* ref_rm )
			{
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_registerResourceManager(resourceType1, ref_rm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__unregisterResourceManager_void_EVString(void *pObjectXXXX, _in const char* resourceType )
			{
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_unregisterResourceManager(resourceType1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getResourceManagerIterator_ResourceManagerIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator objXXXX = ptrNativeObject->getResourceManagerIterator();
				EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator *pXXXX = new EarthView::World::Graphic::CResourceGroupManager::ResourceManagerIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__registerScriptLoader_void_CScriptLoader(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptLoader* ref_su )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_registerScriptLoader(ref_su);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__unregisterScriptLoader_void_CScriptLoader(void *pObjectXXXX, _in EarthView::World::Graphic::CScriptLoader* su )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_unregisterScriptLoader(su);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CScriptLoader*  _stdcall EarthView_World_Graphic_CResourceGroupManager__findScriptLoader_CScriptLoader_EVString(void *pObjectXXXX, _in const char* pattern )
			{
				EarthView::World::Core::ev_string pattern1 = pattern;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CScriptLoader* objXXXX = ptrNativeObject->_findScriptLoader(pattern1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceManager*  _stdcall EarthView_World_Graphic_CResourceGroupManager__getResourceManager_CResourceManager_EVString(void *pObjectXXXX, _in const char* resourceType )
			{
				EarthView::World::Core::ev_string resourceType1 = resourceType;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceManager* objXXXX = ptrNativeObject->_getResourceManager(resourceType1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyResourceCreated_void_ResourcePtr(void *pObjectXXXX, _inout void* res )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyResourceCreated(*(EarthView::World::Graphic::ResourcePtr*)res);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyResourceRemoved_void_ResourcePtr(void *pObjectXXXX, _inout void* res )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyResourceRemoved(*(EarthView::World::Graphic::ResourcePtr*)res);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyResourceGroupChanged_void_EVString_CResource(void *pObjectXXXX, _in const char* oldGroup, _in EarthView::World::Graphic::CResource* res )
			{
				EarthView::World::Core::ev_string oldGroup1 = oldGroup;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyResourceGroupChanged(oldGroup1, res);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyAllResourcesRemoved_void_CResourceManager(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceManager* manager )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyAllResourcesRemoved(manager);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyWorldGeometryStageStarted_void_EVString(void *pObjectXXXX, _in const char* description )
			{
				EarthView::World::Core::ev_string description1 = description;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyWorldGeometryStageStarted(description1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager__notifyWorldGeometryStageEnded_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->_notifyWorldGeometryStageEnded();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getResourceGroups_StringVector(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getResourceGroups();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getResourceDeclarationList_ResourceDeclarationList_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList objXXXX = ptrNativeObject->getResourceDeclarationList(groupName1);
				EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList *pXXXX = new EarthView::World::Graphic::CResourceGroupManager::ResourceDeclarationList(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getResourceLocationList_LocationList_EVString(void *pObjectXXXX, _in const char* groupName )
			{
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				const EarthView::World::Graphic::CResourceGroupManager::LocationList& objXXXX = ptrNativeObject->getResourceLocationList(groupName1);
				const EarthView::World::Graphic::CResourceGroupManager::LocationList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CResourceGroupManager_setLoadingListener_void_CResourceLoadingListener(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceLoadingListener* ref_listener )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				ptrNativeObject->setLoadingListener(ref_listener);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResourceLoadingListener*  _stdcall EarthView_World_Graphic_CResourceGroupManager_getLoadingListener_CResourceLoadingListener(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CResourceGroupManager* ptrNativeObject = (EarthView::World::Graphic::CResourceGroupManager*) pObjectXXXX;
				EarthView::World::Graphic::CResourceLoadingListener* objXXXX = ptrNativeObject->getLoadingListener();
				return objXXXX;
			}
		}
	}
}
