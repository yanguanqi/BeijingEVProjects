/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasteraccessor.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_getDataSourceType_EVDataSourceType(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDataSourceType objXXXX = ptrNativeObject->getDataSourceType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString(void *pObjectXXXX, _in const char* pszFullpathName )
				{
					EarthView::World::Core::ev_string pszFullpathName1 = pszFullpathName;
					EarthView::World::Spatial2D::Raster::CRasterFileOperator* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = ptrNativeObject->open(pszFullpathName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_deleteDataset_void_CRasterDataSet(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* pobjDataSet )
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterFileOperator*) pObjectXXXX;
					ptrNativeObject->deleteDataset(pobjDataSet);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_open_CRasterDataSet_EVString_EVAccess(_in const char* pszFullpathName, _in int eAccess )
				{
					EarthView::World::Core::ev_string pszFullpathName1 = pszFullpathName;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = EarthView::World::Spatial2D::Raster::CRasterFileOperator::open(pszFullpathName1, (EarthView::World::Spatial2D::Raster::EVAccess)eAccess);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_create_CRasterDataSet_EVString_ev_int32_ev_int32_ev_int32_EVRasterDataType_EVDataSetFormat(_in const char* pszpath, _in ev_int32 iWidth, _in ev_int32 iHeight, _in ev_int32 ibandCount, _in int edatatype, _in int erasterType )
				{
					EarthView::World::Core::ev_string pszpath1 = pszpath;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = EarthView::World::Spatial2D::Raster::CRasterFileOperator::create(pszpath1, iWidth, iHeight, ibandCount, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)edatatype, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)erasterType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_createFormStream_CRasterDataSet_ev_uchar_ev_uint64_EVDataSetFormat(_in ev_uchar* pFileBuffer, _in ev_uint64 idataLenth, _in int erasterType )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = EarthView::World::Spatial2D::Raster::CRasterFileOperator::createFormStream(pFileBuffer, idataLenth, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)erasterType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_createCopy_CRasterDataSet_EVString_CRasterDataSet_EVDataSetFormat_CProgressInfo(_in const char* pszCopypath, _in EarthView::World::Spatial2D::Raster::CRasterDataSet* pSrcDataset, _in int erasterType, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pProssiInfo )
				{
					EarthView::World::Core::ev_string pszCopypath1 = pszCopypath;
					EarthView::World::Spatial2D::Raster::CRasterDataSet* objXXXX = EarthView::World::Spatial2D::Raster::CRasterFileOperator::createCopy(pszCopypath1, pSrcDataset, (EarthView::World::Spatial2D::Raster::EVDataSetFormat)erasterType, pProssiInfo);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterFileOperator_close_void_CRasterDataSet(_in EarthView::World::Spatial2D::Raster::CRasterDataSet* pobjDataSet )
				{
					EarthView::World::Spatial2D::Raster::CRasterFileOperator::close(pobjDataSet);
				}
			}
		}
	}
}
