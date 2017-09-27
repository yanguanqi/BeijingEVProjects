/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symbolfactory.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback)(_inout void* stream);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback)(_in char*& xmlNodeName);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback)(_inout void* element);
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback)(_in char*& sldText);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* pSymbol);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback)();
				class CSymbolFactoryProxy : public EarthView::World::Spatial::Display::CSymbolFactory
				{
				private:
					EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback;
					EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback;
					EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback;
					EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback;
					EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback* m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback;
				public:
					CSymbolFactoryProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolFactory(pList)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream(EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString(EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement(EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString(EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol(EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void(EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromStream(_inout EarthView::World::Core::CDataStream& stream)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback(&stream);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSymbolFactory::createSymbolFromStream(stream);
					}
					virtual ev_bool isSymbolHeader(_in const EVString& xmlNodeName)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* xmlNodeName_Char = xmlNodeName.makeBuffer();
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback(xmlNodeName_Char);
							return returnValue;
						}
						else
							return this->CSymbolFactory::isSymbolHeader(xmlNodeName);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromXmlElement(_inout EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback(&element);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CSymbolFactory::createSymbolFromXmlElement(element);
					}
					virtual EarthView::World::Spatial::Display::ISymbol* createSymbolFromSLD(_in const EVString& sldText)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* sldText_Char = sldText.makeBuffer();
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback(sldText_Char);
							return returnValue;
						}
						else
							return this->CSymbolFactory::createSymbolFromSLD(sldText);
					}
					virtual void destroySymbol(_in EarthView::World::Spatial::Display::ISymbol* pSymbol)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback(pSymbol);
						}
						else
							return this->CSymbolFactory::destroySymbol(pSymbol);
					}
					virtual void destroySymbols()
					{
						if(m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback();
						}
						else
							return this->CSymbolFactory::destroySymbols();
					}
				};
				REGISTER_FACTORY_CLASS(CSymbolFactoryProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CSymbolFactory*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_getInstance_CSymbolFactory( )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* objXXXX = EarthView::World::Spatial::Display::CSymbolFactory::getInstance();
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					if (dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->createSymbolFromStream(*(EarthView::World::Core::CDataStream*)stream);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromStream_ISymbol_CDataStream_NoVirtual(void *pObjectXXXX, _inout void* stream )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromStream(*(EarthView::World::Core::CDataStream*)stream);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString(void *pObjectXXXX, _in const char* xmlNodeName )
				{
					EarthView::World::Core::ev_string xmlNodeName1 = xmlNodeName;
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					if (dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::isSymbolHeader(xmlNodeName1);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSymbolHeader(xmlNodeName1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_isSymbolHeader_ev_bool_EVString_NoVirtual(void *pObjectXXXX, _in const char* xmlNodeName )
				{
					EarthView::World::Core::ev_string xmlNodeName1 = xmlNodeName;
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::isSymbolHeader(xmlNodeName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					if (dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->createSymbolFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromXmlElement_ISymbol_CXmlElement_NoVirtual(void *pObjectXXXX, _inout void* element )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString(void *pObjectXXXX, _in const char* sldText )
				{
					EarthView::World::Core::ev_string sldText1 = sldText;
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					if (dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromSLD(sldText1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->createSymbolFromSLD(sldText1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_createSymbolFromSLD_ISymbol_EVString_NoVirtual(void *pObjectXXXX, _in const char* sldText )
				{
					EarthView::World::Core::ev_string sldText1 = sldText;
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::createSymbolFromSLD(sldText1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					if (dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::destroySymbol(pSymbol);
					else
						ptrNativeObject->destroySymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolFactory_destroySymbol_void_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* pSymbol )
				{
					EarthView::World::Spatial::Display::CSymbolFactory* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolFactory::destroySymbol(pSymbol);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void_Callback* pCallback )
				{
					CSymbolFactoryProxy* ptr = dynamic_cast<CSymbolFactoryProxy*>((EarthView::World::Spatial::Display::CSymbolFactory*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolFactory_destroySymbols_void(pCallback);
					}
				}
			}
		}
	}
}
