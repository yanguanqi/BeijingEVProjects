/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/entitygeometryfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_getSingletonPtr_CEntityGeometryFactory( )
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory* objXXXX = EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CEntityGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_createInstance_CEntityGeometry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEntityGeometry* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityGeometryFactory_releaseInstance_void_CEntityGeometry(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CEntityGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityGeometryFactory*) pObjectXXXX;
					ptrNativeObject->releaseInstance(geom);
				}
			}
		}
	}
}
