/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/evoutputenginemanager.h"
namespace EarthView
{
	namespace World
	{
		namespace Core
		{
		}
	}
}
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef const char*  ( _stdcall EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::CDrawSymbol*  ( _stdcall EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback)(_in ev_int32 symbolType);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback)(_in EarthView::World::Display::IPaintDevice* device);
				typedef void  ( _stdcall EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback)(_inout void* array);
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback)(_in char*& format, _in char* fileName, _in double w_in_p, _in double h_in_p);
				class COutputEngineProxy : public EarthView::World::Spatial::Display::COutputEngine
				{
				private:
					EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback* m_EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback;
					EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* m_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback;
					EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback* m_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback;
					EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback* m_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback;
				public:
					COutputEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : COutputEngine(pList)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback = NULL;
						m_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(COutputEngineProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_COutputEngine_getName_EVString(EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback = pCallback;
					}
					virtual const EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->COutputEngine::getName();
					}
					virtual EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(_in ev_int32 symbolType) const
					{
						if(m_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CDrawSymbol* returnValue = m_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback(symbolType);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->COutputEngine::createDrawSymbol(symbolType);
					}
					virtual ev_bool isSupportDevice(_in EarthView::World::Display::IPaintDevice* device) const
					{
						if(m_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback(device);
							return returnValue;
						}
						else
							return this->COutputEngine::isSupportDevice(device);
					}
					virtual void getSupportedFormat(_inout EarthView::World::Core::CStringArray& array) const
					{
						if(m_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback(&array);
						}
						else
							return this->COutputEngine::getSupportedFormat(array);
					}
					virtual EarthView::World::Display::IPaintDevice* createOutputDevice(_in const EVString& format, _in char* fileName, _in double w_in_p, _in double h_in_p) const
					{
						if(m_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback != NULL && this->isCustomExtend())
						{
							char* format_Char = format.makeBuffer();
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback(format_Char, fileName, w_in_p, h_in_p);
							return returnValue;
						}
						else
							return this->COutputEngine::createOutputDevice(format, fileName, w_in_p, h_in_p);
					}
				};
				REGISTER_FACTORY_CLASS(COutputEngineProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_COutputEngine_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					if (dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_COutputEngine_getName_EVString_Callback* pCallback )
				{
					COutputEngineProxy* ptr = dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_COutputEngine_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_COutputEngine_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawSymbol*  _stdcall EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(void *pObjectXXXX, _in ev_int32 symbolType )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					if (dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CDrawSymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::createDrawSymbol(symbolType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CDrawSymbol* objXXXX = ptrNativeObject->createDrawSymbol(symbolType);
						if(objXXXX != NULL) {
							((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
						}
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* pCallback )
				{
					COutputEngineProxy* ptr = dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawSymbol*  _stdcall EarthView_World_Spatial_Display_COutputEngine_createDrawSymbol_CDrawSymbol_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 symbolType )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawSymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::createDrawSymbol(symbolType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* device )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					if (dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::isSupportDevice(device);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isSupportDevice(device);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_Callback* pCallback )
				{
					COutputEngineProxy* ptr = dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_COutputEngine_isSupportDevice_ev_bool_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* device )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::isSupportDevice(device);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(void *pObjectXXXX, _inout void* array )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					if (dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::getSupportedFormat(*(EarthView::World::Core::CStringArray*)array);
					else
						ptrNativeObject->getSupportedFormat(*(EarthView::World::Core::CStringArray*)array);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray( void *pObjectXXXX, EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_Callback* pCallback )
				{
					COutputEngineProxy* ptr = dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_COutputEngine_getSupportedFormat_void_CStringArray_NoVirtual(void *pObjectXXXX, _inout void* array )
				{
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::getSupportedFormat(*(EarthView::World::Core::CStringArray*)array);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(void *pObjectXXXX, _in const char* format, _in char* fileName, _in double w_in_p, _in double h_in_p )
				{
					EarthView::World::Core::ev_string format1 = format;
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					if (dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::createOutputDevice(format1, fileName, w_in_p, h_in_p);
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->createOutputDevice(format1, fileName, w_in_p, h_in_p);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double( void *pObjectXXXX, EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_Callback* pCallback )
				{
					COutputEngineProxy* ptr = dynamic_cast<COutputEngineProxy*>((EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_COutputEngine_createOutputDevice_IPaintDevice_EVString_char_double_double_NoVirtual(void *pObjectXXXX, _in const char* format, _in char* fileName, _in double w_in_p, _in double h_in_p )
				{
					EarthView::World::Core::ev_string format1 = format;
					const EarthView::World::Spatial::Display::COutputEngine* ptrNativeObject = (EarthView::World::Spatial::Display::COutputEngine*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::COutputEngine::createOutputDevice(format1, fileName, w_in_p, h_in_p);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::EVOutputEngineManager*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getSingletonPtr_EVOutputEngineManager( )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* objXXXX = EarthView::World::Spatial::Display::EVOutputEngineManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::COutputEngine*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* device )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* objXXXX = ptrNativeObject->getOutputEngine(device);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getSupportedFormat_CStringArray(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->getSupportedFormat();
					EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_createOutputDevice_IPaintDevice_EVString_char_double_double(void *pObjectXXXX, _in const char* format, _in char* fileName, _in double w_in_p, _in double h_in_p )
				{
					EarthView::World::Core::ev_string format1 = format;
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->createOutputDevice(format1, fileName, w_in_p, h_in_p);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_registerOutputEngine_void_COutputEngine(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::COutputEngine* pEngine )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					ptrNativeObject->registerOutputEngine(pEngine);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::COutputEngine*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_EVString(void *pObjectXXXX, _in const char* engineName )
				{
					EarthView::World::Core::ev_string engineName1 = engineName;
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* objXXXX = ptrNativeObject->getOutputEngine(engineName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::COutputEngine*  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngine_COutputEngine_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					const EarthView::World::Spatial::Display::COutputEngine* objXXXX = ptrNativeObject->getOutputEngine(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_getOutputEngineCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getOutputEngineCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_EVOutputEngineManager_loadEngines_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::EVOutputEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVOutputEngineManager*) pObjectXXXX;
					ptrNativeObject->loadEngines();
				}
			}
		}
	}
}
