/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "projectmanager/isymbollistener.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef EarthView::World::Spatial::Display::ISymbol*  ( _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback)(_in char*& strXml);
				typedef char*  ( _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback)(_in EarthView::World::Spatial::Display::ISymbol* symbol);
				class ISymbolListenerProxy : public EarthView::World::Spatial::Display::ISymbolListener
				{
				private:
					EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback* m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback;
					EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback* m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback;
				public:
					ISymbolListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ISymbolListener(pList)
					{
						m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback = pCallback;
					}
					virtual EarthView::World::Spatial::Display::ISymbol* customSymbolFromXml(_in const EVString& strXml)
					{
						if(m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback != NULL && this->isCustomExtend())
						{
							char* strXml_Char = strXml.makeBuffer();
							EarthView::World::Spatial::Display::ISymbol* returnValue = m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback(strXml_Char);
							return returnValue;
						}
						else
							return this->ISymbolListener::customSymbolFromXml(strXml);
					}
					virtual EVString customSymbolToXml(_in EarthView::World::Spatial::Display::ISymbol* symbol) const
					{
						if(m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback != NULL && this->isCustomExtend())
						{
							EVString returnValue = m_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback(symbol);
							return returnValue;
						}
						else
							return this->ISymbolListener::customSymbolToXml(symbol);
					}
				};
				REGISTER_FACTORY_CLASS(ISymbolListenerProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Display::ISymbolListener* ptrNativeObject = (EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX;
					if (dynamic_cast<ISymbolListenerProxy*>((EarthView::World::Spatial::Display::ISymbolListener*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISymbolListener::customSymbolFromXml(strXml1);
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->customSymbolFromXml(strXml1);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_Callback* pCallback )
				{
					ISymbolListenerProxy* ptr = dynamic_cast<ISymbolListenerProxy*>((EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISymbol*  _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolFromXml_ISymbol_EVString_NoVirtual(void *pObjectXXXX, _in const char* strXml )
				{
					EarthView::World::Core::ev_string strXml1 = strXml;
					EarthView::World::Spatial::Display::ISymbolListener* ptrNativeObject = (EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISymbolListener::customSymbolFromXml(strXml1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					const EarthView::World::Spatial::Display::ISymbolListener* ptrNativeObject = (EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX;
					if (dynamic_cast<ISymbolListenerProxy*>((EarthView::World::Spatial::Display::ISymbolListener*)ptrNativeObject) != NULL)
					{
						EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISymbolListener::customSymbolToXml(symbol);
						return objXXXX.makeBuffer();
					}
					else
					{
						EVString objXXXX = ptrNativeObject->customSymbolToXml(symbol);
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol( void *pObjectXXXX, EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_Callback* pCallback )
				{
					ISymbolListenerProxy* ptr = dynamic_cast<ISymbolListenerProxy*>((EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial_Display_ISymbolListener_customSymbolToXml_EVString_ISymbol_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISymbol* symbol )
				{
					const EarthView::World::Spatial::Display::ISymbolListener* ptrNativeObject = (EarthView::World::Spatial::Display::ISymbolListener*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISymbolListener::customSymbolToXml(symbol);
					return objXXXX.makeBuffer();
				}
			}
		}
	}
}
