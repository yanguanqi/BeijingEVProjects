/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/meshtemplatedataset.h"
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
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback)(_in char*& typeName);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback)(_in ev_uint32 meshTmplID, _out char*& attrType, _out ev_uint32& attrID);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback)(_in char*& attrType, _in ev_uint32 attrID, _inout EarthView::World::Spatial::GeoDataset::CPropertySet* ps);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CMeshTemplateDatasetProxy : public EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset
				{
				private:
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CMeshTemplateDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshTemplateDataset(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getName();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getIDField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::findField(fieldName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFeatureCount(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::createFeatureBuffer();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer(_in const EVString& typeName)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* typeName_Char = typeName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback(typeName_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::createFeatureBuffer(typeName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* insert()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::insert();
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::insertFeatureBuffer(buffer);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback(buffer);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::update(buffer);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getDataSourceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* getResourceDatasetRef()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getResourceDatasetRef();
					}
					virtual ev_bool getAttrRef(_in ev_uint32 meshTmplID, _out EVString& attrType, _out ev_uint32& attrID)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							char* attrType_Char = attrType.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback(meshTmplID, attrType_Char, attrID);
							attrType = attrType_Char;
							if(attrType_Char != NULL){ delete[] attrType_Char;attrType_Char = NULL;}
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getAttrRef(meshTmplID, attrType, attrID);
					}
					virtual ev_bool getAttr(_in const EVString& attrType, _in ev_uint32 attrID, _inout EarthView::World::Spatial::GeoDataset::CPropertySet* ps)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback != NULL && this->isCustomExtend())
						{
							char* attrType_Char = attrType.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback(attrType_Char, attrID, ps);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getAttr(attrType, attrID, ps);
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::hasSubDataset();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::endEditingOperation(isConfirm);
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getFeatureClassType();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getGeometryType();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getSpatialIndexEnum();
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::deleteSpatialIndex();
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::addField(field);
					}
					virtual ev_bool deleteField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::deleteField(field);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::getSpatialReferenceRef();
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CMeshTemplateDataset::createTableProxy();
					}
				};
				REGISTER_FACTORY_CLASS(CMeshTemplateDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getGeometryField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getGeometryField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getGeometryField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getIDField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getIDField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getIDField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getIDField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFeature(id);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFeature(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::query(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::select(filter);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->select(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::select(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::createFeatureBuffer();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::createFeatureBuffer();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString(void *pObjectXXXX, _in const char* typeName )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::createFeatureBuffer(typeName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->createFeatureBuffer(typeName1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createFeatureBuffer_IFeature_EVString_NoVirtual(void *pObjectXXXX, _in const char* typeName )
				{
					EarthView::World::Core::ev_string typeName1 = typeName;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::createFeatureBuffer(typeName1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::insert();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::insert();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::insertFeatureBuffer(buffer);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertFeatureBuffer(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insertFeatureBuffer_ev_uint32_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::insertFeatureBuffer(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::update(buffer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(buffer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_update_ev_bool_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* buffer )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::update(buffer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::deleteFeature(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteFeature_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::deleteFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_releaseFeature_void_IFeature(_in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::releaseFeature(feature);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getResourceDatasetRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getResourceDatasetRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getResourceDatasetRef_IFeatureClass_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getResourceDatasetRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_clearDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->clearDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getMaxMeshInstID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMaxMeshInstID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 meshTmplID, _out char*& attrType, _out ev_uint32& attrID )
				{
					EarthView::World::Core::ev_string attrType1 = attrType;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getAttrRef(meshTmplID, attrType1, attrID);
						attrType=attrType1.makeBuffer();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getAttrRef(meshTmplID, attrType1, attrID);
						attrType=attrType1.makeBuffer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttrRef_ev_bool_ev_uint32_EVString_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 meshTmplID, _out char*& attrType, _out ev_uint32& attrID )
				{
					EarthView::World::Core::ev_string attrType1 = attrType;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getAttrRef(meshTmplID, attrType1, attrID);
					attrType=attrType1.makeBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet(void *pObjectXXXX, _in const char* attrType, _in ev_uint32 attrID, _inout EarthView::World::Spatial::GeoDataset::CPropertySet* ps )
				{
					EarthView::World::Core::ev_string attrType1 = attrType;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					if (dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getAttr(attrType1, attrID, ps);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getAttr(attrType1, attrID, ps);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getAttr_ev_bool_EVString_ev_uint32_CPropertySet_NoVirtual(void *pObjectXXXX, _in const char* attrType, _in ev_uint32 attrID, _inout EarthView::World::Spatial::GeoDataset::CPropertySet* ps )
				{
					EarthView::World::Core::ev_string attrType1 = attrType;
					EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset::getAttr(attrType1, attrID, ps);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_deleteField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CMeshTemplateDatasetProxy* ptr = dynamic_cast<CMeshTemplateDatasetProxy*>((EarthView::World::Spatial3D::Dataset::CMeshTemplateDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CMeshTemplateDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
			}
		}
	}
}
