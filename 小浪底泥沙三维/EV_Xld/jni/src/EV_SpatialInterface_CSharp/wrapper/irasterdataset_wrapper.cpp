/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/irasterdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getUpLeftX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getUpLeftY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getUpLeftY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRotateX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getRotateY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getRotateY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionX_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getResolutionX();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getResolutionY_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getResolutionY();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_real64*  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_getGeoTransFormParameter_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					const ev_real64* objXXXX = ptrNativeObject->getGeoTransFormParameter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_OperatorAssign_CAffineTransform_CAffineTransform(void *pObjXXXX, _in const void* objAffine )
				{
					EarthView::World::Spatial2D::Raster::CAffineTransform& objXXXX = *((EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial2D::Raster::CAffineTransform*)objAffine;
					const EarthView::World::Spatial2D::Raster::CAffineTransform *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_geoToPixel_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& dfX, _inout ev_real64& dfY )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					ptrNativeObject->geoToPixel(dfX, dfY);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CAffineTransform_pixelToGeo_void_ev_real64_ev_real64(void *pObjectXXXX, _inout ev_real64& dfX, _inout ev_real64& dfY )
				{
					const EarthView::World::Spatial2D::Raster::CAffineTransform* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CAffineTransform*) pObjectXXXX;
					ptrNativeObject->pixelToGeo(dfX, dfY);
				}
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
			namespace GeoDataset
			{
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY);
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CAffineTransform*  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback)(_out char*& strWKT);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback)(_in char*& strWKT);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback)(_in char*& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback)(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback)(_in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback)(_in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType);
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class IRasterDatasetProxy : public EarthView::World::Spatial::GeoDataset::IRasterDataset
				{
				private:
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					IRasterDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : IRasterDataset(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType(EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString(EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString(EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString(EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual void getRasterRect(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
						}
						else
							return this->IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
					virtual const ev_int32 getRasterWidth() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getRasterWidth();
					}
					virtual const ev_int32 getRasterHeight() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getRasterHeight();
					}
					virtual const ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getBandCount();
					}
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform* getGeoTransform() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CAffineTransform* returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getGeoTransform();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVRasterDataType returnValue = (EarthView::World::Spatial::GeoDataset::EVRasterDataType)m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getRasterDataType();
					}
					virtual void getSpatialReferenceWkt(_out EVString& strWKT) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback(strWKT_Char);
							strWKT = strWKT_Char;
							if(strWKT_Char != NULL){ delete[] strWKT_Char;strWKT_Char = NULL;}
						}
						else
							return this->IRasterDataset::getSpatialReferenceWkt(strWKT);
					}
					virtual void setSpatialReference(_in const EVString& strWKT)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback(strWKT_Char);
						}
						else
							return this->IRasterDataset::setSpatialReference(strWKT);
					}
					virtual ev_bool read(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pDstRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual ev_bool write(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pSrcRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual void read(_in EVString& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback(strWKT_Char, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						}
						else
							return this->IRasterDataset::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
					virtual ev_bool buildOverViews(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
							return returnValue;
						}
						else
							return this->IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					}
					virtual ev_bool buildDefaultOverViews(_in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback(pDataProgress);
							return returnValue;
						}
						else
							return this->IRasterDataset::buildDefaultOverViews(pDataProgress);
					}
					virtual ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback((int)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (int)eDataType);
							return returnValue;
						}
						else
							return this->IRasterDataset::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->IRasterDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->IRasterDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IRasterDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->IRasterDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(IRasterDatasetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					else
						ptrNativeObject->getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterWidth();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterWidth_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterHeight();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterHeight_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getBandCount();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getGeoTransform();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->getGeoTransform();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getGeoTransform_CAffineTransform_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getGeoTransform();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterDataType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->getRasterDataType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getRasterDataType_EVRasterDataType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getRasterDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getSpatialReferenceWkt(strWKT1);
					else
						ptrNativeObject->getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_getSpatialReferenceWkt_void_EVString_NoVirtual(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::setSpatialReference(strWKT1);
					else
						ptrNativeObject->setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_setSpatialReference_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					else
						ptrNativeObject->read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::buildDefaultOverViews(pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					if (dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial::GeoDataset::IRasterDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IRasterDataset::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					IRasterDatasetProxy* ptr = dynamic_cast<IRasterDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IRasterDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
