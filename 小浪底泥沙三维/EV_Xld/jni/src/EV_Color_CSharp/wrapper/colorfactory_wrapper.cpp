/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "color/colorfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback)(_inout void* stream);
				typedef EarthView::World::Spatial::Display::IColor*  ( _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback)(_inout void* element);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback)(_in EarthView::World::Spatial::Display::IColor* pColor);
				class CColorFactoryProxy : public EarthView::World::Spatial::Display::CColorFactory
				{
				private:
					EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback* m_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback;
					EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback* m_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback;
				public:
					CColorFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CColorFactory(pList)
					{
						m_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream(EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement(EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor(EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::IColor* createColorFromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColorFactory::createColorFromStream(stream);
					}
					virtual EarthView::World::Spatial::Display::IColor* createColorFromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::IColor* returnValue = m_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CColorFactory::createColorFromXmlElement(element);
					}
					virtual void destroyColor(_in EarthView::World::Spatial::Display::IColor* pColor)
					{
						if(m_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback(pColor);
						}
						else
							return this->CColorFactory::destroyColor(pColor);
					}
				};
				REGISTER_FACTORY_CLASS(CColorFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CColorFactory*  _stdcall EarthView_World_Spatial_Display_CColorFactory_getInstance_CColorFactory( )
				{
					EarthView::World::Spatial::Display::CColorFactory* objXXXX = EarthView::World::Spatial::Display::CColorFactory::getInstance();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					if (dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::createColorFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->createColorFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_Callback* pCallback )
				{
					CColorFactoryProxy* ptr = dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromStream_IColor_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::createColorFromStream(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					if (dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::createColorFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->createColorFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_Callback* pCallback )
				{
					CColorFactoryProxy* ptr = dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::IColor*  _stdcall EarthView_World_Spatial_Display_CColorFactory_createColorFromXmlElement_IColor_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::IColor* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::createColorFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					if (dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::destroyColor(pColor);
					else
						ptrNativeObject->destroyColor(pColor);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor( void *pObjectXXXX, EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_Callback* pCallback )
				{
					CColorFactoryProxy* ptr = dynamic_cast<CColorFactoryProxy*>((EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CColorFactory_destroyColor_void_IColor_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::IColor* pColor )
				{
					EarthView::World::Spatial::Display::CColorFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CColorFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CColorFactory::destroyColor(pColor);
				}
			}
		}
	}
}
