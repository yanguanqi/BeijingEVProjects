/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/geometryrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_startDraw_void_ISpatialDisplay_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* ref_display, _in const EarthView::World::Spatial::Display::ISymbol* ref_pSymbol )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->startDraw(ref_display, ref_pSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->drawGeometry(pGeometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_drawEditingGeometry_void_IGeometry_ISymbol(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry, _in const EarthView::World::Spatial::Display::ISymbol* pVertexSymbol )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->drawEditingGeometry(pGeometry, pVertexSymbol);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_drawGeometryCenter_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* pGeometry )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->drawGeometryCenter(pGeometry);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CGeometryRenderer_drawEnvelope_void_IEnvelope_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CGeometryRenderer* ptrNativeObject = (EarthView::World::Spatial::Display::CGeometryRenderer*) pObjectXXXX;
					ptrNativeObject->drawEnvelope(pEnvelope, pSymbol);
				}
			}
		}
	}
}
