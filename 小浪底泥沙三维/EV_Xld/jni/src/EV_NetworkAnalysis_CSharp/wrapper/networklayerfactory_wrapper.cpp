/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "networkanalysis/networklayerfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial2D
		{
			namespace Atlas
			{
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CNetworkLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CNetworkLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CNetworkLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CNetworkLayerFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CNetworkLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CNetworkLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CNetworkLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CNetworkLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CNetworkLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CNetworkLayerFactoryProxy* ptr = dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CNetworkLayerFactoryProxy* ptr = dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CNetworkLayerFactoryProxy* ptr = dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CNetworkLayerFactoryProxy* ptr = dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CNetworkLayerFactoryProxy* ptr = dynamic_cast<CNetworkLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CNetworkLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CNetworkLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
				typedef int  ( _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback)();
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback)(_in char*& strXml);
				typedef EarthView::World::Spatial::Atlas::ILayer*  ( _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback)(_inout void* element);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback)(_in EarthView::World::Spatial::Atlas::ILayer* layer);
				class CRouteLayerFactoryProxy : public EarthView::World::Spatial2D::Atlas::CRouteLayerFactory
				{
				private:
					EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback* m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback;
					EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback;
					EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback* m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback;
					EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback* m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback;
					EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback* m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback;
				public:
					CRouteLayerFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CRouteLayerFactory(pList)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRouteLayerFactoryProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType(EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer(EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString(EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement(EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer(EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback)
					{
						m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Atlas::EVLayerType getType() const
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::EVLayerType returnValue = (EarthView::World::Spatial::Atlas::EVLayerType)m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback();
							return returnValue;
						}
						else
							return this->CRouteLayerFactory::getType();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance()
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback();
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRouteLayerFactory::createInstance();
					}
					virtual EarthView::World::Spatial::Atlas::ILayer* createInstance(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Atlas::ILayer* returnValue = m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRouteLayerFactory::createInstance(element);
					}
					virtual ev_bool destroyInstance(_in EarthView::World::Spatial::Atlas::ILayer* layer)
					{
						if(m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback(layer);
							return returnValue;
						}
						else
							return this->CRouteLayerFactory::destroyInstance(layer);
					}
				};
				REGISTER_FACTORY_CLASS(CRouteLayerFactoryProxy);
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::getType();
						return (int)objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->getType();
						return (int)objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_Callback* pCallback )
				{
					CRouteLayerFactoryProxy* ptr = dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_getType_EVLayerType_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::EVLayerType objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::getType();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance();
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_Callback* pCallback )
				{
					CRouteLayerFactoryProxy* ptr = dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::createInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->createInstance(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_Callback* pCallback )
				{
					CRouteLayerFactoryProxy* ptr = dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Atlas::ILayer*  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					EarthView::World::Spatial::Atlas::ILayer* objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::createInstance(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					if (dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::destroyInstance(layer);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->destroyInstance(layer);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_Callback* pCallback )
				{
					CRouteLayerFactoryProxy* ptr = dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_destroyInstance_ev_bool_ILayer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Atlas::ILayer* layer )
				{
					EarthView::World::Spatial2D::Atlas::CRouteLayerFactory* ptrNativeObject = (EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial2D::Atlas::CRouteLayerFactory::destroyInstance(layer);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString( void *pObjectXXXX, EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString_Callback* pCallback )
				{
					CRouteLayerFactoryProxy* ptr = dynamic_cast<CRouteLayerFactoryProxy*>((EarthView::World::Spatial2D::Atlas::CRouteLayerFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial2D_Atlas_CRouteLayerFactory_createInstance_ILayer_EVString(pCallback);
					}
				}
			}
		}
	}
}
