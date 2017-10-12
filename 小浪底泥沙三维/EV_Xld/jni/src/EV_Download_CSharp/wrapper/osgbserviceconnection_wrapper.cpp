/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/osgbserviceconnection.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Download
			{
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mTileName( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mTileName;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mTileName( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mTileName = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mModelPath( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mModelPath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mModelPath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mModelPath = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mCenterX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mCenterX( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mCenterX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mCenterY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mCenterY( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mCenterY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mCenterZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mCenterZ( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mCenterZ = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mRadius( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mRadius;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mRadius( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mRadius = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBTopTile_mMinRange( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTile* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTile*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinRange;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBTopTile_mMinRange( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBTopTile*)pObjectXXXX)->mMinRange = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_push_back_void_COSGBTopTile(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Download::COSGBTopTile*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_front_COSGBTopTile(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Download::COSGBTopTile *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_back_COSGBTopTile(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Download::COSGBTopTile *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_at_COSGBTopTile_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBTopTile& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial::Download::COSGBTopTile *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_insert_void_ev_uint32_COSGBTopTile(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Download::COSGBTopTile*)t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBTopTileVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBTopTileVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBTopTileVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mBeginCol( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->mBeginCol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mBeginCol( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mBeginCol = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mEndCol( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->mEndCol;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mEndCol( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mEndCol = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mBeginRow( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->mBeginRow;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mBeginRow( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mBeginRow = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mEndRow( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->mEndRow;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mEndRow( void *pObjectXXXX, ev_uint64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mEndRow = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mTileWidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mTileWidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mTileWidth( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mTileWidth = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerLevel_mTileHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevel* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevel*) pObjectXXXX;
					ev_real32 objXXXX = ptrNativeObject->mTileHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerLevel_mTileHeight( void *pObjectXXXX, ev_real32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerLevel*)pObjectXXXX)->mTileHeight = value;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_push_back_void_COSGBLayerLevel(void *pObjectXXXX, _in void* t )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ptrNativeObject->push_back(*(EarthView::World::Spatial::Download::COSGBLayerLevel*)t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_pop_back_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ptrNativeObject->pop_back();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_front_COSGBLayerLevel(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& objXXXX = ptrNativeObject->front();
					EarthView::World::Spatial::Download::COSGBLayerLevel *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_back_COSGBLayerLevel(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& objXXXX = ptrNativeObject->back();
					EarthView::World::Spatial::Download::COSGBLayerLevel *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_at_COSGBLayerLevel_ev_uint32(void *pObjectXXXX, _in ev_uint32 pos )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevel& objXXXX = ptrNativeObject->at(pos);
					EarthView::World::Spatial::Download::COSGBLayerLevel *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_insert_void_ev_uint32_COSGBLayerLevel(void *pObjectXXXX, _in ev_uint32 pos, _in void* t )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ptrNativeObject->insert(pos, *(EarthView::World::Spatial::Download::COSGBLayerLevel*)t);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerLevelVector_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerLevelVector* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerLevelVector*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback)(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther);
				typedef int  ( _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback)();
				typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback)();
				class COSGBLayerMetaDataProxy : public EarthView::World::Spatial::Download::COSGBLayerMetaData
				{
				private:
					EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback* m_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback;
					EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback;
					EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback* m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback;
					EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback;
				public:
					COSGBLayerMetaDataProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBLayerMetaData(pList)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo(EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType(EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString(EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->COSGBLayerMetaData::getDatasetType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->COSGBLayerMetaData::getName();
					}
					virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->COSGBLayerMetaData::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->COSGBLayerMetaData::getSpatialReference();
					}
					virtual void clone(_in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther)
					{
						if(m_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback(pOther);
						}
						else
							return this->COSGBLayerMetaData::clone(pOther);
					}
				};
				REGISTER_FACTORY_CLASS(COSGBLayerMetaDataProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					if (dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					COSGBLayerMetaDataProxy* ptr = dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getDatasetType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					if (dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_Callback* pCallback )
				{
					COSGBLayerMetaDataProxy* ptr = dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					if (dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					COSGBLayerMetaDataProxy* ptr = dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					if (dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getSpatialReference();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					COSGBLayerMetaDataProxy* ptr = dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					if (dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::clone(pOther);
					else
						ptrNativeObject->clone(pOther);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_Callback* pCallback )
				{
					COSGBLayerMetaDataProxy* ptr = dynamic_cast<COSGBLayerMetaDataProxy*>((EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_clone_void_IDataMetaInfo_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataMetaInfo* pOther )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::COSGBLayerMetaData::clone(pOther);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBLayerMetaData_parseMetaData_void_CXmlFile_COSGBLayerMetaData(_in void* xmlFile, _out void* metadata )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData::parseMetaData(*(EarthView::World::Core::CXmlFile*)xmlFile, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mVersion( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mVersion;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mVersion( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mVersion = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mFileExt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mFileExt;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mFileExt( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mFileExt = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTileType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mTileType;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTileType( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mTileType = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mBagLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mBagLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mBagLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mBagLevel = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mGuid( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mGuid;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mGuid( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mGuid = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMinLon( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinLon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMinLon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mMinLon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMinLat( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMinLat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMinLat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mMinLat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMaxLon( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMaxLon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMaxLon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mMaxLon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMaxLat( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mMaxLat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mMaxLat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mMaxLat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mBeginLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mBeginLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mBeginLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mBeginLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mEndLevel( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mEndLevel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mEndLevel( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mEndLevel = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterLat( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterLat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterLat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mCenterLat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterLon( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterLon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterLon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mCenterLon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterAlt( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mCenterAlt;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mCenterAlt( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mCenterAlt = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginX( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mOriginX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginX( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mOriginX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginY( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mOriginY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginY( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mOriginY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginZ( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mOriginZ;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mOriginZ( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mOriginZ = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mSRS( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mSRS;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mSRS( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mSRS = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTag( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mTag;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTag( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mTag = value1;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mLevels( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector &objXXXX = ptrNativeObject->mLevels;
					EarthView::World::Spatial::Download::COSGBLayerLevelVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mLevels( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mLevels = *(EarthView::World::Spatial::Download::COSGBLayerLevelVector*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTopTiles( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EarthView::World::Spatial::Download::COSGBTopTileVector &objXXXX = ptrNativeObject->mTopTiles;
					EarthView::World::Spatial::Download::COSGBTopTileVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mTopTiles( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mTopTiles = *(EarthView::World::Spatial::Download::COSGBTopTileVector*)value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial_Download_COSGBLayerMetaData_mDatasetType( void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBLayerMetaData* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBLayerMetaData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->mDatasetType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial_Download_COSGBLayerMetaData_mDatasetType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial::Download::COSGBLayerMetaData*)pObjectXXXX)->mDatasetType = (EarthView::World::Spatial::GeoDataset::EVDatasetType)value;
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback)(_in char*& guid, _out void* metadata);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& guid, _in char*& fileName, _out void* osgbData);
				typedef void  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback)(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp);
				typedef void  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback)();
				class COSGBServiceConnectionProxy : public EarthView::World::Spatial::Download::COSGBServiceConnection
				{
				private:
					EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback;
				public:
					COSGBServiceConnectionProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBServiceConnection(pList)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData(EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp(EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void(EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void(EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback = pCallback;
					}
					virtual void setConnectionImp(_in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback(ref_pImp);
						}
						else
							return this->COSGBServiceConnection::setConnectionImp(ref_pImp);
					}
					virtual void closeConnect()
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback();
						}
						else
							return this->COSGBServiceConnection::closeConnect();
					}
					virtual void openConnect()
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback();
						}
						else
							return this->COSGBServiceConnection::openConnect();
					}
					virtual ev_int32 getMetaData(_in const EVString& guid, _out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback != NULL && this->isCustomExtend())
						{
							char* guid_Char = guid.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback(guid_Char, &metadata);
							return returnValue;
						}
						else
							return this->COSGBServiceConnection::getMetaData(guid, metadata);
					}
					virtual ev_int32 getOSGBData(_in const EVString& guid, _in const EVString& fileName, _out EarthView::World::Core::MemoryDataStreamPtr& osgbData)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* guid_Char = guid.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(guid_Char, fileName_Char, &osgbData);
							return returnValue;
						}
						else
							return this->COSGBServiceConnection::getOSGBData(guid, fileName, osgbData);
					}
				};
				REGISTER_FACTORY_CLASS(COSGBServiceConnectionProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::setConnectionImp(ref_pImp);
					else
						ptrNativeObject->setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_Callback* pCallback )
				{
					COSGBServiceConnectionProxy* ptr = dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_setConnectionImp_void_ConnectionImp_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Download::ConnectionImp* ref_pImp )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::setConnectionImp(ref_pImp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::closeConnect();
					else
						ptrNativeObject->closeConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_Callback* pCallback )
				{
					COSGBServiceConnectionProxy* ptr = dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_closeConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::closeConnect();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::openConnect();
					else
						ptrNativeObject->openConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_Callback* pCallback )
				{
					COSGBServiceConnectionProxy* ptr = dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_openConnect_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::openConnect();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData(void *pObjectXXXX, _in const char* guid, _out void* metadata )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* pCallback )
				{
					COSGBServiceConnectionProxy* ptr = dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getMetaData_ev_int32_EVString_COSGBLayerMetaData_NoVirtual(void *pObjectXXXX, _in const char* guid, _out void* metadata )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* guid, _in const char* fileName, _out void* osgbData )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					COSGBServiceConnectionProxy* ptr = dynamic_cast<COSGBServiceConnectionProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnection_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* guid, _in const char* fileName, _out void* osgbData )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::Download::COSGBServiceConnection* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnection*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnection::getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
					return objXXXX;
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback)(_in char*& guid, _out void* metadata);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback)(_in char*& guid, _in char*& fileName, _out void* osgbData);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback)(_in ev_int32 timeout);
				class COSGBServiceConnectionImpProxy : public EarthView::World::Spatial::Download::COSGBServiceConnectionImp
				{
				private:
					EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback;
					EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback;
				public:
					COSGBServiceConnectionImpProxy(EarthView::World::Core::CNameValuePairList *pList) : COSGBServiceConnectionImp(pList)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData(EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool(EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool(EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32(EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback = pCallback;
					}
					virtual ev_int32 getMetaData(_in const EVString& guid, _out EarthView::World::Spatial::Download::COSGBLayerMetaData& metadata)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback != NULL && this->isCustomExtend())
						{
							char* guid_Char = guid.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback(guid_Char, &metadata);
							return returnValue;
						}
						else
							return this->COSGBServiceConnectionImp::getMetaData(guid, metadata);
					}
					virtual ev_int32 getOSGBData(_in const EVString& guid, _in const EVString& fileName, _out EarthView::World::Core::MemoryDataStreamPtr& osgbData)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* guid_Char = guid.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback(guid_Char, fileName_Char, &osgbData);
							return returnValue;
						}
						else
							return this->COSGBServiceConnectionImp::getOSGBData(guid, fileName, osgbData);
					}
					virtual ev_bool openConnection()
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->COSGBServiceConnectionImp::openConnection();
					}
					virtual ev_bool closeConnection()
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->COSGBServiceConnectionImp::closeConnection();
					}
					virtual void setConnectTimeout(_in ev_int32 timeout)
					{
						if(m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback(timeout);
						}
						else
							return this->COSGBServiceConnectionImp::setConnectTimeout(timeout);
					}
				};
				REGISTER_FACTORY_CLASS(COSGBServiceConnectionImpProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData(void *pObjectXXXX, _in const char* guid, _out void* metadata )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_Callback* pCallback )
				{
					COSGBServiceConnectionImpProxy* ptr = dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getMetaData_ev_int32_EVString_COSGBLayerMetaData_NoVirtual(void *pObjectXXXX, _in const char* guid, _out void* metadata )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getMetaData(guid1, *(EarthView::World::Spatial::Download::COSGBLayerMetaData*)metadata);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* guid, _in const char* fileName, _out void* osgbData )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX;
					if (dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					COSGBServiceConnectionImpProxy* ptr = dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Download_COSGBServiceConnectionImp_getOSGBData_ev_int32_EVString_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* guid, _in const char* fileName, _out void* osgbData )
				{
					EarthView::World::Core::ev_string guid1 = guid;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::Download::COSGBServiceConnectionImp* ptrNativeObject = (EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Download::COSGBServiceConnectionImp::getOSGBData(guid1, fileName1, *(EarthView::World::Core::MemoryDataStreamPtr*)osgbData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool_Callback* pCallback )
				{
					COSGBServiceConnectionImpProxy* ptr = dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_openConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool_Callback* pCallback )
				{
					COSGBServiceConnectionImpProxy* ptr = dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_closeConnection_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32_Callback* pCallback )
				{
					COSGBServiceConnectionImpProxy* ptr = dynamic_cast<COSGBServiceConnectionImpProxy*>((EarthView::World::Spatial::Download::COSGBServiceConnectionImp*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Download_COSGBServiceConnectionImp_setConnectTimeout_void_ev_int32(pCallback);
					}
				}
			}
		}
	}
}
