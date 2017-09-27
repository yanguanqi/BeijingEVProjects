/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmtslayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWMTSDatasetProxy : public EarthView::World::Spatial::CWMTSDataset
			{
			private:
				EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWMTSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSDataset(pList)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType(EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getName_EVString(EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString(EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool(EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool(EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getEnvelopeRef();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWMTSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWMTSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWMTSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSDatasetProxy);
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				if (dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDataset::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDataset::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSDataset_getLayerInfoRef_CWMTSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CWMTSDataset_getServerInfoRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getServerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMTSDataset_getFeatureInfo_ev_int32_EVString_ev_uint32_ev_uint32_ev_real64_ev_real64_COGCResult(void *pObjectXXXX, _in const char* tileMatrix, _in ev_uint32 row, _in ev_uint32 col, _in ev_real64 x, _in ev_real64 y, _out void* result )
			{
				EarthView::World::Core::ev_string tileMatrix1 = tileMatrix;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(tileMatrix1, row, col, x, y, *(EarthView::World::Spatial::COGCResult*)result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMTSDataset_getTile_ev_int32_EVString_ev_uint32_ev_uint32_COGCResult(void *pObjectXXXX, _in const char* tileMatrix, _in ev_uint32 row, _in ev_uint32 col, _out void* result )
			{
				EarthView::World::Core::ev_string tileMatrix1 = tileMatrix;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTile(tileMatrix1, row, col, *(EarthView::World::Spatial::COGCResult*)result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMTSDataset_getTile_ev_int32_EVString_ev_uint32_ev_uint32_COGCResult_ev_uint32(void *pObjectXXXX, _in const char* tileMatrix, _in ev_uint32 row, _in ev_uint32 col, _out void* result, _in ev_uint32 timeout_ms )
			{
				EarthView::World::Core::ev_string tileMatrix1 = tileMatrix;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getTile(tileMatrix1, row, col, *(EarthView::World::Spatial::COGCResult*)result, timeout_ms);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSDataset_getTileMatrixSet_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTileMatrixSet();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSDataset_setTileMatrixSet_void_EVString(void *pObjectXXXX, _in const char* tileMatrixSet )
			{
				EarthView::World::Core::ev_string tileMatrixSet1 = tileMatrixSet;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ptrNativeObject->setTileMatrixSet(tileMatrixSet1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSDataset_getDisplayStyle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDisplayStyle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSDataset_setDisplayStyle_void_EVString(void *pObjectXXXX, _in const char* style )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ptrNativeObject->setDisplayStyle(style1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSDataset_getFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSDataset_setFormat_void_EVString(void *pObjectXXXX, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ptrNativeObject->setFormat(format1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSDataset_getInfoFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getInfoFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSDataset_setInfoFormat_void_EVString(void *pObjectXXXX, _in const char* infoformat )
			{
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ptrNativeObject->setInfoFormat(infoformat1);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				if (dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDataset::hasSubDataset();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasSubDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSDataset::hasSubDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getName_EVString_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getDescription_EVString_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMTSDatasetProxy* ptr = dynamic_cast<CWMTSDatasetProxy*>((EarthView::World::Spatial::CWMTSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CWMTSLayerProxy : public EarthView::World::Spatial::CWMTSLayer
			{
			private:
				EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback;
			public:
				CWMTSLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSLayer(pList)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool(EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType(EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset(EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString(EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource(EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_clearSelection_void(EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getName_EVString(EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString(EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString(EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString(EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool(EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool(EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool(EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool(EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool(EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope(EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_clone_ILayer(EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream(EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_toXML_EVString(EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getExtent();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::isValid();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CWMTSLayer::draw(display, type);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CWMTSLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CWMTSLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CWMTSLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CWMTSLayer::setVisible(visible);
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CWMTSLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CWMTSLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWMTSLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWMTSLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CWMTSLayer::setSpatialReference(ref_sr);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CWMTSLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CWMTSLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback();
					}
					else
						return this->CWMTSLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CWMTSLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CWMTSLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CWMTSLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CWMTSLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWMTSLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWMTSLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::getExtent();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMTSLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::getExtent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSLayerInfo*  _stdcall EarthView_World_Spatial_CWMTSLayer_getLayerInfoRef_CWMTSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMTSServerInfo*  _stdcall EarthView_World_Spatial_CWMTSLayer_getServerInfoRef_CWMTSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::CWMTSServerInfo* objXXXX = ptrNativeObject->getServerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMTSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayer_getLayerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getLayerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayer_getTileMatrixSet_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTileMatrixSet();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayer_getTileMatrix_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTileMatrix();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSLayer_setTileMatrix_void_EVString(void *pObjectXXXX, _in const char* matrix )
			{
				EarthView::World::Core::ev_string matrix1 = matrix;
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setTileMatrix(matrix1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayer_getDisplayStyle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getDisplayStyle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSLayer_setDisplayStyle_void_EVString(void *pObjectXXXX, _in const char* style )
			{
				EarthView::World::Core::ev_string style1 = style;
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setDisplayStyle(style1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMTSLayer_getFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMTSLayer_setFormat_void_EVString(void *pObjectXXXX, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMTSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX;
				ptrNativeObject->setFormat(format1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_clearSelection_void_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getName_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setName_void_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDescription_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_clone_ILayer_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_toXML_EVString_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CWMTSLayerProxy* ptr = dynamic_cast<CWMTSLayerProxy*>((EarthView::World::Spatial::CWMTSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CWMTSLayerFactoryProxy : public EarthView::World::Spatial::CWMTSLayerFactory
			{
			private:
				EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CWMTSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMTSLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
				{
					if(m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* strXml_Char = strXml.makeBuffer();
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSLayerFactory::createInstance(strXml);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMTSLayerFactory::createInstance(element);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWMTSLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CWMTSLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CWMTSLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CWMTSLayerFactoryProxy* ptr = dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance(strXml1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(strXml1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CWMTSLayerFactoryProxy* ptr = dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance(strXml1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CWMTSLayerFactoryProxy* ptr = dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMTSLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWMTSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMTSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CWMTSLayerFactoryProxy* ptr = dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CWMTSLayerFactoryProxy* ptr = dynamic_cast<CWMTSLayerFactoryProxy*>((EarthView::World::Spatial::CWMTSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMTSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
		}
	}
}
