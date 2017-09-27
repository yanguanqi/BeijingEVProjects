/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialframeworkproxy/groupstringinterfacemap.h"
namespace EarthView
{
	namespace World
	{
		namespace FrameWorkProxy
		{
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey( void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->mKey;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mKey( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjectXXXX)->mKey = value1;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall Get_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue( void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*) pObjectXXXX;
				EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->mValue;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_GroupStringinterface_mValue( void *pObjectXXXX, EarthView::World::Core::CStringInterface*  value )
			{
				((EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)pObjectXXXX)->mValue = value;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_back_void_GroupStringinterface(void *pObjectXXXX, _in void* t )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->push_back(*(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_pop_back_void(void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->pop_back();
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_front_GroupStringinterface(void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& objXXXX = ptrNativeObject->front();
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_back_GroupStringinterface(void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& objXXXX = ptrNativeObject->back();
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_insert_void_ev_uint32_GroupStringinterface(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->insert(pos, *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface*)t);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->remove(pos);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_empty_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->empty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_OperatorIndex_GroupStringinterface_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap& objYYYY = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& objXXXX = objYYYY[n];
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_at_GroupStringinterface_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface& objXXXX = ptrNativeObject->at(n);
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap::GroupStringinterface *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_size_ev_size_t(void *pObjectXXXX )
			{
				const EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ev_size_t objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->resize(newSize);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->reserve(count);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_clear_void(void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_push_ev_bool_EVString_CStringInterface(void *pObjectXXXX, _in const char* key, _in const EarthView::World::Core::CStringInterface* val )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->push(key1, val);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_getKeys_StringVector(void *pObjectXXXX )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				EarthView::World::Core::StringVector objXXXX = ptrNativeObject->getKeys();
				EarthView::World::Core::StringVector *pXXXX = new EarthView::World::Core::StringVector(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_exist_ev_bool_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_OperatorIndex_CStringInterface_EVString(void *pObjXXXX, _in const char* key )
			{
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap& objYYYY = *(EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjXXXX;
				EarthView::World::Core::CStringInterface* objXXXX = objYYYY[key];
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Core::CStringInterface*  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_get_CStringInterface_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				EarthView::World::Core::CStringInterface* objXXXX = ptrNativeObject->get(key1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_FrameWorkProxy_CGroupStringinterfaceMap_erase_void_EVString(void *pObjectXXXX, _in const char* key )
			{
				EarthView::World::Core::ev_string key1 = key;
				EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap* ptrNativeObject = (EarthView::World::FrameWorkProxy::CGroupStringinterfaceMap*) pObjectXXXX;
				ptrNativeObject->erase(key1);
			}
		}
	}
}
