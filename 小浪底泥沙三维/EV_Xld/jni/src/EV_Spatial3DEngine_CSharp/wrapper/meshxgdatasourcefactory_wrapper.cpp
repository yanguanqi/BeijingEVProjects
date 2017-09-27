/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/meshxgdatasourcefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial3D
		{
			namespace ModelManager
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef void  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				class CMeshXGDataSourceFactoryProxy : public EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory
				{
				private:
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback;
					EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback;
				public:
					CMeshXGDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CMeshXGDataSourceFactory(pList)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::openDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::createDataSource(path, fileName);
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xml_Char = xml.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::createFromXML(xml);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::openDataSource(connection);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::createDataSource(connection);
					}
					virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
						}
						else
							return this->CMeshXGDataSourceFactory::destroyDataSource(pDataSource);
					}
					virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
					{
						if(m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
							return returnValue;
						}
						else
							return this->CMeshXGDataSourceFactory::existDataSource(pDataSource);
					}
				};
				REGISTER_FACTORY_CLASS(CMeshXGDataSourceFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getSingletonPtr_CMeshXGDataSourceFactory( )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* objXXXX = EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_closeDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* ds )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->closeDataSource(ds);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::openDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::openDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createFromXML(xml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createFromXML(xml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::openDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_openDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::openDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::createDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::destroyDataSource(pDataSource);
					else
						ptrNativeObject->destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory::destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
				{
					CMeshXGDataSourceFactoryProxy* ptr = dynamic_cast<CMeshXGDataSourceFactoryProxy*>((EarthView::World::Spatial3D::ModelManager::CMeshXGDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_ModelManager_CMeshXGDataSourceFactory_existDataSource_ev_bool_IDataSource(pCallback);
					}
				}
			}
		}
	}
}
