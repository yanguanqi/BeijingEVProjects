/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/cmddatabase.h"
namespace EarthView
{
	namespace World
	{
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
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGlobeLayer*  _stdcall EarthView_World_Spatial3D_CCmdDataBase_getLayer_IGlobeLayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				EarthView::World::Spatial3D::Atlas::IGlobeLayer* objXXXX = ptrNativeObject->getLayer();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_CCmdDataBase_getID_ev_uint32(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_CCmdDataBase_getOperType_CommandOperType(void *pObjectXXXX )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				EarthView::World::Spatial3D::CommandOperType objXXXX = ptrNativeObject->getOperType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataBase_setID_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				ptrNativeObject->setID(id);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataBase_setLayer_void_IGlobeLayer(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGlobeLayer* ref_pLayer )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				ptrNativeObject->setLayer(ref_pLayer);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_CCmdDataBase_setOperType_void_CommandOperType(void *pObjectXXXX, _in int operType )
			{
				EarthView::World::Spatial3D::CCmdDataBase* ptrNativeObject = (EarthView::World::Spatial3D::CCmdDataBase*) pObjectXXXX;
				ptrNativeObject->setOperType((EarthView::World::Spatial3D::CommandOperType)operType);
			}
		}
	}
}
