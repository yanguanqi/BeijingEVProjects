/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorrampfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::CColorRamp*  ( _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback)(_inout void* stream);
				typedef EarthView::World::Spatial::Display::CColorRamp*  ( _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback)(_in EarthView::World::Spatial::Display::CColorRamp* pColorRamp);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback)();
				class CColorRampFactoryProxy : public EarthView::World::Spatial::Display::CColorRampFactory
				{
				private:
					EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback;
					EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback* m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback;
					EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback* m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback;
				public:
					CColorRampFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorRampFactory(pList)
					{
						m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream(EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement(EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp(EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void(EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* createColorRampFromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CColorRamp* returnValue = m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColorRampFactory::createColorRampFromStream(stream);
					}
					virtual EarthView::World::Spatial::Display::CColorRamp* createColorRampFromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CColorRamp* returnValue = m_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColorRampFactory::createColorRampFromXmlElement(element);
					}
					virtual void destroyColorRamp(_in EarthView::World::Spatial::Display::CColorRamp* pColorRamp)
					{
						if(m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback(pColorRamp);
						}
						else
							return this->CColorRampFactory::destroyColorRamp(pColorRamp);
					}
					virtual void destroyColorRamps()
					{
						if(m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback();
						}
						else
							return this->CColorRampFactory::destroyColorRamps();
					}
				};
				REGISTER_FACTORY_CLASS(CColorRampFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRampFactory*  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_getInstance_CColorRampFactory( )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* objXXXX = EarthView::World::Spatial::Display::CColorRampFactory::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					if (dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->createColorRampFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_Callback* pCallback )
				{
					CColorRampFactoryProxy* ptr = dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromStream_CColorRamp_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromStream(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					if (dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->createColorRampFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_Callback* pCallback )
				{
					CColorRampFactoryProxy* ptr = dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorRamp*  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_createColorRampFromXmlElement_CColorRamp_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::CColorRamp* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::createColorRampFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					if (dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamp(pColorRamp);
					else
						ptrNativeObject->destroyColorRamp(pColorRamp);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_Callback* pCallback )
				{
					CColorRampFactoryProxy* ptr = dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamp_void_CColorRamp_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::CColorRamp* pColorRamp )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamp(pColorRamp);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					if (dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamps();
					else
						ptrNativeObject->destroyColorRamps();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_Callback* pCallback )
				{
					CColorRampFactoryProxy* ptr = dynamic_cast<CColorRampFactoryProxy*>((EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorRampFactory_destroyColorRamps_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CColorRampFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorRampFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorRampFactory::destroyColorRamps();
				}
			}
		}
	}
}
