/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/wmslayer.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback)();
			typedef int  ( _stdcall EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWMSDatasetProxy : public EarthView::World::Spatial::CWMSDataset
			{
			private:
				EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback* m_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback;
				EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWMSDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSDataset(pList)
				{
					m_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope(EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType(EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getName_EVString(EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getDescription_EVString(EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool(EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool(EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::hasSubDataset();
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getEnvelopeRef() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getEnvelopeRef();
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getUpdateTime();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWMSDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWMSDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWMSDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWMSDatasetProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				if (dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDataset::hasSubDataset();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasSubDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDataset::hasSubDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				if (dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDataset::getEnvelopeRef();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelopeRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSDataset_getEnvelopeRef_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSDataset::getEnvelopeRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSLayerInfo*  _stdcall EarthView_World_Spatial_CWMSDataset_getLayerInfoRef_CWMSLayerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* objXXXX = ptrNativeObject->getLayerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSServerInfo*  _stdcall EarthView_World_Spatial_CWMSDataset_getServerInfoRef_CWMSServerInfo(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSServerInfo* objXXXX = ptrNativeObject->getServerInfoRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMSDataset_getMap_ev_int32_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_EVString_COGCResult(void *pObjectXXXX, _in const char* styles, _in const char* srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _in ev_uint32 width, _in ev_uint32 height, _in const char* format, _out void* result )
			{
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Core::ev_string srs1 = srs;
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getMap(styles1, srs1, mapRect, width, height, format1, *(EarthView::World::Spatial::COGCResult*)result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSDataset_getLayerCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getLayerCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMSDataset_findLayer_ev_int32_EVString(void *pObjectXXXX, _in const char* lyrName )
			{
				EarthView::World::Core::ev_string lyrName1 = lyrName;
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->findLayer(lyrName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSDataset*  _stdcall EarthView_World_Spatial_CWMSDataset_openDataset_CWMSDataset_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSDataset* objXXXX = ptrNativeObject->openDataset(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::CWMSLayerInfo*  _stdcall EarthView_World_Spatial_CWMSDataset_getSubLayerInfoRef_CWMSLayerInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EarthView::World::Spatial::CWMSLayerInfo* objXXXX = ptrNativeObject->getSubLayerInfoRef(index);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_CWMSDataset_getFeatureInfo_ev_int32_EVString_EVString_IEnvelope_ev_uint32_ev_uint32_ev_uint32_ev_uint32_EVString_COGCResult(void *pObjectXXXX, _in const char* styles, _in const char* srs, _in const EarthView::World::Spatial::Geometry::IEnvelope* mapRect, _in ev_uint32 width, _in ev_uint32 height, _in ev_uint32 x, _in ev_uint32 y, _in const char* infoformat, _out void* result )
			{
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Core::ev_string srs1 = srs;
				EarthView::World::Core::ev_string infoformat1 = infoformat;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->getFeatureInfo(styles1, srs1, mapRect, width, height, x, y, infoformat1, *(EarthView::World::Spatial::COGCResult*)result);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 r, _in ev_int32 g, _in ev_int32 b, _in ev_bool trans )
			{
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setBackColor(r, g, b, trans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_getBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _out ev_int32& r, _out ev_int32& g, _out ev_int32& b, _out ev_bool& trans )
			{
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->getBackColor(r, g, b, trans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_clearBackColor_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->clearBackColor();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setElevation_void_EVString(void *pObjectXXXX, _in const char* elevation )
			{
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setElevation(elevation1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getElevation_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getElevation();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setTime_void_EVString(void *pObjectXXXX, _in const char* datatime )
			{
				EarthView::World::Core::ev_string datatime1 = datatime;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setTime(datatime1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSDataset_getFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSDataset_getInfoFormatCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getInfoFormatCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getInfoFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getInfoFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setReturnFeatureCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 featureCount )
			{
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setReturnFeatureCount(featureCount);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSDataset_getReturnFeatureCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getReturnFeatureCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_CWMSDataset_getExceptionFormat_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getExceptionFormat();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getExceptionFormat_EVString_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getExceptionFormat(index);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getUsedExceptionFormatForGetMap_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUsedExceptionFormatForGetMap();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setUsedExceptionFormatForGetMap_void_EVString(void *pObjectXXXX, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setUsedExceptionFormatForGetMap(format1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSDataset_getUsedExceptionFormatForGetFeatureInfo_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getUsedExceptionFormatForGetFeatureInfo();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSDataset_setUsedExceptionFormatForGetFeatureInfo_void_EVString(void *pObjectXXXX, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMSDataset* ptrNativeObject = (EarthView::World::Spatial::CWMSDataset*) pObjectXXXX;
				ptrNativeObject->setUsedExceptionFormatForGetFeatureInfo(format1);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getName_EVString_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getDescription_EVString_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWMSDatasetProxy* ptr = dynamic_cast<CWMSDatasetProxy*>((EarthView::World::Spatial::CWMSDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback)(_in ev_bool selected);
			typedef int  ( _stdcall EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback)(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in int type);
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback)(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection);
			typedef EarthView::World::Spatial::Atlas::ILayerSelection*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback)(_in char*& name);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback)(_in char*& value);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback)(_in ev_bool can);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback)(_in ev_bool editing);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback)(_in ev_bool visible);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback)(_in ev_bool selectable);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback)(_in ev_bool bIgnore);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef ev_real64  ( _stdcall EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback)(_in ev_real64 scale);
			typedef EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback)(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback)(_in ev_uint8 transparent);
			typedef ev_uint8  ( _stdcall EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback)();
			typedef const EarthView::World::Spatial::Geometry::IEnvelope*  ( _stdcall EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback)(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback)(_out void* stream);
			typedef char*  ( _stdcall EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback)();
			typedef void  ( _stdcall EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback)(_inout void* stream);
			class CWMSLayerProxy : public EarthView::World::Spatial::CWMSLayer
			{
			private:
				EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback* m_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback;
				EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback* m_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback;
				EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* m_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback;
				EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback* m_EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback;
				EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback* m_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback;
				EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback* m_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback;
				EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback* m_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback;
				EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback* m_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback;
				EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback* m_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback;
				EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback* m_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback;
				EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback;
				EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback;
				EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback* m_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback;
				EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback* m_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback;
				EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback* m_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback;
				EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* m_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback;
				EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback* m_EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback;
				EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback;
				EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback* m_EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback;
				EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback;
				EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback;
				EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback* m_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback;
			public:
				CWMSLayerProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSLayer(pList)
				{
					m_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool(EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType(EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset(EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString(EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource(EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType(EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_clearSelection_void(EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection(EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection(EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getName_EVString(EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setName_void_EVString(EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDescription_EVString(EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString(EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool(EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool(EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool(EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool(EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool(EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool(EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool(EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64(EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64(EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64(EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64(EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference(EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8(EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8(EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope(EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_clone_ILayer(EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream(EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_toXML_EVString(EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement(EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream(EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback = pCallback;
				}
				virtual const EarthView::World::Spatial::Geometry::IEnvelope* getExtent() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback != NULL && this->isCustomExtend())
					{
						const EarthView::World::Spatial::Geometry::IEnvelope* returnValue = m_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getExtent();
				}
				virtual ev_bool isValid() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::isValid();
				}
				virtual ev_bool draw(_in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in EarthView::World::Spatial::Atlas::EVVectorLayerRendererType type)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback(display, (int)type);
						return returnValue;
					}
					else
						return this->CWMSLayer::draw(display, type);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getType();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataset* getDataset()
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDataset();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getName();
				}
				virtual void setName(_in const EVString& name)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* name_Char = name.makeBuffer();
						m_EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback(name_Char);
					}
					else
						return this->CWMSLayer::setName(name);
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDescription();
				}
				virtual void setDescription(_in const EVString& value)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* value_Char = value.makeBuffer();
						m_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback(value_Char);
					}
					else
						return this->CWMSLayer::setDescription(value);
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::isEditing();
				}
				virtual void setEditing(_in ev_bool editing)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback(editing);
					}
					else
						return this->CWMSLayer::setEditing(editing);
				}
				virtual ev_bool isVisible() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::isVisible();
				}
				virtual void setVisible(_in ev_bool visible)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback(visible);
					}
					else
						return this->CWMSLayer::setVisible(visible);
				}
				virtual ev_bool isSelected() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::isSelected();
				}
				virtual void setSelected(_in ev_bool selected)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback(selected);
					}
					else
						return this->CWMSLayer::setSelected(selected);
				}
				virtual ev_bool ignoreScale() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::ignoreScale();
				}
				virtual void setIgnoreScale(_in ev_bool bIgnore)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback(bIgnore);
					}
					else
						return this->CWMSLayer::setIgnoreScale(bIgnore);
				}
				virtual ev_real64 getDisplayMaxScale() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDisplayMaxScale();
				}
				virtual void setDisplayMaxScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWMSLayer::setDisplayMaxScale(scale);
				}
				virtual ev_real64 getDisplayMinScale() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						ev_real64 returnValue = m_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDisplayMinScale();
				}
				virtual void setDisplayMinScale(_in ev_real64 scale)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback(scale);
					}
					else
						return this->CWMSLayer::setDisplayMinScale(scale);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* clone() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMSLayer::clone();
				}
				virtual EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getSpatialReference();
				}
				virtual void setSpatialReference(_in EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
					}
					else
						return this->CWMSLayer::setSpatialReference(ref_sr);
				}
				virtual EVString toXML() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::toXML();
				}
				virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback(&element);
					}
					else
						return this->CWMSLayer::fromXmlElement(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::toXmlElement();
				}
				virtual EVString getDatasetName()
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDatasetName();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSource()
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getDataSource();
				}
				virtual void select(_in EarthView::World::Spatial::GeoDataset::IQueryFilter* filter, _in EarthView::World::Spatial::Atlas::EVSelectionResultType type)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback(filter, (int)type);
					}
					else
						return this->CWMSLayer::select(filter, type);
				}
				virtual void clearSelection()
				{
					if(m_EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback();
					}
					else
						return this->CWMSLayer::clearSelection();
				}
				virtual void setLayerSelection(_in EarthView::World::Spatial::Atlas::ILayerSelection* selection)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback(selection);
					}
					else
						return this->CWMSLayer::setLayerSelection(selection);
				}
				virtual EarthView::World::Spatial::Atlas::ILayerSelection* getLayerSelection()
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayerSelection* returnValue = m_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getLayerSelection();
				}
				virtual void setCanEdit(_in ev_bool can)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback(can);
					}
					else
						return this->CWMSLayer::setCanEdit(can);
				}
				virtual ev_bool isSelectable() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::isSelectable();
				}
				virtual void setSelectable(_in ev_bool selectable)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback(selectable);
					}
					else
						return this->CWMSLayer::setSelectable(selectable);
				}
				virtual void setTransparentValue(_in ev_uint8 transparent)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback(transparent);
					}
					else
						return this->CWMSLayer::setTransparentValue(transparent);
				}
				virtual ev_uint8 getTransparentValue() const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback != NULL && this->isCustomExtend())
					{
						ev_uint8 returnValue = m_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayer::getTransparentValue();
				}
				virtual void toStream(_out EarthView::World::Core::CDataStream& stream) const
				{
					if(m_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWMSLayer::toStream(stream);
				}
				virtual void fromStream(_inout EarthView::World::Core::CDataStream& stream)
				{
					if(m_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback(&stream);
					}
					else
						return this->CWMSLayer::fromStream(stream);
				}
			};
			REGISTER_FACTORY_CLASS(CWMSLayerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setDataset_void_IDataset(void *pObjectXXXX, _in const EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setDataset(ref_dataset);
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*)ptrNativeObject) != NULL)
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::getExtent();
					return objXXXX;
				}
				else
				{
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getExtent();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial_CWMSLayer_getExtent_IEnvelope_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::getExtent();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSLayer_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::isValid();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isValid();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_isValid_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSLayer_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWMSLayer_draw_ev_bool_ISpatialDisplay_EVVectorLayerRendererType_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialDisplay* display, _in int type )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayer::draw(display, (EarthView::World::Spatial::Atlas::EVVectorLayerRendererType)type);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setDiaplaySRS_void_EVString(void *pObjectXXXX, _in const char* srs )
			{
				EarthView::World::Core::ev_string srs1 = srs;
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setDiaplaySRS(srs1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayer_getDisplaySRS_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDisplaySRS();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayer_getDisplayStyle_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getDisplayStyle();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setDisplayStyle_void_EVString(void *pObjectXXXX, _in const char* styles )
			{
				EarthView::World::Core::ev_string styles1 = styles;
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setDisplayStyle(styles1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayer_getFormat_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFormat();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setFormat_void_EVString(void *pObjectXXXX, _in const char* format )
			{
				EarthView::World::Core::ev_string format1 = format;
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setFormat(format1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _in ev_int32 r, _in ev_int32 g, _in ev_int32 b, _in ev_bool trans )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setBackColor(r, g, b, trans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_getBackColor_void_ev_int32_ev_int32_ev_int32_ev_bool(void *pObjectXXXX, _out ev_int32& r, _out ev_int32& g, _out ev_int32& b, _out ev_bool& trans )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->getBackColor(r, g, b, trans);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_clearBackColor_void(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->clearBackColor();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setElevation_void_EVString(void *pObjectXXXX, _in const char* elevation )
			{
				EarthView::World::Core::ev_string elevation1 = elevation;
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setElevation(elevation1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayer_getElevation_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getElevation();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_CWMSLayer_setTime_void_EVString(void *pObjectXXXX, _in const char* datatime )
			{
				EarthView::World::Core::ev_string datatime1 = datatime;
				EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				ptrNativeObject->setTime(datatime1);
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_CWMSLayer_getTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWMSLayer* ptrNativeObject = (EarthView::World::Spatial::CWMSLayer*) pObjectXXXX;
				const EVString objXXXX = ptrNativeObject->getTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_isSelected_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setSelected_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getType_EVLayerType_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDataset_IDataset_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDataset_IDataset(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDatasetName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDataSource_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_select_void_IQueryFilter_EVSelectionResultType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_clearSelection_void( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_clearSelection_void_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_clearSelection_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setLayerSelection_void_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getLayerSelection_ILayerSelection(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getName_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setName_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setName_void_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setName_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDescription_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setDescription_void_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setCanEdit_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setEditing_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_isVisible_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setVisible_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_isSelectable_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setSelectable_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_ignoreScale_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setIgnoreScale_void_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMaxScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMaxScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getDisplayMinScale_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setDisplayMinScale_void_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getSpatialReference_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setSpatialReference_void_ISpatialReference(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_setTransparentValue_void_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_getTransparentValue_ev_uint8(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_clone_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_clone_ILayer_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_clone_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_toStream_void_CDataStream(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_toXML_EVString_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_toXML_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_fromXmlElement_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream_Callback* pCallback )
			{
				CWMSLayerProxy* ptr = dynamic_cast<CWMSLayerProxy*>((EarthView::World::Spatial::CWMSLayer*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayer_fromStream_void_CDataStream(pCallback);
				}
			}
			typedef int  ( _stdcall EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback)();
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
			typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
			class CWMSLayerFactoryProxy : public EarthView::World::Spatial::CWMSLayerFactory
			{
			private:
				EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback;
				EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback;
				EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback;
				EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback;
				EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
			public:
				CWMSLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CWMSLayerFactory(pList)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
					m_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType(EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer(EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
				{
					if(m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback();
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMSLayerFactory::createInstance();
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& strXml)
				{
					if(m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback != NULL && this->isCustomExtend())
					{
						char* strXml_Char = strXml.makeBuffer();
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback(strXml_Char);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMSLayerFactory::createInstance(strXml);
				}
				virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
						if(returnValue != NULL) {
							((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
						}
						return returnValue;
					}
					else
						return this->CWMSLayerFactory::createInstance(element);
				}
				virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
				{
					if(m_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback();
						return returnValue;
					}
					else
						return this->CWMSLayerFactory::getType();
				}
				virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
				{
					if(m_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
						return returnValue;
					}
					else
						return this->CWMSLayerFactory::destroyInstance(layer);
				}
			};
			REGISTER_FACTORY_CLASS(CWMSLayerFactoryProxy);
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance();
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_Callback* pCallback )
			{
				CWMSLayerFactoryProxy* ptr = dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance(strXml1);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
			{
				CWMSLayerFactoryProxy* ptr = dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
			{
				EarthView::World::Core::ev_string strXml1 = strXml;
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance(strXml1);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				if (dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
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
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
			{
				CWMSLayerFactoryProxy* ptr = dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_CWMSLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
			{
				EarthView::World::Spatial::CWMSLayerFactory* ptrNativeObject = (EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX;
				EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWMSLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType_Callback* pCallback )
			{
				CWMSLayerFactoryProxy* ptr = dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerFactory_getType_EVLayerType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
			{
				CWMSLayerFactoryProxy* ptr = dynamic_cast<CWMSLayerFactoryProxy*>((EarthView::World::Spatial::CWMSLayerFactory*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWMSLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
				}
			}
		}
	}
}
