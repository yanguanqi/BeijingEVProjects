/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterrendererfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromStream_IRasterRenderer_CDataStream(_inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = EarthView::World::Spatial2D::Raster::CRasterRendererFactory::createRendererFromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::IRasterRenderer*  _stdcall EarthView_World_Spatial2D_Raster_CRasterRendererFactory_createRendererFromXmlElement_IRasterRenderer_CXmlElement(_inout void* element )
				{
					EarthView::World::Spatial2D::Raster::IRasterRenderer* objXXXX = EarthView::World::Spatial2D::Raster::CRasterRendererFactory::createRendererFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterRendererFactory_destroyRenderer_void_IRasterRenderer(_in EarthView::World::Spatial2D::Raster::IRasterRenderer* pRenderer )
				{
					EarthView::World::Spatial2D::Raster::CRasterRendererFactory::destroyRenderer(pRenderer);
				}
			}
		}
	}
}
