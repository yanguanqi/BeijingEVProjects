/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2datlas/mapset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_getMapCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getMapCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Atlas::CMap*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_getMap_CMap_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					EarthView::World::Spatial2D::Atlas::CMap* objXXXX = ptrNativeObject->getMap(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_add_ev_bool_CMap(void *pObjectXXXX, _in EarthView::World::Spatial2D::Atlas::CMap* ref_map )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->add(ref_map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_insert_ev_bool_ev_uint32_CMap(void *pObjectXXXX, _in ev_uint32 index, _in EarthView::World::Spatial2D::Atlas::CMap* ref_map )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->insert(index, ref_map);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_remove_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->remove(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_removeAll_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ptrNativeObject->removeAll();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_move_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 oldIndex, _in ev_uint32 newIndex )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->move(oldIndex, newIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_getCurrentMapIndex_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCurrentMapIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_setCurrentMapIndex_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ptrNativeObject->setCurrentMapIndex(index);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_load_void_CDataStream(void *pObjectXXXX, _in void* stream )
				{
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ptrNativeObject->load(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_load_void_EVString(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ptrNativeObject->load(xml1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_toStream_void_CDataStream(void *pObjectXXXX, _out void* stream )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					ptrNativeObject->toStream(*(EarthView::World::Core::CDataStream*)stream);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Atlas_CMapSet_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CMapSet* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CMapSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->toXML();
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
