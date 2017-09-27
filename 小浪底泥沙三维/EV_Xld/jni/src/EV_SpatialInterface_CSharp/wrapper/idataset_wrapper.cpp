/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class IDatasetProxy : public EarthView::World::Spatial::GeoDataset::IDataset
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					IDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataset(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType(EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString(EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64(EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString(EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString(EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataset::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->IDataset::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->IDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->IDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->IDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->IDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(IDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					if (dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					IDatasetProxy* ptr = dynamic_cast<IDatasetProxy*>((EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataset_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial::GeoDataset::IDataset* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataset::endEditingOperation(isConfirm);
					return objXXXX;
				}
			}
		}
	}
}
