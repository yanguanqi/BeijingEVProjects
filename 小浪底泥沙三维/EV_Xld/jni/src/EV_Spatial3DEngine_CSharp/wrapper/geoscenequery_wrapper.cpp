/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/geoscenequery.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_RaySceneQueryResultSimple_queryObjIDAndComponent_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::RaySceneQueryResultSimple* ptrNativeObject = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->queryObjIDAndComponent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponent_ev_bool_ev_uint32_ev_uint32_CComponent(void *pObjectXXXX, _in ev_uint32 index, _out ev_uint32& objID, _out void* component )
			{
				EarthView::World::Spatial3D::RaySceneQueryResultSimple* ptrNativeObject = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getComponent(index, objID, *(EarthView::World::Spatial3D::CComponent*)component);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_RaySceneQueryResultSimple_getComponentsSize_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::RaySceneQueryResultSimple* ptrNativeObject = (EarthView::World::Spatial3D::RaySceneQueryResultSimple*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getComponentsSize();
				return objXXXX;
			}
		}
	}
}
