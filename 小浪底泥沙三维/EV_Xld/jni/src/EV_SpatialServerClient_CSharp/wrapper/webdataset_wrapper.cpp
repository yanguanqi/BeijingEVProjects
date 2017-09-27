/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialserverclient/webdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			typedef int  ( _stdcall EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebDataset_getName_EVString_Callback)();
			typedef ev_uint64  ( _stdcall EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback)();
			typedef char*  ( _stdcall EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback)();
			typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
			class CWebDatasetProxy : public EarthView::World::Spatial::CWebDataset
			{
			private:
				EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback;
				EarthView_World_Spatial_CWebDataset_getName_EVString_Callback* m_EarthView_World_Spatial_CWebDataset_getName_EVString_Callback;
				EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback;
				EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback;
				EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback;
				EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback;
				EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback;
				EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback;
			public:
				CWebDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CWebDataset(pList)
				{
					m_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_getName_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback = NULL;
					m_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType(EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getName_EVString(EarthView_World_Spatial_CWebDataset_getName_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getName_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getDescription_EVString(EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString(EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool(EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool(EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
				}
				virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getType();
				}
				virtual EVString getName() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebDataset_getName_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getName();
				}
				virtual ev_uint64 getDataVersion() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
					{
						ev_uint64 returnValue = m_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getDataVersion();
				}
				virtual EVString getDescription() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getDescription();
				}
				virtual EVString getUpdateTime() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
					{
						EVString returnValue = m_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getUpdateTime();
				}
				virtual ev_bool hasSubDataset() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::hasSubDataset();
				}
				virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::getDataSourceRef();
				}
				virtual ev_bool canEdit() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::canEdit();
				}
				virtual ev_bool isEditing() const
				{
					if(m_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::isEditing();
				}
				virtual ev_bool startEditing(_in ev_bool withUndo)
				{
					if(m_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
						return returnValue;
					}
					else
						return this->CWebDataset::startEditing(withUndo);
				}
				virtual ev_bool stopEditing(_in ev_bool isSave)
				{
					if(m_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
						return returnValue;
					}
					else
						return this->CWebDataset::stopEditing(isSave);
				}
				virtual ev_bool isBeginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::isBeginEditingOperation();
				}
				virtual ev_bool beginEditingOperation()
				{
					if(m_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CWebDataset::beginEditingOperation();
				}
				virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
				{
					if(m_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
						return returnValue;
					}
					else
						return this->CWebDataset::endEditingOperation(isConfirm);
				}
			};
			REGISTER_FACTORY_CLASS(CWebDatasetProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebDataset_getType_EVDatasetType(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getType();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getType_EVDatasetType(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_CWebDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getType();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getName();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getName();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getName_EVString_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getName_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDataVersion();
					return objXXXX;
				}
				else
				{
					ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_CWebDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDataVersion();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getDescription_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getDescription();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getDescription_EVString_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getDescription_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDescription();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				else
				{
					EVString objXXXX = ptrNativeObject->getUpdateTime();
					return objXXXX.makeBuffer();
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_CWebDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getUpdateTime();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::hasSubDataset();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->hasSubDataset();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::hasSubDataset();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDataSourceRef();
					return objXXXX;
				}
				else
				{
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_CWebDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::getDataSourceRef();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_canEdit_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::canEdit();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->canEdit();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_canEdit_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::canEdit();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_isEditing_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::isEditing();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isEditing();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_isEditing_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::isEditing();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::startEditing(withUndo);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::startEditing(withUndo);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::stopEditing(isSave);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::stopEditing(isSave);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::isBeginEditingOperation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::isBeginEditingOperation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::beginEditingOperation();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::beginEditingOperation();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				if (dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::endEditingOperation(isConfirm);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
			{
				CWebDatasetProxy* ptr = dynamic_cast<CWebDatasetProxy*>((EarthView::World::Spatial::CWebDataset*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_CWebDataset_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
			{
				EarthView::World::Spatial::CWebDataset* ptrNativeObject = (EarthView::World::Spatial::CWebDataset*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::CWebDataset::endEditingOperation(isConfirm);
				return objXXXX;
			}
		}
	}
}
