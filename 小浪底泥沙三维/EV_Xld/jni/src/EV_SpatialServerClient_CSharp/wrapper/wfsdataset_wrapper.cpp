/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wfsdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback)();
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback)();
			typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWFSDatasetProxy : public EarthView::World::Spatial::CWFSDataset
			{
			private:
				EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback;
				EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback* m_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback;
				EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback;
				EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWFSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSDataset(pList)
				{
					m_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType(EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference(EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields(EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType(EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getName_EVString(EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getDescription_EVString(EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool(EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool(EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType()
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getGeometryType();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReferenceRef()
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getSpatialReferenceRef();
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef()
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getFieldsRef();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWFSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWFSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWFSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWFSDatasetProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				if (dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSLayerInfo*  _stdcall EarthView_World_Spatial_CWFSDataset_getLayerInfoRef_CWFSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWFSServerInfo*  _stdcall EarthView_World_Spatial_CWFSDataset_getServerInfoRef_CWFSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWFSServerInfo* objXXXX = ptrNativeObject->getServerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSDataset_setTime_void_EVString(void *pObjectXXXX, _in const char* datatime )
			{
				EarthView::World::Core::ev_string datatime1 = datatime;
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				ptrNativeObject->setTime(datatime1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSDataset_getTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSDataset_getFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSDataset_getFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSDataset_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				if (dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getGeometryType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWFSDataset_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSDataset_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSDataset_getExceptionFormat_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getExceptionFormat();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				if (dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getSpatialReferenceRef();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReferenceRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_CWFSDataset_getSpatialReferenceRef_ISpatialReference_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getSpatialReferenceRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWFSDataset_getExceptionFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getExceptionFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureIterator*  _stdcall EarthView_World_Spatial_CWFSDataset_getFeature_IFeatureIterator_EVString_EVString_EVString_IEnvelope(void *pObjectXXXX, _in const char* version, _in const char* srs, _in const char* filter, _in const EarthView::World::Spatial::Geometry::IEnvelope* maprect )
			{
				EarthView::World::Core::ev_string version1 = version;
				EarthView::World::Core::ev_string srs1 = srs;
				EarthView::World::Core::ev_string filter1 = filter;
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeatureIterator* objXXXX = ptrNativeObject->getFeature(version1, srs1, filter1, maprect);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				if (dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getFieldsRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_CWFSDataset_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSDataset* ptrNativeObject = (EarthView::World::Spatial::CWFSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSDataset::getFieldsRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getName_EVString_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getDescription_EVString_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWFSDatasetProxy* ptr = dynamic_cast<CWFSDatasetProxy*>((EarthView::World::Spatial::CWFSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback)();
			typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback)();
			typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
			class CWFSFeatureIteratorProxy : public EarthView::World::Spatial::CWFSFeatureIterator
			{
			private:
				EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback* m_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback;
				EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback* m_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback;
				EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback;
			public:
				CWFSFeatureIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSFeatureIterator(pList)
				{
					m_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature(EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields(EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32(EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString(EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeature* next()
				{
					if(m_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeatureIterator::next();
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFields() const
				{
					if(m_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeatureIterator::getFields();
				}
				virtual const EarthView::World::Spatial::GeoDataset::IField* getField(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSFeatureIterator::getField(index);
				}
				virtual ev_int32 findField(_in const EVString& fieldName) const
				{
					if(m_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* fieldName_Char = fieldName.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback(fieldName_Char);
						return returnValue;
					}
					else
						return this->CWFSFeatureIterator::findField(fieldName);
				}
			};
			REGISTER_FACTORY_CLASS(CWFSFeatureIteratorProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureIteratorProxy*>((EarthView::World::Spatial::CWFSFeatureIterator*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeatureIterator::next();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->next();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_Callback* pCallback )
			{
				CWFSFeatureIteratorProxy* ptr = dynamic_cast<CWFSFeatureIteratorProxy*>((EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_CWFSFeatureIterator_next_IFeature_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWFSFeatureIterator* ptrNativeObject = (EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeatureIterator::next();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields_Callback* pCallback )
			{
				CWFSFeatureIteratorProxy* ptr = dynamic_cast<CWFSFeatureIteratorProxy*>((EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_getFields_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureIteratorProxy* ptr = dynamic_cast<CWFSFeatureIteratorProxy*>((EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_getField_IField_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString_Callback* pCallback )
			{
				CWFSFeatureIteratorProxy* ptr = dynamic_cast<CWFSFeatureIteratorProxy*>((EarthView::World::Spatial::CWFSFeatureIterator*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeatureIterator_findField_ev_int32_EVString(pCallback);
				}
			}
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback)();
			typedef const EarthView::World::Spatial::GeoDataset::IFields*  ( _stdcall EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback)();
			typedef ev_uint32  ( _stdcall EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback)();
			typedef const EarthView::World::Spatial::GeoDataset::IField*  ( _stdcall EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback)(_in ev_uint32 index);
			typedef ev_int32  ( _stdcall EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback)(_in char*& fieldName);
			typedef void  ( _stdcall EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback)(_out void* value, _in ev_uint32 index);
			typedef const EarthView::World::Spatial::Geometry::IGeometry*  ( _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback)(_in const EarthView::World::Spatial::Geometry::IGeometry* geom);
			typedef void  ( _stdcall EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback)(_in const void* value, _in ev_uint32 index);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IFeature*  ( _stdcall EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback)();
			class CWFSFeatureProxy : public EarthView::World::Spatial::CWFSFeature
			{
			private:
				EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback* m_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback;
				EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback* m_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback;
				EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback* m_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback;
				EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback* m_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback;
				EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback* m_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback;
				EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback* m_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback;
				EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback* m_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback;
				EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback* m_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback;
				EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback* m_EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback;
			public:
				CWFSFeatureProxy(EarthView::World::Core::CNameValuePairList *pList) : CWFSFeature(pList)
				{
					m_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32(EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType(EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields(EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32(EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32(EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString(EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32(EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry(EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry(EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32(EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool(EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool(EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWFSFeature_clone_IFeature(EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback = pCallback;
				}
				virtual ev_uint32 getID() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getID();
				}
				virtual EarthView::World::Spatial::Geometry::EVGeometryType getGeometryType() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::EVGeometryType returnValue = (EarthView::World::Spatial::Geometry::EVGeometryType)m_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getGeometryType();
				}
				virtual const EarthView::World::Spatial::GeoDataset::IFields* getFieldsRef() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::GeoDataset::IFields* returnValue = m_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getFieldsRef();
				}
				virtual ev_uint32 getFieldCount() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						ev_uint32 returnValue = m_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getFieldCount();
				}
				virtual const EarthView::World::Spatial::GeoDataset::IField* getFieldRef(_in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::GeoDataset::IField* returnValue = m_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback(index);
						return returnValue;
					}
					else
						return this->CWFSFeature::getFieldRef(index);
				}
				virtual ev_int32 findField(_in const EVString& fieldName) const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* fieldName_Char = fieldName.makeBuffer();
						ev_int32 returnValue = m_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback(fieldName_Char);
						return returnValue;
					}
					else
						return this->CWFSFeature::findField(fieldName);
				}
				virtual void getValue(_out EarthView::World::Core::CVariant& value, _in ev_uint32 index) const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback(&value, index);
					}
					else
						return this->CWFSFeature::getValue(value, index);
				}
				virtual void setGeometry(_in const EarthView::World::Spatial::Geometry::IGeometry* geom)
				{
					if(m_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback(geom);
					}
					else
						return this->CWFSFeature::setGeometry(geom);
				}
				virtual void setValue(_in const EarthView::World::Core::CVariant& value, _in ev_uint32 index)
				{
					if(m_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback(&value, index);
					}
					else
						return this->CWFSFeature::setValue(value, index);
				}
				virtual const EarthView::World::Spatial::Geometry::IGeometry* getGeometryRef() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IGeometry* returnValue = m_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getGeometryRef();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::GeoDataset::IFeature* clone() const
				{
					if(m_EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IFeature* returnValue = m_EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWFSFeature::clone();
				}
				virtual ev_bool deleteFeature()
				{
					if(m_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::deleteFeature();
				}
				virtual ev_bool saveFeature()
				{
					if(m_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWFSFeature::saveFeature();
				}
			};
			REGISTER_FACTORY_CLASS(CWFSFeatureProxy);
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSFeature_getID_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getID();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getID();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getID_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSFeature_getID_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getID();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getGeometryType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->getGeometryType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryType_EVGeometryType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				EarthView::World::Spatial::Geometry::EVGeometryType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getGeometryType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldsRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->getFieldsRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IFields*  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldsRef_IFields_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IFields* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldsRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldCount();
					return objXXXX;
				}
				else
				{
					ev_uint32 objXXXX = ptrNativeObject->getFieldCount();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldCount_ev_uint32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldRef(index);
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->getFieldRef(index);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::GeoDataset::IField*  _stdcall EarthView_World_Spatial_CWFSFeature_getFieldRef_IField_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				const EarthView::World::Spatial::GeoDataset::IField* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getFieldRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString(void *pObjectXXXX, _in const char* fieldName )
			{
				EarthView::World::Core::ev_string fieldName1 = fieldName;
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::findField(fieldName1);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->findField(fieldName1);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWFSFeature_findField_ev_int32_EVString_NoVirtual(void *pObjectXXXX, _in const char* fieldName )
			{
				EarthView::World::Core::ev_string fieldName1 = fieldName;
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::findField(fieldName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
				else
					ptrNativeObject->getValue(*(EarthView::World::Core::CVariant*)value, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_getValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _out void* value, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getValue(*(EarthView::World::Core::CVariant*)value, index);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
			{
				EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWFSFeature::setGeometry(geom);
				else
					ptrNativeObject->setGeometry(geom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_setGeometry_void_IGeometry_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::IGeometry* geom )
			{
				EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWFSFeature::setGeometry(geom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Spatial::CWFSFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
				else
					ptrNativeObject->setValue(*(EarthView::World::Core::CVariant*)value, index);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWFSFeature_setValue_void_CVariant_ev_uint32_NoVirtual(void *pObjectXXXX, _in const void* value, _in ev_uint32 index )
			{
				EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Spatial::CWFSFeature::setValue(*(EarthView::World::Core::CVariant*)value, index);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getGeometryRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometryRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial_CWFSFeature_getGeometryRef_IGeometry_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getGeometryRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWFSFeature_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_CWFSFeature_clone_IFeature(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				if (dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_clone_IFeature( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_clone_IFeature_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_clone_IFeature(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeature*  _stdcall EarthView_World_Spatial_CWFSFeature_clone_IFeature_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWFSFeature* ptrNativeObject = (EarthView::World::Spatial::CWFSFeature*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IFeature* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWFSFeature::clone();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_deleteFeature_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool_Callback* pCallback )
			{
				CWFSFeatureProxy* ptr = dynamic_cast<CWFSFeatureProxy*>((EarthView::World::Spatial::CWFSFeature*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWFSFeature_saveFeature_ev_bool(pCallback);
				}
			}
		}
	}
}
