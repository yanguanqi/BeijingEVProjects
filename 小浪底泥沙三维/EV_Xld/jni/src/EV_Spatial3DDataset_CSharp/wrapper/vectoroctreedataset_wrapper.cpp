/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/vectoroctreedataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace Dataset
			{
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback)(_in char*& octreeCode, _inout void* octreeNodes);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback)(_in char*& octreeCode, _inout void* objectsStream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback)(_in char*& octreeCode, _in const void* octreeNodes, _in const void* objectsStream);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CVectorOctreeDatasetProxy : public EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CVectorOctreeDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorOctreeDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getDataVersion();
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getSpatialReferenceRef();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getName();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getDataSourceRef();
					}
					virtual ev_uint32 getID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getID();
					}
					virtual ev_int32 getSRID() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getSRID();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getGeometryType();
					}
					virtual ev_bool getOctreeNodes(_in const EVString& octreeCode, _inout EarthView::World::Core::MemoryDataStreamPtr& octreeNodes)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* octreeCode_Char = octreeCode.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback(octreeCode_Char, &octreeNodes);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getOctreeNodes(octreeCode, octreeNodes);
					}
					virtual ev_bool getOctreeObjects(_in const EVString& octreeCode, _inout EarthView::World::Core::MemoryDataStreamPtr& objectsStream)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* octreeCode_Char = octreeCode.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback(octreeCode_Char, &objectsStream);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getOctreeObjects(octreeCode, objectsStream);
					}
					virtual ev_bool writeOctree(_in const EVString& octreeCode, _in const EarthView::World::Core::MemoryDataStreamPtr& octreeNodes, _in const EarthView::World::Core::MemoryDataStreamPtr& objectsStream)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback != NULL && this->isCustomExtend())
						{
							char* octreeCode_Char = octreeCode.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback(octreeCode_Char, &octreeNodes, &objectsStream);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::writeOctree(octreeCode, octreeNodes, objectsStream);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getType();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::hasSubDataset();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFeatureClassType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::findField(fieldName);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getSpatialIndexEnum();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::getFeatureCount(filter);
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::deleteField(field);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::createFeatureBuffer();
					}
					virtual ev_bool insert(_out EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::insert(feature);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CVectorOctreeDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CVectorOctreeDatasetProxy);
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getAliasName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getAliasName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getID();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getSRID();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getSRID();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSRID_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getSRID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getLayerType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getLayerType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* octreeCode, _inout void* octreeNodes )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getOctreeNodes(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getOctreeNodes(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeNodes_ev_bool_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* octreeCode, _inout void* octreeNodes )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getOctreeNodes(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* octreeCode, _inout void* objectsStream )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getOctreeObjects(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getOctreeObjects(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getOctreeObjects_ev_bool_EVString_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* octreeCode, _inout void* objectsStream )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getOctreeObjects(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(void *pObjectXXXX, _in const char* octreeCode, _in const void* octreeNodes, _in const void* objectsStream )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::writeOctree(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->writeOctree(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_writeOctree_ev_bool_EVString_MemoryDataStreamPtr_MemoryDataStreamPtr_NoVirtual(void *pObjectXXXX, _in const char* octreeCode, _in const void* octreeNodes, _in const void* objectsStream )
				{
					EarthView::World::Core::ev_string octreeCode1 = octreeCode;
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::writeOctree(octreeCode1, *(EarthView::World::Core::MemoryDataStreamPtr*)octreeNodes, *(EarthView::World::Core::MemoryDataStreamPtr*)objectsStream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getLayerInfoStream_MemoryDataStreamPtr(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->getLayerInfoStream();
					EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					if (dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_clearDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CVectorOctreeDatasetProxy* ptr = dynamic_cast<CVectorOctreeDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CVectorOctreeDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CVectorOctreeDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
