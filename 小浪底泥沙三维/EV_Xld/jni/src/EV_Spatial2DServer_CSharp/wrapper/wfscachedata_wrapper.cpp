/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dserver/wfscachedata.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CWFSCacheDataProxy : public EarthView::World::Spatial2D::GeoDataset::CWFSCacheData
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CWFSCacheDataProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSCacheData(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getGeometryType();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSCacheData::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFeature(id);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFeatureCount(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CWFSCacheData::select(filter);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CWFSCacheData::findField(fieldName);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getFeatureClassType();
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::createTableProxy();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getUpdateTime();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CWFSCacheData::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CWFSCacheData::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CWFSCacheData::endEditingOperation(isConfirm);
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::hasSubDataset();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::getSpatialIndexEnum();
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CWFSCacheData::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CWFSCacheData::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CWFSCacheData::deleteField(field);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CWFSCacheData::createFeatureBuffer();
					}
					virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CWFSCacheData::insert(feature);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CWFSCacheData::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CWFSCacheData::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CWFSCacheData::deleteFeature(id);
					}
				};
				REGISTER_FACTORY_CLASS(CWFSCacheDataProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::query(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeature(id);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeature(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::select(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::select(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeatureClassType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->getFeatureClassType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getFeatureClassType_EVFeatureClassType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getFeatureClassType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ITableProxy*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::createTableProxy();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->createTableProxy();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ITableProxy*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createTableProxy_ITableProxy_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::createTableProxy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					if (dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CWFSCacheData::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_setGUID_void_EVString(void *pObjectXXXX, _in const char* str )
				{
					EarthView::World::Core::ev_string str1 = str;
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					ptrNativeObject->setGUID(str1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGUID_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getGUID();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getVectorFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CWFSCacheData* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getVectorFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CWFSCacheDataProxy* ptr = dynamic_cast<CWFSCacheDataProxy*>((EarthView::World::Spatial2D::GeoDataset::CWFSCacheData*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CWFSCacheData_hasSubDataset_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
