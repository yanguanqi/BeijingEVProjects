/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/vectorfeatureclassoperator_postgisimp.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback)(_inout void* stream, _in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback)(_inout void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback)(_in ev_uint32 id, _out void* feature);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback)(_in ev_uint32 id, _inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback)(_inout void* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback)(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback)(_inout void* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback)(_inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos, _in void* queryData);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback)(_out void* os, _in void* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback)(_in void* queryData);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback)(_in void* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback)(_in EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback)(_in ev_int32 index);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback)(_in char*& expression);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback)(_in char*& expression);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback)(_in char*& fieldName, _in ev_bool isUnique);
				typedef void*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr);
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback)();
				class CVectorFeatureClassPostGisOperatorProxy : public EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback;
					EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback* m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback;
				public:
					CVectorFeatureClassPostGisOperatorProxy(EarthView::World::Core::CNameValuePairList *pList) : CVectorFeatureClassPostGisOperator(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int(EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getDataSourceRef();
					}
					virtual ev_bool openDataset(_inout EarthView::World::Core::CDataStream& stream, _in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback(&stream, name_Char);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::openDataset(stream, name);
					}
					virtual ev_bool createDataset(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback(&stream);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::createDataset(stream);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::deleteDataset(name);
					}
					virtual EVString getFeatureClassName()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFeatureClassName();
					}
					virtual ev_bool getFeature(_in ev_uint32 id, _out EarthView::World::Core::CDataStream& feature)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback(id, &feature);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFeature(id, feature);
					}
					virtual ev_bool getFeature(_in ev_uint32 id, _inout vector<EarthView::World::Core::CVariant>& values, _inout ev_real64& lenght, _inout ev_real64& area, _inout vector<ev_bool>& pos)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback(id, &values, lenght, area, &pos);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFeature(id, values, lenght, area, pos);
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::deleteFeature(id);
					}
					virtual ev_uint32 getFeatureCount(_inout EarthView::World::Core::CDataStream& filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback(&filter);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFeatureCount(filter);
					}
					virtual ev_bool updateExtent()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::updateExtent();
					}
					virtual ev_bool getExtent(_in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback(pEnvelope);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
					}
					virtual void* query(_inout EarthView::World::Core::CDataStream& filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							void* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback(&filter);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::query(filter);
					}
					virtual ev_bool nextFeature(_inout vector<EarthView::World::Core::CVariant>& values, _inout ev_real64& lenght, _inout ev_real64& area, _inout vector<ev_bool>& pos, _in void* queryData)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback(&values, lenght, area, &pos, queryData);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::nextFeature(values, lenght, area, pos, queryData);
					}
					virtual ev_bool select(_out EarthView::World::Core::CDataStream& os, _in EarthView::World::Core::CDataStream& filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback(&os, &filter);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::select(os, filter);
					}
					virtual ev_bool endQuery(_in void* queryData)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback(queryData);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::endQuery(queryData);
					}
					virtual ev_uint32 queryCount(_in EarthView::World::Core::CDataStream& filter)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback(&filter);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::queryCount(filter);
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback(param);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
					}
					virtual ev_bool deleteField(_in ev_int32 index)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback(index);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::deleteField(index);
					}
					virtual EarthView::World::Core::CVariant max(_in const EVString& expression)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* expression_Char = expression.makeBuffer();
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback(expression_Char);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::max(expression);
					}
					virtual EarthView::World::Core::CVariant min(_in const EVString& expression)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* expression_Char = expression.makeBuffer();
							EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback(expression_Char);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::min(expression);
					}
					virtual EarthView::World::Core::CVariantArray getFieldValues(_in const EVString& fieldName, _in ev_bool isUnique)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							EarthView::World::Core::CVariantArray returnValue = *(EarthView::World::Core::CVariantArray*)m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback(fieldName_Char, isUnique);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFieldValues(fieldName, isUnique);
					}
					virtual ev_vector<ev_int32> getFiledTypes() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback != NULL && this->isCustomExtend())
						{
							ev_vector<ev_int32> returnValue = *(ev_vector<ev_int32>*)m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getFiledTypes();
					}
					virtual ev_bool Lock()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::Lock();
					}
					virtual ev_bool UnLock()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::UnLock();
					}
					virtual EVString getIdName()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getIdName();
					}
					virtual EVString getUpdateTime()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getUpdateTime();
					}
					virtual ev_uint64 getDataVersion()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getDataVersion();
					}
					virtual ev_bool updateTime()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::updateTime();
					}
					virtual ev_bool updateDataVersion()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::updateDataVersion();
					}
					virtual ev_bool setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* sr)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback(sr);
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
					}
					virtual int getGeomStremType()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback != NULL && this->isCustomExtend())
						{
							int returnValue = m_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback();
							return returnValue;
						}
						else
							return this->CVectorFeatureClassPostGisOperator::getGeomStremType();
					}
				};
				REGISTER_FACTORY_CLASS(CVectorFeatureClassPostGisOperatorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString(void *pObjectXXXX, _inout void* stream, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_openDataset_ev_bool_CDataStream_EVString_NoVirtual(void *pObjectXXXX, _inout void* stream, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::openDataset(*(EarthView::World::Core::CDataStream*)stream, name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createDataset(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createDataset(*(EarthView::World::Core::CDataStream*)stream);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createDataset_ev_bool_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createDataset(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureClassName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getFeatureClassName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureClassName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureClassName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream(void *pObjectXXXX, _in ev_uint32 id, _out void* feature )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, *(EarthView::World::Core::CDataStream*)feature);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getFeature(id, *(EarthView::World::Core::CDataStream*)feature);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _out void* feature )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, *(EarthView::World::Core::CDataStream*)feature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(void *pObjectXXXX, _in ev_uint32 id, _inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, *(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getFeature(id, *(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeature_ev_bool_ev_uint32_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_NoVirtual(void *pObjectXXXX, _in ev_uint32 id, _inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeature(id, *(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteFeature(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteFeature_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream(void *pObjectXXXX, _inout void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureCount(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFeatureCount_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFeatureCount(*(EarthView::World::Core::CDataStream*)filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateExtent();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateExtent();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateExtent_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateExtent();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->getExtent(pEnvelope);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getExtent_ev_bool_IEnvelope_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Geometry::IEnvelope* pEnvelope )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getExtent(pEnvelope);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream(void *pObjectXXXX, _inout void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						void* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::query(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
					else
					{
						void* objXXXX = ptrNativeObject->query(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_query_void_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					void* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::query(*(EarthView::World::Core::CDataStream*)filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(void *pObjectXXXX, _inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos, _in void* queryData )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::nextFeature(*(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos, queryData);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->nextFeature(*(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos, queryData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_nextFeature_ev_bool_vector<EarthView_World_Core_CVariant>_ev_real64_ev_real64_vector<ev_bool>_void_NoVirtual(void *pObjectXXXX, _inout void* values, _inout ev_real64& lenght, _inout ev_real64& area, _inout void* pos, _in void* queryData )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::nextFeature(*(vector<EarthView::World::Core::CVariant>*)values, lenght, area, *(vector<ev_bool>*)pos, queryData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream(void *pObjectXXXX, _out void* os, _in void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::select(*(EarthView::World::Core::CDataStream*)os, *(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->select(*(EarthView::World::Core::CDataStream*)os, *(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_select_ev_bool_CDataStream_CDataStream_NoVirtual(void *pObjectXXXX, _out void* os, _in void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::select(*(EarthView::World::Core::CDataStream*)os, *(EarthView::World::Core::CDataStream*)filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void(void *pObjectXXXX, _in void* queryData )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::endQuery(queryData);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endQuery(queryData);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_endQuery_ev_bool_void_NoVirtual(void *pObjectXXXX, _in void* queryData )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::endQuery(queryData);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream(void *pObjectXXXX, _in void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::queryCount(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->queryCount(*(EarthView::World::Core::CDataStream*)filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_queryCount_ev_uint32_CDataStream_NoVirtual(void *pObjectXXXX, _in void* filter )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::queryCount(*(EarthView::World::Core::CDataStream*)filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createSpatialIndex(param);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_createSpatialIndex_ev_bool_ISpatialIndexParam_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::ISpatialIndexParam* param )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::createSpatialIndex(param);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rebulidSpatialIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_rebulidSpatialIndex_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::rebulidSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteSpatialIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteSpatialIndex_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteField(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_deleteField_ev_bool_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 index )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::deleteField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::max(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->max(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_max_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::max(expression1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::min(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariant objXXXX = ptrNativeObject->min(expression1);
						EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_min_CVariant_EVString_NoVirtual(void *pObjectXXXX, _in const char* expression )
				{
					EarthView::World::Core::ev_string expression1 = expression;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::min(expression1);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool(void *pObjectXXXX, _in const char* fieldName, _in ev_bool isUnique )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFieldValues(fieldName1, isUnique);
						EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->getFieldValues(fieldName1, isUnique);
						EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFieldValues_CVariantArray_EVString_ev_bool_NoVirtual(void *pObjectXXXX, _in const char* fieldName, _in ev_bool isUnique )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EarthView::World::Core::CVariantArray objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFieldValues(fieldName1, isUnique);
					EarthView::World::Core::CVariantArray *pXXXX = new EarthView::World::Core::CVariantArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_vector<ev_int32> objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFiledTypes();
						ev_vector<ev_int32> *pXXXX = new ev_vector<ev_int32>(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
					else
					{
						ev_vector<ev_int32> objXXXX = ptrNativeObject->getFiledTypes();
						ev_vector<ev_int32> *pXXXX = new ev_vector<ev_int32>(objXXXX);
						((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
						return (void*)pXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getFiledTypes_ev_vector<ev_int32>_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_vector<ev_int32> objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getFiledTypes();
					ev_vector<ev_int32> *pXXXX = new ev_vector<ev_int32>(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::Lock();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->Lock();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_Lock_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::Lock();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::UnLock();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->UnLock();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_UnLock_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::UnLock();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getIdName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getIdName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getIdName_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getIdName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateTime();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateTime();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateTime_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateTime();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateDataVersion();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->updateDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_updateDataVersion_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::updateDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->setSpatialReference(sr);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_setSpatialReference_ev_bool_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* sr )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::setSpatialReference(sr);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					if (dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*)ptrNativeObject) != NULL)
					{
						int objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getGeomStremType();
						return objXXXX;
					}
					else
					{
						int objXXXX = ptrNativeObject->getGeomStremType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_Callback* pCallback )
				{
					CVectorFeatureClassPostGisOperatorProxy* ptr = dynamic_cast<CVectorFeatureClassPostGisOperatorProxy*>((EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CVectorFeatureClassPostGisOperator_getGeomStremType_int_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator*) pObjectXXXX;
					int objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CVectorFeatureClassPostGisOperator::getGeomStremType();
					return objXXXX;
				}
			}
		}
	}
}
