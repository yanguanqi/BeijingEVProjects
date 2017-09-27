/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplategeometryfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_getSingletonPtr_CMeshTemplateGeometryFactory( )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory* objXXXX = EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseSingleton_void( )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory::releaseSingleton();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_createInstance_CMeshTemplateGeometry(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* objXXXX = ptrNativeObject->createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateGeometryFactory_releaseInstance_void_CMeshTemplateGeometry(void *pObjectXXXX, _in EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometry* geom )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateGeometryFactory*) pObjectXXXX;
					ptrNativeObject->releaseInstance(geom);
				}
			}
		}
	}
}
