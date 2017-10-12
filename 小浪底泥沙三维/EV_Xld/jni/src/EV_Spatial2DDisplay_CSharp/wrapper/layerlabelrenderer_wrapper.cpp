/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2ddisplay/layerlabelrenderer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
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
			namespace Theme
			{
			}
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
		namespace Spatial2D
		{
			namespace Renderer
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLayerLabelRenderer_startDraw_void_ISpatialDisplay_IFeatureClass_ITheme_EVString(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::GeoDataset::IFeatureClass* fc, _in EarthView::World::Spatial::Theme::ITheme* pTheme, _in const char* filter )
				{
					EarthView::World::Core::ev_string filter1 = filter;
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjectXXXX;
					ptrNativeObject->startDraw(display, fc, pTheme, filter1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Renderer_CLayerLabelRenderer_draw_ev_bool_ILabelProperty(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelProperty* pLabelPorperty )
				{
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->draw(pLabelPorperty);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Renderer_CLayerLabelRenderer_endDraw_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer* ptrNativeObject = (EarthView::World::Spatial2D::Renderer::CLayerLabelRenderer*) pObjectXXXX;
					ptrNativeObject->endDraw();
				}
			}
		}
	}
}
