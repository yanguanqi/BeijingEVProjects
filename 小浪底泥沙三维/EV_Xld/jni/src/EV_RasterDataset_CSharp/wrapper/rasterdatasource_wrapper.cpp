/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "rasterdataset/rasterdatasource.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
			}
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Raster
			{
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IPropertySet*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback)(_in char*& name);
				typedef EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback)(_in int type);
				typedef EarthView::World::Spatial::GeoDataset::IFeatureClass*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback)(_in char*& name, _inout void* geofield, _in const void* fields);
				typedef EarthView::World::Spatial::GeoDataset::IDataset*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback)(_in char*& name);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset);
				typedef char*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback)();
				class CRasterDataSourceProxy : public EarthView::World::Spatial2D::Raster::CRasterDataSource
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback;
				public:
					CRasterDataSourceProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterDataSource(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet(EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool(EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset(EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource(EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback = pCallback;
					}
					virtual EVString getName() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSource::getName();
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSource::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IPropertySet* getPropertySet() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IPropertySet* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterDataSource::getPropertySet();
					}
					virtual ev_bool isValid() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSource::isValid();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfo* getDatasetInfo(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataMetaInfo* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback(name_Char);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterDataSource::getDatasetInfo(name);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataMetaInfos* getDatasetInfos(_in EarthView::World::Spatial::GeoDataset::EVDatasetType type)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataMetaInfos* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback((int)type);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterDataSource::getDatasetInfos(type);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataset* openDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataset* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CRasterDataSource::openDataset(name);
					}
					virtual ev_bool closeDataset(_in EarthView::World::Spatial::GeoDataset::IDataset* dataset)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback(dataset);
							return returnValue;
						}
						else
							return this->CRasterDataSource::closeDataset(dataset);
					}
					virtual ev_bool deleteDataset(_in const EVString& name)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback(name_Char);
							return returnValue;
						}
						else
							return this->CRasterDataSource::deleteDataset(name);
					}
					virtual EVString toXML() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSource::toXML();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* clone() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterDataSource::clone();
					}
					virtual EarthView::World::Spatial::GeoDataset::IFeatureClass* createFeatureClass(_in const EVString& name, _inout EarthView::World::Spatial::GeoDataset::IGeometryField& geofield, _in const EarthView::World::Spatial::GeoDataset::IFields& fields)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IFeatureClass* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback(name_Char, &geofield, &fields);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRasterDataSource::createFeatureClass(name, geofield, fields);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterDataSourceProxy);
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->getPropertySet();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IPropertySet*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getPropertySet_IPropertySet_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IPropertySet* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getPropertySet();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::isValid();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isValid();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_isValid_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::isValid();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getDatasetInfo(name1);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfo*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfo_IDataMetaInfo_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfo* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getDatasetInfo(name1);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataMetaInfos*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_getDatasetInfos_IDataMetaInfos_EVDatasetType_NoVirtual(void *pObjectXXXX, _in int type )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataMetaInfos* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::getDatasetInfos((EarthView::World::Spatial::GeoDataset::EVDatasetType)type);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::openDataset(name1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->openDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataset*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_openDataset_IDataset_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataset* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::openDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::closeDataset(dataset);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->closeDataset(dataset);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_closeDataset_ev_bool_IDataset_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataset* dataset )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::closeDataset(dataset);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::deleteDataset(name1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->deleteDataset(name1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_deleteDataset_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::deleteDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::toXML();
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->toXML();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_toXML_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::toXML();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->clone();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_clone_IDataSource_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSource::clone();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSource_containDataset_ev_bool_EVString(void *pObjectXXXX, _in const char* name )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial2D::Raster::CRasterDataSource* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->containDataset(name1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields_Callback* pCallback )
				{
					CRasterDataSourceProxy* ptr = dynamic_cast<CRasterDataSourceProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSource*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSource_createFeatureClass_IFeatureClass_EVString_IGeometryField_IFields(pCallback);
					}
				}
				typedef ev_int32  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef void  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				class CRasterDataSourceFactoryProxy : public EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory
				{
				private:
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback;
					EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback;
				public:
					CRasterDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRasterDataSourceFactory(pList)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xml_Char = xml.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::createFromXML(xml);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::openDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::openDataSource(connection);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::createDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::createDataSource(connection);
					}
					virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
						}
						else
							return this->CRasterDataSourceFactory::destroyDataSource(pDataSource);
					}
					virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
					{
						if(m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
							return returnValue;
						}
						else
							return this->CRasterDataSourceFactory::existDataSource(pDataSource);
					}
				};
				REGISTER_FACTORY_CLASS(CRasterDataSourceFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createFromXML(xml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createFromXML(xml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::openDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::openDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::openDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_openDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::openDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::createDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_closeDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->closeDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::destroyDataSource(pDataSource);
					else
						ptrNativeObject->destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*  _stdcall EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_getSingletonPtr_CRasterDataSourceFactory( )
				{
					EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory* objXXXX = EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
				{
					CRasterDataSourceFactoryProxy* ptr = dynamic_cast<CRasterDataSourceFactoryProxy*>((EarthView::World::Spatial2D::Raster::CRasterDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Raster_CRasterDataSourceFactory_existDataSource_ev_bool_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
