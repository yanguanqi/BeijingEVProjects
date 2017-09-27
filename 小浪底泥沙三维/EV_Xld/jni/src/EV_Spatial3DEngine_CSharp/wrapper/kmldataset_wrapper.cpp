/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmldataset.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Kml
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Geometry
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
			namespace KmlManager
			{
				typedef int  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback)();
				typedef ev_uint64  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback)();
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback)(_in ev_bool withUndo);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback)(_in ev_bool isSave);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback)(_in ev_bool isConfirm);
				class CKmlDataSetProxy : public EarthView::World::Spatial3D::KmlManager::CKmlDataSet
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback;
				public:
					CKmlDataSetProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDataSet(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getType();
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getName();
					}
					virtual ev_uint64 getDataVersion() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback != NULL && this->isCustomExtend())
						{
							ev_uint64 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getDataVersion();
					}
					virtual EVString getDescription() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getDescription();
					}
					virtual EVString getUpdateTime() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getUpdateTime();
					}
					virtual ev_bool hasSubDataset() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::hasSubDataset();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* getDataSourceRef() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::getDataSourceRef();
					}
					virtual ev_bool canEdit() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::canEdit();
					}
					virtual ev_bool isEditing() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::isEditing();
					}
					virtual ev_bool startEditing(_in ev_bool withUndo)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback(withUndo);
							return returnValue;
						}
						else
							return this->CKmlDataSet::startEditing(withUndo);
					}
					virtual ev_bool stopEditing(_in ev_bool isSave)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback(isSave);
							return returnValue;
						}
						else
							return this->CKmlDataSet::stopEditing(isSave);
					}
					virtual ev_bool isBeginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::isBeginEditingOperation();
					}
					virtual ev_bool beginEditingOperation()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSet::beginEditingOperation();
					}
					virtual ev_bool endEditingOperation(_in ev_bool isConfirm)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback(isConfirm);
							return returnValue;
						}
						else
							return this->CKmlDataSet::endEditingOperation(isConfirm);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlDataSetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_push_back_void_CKmlDataSet(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::CKmlDataSet*& t )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ptrNativeObject->push_back(t);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_remove_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  pos )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ptrNativeObject->remove(pos);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_empty_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->empty();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::KmlManager::CKmlDataSet*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_OperatorIndex_CKmlDataSet_ev_size_t(void *pObjXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets& objYYYY = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* objXXXX = objYYYY[n];
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::KmlManager::CKmlDataSet*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_at_CKmlDataSet_ev_size_t(void *pObjectXXXX, _in ev_uint64  n )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* objXXXX = ptrNativeObject->at(n);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint64   _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_size_ev_size_t(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ev_size_t objXXXX = ptrNativeObject->size();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_resize_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  newSize )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ptrNativeObject->resize(newSize);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_reserve_void_ev_size_t(void *pObjectXXXX, _in ev_uint64  count )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ptrNativeObject->reserve(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_CKmlDataSets_clear_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*) pObjectXXXX;
					ptrNativeObject->clear();
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mParentDataSets( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets &objXXXX = ptrNativeObject->mParentDataSets;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mParentDataSets( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mParentDataSets = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*)value;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mSubDataSets( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets &objXXXX = ptrNativeObject->mSubDataSets;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mSubDataSets( void *pObjectXXXX, void*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mSubDataSets = *(EarthView::World::Spatial3D::KmlManager::CKmlDataSet::CKmlDataSets*)value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsDirty( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsDirty;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsDirty( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mIsDirty = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsAddGeoObject( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsAddGeoObject;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsAddGeoObject( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mIsAddGeoObject = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsDeRenderGeoObject( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsDeRenderGeoObject;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mIsDeRenderGeoObject( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mIsDeRenderGeoObject = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataVersion();
						return objXXXX;
					}
					else
					{
						ev_uint64 objXXXX = ptrNativeObject->getDataVersion();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint64  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataVersion_ev_uint64_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_uint64 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataVersion();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDescription();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getDescription();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDescription_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDescription();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getUpdateTime();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getUpdateTime();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getUpdateTime_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getUpdateTime();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::hasSubDataset();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->hasSubDataset();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_hasSubDataset_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::hasSubDataset();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataSourceRef();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->getDataSourceRef();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getDataSourceRef_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::getDataSourceRef();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::canEdit();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->canEdit();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_canEdit_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::canEdit();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isEditing();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isEditing();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isEditing_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isEditing();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::startEditing(withUndo);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->startEditing(withUndo);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_startEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool withUndo )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::startEditing(withUndo);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::stopEditing(isSave);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->stopEditing(isSave);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_stopEditing_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isSave )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::stopEditing(isSave);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isBeginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isBeginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_isBeginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::isBeginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::beginEditingOperation();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->beginEditingOperation();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_beginEditingOperation_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::beginEditingOperation();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::endEditingOperation(isConfirm);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->endEditingOperation(isConfirm);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_Callback* pCallback )
				{
					CKmlDataSetProxy* ptr = dynamic_cast<CKmlDataSetProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_endEditingOperation_ev_bool_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool isConfirm )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSet::endEditingOperation(isConfirm);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_setDataSourceRef_void_CKmlDataSource(void *pObjectXXXX, _in EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ref_dataSource )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ptrNativeObject->setDataSourceRef(ref_dataSource);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_addFolder_void_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ptrNativeObject->addFolder(ref_kmlDocument, ref_parent);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_addKmlFile_CKmlDocument_EVString_CKmlDocument(void *pObjectXXXX, _in const char* filePath, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Core::ev_string filePath1 = filePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->addKmlFile(filePath1, parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_addNetworkLink_CKmlDocument_CKmlNetworkLink_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* ref_kmlNet, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->addNetworkLink(ref_kmlNet, parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_addKmlObject_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ptrNativeObject->addKmlObject(ref_geoObj, ref_parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_updateKmlObject_void_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ptrNativeObject->updateKmlObject(ref_geoObj, parent);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_addTour_void_CTour_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour* ref_tour, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ptrNativeObject->addTour(ref_tour, ref_parent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_removeKmlObject_ev_bool_CGeoObjectExtension_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* ref_geoObj, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeKmlObject(ref_geoObj, ref_parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_removeFolder_ev_bool_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeFolder(ref_kmlDocument);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_removeKmlNetworkLink_ev_bool_CKmlNetworkLink_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink, _in EarthView::World::Spatial::Kml::CKmlDocument* parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeKmlNetworkLink(netLink, parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_removeTour_ev_bool_CTour_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CTour* ref_tour, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeTour(ref_tour, ref_parent);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_save_ev_bool_EVString(void *pObjectXXXX, _in const char* savePath )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->save(savePath1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_saveKmlObject_ev_bool_EVString_CGeoObjectExtension(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CGeoObjectExtension* geoObj )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveKmlObject(savePath1, geoObj);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_saveKmlNetworkLink_ev_bool_EVString_CKmlNetworkLink(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CKmlNetworkLink* netLink )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveKmlNetworkLink(savePath1, netLink);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_saveFolder_ev_bool_EVString_CKmlDocument(void *pObjectXXXX, _in char* savePath, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_folder )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveFolder(savePath1, ref_folder);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_saveTour_ev_bool_EVString_CTour(void *pObjectXXXX, _in const char* savePath, _in EarthView::World::Spatial::Kml::CTour* tour )
				{
					EarthView::World::Core::ev_string savePath1 = savePath;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveTour(savePath1, tour);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_getEnvelopeRef_CEnvelope_ev_bool(void *pObjectXXXX, _inout ev_bool& hasData )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Geometry::CEnvelope objXXXX = ptrNativeObject->getEnvelopeRef(hasData);
					EarthView::World::Spatial::Geometry::CEnvelope *pXXXX = new EarthView::World::Spatial::Geometry::CEnvelope(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mFilePath( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mFilePath;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mFilePath( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mFilePath = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_misShare( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->misShare;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_misShare( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->misShare = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Kml::CKmlDocument*  _stdcall Get_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mKmlDocument( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					EarthView::World::Spatial::Kml::CKmlDocument* objXXXX = ptrNativeObject->mKmlDocument;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_KmlManager_CKmlDataSet_mKmlDocument( void *pObjectXXXX, EarthView::World::Spatial::Kml::CKmlDocument*  value )
				{
					((EarthView::World::Spatial3D::KmlManager::CKmlDataSet*)pObjectXXXX)->mKmlDocument = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSet_removeFolder_ev_bool_CKmlDocument_CKmlDocument(void *pObjectXXXX, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_kmlDocument, _in EarthView::World::Spatial::Kml::CKmlDocument* ref_parent )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSet* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSet*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeFolder(ref_kmlDocument, ref_parent);
					return objXXXX;
				}
			}
		}
	}
}
