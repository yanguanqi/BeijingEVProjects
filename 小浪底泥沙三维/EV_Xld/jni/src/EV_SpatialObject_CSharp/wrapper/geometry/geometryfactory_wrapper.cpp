/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geometryfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::CGeometryFactory*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_getInstance_CGeometryFactory( )
				{
					EarthView::World::Spatial::Geometry::CGeometryFactory* objXXXX = EarthView::World::Spatial::Geometry::CGeometryFactory::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_createEmptyGeometry_IGeometry_EVGeometryType(void *pObjectXXXX, _in int type )
				{
					const EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->createEmptyGeometry((EarthView::World::Spatial::Geometry::EVGeometryType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_createGeometryFromWKB_IGeometry_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->createGeometryFromWKB(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_createGeometryFromWKT_IGeometry_EVString(void *pObjectXXXX, _in char* wkt )
				{
					EarthView::World::Core::ev_string wkt1 = wkt;
					const EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->createGeometryFromWKT(wkt1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_createGeometryFromShapeFileBuffer_IGeometry_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->createGeometryFromShapeFileBuffer(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_createGeometryFromEVGeometryBuffer_IGeometry_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					const EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->createGeometryFromEVGeometryBuffer(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_destroyGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
				{
					EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					ptrNativeObject->destroyGeometry(geom);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeometryFactory_release_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Geometry::CGeometryFactory* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeometryFactory*) pObjectXXXX;
					ptrNativeObject->release();
				}
			}
		}
	}
}
