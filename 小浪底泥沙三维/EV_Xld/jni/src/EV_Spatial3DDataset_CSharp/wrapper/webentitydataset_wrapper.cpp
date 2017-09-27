/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/webentitydataset.h"
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CWebEntityDatasetProxy : public EarthView::World::Spatial3D::Dataset::CWebEntityDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CWebEntityDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebEntityDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getSpatialReferenceRef();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getAliasName();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::startEditing(withUndo);
					}
					virtual ev_bool saveEditing()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::saveEditing();
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::stopEditing(isSave);
					}
					virtual void transaction()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback();
						}
						else
							return this->CWebEntityDataset::transaction();
					}
					virtual void commit()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback();
						}
						else
							return this->CWebEntityDataset::commit();
					}
					virtual void rollback()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback();
						}
						else
							return this->CWebEntityDataset::rollback();
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getID();
					}
					virtual ev_int32 getSRID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getSRID();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFeatureClassType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFieldsRef();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getAttrFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getAttrFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::findField(fieldName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getAttrFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getAttrFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getFeatureCount(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::createFeatureBuffer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getResourceDatasetRef();
					}
					virtual ev_int32 refreshDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::refreshDataset();
					}
					virtual ev_bool isDatasetLocked()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::isDatasetLocked();
					}
					virtual ev_bool lockDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::lockDataset();
					}
					virtual void unlockDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback();
						}
						else
							return this->CWebEntityDataset::unlockDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getType();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::hasSubDataset();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::getSpatialIndexEnum();
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::deleteField(field);
					}
					virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::insert(feature);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CWebEntityDataset::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CWebEntityDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CWebEntityDatasetProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_exportToFile_ev_int32_EVString(void *pObjectXXXX, _in const char* path )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->exportToFile(path1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEntityObject_ev_int32_ev_int32_CServerEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getEntityObject(entityid, *(EarthView::World::Spatial::CServerEntityObject*)entityObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getTemplateEntityObject_ev_int32_ev_int32_CServerTemplateEntityObject(void *pObjectXXXX, _in ev_int32 entityid, _out void* entityObject )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getTemplateEntityObject(entityid, *(EarthView::World::Spatial::CServerTemplateEntityObject*)entityObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResource_ev_int32_ev_int32_ev_bool_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_bool needorigtexture, _out void* resourceObject )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getResource(entityid, needorigtexture, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceByID_ev_int32_ev_int32_ev_int32_CServerResourceObject(void *pObjectXXXX, _in ev_int32 entityid, _in ev_int32 resid, _out void* resourceObject )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getResourceByID(entityid, resid, *(EarthView::World::Spatial::CServerResourceObject*)resourceObject);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAltitudeMode_EVAltitudeMode(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Utility::EVAltitudeMode objXXXX = ptrNativeObject->getAltitudeMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAltitudeValue_ev_real64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->getAltitudeValue();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CEVBaseModelLayerInfo*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDatasetInfo_CEVBaseModelLayerInfo(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::CEVBaseModelLayerInfo* objXXXX = ptrNativeObject->getDatasetInfo();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getTemplateDataset_CWebMeshTemplateDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CWebMeshTemplateDataset* objXXXX = ptrNativeObject->getTemplateDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::saveEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_saveEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::saveEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::transaction();
					else
						ptrNativeObject->transaction();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_transaction_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::transaction();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::commit();
					else
						ptrNativeObject->commit();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_commit_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::commit();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::rollback();
					else
						ptrNativeObject->rollback();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rollback_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::rollback();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getSRID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSRID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getGeometryField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getGeometryField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getGeometryField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getGeometryField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getIDField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getIDField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getIDField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getIDField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeatureClassType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->getFeatureClassType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureClassType_EVFeatureClassType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeatureClassType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAttrFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getAttrFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAttrFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeature(id);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureID_ev_uint32_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getFeatureID(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAttrFeature(id);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getAttrFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getAttrFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::query(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->query(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::query(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::select(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::select(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getAttrFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getAttrFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::createFeatureBuffer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->createFeatureBuffer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createFeatureBuffer_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::createFeatureBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_releaseFeature_void_IFeature(_in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset::releaseFeature(feature);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getResourceDatasetRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getResourceDatasetRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getResourceDatasetRef_IFeatureClass_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getResourceDatasetRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::refreshDataset();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->refreshDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_refreshDataset_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::refreshDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::isDatasetLocked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDatasetLocked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isDatasetLocked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::isDatasetLocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::lockDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->lockDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_lockDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::lockDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::unlockDataset();
					else
						ptrNativeObject->unlockDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_unlockDataset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::unlockDataset();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CWebEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CWebEntityDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CWebEntityDatasetProxy* ptr = dynamic_cast<CWebEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CWebEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CWebEntityDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
