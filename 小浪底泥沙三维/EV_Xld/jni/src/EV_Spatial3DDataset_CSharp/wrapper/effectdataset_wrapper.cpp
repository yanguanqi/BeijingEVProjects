/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3ddataset/effectdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Utility
			{
			}
			namespace Math
			{
			}
		}
		namespace Spatial3D
		{
		}
		namespace Core
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
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback)();
				class CEffectDataSetIteratorProxy : public EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback;
				public:
					CEffectDataSetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectDataSetIterator(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset(EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSetIterator::next();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSetIterator::getSize();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSetIterator::getDatasetType();
					}
				};
				REGISTER_FACTORY_CLASS(CEffectDataSetIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_Callback* pCallback )
				{
					CEffectDataSetIteratorProxy* ptr = dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetIteratorProxy* ptr = dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CEffectDataSetIteratorProxy* ptr = dynamic_cast<CEffectDataSetIteratorProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSetIterator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSetIterator::getDatasetType();
					return (int)objXXXX;
				}
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback)();
				typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureIterator*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureSelection*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback)(_in int spaIndex);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback)(_in const EarthView::World::Spatial::GeoDataset::IField* field);
				typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback)(_out EarthView::World::Spatial::GeoDataset::IFeature* feature);
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback)(_in const EarthView::World::Spatial::GeoDataset::IFeature* buffer);
				typedef EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback)();
				typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback)(_in ev_uint32 id);
				typedef EarthView::World::Spatial::GeoDataset::ITableProxy*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CEffectDataSetProxy : public EarthView::World::Spatial3D::Dataset::CEffectDataSet
				{
				private:
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CEffectDataSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CEffectDataSet(pList)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum(EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField(EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature(EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature(EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature(EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32(EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy(EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVFeatureClassType getFeatureClassType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVFeatureClassType returnValue = (EarthView::World::Spatial::GeoDataset::EVFeatureClassType)m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFeatureClassType();
					}
					virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getGeometryType();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFieldsRef();
					}
					virtual ev_uint32 getFieldCount() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFieldCount();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFieldRef(index);
					}
					virtual ev_int32 findField(_in const EVString& fieldName) const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* fieldName_Char = fieldName.makeBuffer();
							ev_int32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback(fieldName_Char);
							return returnValue;
						}
						else
							return this->CEffectDataSet::findField(fieldName);
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getGeometryField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getGeometryField();
					}
					virtual const EarthView::World::Spatial::GeoDataset::IField* getIDField() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getIDField();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum getSpatialIndexEnum() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum returnValue = (EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getSpatialIndexEnum();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* getFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback(id);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureIterator* query(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureIterator* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSet::query(filter);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureSelection* select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeatureSelection* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback(filter);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CEffectDataSet::select(filter);
					}
					virtual ev_uint32 getFeatureCount(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback(filter);
							return returnValue;
						}
						else
							return this->CEffectDataSet::getFeatureCount(filter);
					}
					virtual ev_bool createSpatialIndex(_in EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum spaIndex)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback((int)spaIndex);
							return returnValue;
						}
						else
							return this->CEffectDataSet::createSpatialIndex(spaIndex);
					}
					virtual ev_bool rebulidSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::rebulidSpatialIndex();
					}
					virtual ev_bool deleteSpatialIndex()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::deleteSpatialIndex();
					}
					virtual ev_bool deleteField(_in ev_uint32 index)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback(index);
							return returnValue;
						}
						else
							return this->CEffectDataSet::deleteField(index);
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeature* createFeatureBuffer()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::createFeatureBuffer();
					}
					virtual ev_bool insert(_in EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CEffectDataSet::insert(feature);
					}
					virtual ev_uint32 insertFeatureBuffer(_in const EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CEffectDataSet::insertFeatureBuffer(feature);
					}
					virtual ev_bool update(_in const EarthView::World::Spatial::GeoDataset::IFeature* feature)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback(feature);
							return returnValue;
						}
						else
							return this->CEffectDataSet::update(feature);
					}
					virtual EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getEnvelopeRef();
					}
					virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getSpatialReferenceRef();
					}
					virtual ev_bool deleteFeature(_in ev_uint32 id)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback(id);
							return returnValue;
						}
						else
							return this->CEffectDataSet::deleteFeature(id);
					}
					virtual EarthView::World::Spatial::GeoDataset::ITableProxy* createTableProxy()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::ITableProxy* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::createTableProxy();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CEffectDataSet::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CEffectDataSet::stopEditing(isSave);
					}
					virtual ev_bool saveEditing()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::saveEditing();
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CEffectDataSet::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CEffectDataSet::endEditingOperation(isConfirm);
					}
					virtual ev_bool addField(_in const EarthView::World::Spatial::GeoDataset::IField* field)
					{
						if(m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback(field);
							return returnValue;
						}
						else
							return this->CEffectDataSet::addField(field);
					}
				};
				REGISTER_FACTORY_CLASS(CEffectDataSetProxy);
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatures_CEffectFeatureVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector& objXXXX = ptrNativeObject->getFeatures();
					EarthView::World::Spatial3D::Dataset::CEffectFeatureVector *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getMaxID_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getMaxID();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSrid_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getSrid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_addEffectInstance_ev_uint32_CEffectInstance(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->addEffectInstance(*(EarthView::World::Spatial3D::Dataset::CEffectInstance*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteEffectInstance_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->deleteEffectInstance(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_updateEffectInstance_ev_bool_CEffectInstance(void *pObjectXXXX, _in void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateEffectInstance(*(EarthView::World::Spatial3D::Dataset::CEffectInstance*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEffectInstanceById_ev_bool_ev_uint32_CEffectInstance(void *pObjectXXXX, _in ev_uint32 id, _out void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEffectInstanceById(id, *(EarthView::World::Spatial3D::Dataset::CEffectInstance*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEffectInstances_CEffectInstanceVector(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector objXXXX = ptrNativeObject->getEffectInstances();
					EarthView::World::Spatial3D::Dataset::CEffectInstanceVector *pXXXX = new EarthView::World::Spatial3D::Dataset::CEffectInstanceVector(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_removeFeatureBuffer_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeFeatureBuffer(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEffectInfoById_ev_bool_ev_uint32_CEffectInfo(void *pObjectXXXX, _in ev_uint32 id, _out void* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEffectInfoById(id, *(EarthView::World::Spatial3D::Dataset::CEffectInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getResourceIdsByEffectID_void_ev_uint32_CStringArray(void *pObjectXXXX, _in ev_uint32 effectId, _out void* resouceIds )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ptrNativeObject->getResourceIdsByEffectID(effectId, *(EarthView::World::Core::CStringArray*)resouceIds);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getResourceByID_ev_bool_ev_uint32_CEffectResourceInfo(void *pObjectXXXX, _in ev_uint32 id, _out void* val )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getResourceByID(id, *(EarthView::World::Spatial3D::Dataset::CEffectResourceInfo*)val);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_addEffect_ev_uint32_ev_uint32_CEffectInfoVector_CStringArray(void *pObjectXXXX, _in ev_uint32 effectId, _in void* infoVec, _in void* scriptArray )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->addEffect(effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)infoVec, *(EarthView::World::Core::CStringArray*)scriptArray);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_updateEffect_void_ev_uint32_CEffectInfoVector_CStringArray(void *pObjectXXXX, _in ev_uint32 effectId, _in void* infoVec, _in void* scriptArray )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ptrNativeObject->updateEffect(effectId, *(EarthView::World::Spatial3D::Dataset::CEffectInfoVector*)infoVec, *(EarthView::World::Core::CStringArray*)scriptArray);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_addEffectInfo_ev_uint32_CEffectInfo(void *pObjectXXXX, _inout void* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->addEffectInfo(*(EarthView::World::Spatial3D::Dataset::CEffectInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_updateEffectInfo_ev_bool_CEffectInfo(void *pObjectXXXX, _inout void* info )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->updateEffectInfo(*(EarthView::World::Spatial3D::Dataset::CEffectInfo*)info);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeatureClassType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->getFeatureClassType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureClassType_EVFeatureClassType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVFeatureClassType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeatureClassType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getGeometryType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getGeometryType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldsRef();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldsRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldRef(index);
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFieldRef(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::findField(fieldName1);
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
				{
					EarthView::World::Core::ev_string fieldName1 = fieldName;
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::findField(fieldName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getGeometryField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getGeometryField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getGeometryField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getGeometryField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getIDField();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getIDField();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getIDField_IField_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getIDField();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getSpatialIndexEnum();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum objXXXX = ptrNativeObject->getSpatialIndexEnum();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialIndexEnum_EVSpatialIndexEnum_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getSpatialIndexEnum();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeature(id);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeature_IFeature_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeature(id);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::query(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_query_IFeatureIterator_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::query(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::select(filter);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureSelection*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_select_IFeatureSelection_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureSelection* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::select(filter);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeatureCount(filter);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getFeatureCount(filter);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getFeatureCount_ev_uint32_IQueryFilter_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getFeatureCount(filter);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum(void *pObjectXXXX, _in int spaIndex )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createSpatialIndex_ev_bool_EVSpatialIndexEnum_NoVirtual(void *pObjectXXXX, _in int spaIndex )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createSpatialIndex((EarthView::World::Spatial::GeoDataset::EVSpatialIndexEnum)spaIndex);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::rebulidSpatialIndex();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->rebulidSpatialIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_rebulidSpatialIndex_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::rebulidSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteSpatialIndex();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteSpatialIndex();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteSpatialIndex_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteSpatialIndex();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteField(index);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteField(index);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteField(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createFeatureBuffer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->createFeatureBuffer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createFeatureBuffer_IFeature_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createFeatureBuffer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::insert(feature);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->insert(feature);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insert_ev_bool_IFeature_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::insert(feature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::insertFeatureBuffer(feature);
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->insertFeatureBuffer(feature);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_insertFeatureBuffer_ev_uint32_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::insertFeatureBuffer(feature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::update(feature);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->update(feature);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_update_ev_bool_IFeature_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IFeature* feature )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::update(feature);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getEnvelopeRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getEnvelopeRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getSpatialReferenceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getSpatialReferenceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteFeature(id);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteFeature(id);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteFeature_ev_bool_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 id )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::deleteFeature(id);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ITableProxy*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createTableProxy();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->createTableProxy();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::ITableProxy*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_createTableProxy_ITableProxy_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::ITableProxy* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::createTableProxy();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::saveEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->saveEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_saveEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::saveEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					if (dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Dataset::CEffectDataSet::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_isDatasetLocked_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isDatasetLocked();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_lockDataset_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->lockDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Dataset_CEffectDataSet_unlockDataset_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Dataset::CEffectDataSet* ptrNativeObject = (EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX;
					ptrNativeObject->unlockDataset();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_addField_ev_bool_IField(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField( void *pObjectXXXX, EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField_Callback* pCallback )
				{
					CEffectDataSetProxy* ptr = dynamic_cast<CEffectDataSetProxy*>((EarthView::World::Spatial3D::Dataset::CEffectDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Dataset_CEffectDataSet_deleteField_ev_bool_IField(pCallback);
					}
				}
			}
		}
	}
}
