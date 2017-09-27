/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/modeldataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CModelDatasetProxy : public EarthView::World::Spatial3D::Dataset::CModelDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CModelDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CModelDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass(EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32(EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString(EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getResourceDatasetRef();
					}
					virtual ev_bool canEdit()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::canEdit();
					}
					virtual ev_int32 refreshDataset()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::refreshDataset();
					}
					virtual EVString getAliasName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getAliasName();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getDataSourceRef();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CModelDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CModelDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CModelDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getFeatureClassType();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CModelDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CModelDataset::findField(fieldName);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getSpatialIndexEnum();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataset::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CModelDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CModelDataset::getFeatureCount(filter);
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CModelDataset::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CModelDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CModelDataset::deleteField(field);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::createFeatureBuffer();
					}
					virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CModelDataset::insert(feature);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CModelDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CModelDataset::update(buffer);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::getSpatialReferenceRef();
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CModelDataset::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CModelDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CModelDatasetProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					if (dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::getResourceDatasetRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getResourceDatasetRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getResourceDatasetRef_IFeatureClass_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::getResourceDatasetRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					if (dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					if (dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::refreshDataset();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->refreshDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_refreshDataset_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::refreshDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_isTemplate_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isTemplate();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					if (dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::getAliasName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getAliasName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CModelDataset_getAliasName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CModelDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CModelDataset::getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CModelDatasetProxy* ptr = dynamic_cast<CModelDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CModelDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CModelDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
