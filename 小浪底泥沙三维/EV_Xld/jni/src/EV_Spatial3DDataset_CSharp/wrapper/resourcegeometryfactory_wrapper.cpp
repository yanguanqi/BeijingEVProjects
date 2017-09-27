/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/resourcegeometryfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceGeometryFactory_getSingletonPtr_CResourceGeometryFactory( )
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* objXXXX = EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CResourceGeometryFactory_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CResourceGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceGeometryFactory_createInstance_CResourceGeometry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CResourceGeometry* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CResourceGeometryFactory_releaseInstance_void_CResourceGeometry(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CResourceGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceGeometryFactory*) pObjectXXXX;
					ptrNativeObject->releaseInstance(geom);
				}
			}
		}
	}
}
