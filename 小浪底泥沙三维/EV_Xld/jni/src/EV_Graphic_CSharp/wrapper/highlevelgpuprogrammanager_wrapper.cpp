/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/highlevelgpuprogrammanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef char*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback)();
			typedef EarthView::World::Graphic::CHighLevelGpuProgram*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback)(_in EarthView::World::Graphic::CResourceManager* ref_creator, _in char*& name, _in ev_uint64 handle, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback)(_in EarthView::World::Graphic::CHighLevelGpuProgram* prog);
			class CHighLevelGpuProgramFactoryProxy : public EarthView::World::Graphic::CHighLevelGpuProgramFactory
			{
			private:
				EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback;
			public:
				CHighLevelGpuProgramFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CHighLevelGpuProgramFactory(pList)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback = pCallback;
				}
				virtual EVString getLanguage() const
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramFactory::getLanguage();
				}
				virtual EarthView::World::Graphic::CHighLevelGpuProgram* create(_in EarthView::World::Graphic::CResourceManager* ref_creator, _in const EVString& name, _in ev_uint64 handle, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CHighLevelGpuProgram* returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback(ref_creator, name_Char, handle, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramFactory::create(ref_creator, name, handle, group, isManual, ref_loader);
				}
				virtual void destroy(_in EarthView::World::Graphic::CHighLevelGpuProgram* prog)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback(prog);
					}
					else
						return this->CHighLevelGpuProgramFactory::destroy(prog);
				}
			};
			REGISTER_FACTORY_CLASS(CHighLevelGpuProgramFactoryProxy);
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				if (dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::getLanguage();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getLanguage();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramFactoryProxy* ptr = dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_getLanguage_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::getLanguage();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgram*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceManager* ref_creator, _in const char* name, _in ev_uint64 handle, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				if (dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CHighLevelGpuProgram* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::create(ref_creator, name1, handle, group1, isManual, ref_loader);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CHighLevelGpuProgram* objXXXX = ptrNativeObject->create(ref_creator, name1, handle, group1, isManual, ref_loader);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramFactoryProxy* ptr = dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgram*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_create_CHighLevelGpuProgram_CResourceManager_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CResourceManager* ref_creator, _in const char* name, _in ev_uint64 handle, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgram* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::create(ref_creator, name1, handle, group1, isManual, ref_loader);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(void *pObjectXXXX, _in EarthView::World::Graphic::CHighLevelGpuProgram* prog )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				if (dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::destroy(prog);
				else
					ptrNativeObject->destroy(prog);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_Callback* pCallback )
			{
				CHighLevelGpuProgramFactoryProxy* ptr = dynamic_cast<CHighLevelGpuProgramFactoryProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramFactory_destroy_void_CHighLevelGpuProgram_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CHighLevelGpuProgram* prog )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramFactory*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramFactory::destroy(prog);
			}
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback)(_in char*& name, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback)(_in ev_uint64  bytes);
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback)();
			typedef ev_uint64   ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback)(_inout void* r);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupname);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback)(_in ev_bool reloadableOnly);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback)(_in char*& name);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback)(_in char*& name, _in char*& groupName, _in ev_uint16 useCount);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& groupName);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback)(_in char*& name);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback)(_in char*& name);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback)(_in ev_uint64 handle);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback)(_in EarthView::World::Graphic::CResource* res);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback)(_in char*& name, _in char*& group, _in ev_bool isManual);
			typedef void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback)(_in char*& name, _in char*& group);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback)(_in ev_bool v);
			typedef ev_bool  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback)();
			typedef EarthView::World::Graphic::CResource*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback)(_in char*& name, _in ev_uint64 handle, _in char*& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* loader, _in const EarthView::World::Core::CommonStringPairList* createParams);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback)(_inout void* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback)(_inout void* res);
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback)();
			typedef const void*  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback)();
			typedef void  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback)(_inout void* stream, _in char*& groupName);
			typedef Real  ( _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback)();
			class CHighLevelGpuProgramManagerProxy : public EarthView::World::Graphic::CHighLevelGpuProgramManager
			{
			private:
				EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback;
				EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback* m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback;
			public:
				CHighLevelGpuProgramManagerProxy(EarthView::World::Core::CNameValuePairList *pList) : CHighLevelGpuProgramManager(pList)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback = NULL;
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t(EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t(EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t(EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64(EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr(EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64(EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64(EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource(EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource(EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource(EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool(EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr(EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr(EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void(EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector(EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString(EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real(EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback = pCallback;
				}
				virtual EarthView::World::Graphic::CResource* createImpl(_in const EVString& name, _in ev_uint64 handle, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* params)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResource* returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, handle, group_Char, isManual, ref_loader, params);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createImpl(name, handle, group, isManual, ref_loader, params);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::create(name, group, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::create(name, group, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::create(name, group, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr create(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::create(name, group);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback(name_Char, isManual);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createUnmanaged(name, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr createUnmanaged(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createUnmanaged(name);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* createParams)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, createParams);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual, ref_loader, createParams);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group, isManual);
				}
				virtual EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult createOrRetrieve(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult returnValue = *(EarthView::World::Graphic::CResourceManager::ResourceCreateOrRetrieveResult*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::createOrRetrieve(name, group);
				}
				virtual void setMemoryBudget(_in ev_size_t bytes)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback(bytes);
					}
					else
						return this->CHighLevelGpuProgramManager::setMemoryBudget(bytes);
				}
				virtual ev_size_t getMemoryBudget() const
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getMemoryBudget();
				}
				virtual ev_size_t getMemoryUsage() const
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback != NULL && this->isCustomExtend())
					{
						ev_size_t returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getMemoryUsage();
				}
				virtual void unload(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback(name_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::unload(name);
				}
				virtual void unload(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback(handle);
					}
					else
						return this->CHighLevelGpuProgramManager::unload(handle);
				}
				virtual void unloadAll(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CHighLevelGpuProgramManager::unloadAll(reloadableOnly);
				}
				virtual void unloadAll()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::unloadAll();
				}
				virtual void reloadAll(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CHighLevelGpuProgramManager::reloadAll(reloadableOnly);
				}
				virtual void reloadAll()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::reloadAll();
				}
				virtual void unloadUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResources(reloadableOnly);
				}
				virtual void unloadUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResources();
				}
				virtual void reloadUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CHighLevelGpuProgramManager::reloadUnreferencedResources(reloadableOnly);
				}
				virtual void reloadUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::reloadUnreferencedResources();
				}
				virtual void remove(_inout EarthView::World::Graphic::ResourcePtr& r)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback(&r);
					}
					else
						return this->CHighLevelGpuProgramManager::remove(r);
				}
				virtual void remove(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback(name_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::remove(name);
				}
				virtual void remove(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback(handle);
					}
					else
						return this->CHighLevelGpuProgramManager::remove(handle);
				}
				virtual void remove(_in const EVString& name, _in const EVString& groupname)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupname_Char = groupname.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback(name_Char, groupname_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::remove(name, groupname);
				}
				virtual void removeAll()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::removeAll();
				}
				virtual void removeUnreferencedResources(_in ev_bool reloadableOnly)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback(reloadableOnly);
					}
					else
						return this->CHighLevelGpuProgramManager::removeUnreferencedResources(reloadableOnly);
				}
				virtual void removeUnreferencedResources()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::removeUnreferencedResources();
				}
				virtual void removeUnreferencedResource(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback(name_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::removeUnreferencedResource(name);
				}
				virtual void removeUnreferencedResource(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback(name_Char, groupName_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::removeUnreferencedResource(name, groupName);
				}
				virtual void unloadUnreferencedResource(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback(name_Char, groupName_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResource(name, groupName);
				}
				virtual void unloadUnreferencedResource(_in const EVString& name, _in const EVString& groupName, _in ev_uint16 useCount)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback(name_Char, groupName_Char, useCount);
					}
					else
						return this->CHighLevelGpuProgramManager::unloadUnreferencedResource(name, groupName, useCount);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(_in const EVString& name, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* groupName_Char = groupName.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback(name_Char, groupName_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getByName(name, groupName);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByName(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getByName(name);
				}
				virtual EarthView::World::Graphic::ResourcePtr getByHandle(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback(handle);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getByHandle(handle);
				}
				virtual ev_bool resourceExists(_in const EVString& name)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						ev_bool returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback(name_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::resourceExists(name);
				}
				virtual ev_bool resourceExists(_in ev_uint64 handle)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback(handle);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::resourceExists(handle);
				}
				virtual void _notifyResourceTouched(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback(res);
					}
					else
						return this->CHighLevelGpuProgramManager::_notifyResourceTouched(res);
				}
				virtual void _notifyResourceLoaded(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback(res);
					}
					else
						return this->CHighLevelGpuProgramManager::_notifyResourceLoaded(res);
				}
				virtual void _notifyResourceUnloaded(_in EarthView::World::Graphic::CResource* res)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback(res);
					}
					else
						return this->CHighLevelGpuProgramManager::_notifyResourceUnloaded(res);
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback(name_Char, group_Char, isManual, ref_loader, loadParams, backgroundThread);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader, loadParams, backgroundThread);
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, loadParams);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader, loadParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr prepare(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::prepare(name, group, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams, _in ev_bool backgroundThread)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback(name_Char, group_Char, isManual, ref_loader, loadParams, backgroundThread);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader, loadParams, backgroundThread);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* loadParams)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback(name_Char, group_Char, isManual, ref_loader, loadParams);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader, loadParams);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback(name_Char, group_Char, isManual, ref_loader);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::load(name, group, isManual, ref_loader);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group, _in ev_bool isManual)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback(name_Char, group_Char, isManual);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::load(name, group, isManual);
				}
				virtual EarthView::World::Graphic::ResourcePtr load(_in const EVString& name, _in const EVString& group)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						char* group_Char = group.makeBuffer();
						EarthView::World::Graphic::ResourcePtr returnValue = *(EarthView::World::Graphic::ResourcePtr*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback(name_Char, group_Char);
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::load(name, group);
				}
				virtual const EarthView::World::Core::StringVector& getScriptPatterns() const
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Core::StringVector& returnValue = *(EarthView::World::Core::StringVector*)m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getScriptPatterns();
				}
				virtual void parseScript(_inout EarthView::World::Core::DataStreamPtr& stream, _in const EVString& groupName)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* groupName_Char = groupName.makeBuffer();
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback(&stream, groupName_Char);
					}
					else
						return this->CHighLevelGpuProgramManager::parseScript(stream, groupName);
				}
				virtual Real getLoadingOrder() const
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback != NULL && this->isCustomExtend())
					{
						Real returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getLoadingOrder();
				}
				virtual void setVerbose(_in ev_bool v)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback(v);
					}
					else
						return this->CHighLevelGpuProgramManager::setVerbose(v);
				}
				virtual ev_bool getVerbose()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CHighLevelGpuProgramManager::getVerbose();
				}
				virtual void addImpl(_inout EarthView::World::Graphic::ResourcePtr& res)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback(&res);
					}
					else
						return this->CHighLevelGpuProgramManager::addImpl(res);
				}
				virtual void removeImpl(_inout EarthView::World::Graphic::ResourcePtr& res)
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback(&res);
					}
					else
						return this->CHighLevelGpuProgramManager::removeImpl(res);
				}
				virtual void checkUsage()
				{
					if(m_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback();
					}
					else
						return this->CHighLevelGpuProgramManager::checkUsage();
				}
			};
			REGISTER_FACTORY_CLASS(CHighLevelGpuProgramManagerProxy);
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingleton_CHighLevelGpuProgramManager( )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager& objXXXX = EarthView::World::Graphic::CHighLevelGpuProgramManager::getSingleton();
				EarthView::World::Graphic::CHighLevelGpuProgramManager *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramManager*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_getSingletonPtr_CHighLevelGpuProgramManager( )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager* objXXXX = EarthView::World::Graphic::CHighLevelGpuProgramManager::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_push_ev_bool_EVString_CHighLevelGpuProgramFactory(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CHighLevelGpuProgramFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_OperatorIndex_CHighLevelGpuProgramFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap& objYYYY = *(EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_get_CHighLevelGpuProgramFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_GpuProgramFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::GpuProgramFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->first;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_first( void *pObjectXXXX, ev_uint16  value )
			{
				((EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjectXXXX)->first = value;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory*  _stdcall Get_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryPair_second( void *pObjectXXXX, EarthView::World::Graphic::CHighLevelGpuProgramFactory*  value )
			{
				((EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValue_CHighLevelGpuProgramFactory(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory**  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_nextValuePtr_CHighLevelGpuProgramFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CHighLevelGpuProgramFactory*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_next_CHighLevelGpuProgramFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramFactory* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getBegin_CHighLevelGpuProgramFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getEnd_CHighLevelGpuProgramFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_CHighLevelGpuProgramFactoryIterator_getCurrent_CHighLevelGpuProgramFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CHighLevelGpuProgramManager::CHighLevelGpuProgramFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResource*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in ev_uint64 handle, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				if (dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*)ptrNativeObject) != NULL)
				{
					EarthView::World::Graphic::CResource* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramManager::createImpl(name1, handle, group1, isManual, ref_loader, params);
					return objXXXX;
				}
				else
				{
					EarthView::World::Graphic::CResource* objXXXX = ptrNativeObject->createImpl(name1, handle, group1, isManual, ref_loader, params);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CResource*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createImpl_CResource_EVString_ev_uint64_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_NoVirtual(void *pObjectXXXX, _in const char* name, _in ev_uint64 handle, _in const char* group, _in ev_bool isManual, _in EarthView::World::Graphic::CManualResourceLoader* ref_loader, _in const EarthView::World::Core::CommonStringPairList* params )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string group1 = group;
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				EarthView::World::Graphic::CResource* objXXXX = ptrNativeObject->EarthView::World::Graphic::CHighLevelGpuProgramManager::createImpl(name1, handle, group1, isManual, ref_loader, params);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_addFactory_void_CHighLevelGpuProgramFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CHighLevelGpuProgramFactory* ref_factory )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				ptrNativeObject->addFactory(ref_factory);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_removeFactory_void_CHighLevelGpuProgramFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CHighLevelGpuProgramFactory* factory )
			{
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				ptrNativeObject->removeFactory(factory);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_isLanguageSupported_ev_bool_EVString(void *pObjectXXXX, _in const char* lang )
			{
				EarthView::World::Core::ev_string lang1 = lang;
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isLanguageSupported(lang1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CHighLevelGpuProgramManager_createProgram_CHighLevelGpuProgramPtr_EVString_EVString_EVString_GpuProgramType(void *pObjectXXXX, _in const char* name, _in const char* groupName, _in const char* language, _in int gptype )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string language1 = language;
				EarthView::World::Graphic::CHighLevelGpuProgramManager* ptrNativeObject = (EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX;
				EarthView::World::Graphic::CHighLevelGpuProgramPtr objXXXX = ptrNativeObject->createProgram(name1, groupName1, language1, (EarthView::World::Graphic::GpuProgramType)gptype);
				EarthView::World::Graphic::CHighLevelGpuProgramPtr *pXXXX = new EarthView::World::Graphic::CHighLevelGpuProgramPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_create_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createUnmanaged_ResourcePtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_createOrRetrieve_ResourceCreateOrRetrieveResult_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setMemoryBudget_void_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryBudget_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getMemoryUsage_ev_size_t(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unload_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_reloadUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_remove_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeAll_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResources_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeUnreferencedResource_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_unloadUnreferencedResource_void_EVString_EVString_ev_uint16(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByName_ResourcePtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getByHandle_ResourcePtr_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_resourceExists_ev_bool_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceTouched_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceLoaded_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager__notifyResourceUnloaded_void_CResource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_prepare_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_CommonStringPairList(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_CManualResourceLoader(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_load_ResourcePtr_EVString_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_setVerbose_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getVerbose_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_addImpl_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_removeImpl_void_ResourcePtr(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_checkUsage_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getScriptPatterns_StringVector(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_parseScript_void_DataStreamPtr_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real( void *pObjectXXXX, EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real_Callback* pCallback )
			{
				CHighLevelGpuProgramManagerProxy* ptr = dynamic_cast<CHighLevelGpuProgramManagerProxy*>((EarthView::World::Graphic::CHighLevelGpuProgramManager*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CHighLevelGpuProgramManager_getLoadingOrder_Real(pCallback);
				}
			}
		}
	}
}
