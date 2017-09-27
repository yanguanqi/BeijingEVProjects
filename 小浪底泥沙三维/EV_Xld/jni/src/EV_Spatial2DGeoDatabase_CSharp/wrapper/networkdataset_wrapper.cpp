/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dgeodatabase/networkdataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace GeoDataset
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CNetworkDatasetProxy : public EarthView::World::Spatial2D::GeoDataset::CNetworkDataset
				{
				private:
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CNetworkDatasetProxy(EarthView::World::Core::CNameValuePairList *pList) : CNetworkDataset(pList)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CNetworkDataset::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CNetworkDataset::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CNetworkDataset::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CNetworkDataset::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CNetworkDatasetProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					if (dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CNetworkDatasetProxy* ptr = dynamic_cast<CNetworkDatasetProxy*>((EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::GeoDataset::CNetworkDataset::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::IEnvelope*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getEnvelope_IEnvelope(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::IEnvelope* objXXXX = ptrNativeObject->getEnvelope();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getJunctionFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getJunctionFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IFeatureClass*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getSourceFeatureClass_IFeatureClass(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IFeatureClass* objXXXX = ptrNativeObject->getSourceFeatureClass();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_fromStream_ev_bool_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->fromStream(*(EarthView::World::Core::CDataStream*)stream);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getCostAttributeName_CStringArray(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getCostAttributeName();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_setCostAttribute_void_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ptrNativeObject->setCostAttribute(name1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getCurrentCostAttribute_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getCurrentCostAttribute();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Geometry::IGeometry*  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getGeometry_IGeometry_ev_uint32(void *pObjectXXXX, _in ev_uint32 edgeID )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::IGeometry* objXXXX = ptrNativeObject->getGeometry(edgeID);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_attachEdge_ev_int32_CPoint(void *pObjectXXXX, _in const void* location )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->attachEdge(*(EarthView::World::Spatial::Geometry::CPoint*)location);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getEdgeCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getEdgeCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial2D_GeoDataset_CNetworkDataset_getNodeCount_ev_uint32(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::GeoDataset::CNetworkDataset* ptrNativeObject = (EarthView::World::Spatial2D::GeoDataset::CNetworkDataset*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getNodeCount();
					return objXXXX;
				}
			}
		}
	}
}
