/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialobject/geometry/geodesicmeasure.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
				typedef ev_real64  ( _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback)(_in ev_real64 longitude1, _in ev_real64 latitude1, _in ev_real64 longitude2, _in ev_real64 latitude2, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback)(_in EarthView::World::Spatial::Geometry::CPolyline* polyline, _inout ev_real64& distance);
				typedef void  ( _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback)(_in EarthView::World::Spatial::Geometry::CPolygon* polygon, _inout ev_real64& area, _inout ev_real64& periMeter);
				class CGeodesicMeasureProxy : public EarthView::World::Spatial::Geometry::CGeodesicMeasure
				{
				private:
					EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback* m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback;
					EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback;
					EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback;
				public:
					CGeodesicMeasureProxy(EarthView::World::Core::CNameValuePairList *pList) : CGeodesicMeasure(pList)
					{
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback = pCallback;
					}
					virtual ev_real64 distanceMeasure(_in ev_real64 longitude1, _in ev_real64 latitude1, _in ev_real64 longitude2, _in ev_real64 latitude2, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_real64 returnValue = m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback(longitude1, latitude1, longitude2, latitude2, polyline, count);
							return returnValue;
						}
						else
							return this->CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
					}
					virtual void polylineMeasure(_in EarthView::World::Spatial::Geometry::CPolyline* polyline, _inout ev_real64& distance)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback(polyline, distance);
						}
						else
							return this->CGeodesicMeasure::polylineMeasure(polyline, distance);
					}
					virtual void polygonMeasure(_in EarthView::World::Spatial::Geometry::CPolygon* polygon, _inout ev_real64& area, _inout ev_real64& periMeter)
					{
						if(m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback(polygon, area, periMeter);
						}
						else
							return this->CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
					}
				};
				REGISTER_FACTORY_CLASS(CGeodesicMeasureProxy);
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(void *pObjectXXXX, _in ev_real64 longitude1, _in ev_real64 latitude1, _in ev_real64 longitude2, _in ev_real64 latitude2, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					if (dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*)ptrNativeObject) != NULL)
					{
						ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
						return objXXXX;
					}
					else
					{
						ev_real64 objXXXX = ptrNativeObject->distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_Callback* pCallback )
				{
					CGeodesicMeasureProxy* ptr = dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_distanceMeasure_ev_real64_ev_real64_ev_real64_ev_real64_ev_real64_CPolyline_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_real64 longitude1, _in ev_real64 latitude1, _in ev_real64 longitude2, _in ev_real64 latitude2, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::distanceMeasure(longitude1, latitude1, longitude2, latitude2, polyline, count);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _inout ev_real64& distance )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					if (dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polylineMeasure(polyline, distance);
					else
						ptrNativeObject->polylineMeasure(polyline, distance);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_Callback* pCallback )
				{
					CGeodesicMeasureProxy* ptr = dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polylineMeasure_void_CPolyline_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolyline* polyline, _inout ev_real64& distance )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polylineMeasure(polyline, distance);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolygon* polygon, _inout ev_real64& area, _inout ev_real64& periMeter )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					if (dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
					else
						ptrNativeObject->polygonMeasure(polygon, area, periMeter);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_Callback* pCallback )
				{
					CGeodesicMeasureProxy* ptr = dynamic_cast<CGeodesicMeasureProxy*>((EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Geometry_CGeodesicMeasure_polygonMeasure_void_CPolygon_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::CPolygon* polygon, _inout ev_real64& area, _inout ev_real64& periMeter )
				{
					EarthView::World::Spatial::Geometry::CGeodesicMeasure* ptrNativeObject = (EarthView::World::Spatial::Geometry::CGeodesicMeasure*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Geometry::CGeodesicMeasure::polygonMeasure(polygon, area, periMeter);
				}
			}
		}
	}
}
