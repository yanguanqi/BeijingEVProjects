/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "geometry3d/geometry3dfactoryenum.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Atlas
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_registerFactory_ev_bool_IGeometry3DFactory(void *pObjectXXXX, _in EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* factory )
				{
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->registerFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::IGeometry3DFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getFactory_IGeometry3DFactory_ev_uint16(void *pObjectXXXX, _in ev_uint16 type )
				{
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum*) pObjectXXXX;
					EarthView::World::Spatial3D::Atlas::IGeometry3DFactory* objXXXX = ptrNativeObject->getFactory(type);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum*  _stdcall EarthView_World_Spatial3D_Atlas_CGeometry3DFactoryEnum_getSingletonPtr_CGeometry3DFactoryEnum( )
				{
					EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum* objXXXX = EarthView::World::Spatial3D::Atlas::CGeometry3DFactoryEnum::getSingletonPtr();
					return objXXXX;
				}
			}
		}
	}
}
