/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/kmldatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace KmlManager
			{
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback)();
				typedef int  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback)();
				class CKmlDatasetIteratorProxy : public EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback;
				public:
					CKmlDatasetIteratorProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDatasetIterator(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset(EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32(EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType(EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* next()
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback();
							return returnValue;
						}
						else
							return this->CKmlDatasetIterator::next();
					}
					virtual ev_uint32 getSize() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CKmlDatasetIterator::getSize();
					}
					virtual EarthView::World::Spatial::GeoDataset::EVDatasetType getDatasetType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::EVDatasetType returnValue = (EarthView::World::Spatial::GeoDataset::EVDatasetType)m_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback();
							return returnValue;
						}
						else
							return this->CKmlDatasetIterator::getDatasetType();
					}
				};
				REGISTER_FACTORY_CLASS(CKmlDatasetIteratorProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::next();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->next();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_Callback* pCallback )
				{
					CKmlDatasetIteratorProxy* ptr = dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_next_IDataset_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::next();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::getSize();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getSize();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_Callback* pCallback )
				{
					CKmlDatasetIteratorProxy* ptr = dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getSize_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::getSize();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					if (dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::getDatasetType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->getDatasetType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_Callback* pCallback )
				{
					CKmlDatasetIteratorProxy* ptr = dynamic_cast<CKmlDatasetIteratorProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDatasetIterator_getDatasetType_EVDatasetType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::EVDatasetType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDatasetIterator::getDatasetType();
					return (int)objXXXX;
				}
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback)();
				class CKmlDataSourceProxy : public EarthView::World::Spatial3D::KmlManager::CKmlDataSource
				{
				private:
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback;
				public:
					CKmlDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CKmlDataSource(pList)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource(EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::getPropertySet();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CKmlDataSource::getDatasetInfo(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CKmlDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CKmlDataSource::openDataset(name);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CKmlDataSource::closeDataset(dataset);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CKmlDataSource::deleteDataset(name);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback();
							return returnValue;
						}
						else
							return this->CKmlDataSource::clone();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CKmlDataSource::createFeatureClass(name, geofield, fields);
					}
				};
				REGISTER_FACTORY_CLASS(CKmlDataSourceProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_refresh_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ptrNativeObject->refresh();
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getPropertySet();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getPropertySet();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getDatasetInfo(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->getDatasetInfo(name1);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::closeDataset(dataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::closeDataset(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					if (dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::clone();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->clone();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_clone_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::KmlManager::CKmlDataSource::clone();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_saveDataset_ev_bool_EVString_EVString(void *pObjectXXXX, _in char* name, _in char* fileName )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->saveDataset(name1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createDataset_IDataset_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->createDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_existDataset_ev_bool_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_getDataset_IDataset_EVString(void *pObjectXXXX, _in char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->getDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_KmlManager_CKmlDataSource_addDataset_void_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* ref_dataset )
				{
					EarthView::World::Spatial3D::KmlManager::CKmlDataSource* ptrNativeObject = (EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX;
					ptrNativeObject->addDataset(ref_dataset);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CKmlDataSourceProxy* ptr = dynamic_cast<CKmlDataSourceProxy*>((EarthView::World::Spatial3D::KmlManager::CKmlDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_KmlManager_CKmlDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
			}
		}
	}
}
