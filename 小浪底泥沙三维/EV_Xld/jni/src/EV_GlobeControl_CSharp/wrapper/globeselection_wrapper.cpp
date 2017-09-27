/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/globeselection.h"
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
		namespace Spatial3D
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
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CGlobeSelection_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeSelection_add_ev_bool_IGlobeLayer_ILayerSelection(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_layer, _in EarthView::World::Spatial::Atlas::ILayerSelection* ref_selection )
			{
				EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->add(ref_layer, ref_selection);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeSelection_remove_ev_bool_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
			{
				EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->remove(layer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CGlobeSelection_clear_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				ptrNativeObject->clear();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_CGlobeSelection_exist_ev_bool_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
			{
				const EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->exist(layer);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_CGlobeSelection_get_IGlobeLayer_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->get(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayerSelection*  _stdcall EarthView_World_Spatial3D_CGlobeSelection_get_ILayerSelection_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* layer )
			{
				const EarthView::World::Spatial3D::CGlobeSelection* ptrNativeObject = (EarthView::World::Spatial3D::CGlobeSelection*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayerSelection* objXXXX = ptrNativeObject->get(layer);
				return objXXXX;
			}
		}
	}
}
