/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/dbrasterdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback)(_inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback)(_inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY);
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback)();
				typedef const ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback)();
				typedef const EarthView::World::Spatial2D::Raster::CAffineTransform*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback)(_out char*& strWKT);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback)(_in char*& strWKT);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback)(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback)(_in char*& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback)(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback)(_in EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback)(_in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType);
				typedef int  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CDBRasterDatasetProxy : public EarthView::World::Spatial2D::Raster::CDBRasterDataset
				{
				private:
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CDBRasterDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CDBRasterDataset(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getDataSourceRef();
					}
					virtual const ev_int32 getRasterWidth() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getRasterWidth();
					}
					virtual const ev_int32 getRasterHeight() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getRasterHeight();
					}
					virtual const ev_int32 getBandCount() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							const ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getBandCount();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVRasterDataType getRasterDataType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVRasterDataType returnValue = (EarthView::World::Spatial::GeoDataset::EVRasterDataType)m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getRasterDataType();
					}
					virtual void getSpatialReferenceWkt(_out EVString& strWKT) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback(strWKT_Char);
							strWKT = strWKT_Char;
							if(strWKT_Char != NULL){ delete[] strWKT_Char;strWKT_Char = NULL;}
						}
						else
							return this->CDBRasterDataset::getSpatialReferenceWkt(strWKT);
					}
					virtual const EarthView::World::Spatial2D::Raster::CAffineTransform* getGeoTransform() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial2D::Raster::CAffineTransform* returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getGeoTransform();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::stopEditing(isSave);
					}
					virtual void setSpatialReference(_in const EVString& strWKT)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback(strWKT_Char);
						}
						else
							return this->CDBRasterDataset::setSpatialReference(strWKT);
					}
					virtual ev_bool buildOverViews(_in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					}
					virtual ev_bool buildDefaultOverViews(_inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback(pDataProgress);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::buildDefaultOverViews(pDataProgress);
					}
					virtual ev_bool read(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pDstRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual void read(_in EVString& strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback != NULL && this->isCustomExtend())
						{
							char* strWKT_Char = strWKT.makeBuffer();
							m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback(strWKT_Char, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
						}
						else
							return this->CDBRasterDataset::read(strWKT, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					}
					virtual ev_bool write(_in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback(pSrcRaster, upRow, leftCol, downRow, rightCol);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					}
					virtual ev_bool rasterIO(_in EarthView::World::Spatial2D::Raster::EVIOFlag bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in EarthView::World::Spatial::GeoDataset::EVRasterDataType eDataType)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback((int)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (int)eDataType);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::rasterIO(bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, eDataType);
					}
					virtual ev_bool readBlock(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback(pDstRasterBlock, level, row, col);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::readBlock(pDstRasterBlock, level, row, col);
					}
					virtual ev_bool readBlock(_inout EarthView::World::Core::CDataStream& data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback(&data, bandID, level, row, col);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::readBlock(data, bandID, level, row, col);
					}
					virtual ev_bool writeBlock(_in EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback(pSrcRasterBlock, level, row, col);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::writeBlock(pSrcRasterBlock, level, row, col);
					}
					virtual ev_bool writeBlock(_inout EarthView::World::Core::CDataStream& data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback(&data, bandID, level, row, col);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::writeBlock(data, bandID, level, row, col);
					}
					virtual void getRasterRect(_out ev_real64& dfUpleftX, _out ev_real64& dfUpleftY, _out ev_real64& dfDownRightX, _out ev_real64& dfDownRightY) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
						}
						else
							return this->CDBRasterDataset::getRasterRect(dfUpleftX, dfUpleftY, dfDownRightX, dfDownRightY);
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::hasSubDataset();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CDBRasterDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CDBRasterDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CDBRasterDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoEnvelope_IEnvelope(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getGeoEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterWidth();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterWidth();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterWidth_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterHeight();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getRasterHeight();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterHeight_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getBandCount();
						return objXXXX;
					}
					else
					{
						const ev_int32 objXXXX = ptrNativeObject->getBandCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBandCount_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getBandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBlockCount_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getBlockCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getBlockSize_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getBlockSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CSensorInfo*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSensorInfo_CSensorInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CSensorInfo* objXXXX = ptrNativeObject->getSensorInfo();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterBand*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterBand_CDBRasterBand_ev_int32(void *pObjectXXXX, _out ev_int32 iband )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterBand* objXXXX = ptrNativeObject->getRasterBand(iband);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterDataType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->getRasterDataType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterDataType_EVRasterDataType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVRasterDataType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getRasterDataType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getSpatialReferenceWkt(strWKT1);
					else
						ptrNativeObject->getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReferenceWkt_void_EVString_NoVirtual(void *pObjectXXXX, _out char*& strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getSpatialReferenceWkt(strWKT1);
					strWKT=strWKT1.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getGeoTransform();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->getGeoTransform();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CAffineTransform*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getGeoTransform_CAffineTransform_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CAffineTransform* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::getGeoTransform();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSensorInfo_void_CSensorInfo(void *pObjectXXXX, _in const void* objSensorInfo )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->setSensorInfo(*(EarthView::World::Spatial2D::Raster::CSensorInfo*)objSensorInfo);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setGeoTransform_void_CAffineTransform(void *pObjectXXXX, _in const void* objGeoTransForm )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->setGeoTransform(*(EarthView::World::Spatial2D::Raster::CAffineTransform*)objGeoTransForm);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::setSpatialReference(strWKT1);
					else
						ptrNativeObject->setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_EVString_NoVirtual(void *pObjectXXXX, _in const char* strWKT )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::setSpatialReference(strWKT1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* pSpatialRef )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->setSpatialReference(pSpatialRef);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildOverViews_ev_bool_ev_int32_ev_int32_ev_int32_ev_int32_CProgressInfo_NoVirtual(void *pObjectXXXX, _in ev_int32 ibandCount, _in ev_int32* piBandIndex, _in ev_int32 nLevelCount, _in ev_int32* piLevelIndex, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::buildOverViews(ibandCount, piBandIndex, nLevelCount, piLevelIndex, pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_getOverViewLevels_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getOverViewLevels();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(void *pObjectXXXX, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->buildDefaultOverViews(pDataProgress);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_buildDefaultOverViews_ev_bool_CProgressInfo_NoVirtual(void *pObjectXXXX, _inout EarthView::World::Spatial2D::Raster::CProgressInfo* pDataProgress )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::buildDefaultOverViews(pDataProgress);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->read(pDstRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::read(pDstRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
					else
						ptrNativeObject->read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_read_void_EVString_ev_real64_ev_real64_ev_real64_ev_real64_ev_int32_ev_int32_ev_byte_NoVirtual(void *pObjectXXXX, _in char* strWKT, _in ev_real64 lefttopX, _in ev_real64 lefttopY, _in ev_real64 resolutionX, _in ev_real64 resolutionY, _in ev_int32 xSize, _in ev_int32 ySize, _inout ev_byte* pBuffer )
				{
					EarthView::World::Core::ev_string strWKT1 = strWKT;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::read(strWKT1, lefttopX, lefttopY, resolutionX, resolutionY, xSize, ySize, pBuffer);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->write(pSrcRaster, upRow, leftCol, downRow, rightCol);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_write_ev_bool_IRasterBlock_ev_uint32_ev_uint32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRaster, _in ev_uint32 upRow, _in ev_uint32 leftCol, _in ev_uint32 downRow, _in ev_uint32 rightCol )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::write(pSrcRaster, upRow, leftCol, downRow, rightCol);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_rasterIO_ev_bool_EVIOFlag_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_ev_int32_void_ev_int32_ev_int32_EVRasterDataType_NoVirtual(void *pObjectXXXX, _in int bflag, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iImageWidth, _in ev_int32 iImageHeight, _in ev_int32 iBandCount, _in ev_int32* pIbandIndex, _inout void* pDstBuffer, _in ev_int32 iBufferWidth, _in ev_int32 iBufferHeight, _in int eDataType )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::rasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bflag, iOffsetX, iOffsetY, iImageWidth, iImageHeight, iBandCount, pIbandIndex, pDstBuffer, iBufferWidth, iBufferHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_fromStream_ev_bool_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::readBlock(pDstRasterBlock, level, row, col);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->readBlock(pDstRasterBlock, level, row, col);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pDstRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::readBlock(pDstRasterBlock, level, row, col);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(void *pObjectXXXX, _inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::readBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->readBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_readBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::readBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::writeBlock(pSrcRasterBlock, level, row, col);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->writeBlock(pSrcRasterBlock, level, row, col);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_IRasterBlock_ev_int32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial2D::Raster::IRasterBlock* pSrcRasterBlock, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::writeBlock(pSrcRasterBlock, level, row, col);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(void *pObjectXXXX, _inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					if (dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::writeBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->writeBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterDataset_writeBlock_ev_bool_CDataStream_ev_int32_ev_int32_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _inout void* data, _in ev_int32 bandID, _in ev_int32 level, _in ev_uint32 row, _in ev_uint32 col )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CDBRasterDataset::writeBlock(*(EarthView::World::Core::CDataStream*)data, bandID, level, row, col);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getRasterRect_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CDBRasterDatasetProxy* ptr = dynamic_cast<CDBRasterDatasetProxy*>((EarthView::World::Spatial2D::Raster::CDBRasterDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CDBRasterDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getBandHistogram_CBandHistogram(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CBandHistogram* objXXXX = ptrNativeObject->getBandHistogram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterHistogram*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getHistogram_CRasterHistogram(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterHistogram* objXXXX = ptrNativeObject->getHistogram();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CColorTable*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getColorTable_CColorTable(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CColorTable* objXXXX = ptrNativeObject->getColorTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CRasterAttributeTable*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getAttributeTable_CRasterAttributeTable(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CRasterAttributeTable* objXXXX = ptrNativeObject->getAttributeTable();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterBand*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getOverview_CDBRasterBand_ev_int32(void *pObjectXXXX, _in ev_int32 level )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterBand* objXXXX = ptrNativeObject->getOverview(level);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getBandWidth_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getBandWidth();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getBandHeight_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const ev_int32 objXXXX = ptrNativeObject->getBandHeight();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getBandStatistics_CBandStatisticsInfo_ev_bool(void *pObjectXXXX, _in ev_bool isApprox )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const EarthView::World::Spatial2D::Raster::CBandStatisticsInfo* objXXXX = ptrNativeObject->getBandStatistics(isApprox);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_iRasterIO_ev_bool_EVIOFlag_ev_byte_ev_int32_ev_int32_ev_int32_ev_int32_EVRasterDataType_ev_int32_ev_int32(void *pObjectXXXX, _in int bFlag, _inout ev_byte* pDstBuffer, _in ev_int32 iOffsetX, _in ev_int32 iOffsetY, _in ev_int32 iWidth, _in ev_int32 iHeight, _in int eDataType, _in ev_int32 iBufferX, _in ev_int32 iBufferY )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->iRasterIO((EarthView::World::Spatial2D::Raster::EVIOFlag)bFlag, pDstBuffer, iOffsetX, iOffsetY, iWidth, iHeight, (EarthView::World::Spatial::GeoDataset::EVRasterDataType)eDataType, iBufferX, iBufferY);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CDBRasterDataset*  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_asDataset_CDBRasterDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					EarthView::World::Spatial2D::Raster::CDBRasterDataset* objXXXX = ptrNativeObject->asDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_setNodataValue_void_ev_real64(void *pObjectXXXX, _in ev_real64 dfNodataValue )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					ptrNativeObject->setNodataValue(dfNodataValue);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_setLevel_void_ev_int32(void *pObjectXXXX, _in ev_int32 level )
				{
					EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					ptrNativeObject->setLevel(level);
				}
				extern "C" EV_DLL_EXPORT  const ev_real64  _stdcall EarthView_World_Spatial2D_Raster_CDBRasterBand_getNodataValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CDBRasterBand* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CDBRasterBand*) pObjectXXXX;
					const ev_real64 objXXXX = ptrNativeObject->getNodataValue();
					return objXXXX;
				}
			}
		}
	}
}
