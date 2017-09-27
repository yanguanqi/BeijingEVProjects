/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/entitydataset.h"
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
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback)(_in ev_uint32 entID);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* feature, _in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CEntityDatasetProxy : public EarthView::World::Spatial3D::Dataset::CEntityDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CEntityDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEntityDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void(EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void(EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void(EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature(EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void(EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType(EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass(EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32(EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getDataVersion();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getSpatialReferenceRef();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getName();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getAliasName();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CEntityDataset::startEditing(withUndo);
					}
					virtual ev_bool saveEditing()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::saveEditing();
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CEntityDataset::stopEditing(isSave);
					}
					virtual void transaction()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback();
						}
						else
							return this->CEntityDataset::transaction();
					}
					virtual void commit()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback();
						}
						else
							return this->CEntityDataset::commit();
					}
					virtual void rollback()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback();
						}
						else
							return this->CEntityDataset::rollback();
					}
					virtual ev_uint32 getUpdateID()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getUpdateID();
					}
					virtual ev_uint32 getMeshID(_in ev_uint32 entID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback(entID);
							return returnValue;
						}
						else
							return this->CEntityDataset::getMeshID(entID);
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getID();
					}
					virtual ev_int32 getSRID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getSRID();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getFeatureClassType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getFieldsRef();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getAttrFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getAttrFieldsRef();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getCustomerFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getCustomerFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CEntityDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CEntityDataset::findField(fieldName);
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CEntityDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CEntityDataset::deleteField(field);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getAttrFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::getAttrFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CEntityDataset::getFeatureCount(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::createFeatureBuffer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* insert()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEntityDataset::insert();
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CEntityDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CEntityDataset::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEntityDataset::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getResourceDatasetRef();
					}
					virtual ev_bool isDatasetLocked()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::isDatasetLocked();
					}
					virtual ev_bool lockDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::lockDataset();
					}
					virtual void unlockDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback();
						}
						else
							return this->CEntityDataset::unlockDataset();
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CEntityDataset::createSpatialIndex(spaIndex);
					}
					virtual void updateSpatialIndex(_in const EarthView::World::Spatial::GeoDataset::IFeature* feature, _in EarthView::World::Spatial3D::Dataset::EntityDatasetOperType type)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback(feature, (int)type);
						}
						else
							return this->CEntityDataset::updateSpatialIndex(feature, type);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getType();
					}
					virtual ev_int32 refreshDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::refreshDataset();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::hasSubDataset();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CEntityDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::getSpatialIndexEnum();
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::deleteSpatialIndex();
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CEntityDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CEntityDatasetProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_checkVersion_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->checkVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::saveEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_saveEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::saveEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_startEditingSimple_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->startEditingSimple();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_stopEditingSimple_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->stopEditingSimple();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isTransaction_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isTransaction();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::transaction();
					else
						ptrNativeObject->transaction();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_transaction_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::transaction();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::commit();
					else
						ptrNativeObject->commit();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_commit_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::commit();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::rollback();
					else
						ptrNativeObject->rollback();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_rollback_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::rollback();
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getUpdateID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getUpdateID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getUpdateID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 entID )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getMeshID(entID);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getMeshID(entID);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getMeshID_ev_uint32_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 entID )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getMeshID(entID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getSRID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getSRID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getGeometryField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getGeometryField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getGeometryField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getGeometryField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getIDField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getIDField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getIDField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getIDField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeatureClassType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->getFeatureClassType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureClassType_EVFeatureClassType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeatureClassType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAttrFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getAttrFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAttrFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getCustomerFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getCustomerFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getCustomerFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getCustomerFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::addField(field);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->addField(field);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_addField_ev_bool_IField_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::addField(field);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::deleteField(field);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteField(field);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteField_ev_bool_IField_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IField* field )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::deleteField(field);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeature(id);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getFeature(id);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeature(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAttrFeature(id);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->getAttrFeature(id);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getAttrFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getAttrFeature(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::query(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::select(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::select(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::createFeatureBuffer();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBuffer_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::createFeatureBuffer();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createFeatureBufferWithoutID_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->createFeatureBufferWithoutID();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::insert();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::insert();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::insertFeatureBuffer(buffer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertFeatureBuffer(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_insertFeatureBuffer_ev_uint32_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::insertFeatureBuffer(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::update(buffer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_update_ev_bool_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::update(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::deleteFeature(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteFeature_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::deleteFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_releaseFeature_void_IFeature(_in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset::releaseFeature(feature);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getResourceDatasetRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getResourceDatasetRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getResourceDatasetRef_IFeatureClass_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getResourceDatasetRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::isDatasetLocked();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isDatasetLocked();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_isDatasetLocked_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::isDatasetLocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::lockDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->lockDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_lockDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::lockDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::unlockDataset();
					else
						ptrNativeObject->unlockDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_unlockDataset_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::unlockDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(void *pObjectXXXX, _in int spaIndex )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_NoVirtual(void *pObjectXXXX, _in int spaIndex )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::updateSpatialIndex(feature, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)type);
					else
						ptrNativeObject->updateSpatialIndex(feature, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)type);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_updateSpatialIndex_void_IFeature_EntityDatasetOperType_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature, _in int type )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::updateSpatialIndex(feature, (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)type);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_getMaxID_ev_bool_ev_uint32_ev_uint32(void *pObjectXXXX, _inout ev_uint32& entID, _inout ev_uint32& meshID )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getMaxID(entID, meshID);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_clearDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					if (dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::refreshDataset();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->refreshDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEntityDataset_refreshDataset_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEntityDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEntityDataset::refreshDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CEntityDatasetProxy* ptr = dynamic_cast<CEntityDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CEntityDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEntityDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Dataset_ModelEditOperation_mOperType( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::ModelEditOperation* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::ModelEditOperation*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::EntityDatasetOperType objXXXX = ptrNativeObject->mOperType;
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_ModelEditOperation_mOperType( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Dataset::ModelEditOperation*)pObjectXXXX)->mOperType = (EarthView::World::Spatial3D::Dataset::EntityDatasetOperType)value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall Get_EarthView_World_Spatial3D_Dataset_ModelEditOperation_mpOperValue( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::ModelEditOperation* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::ModelEditOperation*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->mpOperValue;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Dataset_ModelEditOperation_mpOperValue( void *pObjectXXXX, EarthView::World::Spatial::GeoDataset::IFeature*  value )
				{
					((EarthView::World::Spatial3D::Dataset::ModelEditOperation*)pObjectXXXX)->mpOperValue = value;
				}
			}
		}
	}
}
