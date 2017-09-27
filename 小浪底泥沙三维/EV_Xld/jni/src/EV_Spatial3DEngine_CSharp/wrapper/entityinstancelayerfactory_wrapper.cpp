/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial3dengine/entityinstancelayerfactory.h"
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
		namespace Spatial3D
		{
			namespace Atlas
			{
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback)(_in char*& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds);
				typedef int  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CEntityInstanceLayerFactoryProxy : public EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory
				{
				private:
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CEntityInstanceLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CEntityInstanceLayerFactory(pList)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CEntityInstanceLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->CEntityInstanceLayerFactory::createInstance(element);
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_in const EVString& name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback != NULL && this->isCustomExtend())
						{
							char* name_Char = name.makeBuffer();
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback(name_Char, ds);
							return returnValue;
						}
						else
							return this->CEntityInstanceLayerFactory::createInstance(name, ds);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CEntityInstanceLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CEntityInstanceLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getSingletonPtr_CEntityInstanceLayerFactory( )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* objXXXX = EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_releaseSingletonPtr_void( )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::releaseSingletonPtr();
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::createInstance(name1, ds);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(name1, ds);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_IDataset_NoVirtual(void *pObjectXXXX, _in const char* name, _in EarthView::World::Spatial::GeoDataset::IDataset* ds )
				{
					EarthView::World::Core::ev_string name1 = name;
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::createInstance(name1, ds);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory* ptrNativeObject = (EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CEntityInstanceLayerFactoryProxy* ptr = dynamic_cast<CEntityInstanceLayerFactoryProxy*>((EarthView::World::Spatial3D::Atlas::CEntityInstanceLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Atlas_CEntityInstanceLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
