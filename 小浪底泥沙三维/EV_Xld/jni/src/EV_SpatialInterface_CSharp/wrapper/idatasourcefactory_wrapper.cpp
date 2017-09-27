/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idatasourcefactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace GeoDataset
			{
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback)();
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback)(_in char*& xml);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback)(_in char*& path, _in char*& fileName);
				typedef EarthView::World::Spatial::GeoDataset::IDataSource*  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback)(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection);
				typedef void  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback)(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource);
				class IDataSourceFactoryProxy : public EarthView::World::Spatial::GeoDataset::IDataSourceFactory
				{
				private:
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback;
					EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback;
				public:
					IDataSourceFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IDataSourceFactory(pList)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback = NULL;
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource(EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback)
					{
						m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback = pCallback;
					}
					virtual ev_int32 getType() const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->IDataSourceFactory::getType();
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createFromXML(_in const EVString& xml)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xml_Char = xml.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback(xml_Char);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::createFromXML(xml);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::openDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* openDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::openDataSource(connection);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in const EVString& path, _in const EVString& fileName)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* path_Char = path.makeBuffer();
							char* fileName_Char = fileName.makeBuffer();
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback(path_Char, fileName_Char);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::createDataSource(path, fileName);
					}
					virtual EarthView::World::Spatial::GeoDataset::IDataSource* createDataSource(_in EarthView::World::Spatial::GeoDataset::IPropertySet* connection)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::GeoDataset::IDataSource* returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback(connection);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::createDataSource(connection);
					}
					virtual void destroyDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource)
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback(pDataSource);
						}
						else
							return this->IDataSourceFactory::destroyDataSource(pDataSource);
					}
					virtual ev_bool existDataSource(_in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource) const
					{
						if(m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback(pDataSource);
							return returnValue;
						}
						else
							return this->IDataSourceFactory::existDataSource(pDataSource);
					}
				};
				REGISTER_FACTORY_CLASS(IDataSourceFactoryProxy);
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getType();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getType();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getType_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getType();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createFromXML(xml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createFromXML(xml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createFromXML_IDataSource_EVString_NoVirtual(void *pObjectXXXX, _in const char* xml )
				{
					EarthView::World::Core::ev_string xml1 = xml;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createFromXML(xml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->openDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_openDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::openDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(path1, fileName1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(path1, fileName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_EVString_EVString_NoVirtual(void *pObjectXXXX, _in const char* path, _in const char* fileName )
				{
					EarthView::World::Core::ev_string path1 = path;
					EarthView::World::Core::ev_string fileName1 = fileName;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(path1, fileName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(connection);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->createDataSource(connection);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSource*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_createDataSource_IDataSource_IPropertySet_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IPropertySet* connection )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSource* objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::createDataSource(connection);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::destroyDataSource(pDataSource);
					else
						ptrNativeObject->destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_destroyDataSource_void_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::destroyDataSource(pDataSource);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					const EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					if (dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::existDataSource(pDataSource);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->existDataSource(pDataSource);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource( void *pObjectXXXX, EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_Callback* pCallback )
				{
					IDataSourceFactoryProxy* ptr = dynamic_cast<IDataSourceFactoryProxy*>((EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_existDataSource_ev_bool_IDataSource_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSource* pDataSource )
				{
					const EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::IDataSourceFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::GeoDataset::IDataSourceFactory::existDataSource(pDataSource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_setDefaultDataSourcePath_void_EVString(_in const char* dsPath )
				{
					EarthView::World::Core::ev_string dsPath1 = dsPath;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory::setDefaultDataSourcePath(dsPath1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_GeoDataset_IDataSourceFactory_getDefaultDataSourcePath_EVString( )
				{
					EVString objXXXX = EarthView::World::Spatial::GeoDataset::IDataSourceFactory::getDefaultDataSourcePath();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_getSingletonPtr_CDataSourceFactoryEnumerator( )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* objXXXX = EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_getSingleton_CDataSourceFactoryEnumerator( )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator& objXXXX = EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator::getSingleton();
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_existDataSourceFactory_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 typeOfDataSource )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->existDataSourceFactory(typeOfDataSource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::GeoDataset::IDataSourceFactory*  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_getDataSourceFactory_IDataSourceFactory_ev_int32(void *pObjectXXXX, _in ev_int32 typeOfDataSource )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					EarthView::World::Spatial::GeoDataset::IDataSourceFactory* objXXXX = ptrNativeObject->getDataSourceFactory(typeOfDataSource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_addDataSourceFactory_ev_bool_IDataSourceFactory(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSourceFactory* ref_factory )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->addDataSourceFactory(ref_factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_removeDataSourceFactory_ev_bool_ev_int32(void *pObjectXXXX, _in ev_int32 typeOfDataSource )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeDataSourceFactory(typeOfDataSource);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_removeDataSourceFactory_ev_bool_IDataSourceFactory(void *pObjectXXXX, _in EarthView::World::Spatial::GeoDataset::IDataSourceFactory* factory )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->removeDataSourceFactory(factory);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_GeoDataset_CDataSourceFactoryEnumerator_clearDataSourceFactory_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator* ptrNativeObject = (EarthView::World::Spatial::GeoDataset::CDataSourceFactoryEnumerator*) pObjectXXXX;
					ptrNativeObject->clearDataSourceFactory();
				}
			}
		}
	}
}
