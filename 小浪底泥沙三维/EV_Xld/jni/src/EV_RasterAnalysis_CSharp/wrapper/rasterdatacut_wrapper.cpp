/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasteranalysis/rasterdatacut.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Analyst
			{
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOI_ev_int32_char_char_char(void *pObjectXXXX, _in const char* pszSrcFile, _in const char* pszDstFile, _in const char* pszAOIWKT )
				{
					EarthView::World::Spatial2D::Analyst::CImageCut* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CImageCut*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->ImageCutByAOI(pszSrcFile, pszDstFile, pszAOIWKT);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Analyst_CImageCut_ImageCutByAOIByPolygon_ev_int32_CRasterDataSet_char_CPolygon(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* Dataset, _in const char* pszDstFile, _in EarthView::World::Spatial::Geometry::CPolygon* polygon )
				{
					EarthView::World::Spatial2D::Analyst::CImageCut* ptrNativeObject = (EarthView::World::Spatial2D::Analyst::CImageCut*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->ImageCutByAOIByPolygon(Dataset, pszDstFile, polygon);
					return objXXXX;
				}
			}
		}
	}
}
