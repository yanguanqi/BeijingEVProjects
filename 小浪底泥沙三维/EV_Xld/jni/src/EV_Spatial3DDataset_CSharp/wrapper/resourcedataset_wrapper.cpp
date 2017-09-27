/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/resourcedataset.h"
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
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback)(_in ev_uint32 meshID, _in ev_uint32 resID);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback)(_in ev_uint32 meshID, _out void* fs);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer, _in ev_bool bRefCount);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback)(_in ev_uint32 meshID, _in ev_uint32 resID);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CResourceDatasetProxy : public EarthView::World::Spatial3D::Dataset::CResourceDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CResourceDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CResourceDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature(EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getAliasName();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CResourceDataset::startEditing(withUndo);
					}
					virtual ev_bool saveEditing()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::saveEditing();
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CResourceDataset::stopEditing(isSave);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getIDField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CResourceDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CResourceDataset::findField(fieldName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 meshID, _in ev_uint32 resID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback(meshID, resID);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CResourceDataset::getFeature(meshID, resID);
					}
					virtual ev_bool getFeatureVector(_in ev_uint32 meshID, _out EarthView::World::Spatial3D::Dataset::FeatureVector& fs)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback(meshID, &fs);
							return returnValue;
						}
						else
							return this->CResourceDataset::getFeatureVector(meshID, fs);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CResourceDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CResourceDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CResourceDataset::getFeatureCount(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CResourceDataset::createFeatureBuffer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* insert()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CResourceDataset::insert();
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CResourceDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer, _in ev_bool bRefCount)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback(buffer, bRefCount);
							return returnValue;
						}
						else
							return this->CResourceDataset::insertFeatureBuffer(buffer, bRefCount);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CResourceDataset::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 meshID, _in ev_uint32 resID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback(meshID, resID);
							return returnValue;
						}
						else
							return this->CResourceDataset::deleteFeature(meshID, resID);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 meshID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback(meshID);
							return returnValue;
						}
						else
							return this->CResourceDataset::deleteFeature(meshID);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getType();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::hasSubDataset();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CResourceDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getFeatureClassType();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getGeometryType();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getSpatialIndexEnum();
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CResourceDataset::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CResourceDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CResourceDataset::deleteField(field);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CResourceDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CResourceDatasetProxy);
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Dataset_CResourceDataset_mIsTempl( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsTempl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_CResourceDataset_mIsTempl( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Dataset::CResourceDataset*)pObjectXXXX)->mIsTempl = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::saveEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_saveEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::saveEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getGeometryField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getGeometryField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getGeometryField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getIDField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getIDField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getIDField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getIDField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID, _in ev_uint32 resID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeature(meshID, resID);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeature(meshID, resID);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshID, _in ev_uint32 resID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeature(meshID, resID);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector(void *pObjectXXXX, _in ev_uint32 meshID, _out void* fs )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeatureVector(meshID, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)fs);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getFeatureVector(meshID, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)fs);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureVector_ev_bool_ev_uint32_FeatureVector_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshID, _out void* fs )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeatureVector(meshID, *(EarthView::World::Spatial3D::Dataset::FeatureVector*)fs);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::query(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->query(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::select(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::select(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::createFeatureBuffer();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->createFeatureBuffer();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_createFeatureBuffer_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::createFeatureBuffer();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insert();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->insert();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insert();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insertFeatureBuffer(buffer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertFeatureBuffer(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insertFeatureBuffer(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer, _in ev_bool bRefCount )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insertFeatureBuffer(buffer, bRefCount);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertFeatureBuffer(buffer, bRefCount);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_insertFeatureBuffer_ev_uint32_IFeature_ev_bool_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer, _in ev_bool bRefCount )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::insertFeatureBuffer(buffer, bRefCount);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::update(buffer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_update_ev_bool_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::update(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID, _in ev_uint32 resID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::deleteFeature(meshID, resID);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(meshID, resID);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshID, _in ev_uint32 resID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::deleteFeature(meshID, resID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::deleteFeature(meshID);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(meshID);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteFeature_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshID )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::deleteFeature(meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_releaseFeature_void_IFeature(_in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CResourceDataset::releaseFeature(feature);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					if (dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CResourceDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CResourceDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CResourceDatasetProxy* ptr = dynamic_cast<CResourceDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CResourceDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CResourceDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
