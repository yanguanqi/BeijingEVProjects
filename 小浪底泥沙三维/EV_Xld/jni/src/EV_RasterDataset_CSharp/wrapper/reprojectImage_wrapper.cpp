/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/reprojectImage.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
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
			namespace Raster
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectImage_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_CProgressInfo(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszSrcWKT, _inout EarthView::World::Spatial2D::Raster::CRasterDataSet* pDstDS, _in const ev_char* pszDstWKT, _in int eResampleMthd, _in ev_real64 dfMaxErro, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::reprojectImage(pSrcDS, pszSrcWKT, pDstDS, pszDstWKT, (EarthView::World::Spatial2D::Raster::EVResampleMethod)eResampleMthd, dfMaxErro, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_DefineProjectImage_ev_bool_CRasterDataSet_ev_char_ev_char_EVDataSetFormat_CProgressInfo(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszDstFilename, _in const ev_char* pszDstWKT, _in int eDatasetFormat, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::DefineProjectImage(pSrcDS, pszDstFilename, pszDstWKT, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)eDatasetFormat, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_ev_char_ev_char_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszSrcWKT, _in const ev_char* pszDstFilename, _in const ev_char* pszDstWKT, _in int eDatasetFormat, _in int eResampleMthd, _in ev_real64 dfMaxErro, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::createAndReprojectImage(pSrcDS, pszSrcWKT, pszDstFilename, pszDstWKT, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)eDatasetFormat, (EarthView::World::Spatial2D::Raster::EVResampleMethod)eResampleMthd, dfMaxErro, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_createAndReprojectImage_ev_bool_CRasterDataSet_CCoordinateTransformation_ev_char_EVDataSetFormat_EVResampleMethod_ev_real64_CProgressInfo(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const EarthView::World::Spatial::Utility::CCoordinateTransformation* ptans, _in const ev_char* pszDstFilename, _in int eDatasetFormat, _in int eResampleMthd, _in ev_real64 dfMaxErro, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::createAndReprojectImage(pSrcDS, ptans, pszDstFilename, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)eDatasetFormat, (EarthView::World::Spatial2D::Raster::EVResampleMethod)eResampleMthd, dfMaxErro, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_reprojectBlock_ev_bool_CRasterDataSet_ev_char_CRasterDataSet_ev_char_EVResampleMethod_ev_real64_ev_uchar_CProgressInfo(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszSrcWKT, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* pDstDS, _in const ev_char* pszDstWKT, _in int eResampleMthd, _in ev_real64 dfMaxErro, _inout ev_uchar* pBuffer, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pProgressArg )
				{
					ev_bool objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::reprojectBlock(pSrcDS, pszSrcWKT, pDstDS, pszDstWKT, (EarthView::World::Spatial2D::Raster::EVResampleMethod)eResampleMthd, dfMaxErro, pBuffer, pProgressArg);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_createDatasetForProj_CRasterDataSet_CRasterDataSet_ev_char_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszSrcWKT, _in const ev_char* pszDstWKT, _in const ev_char* pszDstFilePath, _in ev_int32 iWidth, _in ev_int32 iHeight, _in const EarthView::World::Spatial2D::Raster::CAffineTransform* pAffine )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = EarthView::World::Spatial2D::Raster::CReprojectAlg::createDatasetForProj(pSrcDS, pszSrcWKT, pszDstWKT, pszDstFilePath, iWidth, iHeight, pAffine);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CReprojectAlg_getSuggestedOutput_void_CRasterDataSet_ev_char_ev_char_ev_int32_ev_int32_CAffineTransform(_in const EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDS, _in const ev_char* pszSrcWKT, _in const ev_char* pszDstWKT, _inout ev_int32& iWidth, _inout ev_int32& iheight, _inout void* objAffine )
				{
					EarthView::World::Spatial2D::Raster::CReprojectAlg::getSuggestedOutput(pSrcDS, pszSrcWKT, pszDstWKT, iWidth, iheight, *(EarthView::World::Spatial2D::Raster::CAffineTransform*)objAffine);
				}
			}
		}
	}
}
