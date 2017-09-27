/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/root.h"
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
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_registerRenderSystemThread_void_CDefaultWorkQueue(_in EarthView::World::Core::CDefaultWorkQueue* workQueue )
			{
				EarthView::World::Graphic::CRenderSystemThread::registerRenderSystemThread(workQueue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_preExtraThreadsStarted_void( )
			{
				EarthView::World::Graphic::CRenderSystemThread::preExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_postExtraThreadsStarted_void( )
			{
				EarthView::World::Graphic::CRenderSystemThread::postExtraThreadsStarted();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_registerThread_void( )
			{
				EarthView::World::Graphic::CRenderSystemThread::registerThread();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_unregisterThread_void( )
			{
				EarthView::World::Graphic::CRenderSystemThread::unregisterThread();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRenderSystemThread_flushRenderSystem_void( )
			{
				EarthView::World::Graphic::CRenderSystemThread::flushRenderSystem();
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_push_back_void_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem*& ref_t )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_RenderSystemList_front_CRenderSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_RenderSystemList_back_CRenderSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_insert_void_ev_uint32_CRenderSystem(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Graphic::CRenderSystem*& ref_t )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_RenderSystemList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_RenderSystemList_OperatorIndex_CRenderSystem_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderSystemList& objYYYY = *(EarthView::World::Graphic::RenderSystemList*) pObjXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_RenderSystemList_at_CRenderSystem_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_RenderSystemList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_RenderSystemList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::RenderSystemList* ptrNativeObject = (EarthView::World::Graphic::RenderSystemList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_push_back_void_CDynLib(void *pObjectXXXX, _in EarthView::World::Core::CDynLib*& ref_t )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLib*  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_front_CDynLib(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				EarthView::World::Core::CDynLib* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLib*  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_back_CDynLib(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				EarthView::World::Core::CDynLib* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_insert_void_ev_uint32_CDynLib(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Core::CDynLib*& ref_t )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLib*  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_OperatorIndex_CDynLib_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CRoot::PluginLibList& objYYYY = *(EarthView::World::Graphic::CRoot::PluginLibList*) pObjXXXX;
				EarthView::World::Core::CDynLib* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CDynLib*  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_at_CDynLib_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				EarthView::World::Core::CDynLib* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRoot_PluginLibList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginLibList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginLibList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginLibList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_push_back_void_CPlugin(void *pObjectXXXX, _in EarthView::World::Core::CPlugin*& ref_t )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->push_back(ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CPlugin*  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_front_CPlugin(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				EarthView::World::Core::CPlugin* objXXXX = ptrNativeObject->front();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CPlugin*  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_back_CPlugin(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				EarthView::World::Core::CPlugin* objXXXX = ptrNativeObject->back();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_insert_void_ev_uint32_CPlugin(void *pObjectXXXX, _in ev_uint32 pos, _in EarthView::World::Core::CPlugin*& ref_t )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->insert(pos, ref_t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CPlugin*  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_OperatorIndex_CPlugin_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList& objYYYY = *(EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjXXXX;
				EarthView::World::Core::CPlugin* objXXXX = objYYYY[n];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CPlugin*  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_at_CPlugin_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				EarthView::World::Core::CPlugin* objXXXX = ptrNativeObject->at(n);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_PluginInstanceList_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::PluginInstanceList* ptrNativeObject = (EarthView::World::Graphic::CRoot::PluginInstanceList*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_push_ev_bool_EVString_CMovableObjectFactory(void *pObjectXXXX, _in const char* key, _in EarthView::World::Graphic::CMovableObjectFactory*& ref_val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, ref_val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_OperatorIndex_CMovableObjectFactory_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap& objYYYY = *(EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_get_CMovableObjectFactory_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryMap* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_saveConfig_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->saveConfig();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_saveConfigWithActiveRenderSystem_void_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem* ref_system )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->saveConfigWithActiveRenderSystem(ref_system);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_restoreConfig_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->restoreConfig();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_showConfigDialog_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->showConfigDialog();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addRenderSystem_void_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem* ref_newRend )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addRenderSystem(ref_newRend);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRoot_getAvailableRenderers_RenderSystemList(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				const EarthView::World::Graphic::RenderSystemList& objXXXX = ptrNativeObject->getAvailableRenderers();
				const EarthView::World::Graphic::RenderSystemList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_CRoot_getRenderSystemByName_CRenderSystem_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = ptrNativeObject->getRenderSystemByName(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setRenderSystem_void_CRenderSystem(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystem* ref_system )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setRenderSystem(ref_system);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderSystem*  _stdcall EarthView_World_Graphic_CRoot_getRenderSystem_CRenderSystem(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderSystem* objXXXX = ptrNativeObject->getRenderSystem();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_initialise_CRenderWindow_ev_bool_EVString_EVString(void *pObjectXXXX, _in ev_bool autoCreateWindow, _in const char* windowTitle, _in const char* customCapabilitiesConfig )
			{
				EarthView::World::Core::ev_string windowTitle1 = windowTitle;
				EarthView::World::Core::ev_string customCapabilitiesConfig1 = customCapabilitiesConfig;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->initialise(autoCreateWindow, windowTitle1, customCapabilitiesConfig1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_initialise_CRenderWindow_ev_bool_EVString(void *pObjectXXXX, _in ev_bool autoCreateWindow, _in const char* windowTitle )
			{
				EarthView::World::Core::ev_string windowTitle1 = windowTitle;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->initialise(autoCreateWindow, windowTitle1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_initialise_CRenderWindow_ev_bool(void *pObjectXXXX, _in ev_bool autoCreateWindow )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->initialise(autoCreateWindow);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_isInitialised_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isInitialised();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_useCustomRenderSystemCapabilities_void_CRenderSystemCapabilities(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderSystemCapabilities* ref_capabilities )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->useCustomRenderSystemCapabilities(ref_capabilities);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_getRemoveRenderQueueStructuresOnClear_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getRemoveRenderQueueStructuresOnClear();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setRemoveRenderQueueStructuresOnClear_void_ev_bool(void *pObjectXXXX, _in ev_bool r )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setRemoveRenderQueueStructuresOnClear(r);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_addSceneManagerFactory_ev_bool_CSceneManagerFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManagerFactory* ref_fact )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->addSceneManagerFactory(ref_fact);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_removeSceneManagerFactory_ev_bool_CSceneManagerFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManagerFactory* fact )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->removeSceneManagerFactory(fact);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Graphic::SceneManagerMetaData*  _stdcall EarthView_World_Graphic_CRoot_getSceneManagerMetaData_SceneManagerMetaData_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				const EarthView::World::Graphic::SceneManagerMetaData* objXXXX = ptrNativeObject->getSceneManagerMetaData(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_getSceneManagerMetaDataIterator_MetaDataIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator objXXXX = ptrNativeObject->getSceneManagerMetaDataIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator *pXXXX = new EarthView::World::Graphic::CSceneManagerEnumerator::MetaDataIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot_createSceneManager_CSceneManager_EVString_EVString(void *pObjectXXXX, _in const char* typeName, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeName1, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot_createSceneManager_CSceneManager_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot_createSceneManager_CSceneManager_ev_uint16_EVString(void *pObjectXXXX, _in ev_uint16 typeMask, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeMask, instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot_createSceneManager_CSceneManager_ev_uint16(void *pObjectXXXX, _in ev_uint16 typeMask )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->createSceneManager(typeMask);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_renameSceneManager_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* oldName, _in const char* newName )
			{
				EarthView::World::Core::ev_string oldName1 = oldName;
				EarthView::World::Core::ev_string newName1 = newName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renameSceneManager(oldName1, newName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_destroySceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->destroySceneManager(sm);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot_getSceneManager_CSceneManager_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->getSceneManager(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_hasSceneManager_ev_bool_EVString(void *pObjectXXXX, _in const char* instanceName )
			{
				EarthView::World::Core::ev_string instanceName1 = instanceName;
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasSceneManager(instanceName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_getSceneManagerIterator_SceneManagerIterator(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator objXXXX = ptrNativeObject->getSceneManagerIterator();
				EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator *pXXXX = new EarthView::World::Graphic::CSceneManagerEnumerator::SceneManagerIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureManager*  _stdcall EarthView_World_Graphic_CRoot_getTextureManager_CTextureManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CTextureManager* objXXXX = ptrNativeObject->getTextureManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMeshManager*  _stdcall EarthView_World_Graphic_CRoot_getMeshManager_CMeshManager(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CMeshManager* objXXXX = ptrNativeObject->getMeshManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Graphic_CRoot_getErrorDescription_EVString_ev_int32(void *pObjectXXXX, _in ev_int32 errorNumber )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getErrorDescription(errorNumber);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addFrameListener_void_CFrameListener(void *pObjectXXXX, _in EarthView::World::Graphic::CFrameListener* ref_newListener )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addFrameListener(ref_newListener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_removeFrameListener_void_CFrameListener(void *pObjectXXXX, _in EarthView::World::Graphic::CFrameListener* oldListener )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->removeFrameListener(oldListener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_queueEndRendering_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->queueEndRendering();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_startRendering_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->startRendering();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_renderOneFrame_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renderOneFrame();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_renderOneFrame_ev_bool_Real(void *pObjectXXXX, _in Real timeSinceLastFrame )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->renderOneFrame(timeSinceLastFrame);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_shutdown_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->shutdown();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addResourceLocation_void_EVString_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* groupName, _in ev_bool recursive )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1, groupName1, recursive);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addResourceLocation_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addResourceLocation_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* locType )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string locType1 = locType;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addResourceLocation(name1, locType1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_removeResourceLocation_void_EVString_EVString(void *pObjectXXXX, _in const char* name, _in const char* groupName )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->removeResourceLocation(name1, groupName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_removeResourceLocation_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->removeResourceLocation(name1);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_createFileStream_DataStreamPtr_EVString_EVString_ev_bool_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in ev_bool overwrite, _in const char* locationPattern )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string locationPattern1 = locationPattern;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createFileStream(filename1, groupName1, overwrite, locationPattern1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_createFileStream_DataStreamPtr_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in ev_bool overwrite )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createFileStream(filename1, groupName1, overwrite);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_createFileStream_DataStreamPtr_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createFileStream(filename1, groupName1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_createFileStream_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->createFileStream(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_openFileStream_DataStreamPtr_EVString_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName, _in const char* locationPattern )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Core::ev_string locationPattern1 = locationPattern;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openFileStream(filename1, groupName1, locationPattern1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_openFileStream_DataStreamPtr_EVString_EVString(void *pObjectXXXX, _in const char* filename, _in const char* groupName )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Core::ev_string groupName1 = groupName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openFileStream(filename1, groupName1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_openFileStream_DataStreamPtr_EVString(void *pObjectXXXX, _in const char* filename )
			{
				EarthView::World::Core::ev_string filename1 = filename;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::DataStreamPtr objXXXX = ptrNativeObject->openFileStream(filename1);
				EarthView::World::Core::DataStreamPtr *pXXXX = new EarthView::World::Core::DataStreamPtr(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_convertColourValue_void_CColourValue_ev_uint32(void *pObjectXXXX, _in const void* colour, _in ev_uint32* pDest )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->convertColourValue(*(EarthView::World::Graphic::CColourValue*)colour, pDest);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_toColourValue_void_ev_uint32_CColourValue(void *pObjectXXXX, _in ev_uint32 srcColor, _inout void* colour )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->toColourValue(srcColor, *(EarthView::World::Graphic::CColourValue*)colour);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_getAutoCreatedWindow_CRenderWindow(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->getAutoCreatedWindow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool_CommonStringPairList(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen, _in const EarthView::World::Core::CommonStringPairList* miscParams )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->createRenderWindow(name1, width, height, fullScreen, miscParams);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderWindow*  _stdcall EarthView_World_Graphic_CRoot_createRenderWindow_CRenderWindow_EVString_ev_uint32_ev_uint32_ev_bool(void *pObjectXXXX, _in const char* name, _in ev_uint32 width, _in ev_uint32 height, _in ev_bool fullScreen )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderWindow* objXXXX = ptrNativeObject->createRenderWindow(name1, width, height, fullScreen);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_createRenderWindows_ev_bool_RenderWindowDescriptionList_RenderWindowList(void *pObjectXXXX, _in const void* renderWindowDescriptions, _inout void* createdWindows )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->createRenderWindows(*(EarthView::World::Graphic::RenderWindowDescriptionList*)renderWindowDescriptions, *(EarthView::World::Graphic::RenderWindowList*)createdWindows);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRoot_detachRenderTarget_CRenderTarget_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* pWin )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->detachRenderTarget(pWin);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRoot_detachRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->detachRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_destroyRenderTarget_void_CRenderTarget(void *pObjectXXXX, _in EarthView::World::Graphic::CRenderTarget* target )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->destroyRenderTarget(target);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_destroyRenderTarget_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->destroyRenderTarget(name1);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderTarget*  _stdcall EarthView_World_Graphic_CRoot_getRenderTarget_CRenderTarget_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderTarget* objXXXX = ptrNativeObject->getRenderTarget(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_loadPlugin_void_EVString(void *pObjectXXXX, _in const char* pluginName )
			{
				EarthView::World::Core::ev_string pluginName1 = pluginName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->loadPlugin(pluginName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_unloadPlugin_void_EVString(void *pObjectXXXX, _in const char* pluginName )
			{
				EarthView::World::Core::ev_string pluginName1 = pluginName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->unloadPlugin(pluginName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_installPlugin_void_CPlugin(void *pObjectXXXX, _in EarthView::World::Core::CPlugin* ref_plugin )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->installPlugin(ref_plugin);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_uninstallPlugin_void_CPlugin(void *pObjectXXXX, _in EarthView::World::Core::CPlugin* plugin )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->uninstallPlugin(plugin);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRoot_getInstalledPlugins_PluginInstanceList(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				const EarthView::World::Graphic::CRoot::PluginInstanceList& objXXXX = ptrNativeObject->getInstalledPlugins();
				const EarthView::World::Graphic::CRoot::PluginInstanceList *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameStarted_ev_bool_FrameEvent(void *pObjectXXXX, _inout EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameStarted(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameStarted_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameStarted();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameRenderingQueued_ev_bool_FrameEvent(void *pObjectXXXX, _inout EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameRenderingQueued(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameRenderingQueued_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameRenderingQueued();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameEnded_ev_bool_FrameEvent(void *pObjectXXXX, _inout EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameEnded(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__fireFrameEnded_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_fireFrameEnded();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRoot_getNextFrameNumber_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getNextFrameNumber();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CSceneManager*  _stdcall EarthView_World_Graphic_CRoot__getCurrentSceneManager_CSceneManager(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CSceneManager* objXXXX = ptrNativeObject->_getCurrentSceneManager();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot__pushCurrentSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* ref_sm )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->_pushCurrentSceneManager(ref_sm);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot__popCurrentSceneManager_void_CSceneManager(void *pObjectXXXX, _in EarthView::World::Graphic::CSceneManager* sm )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->_popCurrentSceneManager(sm);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__updateAllRenderTargets_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_updateAllRenderTargets();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot__updateAllRenderTargets_ev_bool_FrameEvent(void *pObjectXXXX, _inout EarthView::World::Graphic::FrameEvent& evt )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->_updateAllRenderTargets(evt);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocationSequence*  _stdcall EarthView_World_Graphic_CRoot_createRenderQueueInvocationSequence_CRenderQueueInvocationSequence_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* objXXXX = ptrNativeObject->createRenderQueueInvocationSequence(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRenderQueueInvocationSequence*  _stdcall EarthView_World_Graphic_CRoot_getRenderQueueInvocationSequence_CRenderQueueInvocationSequence_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRenderQueueInvocationSequence* objXXXX = ptrNativeObject->getRenderQueueInvocationSequence(name1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_destroyRenderQueueInvocationSequence_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->destroyRenderQueueInvocationSequence(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_destroyAllRenderQueueInvocationSequences_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->destroyAllRenderQueueInvocationSequences();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_getSingleton_CRoot( )
			{
				EarthView::World::Graphic::CRoot& objXXXX = EarthView::World::Graphic::CRoot::getSingleton();
				EarthView::World::Graphic::CRoot *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CRoot*  _stdcall EarthView_World_Graphic_CRoot_getSingletonPtr_CRoot( )
			{
				EarthView::World::Graphic::CRoot* objXXXX = EarthView::World::Graphic::CRoot::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_getLicServer_void_EVString_ev_uint16(_inout char*& ip, _inout ev_uint16& port )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Graphic::CRoot::getLicServer(ip1, port);
				ip=ip1.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setLicServer_void_EVString_ev_uint16(_in const char* ip, _in ev_uint16 port )
			{
				EarthView::World::Core::ev_string ip1 = ip;
				EarthView::World::Graphic::CRoot::setLicServer(ip1, port);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRoot_checkLic_EVLicenseStatusType( )
			{
				EarthView::World::License::EVLicenseStatusType objXXXX = EarthView::World::Graphic::CRoot::checkLic();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRoot_checkRuntimeLic_EVLicenseStatusType( )
			{
				EarthView::World::License::EVLicenseStatusType objXXXX = EarthView::World::Graphic::CRoot::checkRuntimeLic();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRoot_checkDevelopeLic_EVLicenseStatusType( )
			{
				EarthView::World::License::EVLicenseStatusType objXXXX = EarthView::World::Graphic::CRoot::checkDevelopeLic();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CRoot_checkDesktopLic_EVLicenseStatusType( )
			{
				EarthView::World::License::EVLicenseStatusType objXXXX = EarthView::World::Graphic::CRoot::checkDesktopLic();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_clearEventTimes_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->clearEventTimes();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setFrameSmoothingPeriod_void_Real(void *pObjectXXXX, _in Real period )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setFrameSmoothingPeriod(period);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRoot_getFrameSmoothingPeriod_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getFrameSmoothingPeriod();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addMovableObjectFactory_void_CMovableObjectFactory_ev_bool(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObjectFactory* ref_fact, _in ev_bool overrideExisting )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addMovableObjectFactory(ref_fact, overrideExisting);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_addMovableObjectFactory_void_CMovableObjectFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObjectFactory* ref_fact )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->addMovableObjectFactory(ref_fact);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_removeMovableObjectFactory_void_CMovableObjectFactory(void *pObjectXXXX, _in EarthView::World::Graphic::CMovableObjectFactory* fact )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->removeMovableObjectFactory(fact);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_hasMovableObjectFactory_ev_bool_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMovableObjectFactory(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall EarthView_World_Graphic_CRoot_getMovableObjectFactory_CMovableObjectFactory_EVString(void *pObjectXXXX, _in const char* typeName )
			{
				EarthView::World::Core::ev_string typeName1 = typeName;
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = ptrNativeObject->getMovableObjectFactory(typeName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRoot__allocateNextMovableObjectTypeFlag_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->_allocateNextMovableObjectTypeFlag();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Graphic_CRoot_MovableObjectFactoryPair_first( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->first;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRoot_MovableObjectFactoryPair_first( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjectXXXX)->first = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall Get_EarthView_World_Graphic_CRoot_MovableObjectFactoryPair_second( void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryPair* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = ptrNativeObject->second;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Graphic_CRoot_MovableObjectFactoryPair_second( void *pObjectXXXX, EarthView::World::Graphic::CMovableObjectFactory*  value )
			{
				((EarthView::World::Graphic::CRoot::MovableObjectFactoryPair*)pObjectXXXX)->second = value;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_hasMoreElements_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasMoreElements();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_moveNext_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				ptrNativeObject->moveNext();
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_nextKey_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->nextKey();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_nextValue_CMovableObjectFactory(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = ptrNativeObject->nextValue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory**  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_nextValuePtr_CMovableObjectFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory** objXXXX = ptrNativeObject->nextValuePtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CMovableObjectFactory*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_next_CMovableObjectFactory(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				EarthView::World::Graphic::CMovableObjectFactory* objXXXX = ptrNativeObject->next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_getBegin_MovableObjectFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& objXXXX = ptrNativeObject->getBegin();
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_getEnd_MovableObjectFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& objXXXX = ptrNativeObject->getEnd();
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CRoot_MovableObjectFactoryIterator_getCurrent_MovableObjectFactoryPair(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator* ptrNativeObject = (EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator*) pObjectXXXX;
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair& objXXXX = ptrNativeObject->getCurrent();
				const EarthView::World::Graphic::CRoot::MovableObjectFactoryPair *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CRoot_getMovableObjectFactoryIterator_MovableObjectFactoryIterator(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator objXXXX = ptrNativeObject->getMovableObjectFactoryIterator();
				EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator *pXXXX = new EarthView::World::Graphic::CRoot::MovableObjectFactoryIterator(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CRoot_getDisplayMonitorCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getDisplayMonitorCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CWorkQueue*  _stdcall EarthView_World_Graphic_CRoot_getWorkQueue_CWorkQueue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				EarthView::World::Core::CWorkQueue* objXXXX = ptrNativeObject->getWorkQueue();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setWorkQueue_void_CWorkQueue_bool(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue* ref_queue, _in bool forceStart )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setWorkQueue(ref_queue, forceStart);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setWorkQueue_void_CWorkQueue(void *pObjectXXXX, _in EarthView::World::Core::CWorkQueue* ref_queue )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setWorkQueue(ref_queue);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setBlendIndicesGpuRedundant_void_ev_bool(void *pObjectXXXX, _in ev_bool redundant )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setBlendIndicesGpuRedundant(redundant);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_isBlendIndicesGpuRedundant_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBlendIndicesGpuRedundant();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setBlendWeightsGpuRedundantev__void_bool(void *pObjectXXXX, _in bool redundant )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setBlendWeightsGpuRedundantev_(redundant);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CRoot_isBlendWeightsGpuRedundant_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBlendWeightsGpuRedundant();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CRoot_setDefaultMinPixelSize_void_Real(void *pObjectXXXX, _in Real pixelSize )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				ptrNativeObject->setDefaultMinPixelSize(pixelSize);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CRoot_getDefaultMinPixelSize_Real(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CRoot* ptrNativeObject = (EarthView::World::Graphic::CRoot*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getDefaultMinPixelSize();
				return objXXXX;
			}
		}
	}
}
