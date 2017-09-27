/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/ivectorfiledatalayerfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace VectorFileParser
			{
				typedef int  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class IVectorFileDataLayerFactoryProxy : public EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory
				{
				private:
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					IVectorFileDataLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : IVectorFileDataLayerFactory(pList)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback();
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->IVectorFileDataLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(IVectorFileDataLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					IVectorFileDataLayerFactoryProxy* ptr = dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::createInstance();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					IVectorFileDataLayerFactoryProxy* ptr = dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::createInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					IVectorFileDataLayerFactoryProxy* ptr = dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					if (dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					IVectorFileDataLayerFactoryProxy* ptr = dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory* ptrNativeObject = (EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					IVectorFileDataLayerFactoryProxy* ptr = dynamic_cast<IVectorFileDataLayerFactoryProxy*>((EarthView::World::Spatial::VectorFileParser::IVectorFileDataLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_VectorFileParser_IVectorFileDataLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
