/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/evrenderenginemanager.h"
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
				typedef const char*  ( _stdcall EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback)();
				typedef EarthView::World::Spatial::Display::CDrawSymbol*  ( _stdcall EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback)(_in ev_int32 symbolType);
				class CRenderEngineProxy : public EarthView::World::Spatial::Display::CRenderEngine
				{
				private:
					EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback* m_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback;
					EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* m_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback;
				public:
					CRenderEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : CRenderEngine(pList)
					{
						m_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback = NULL;
						m_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CRenderEngineProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString(EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32(EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback = pCallback;
					}
					virtual const EVString getName() const
					{
						if(m_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback != NULL && this->isCustomExtend())
						{
							const EVString returnValue = m_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback();
							return returnValue;
						}
						else
							return this->CRenderEngine::getName();
					}
					virtual EarthView::World::Spatial::Display::CDrawSymbol* createDrawSymbol(_in ev_int32 symbolType) const
					{
						if(m_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CDrawSymbol* returnValue = m_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback(symbolType);
							if(returnValue != NULL) {
								((EarthView::World::Core::CBaseObject*)returnValue)->setExternFree(false);
							}
							return returnValue;
						}
						else
							return this->CRenderEngine::createDrawSymbol(symbolType);
					}
				};
				REGISTER_FACTORY_CLASS(CRenderEngineProxy);
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CRenderEngine_getName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CRenderEngine* ptrNativeObject = (EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX;
					if (dynamic_cast<CRenderEngineProxy*>((EarthView::World::Spatial::Display::CRenderEngine*)ptrNativeObject) != NULL)
					{
						const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CRenderEngine::getName();
						return objXXXX.makeBuffer();
					}
					else
					{
						const EVString objXXXX = ptrNativeObject->getName();
						return objXXXX.makeBuffer();
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString( void *pObjectXXXX, EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_Callback* pCallback )
				{
					CRenderEngineProxy* ptr = dynamic_cast<CRenderEngineProxy*>((EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CRenderEngine_getName_EVString(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Spatial_Display_CRenderEngine_getName_EVString_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CRenderEngine* ptrNativeObject = (EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX;
					const EVString objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CRenderEngine::getName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawSymbol*  _stdcall EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32(void *pObjectXXXX, _in ev_int32 symbolType )
				{
					const EarthView::World::Spatial::Display::CRenderEngine* ptrNativeObject = (EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX;
					if (dynamic_cast<CRenderEngineProxy*>((EarthView::World::Spatial::Display::CRenderEngine*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CDrawSymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CRenderEngine::createDrawSymbol(symbolType);
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_Callback* pCallback )
				{
					CRenderEngineProxy* ptr = dynamic_cast<CRenderEngineProxy*>((EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CDrawSymbol*  _stdcall EarthView_World_Spatial_Display_CRenderEngine_createDrawSymbol_CDrawSymbol_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 symbolType )
				{
					const EarthView::World::Spatial::Display::CRenderEngine* ptrNativeObject = (EarthView::World::Spatial::Display::CRenderEngine*) pObjectXXXX;
					EarthView::World::Spatial::Display::CDrawSymbol* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CRenderEngine::createDrawSymbol(symbolType);
					if(objXXXX != NULL) {
						((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
					}
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::EVRenderEngineManager*  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_getSingletonPtr_EVRenderEngineManager( )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* objXXXX = EarthView::World::Spatial::Display::EVRenderEngineManager::getSingletonPtr();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_setCurrentRenderEngine_void_CRenderEngine(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CRenderEngine* renderEngine )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					ptrNativeObject->setCurrentRenderEngine(renderEngine);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CRenderEngine*  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_getCurrentRenderEngine_CRenderEngine(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					EarthView::World::Spatial::Display::CRenderEngine* objXXXX = ptrNativeObject->getCurrentRenderEngine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_registerRenderEngine_void_CRenderEngine(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::CRenderEngine* pEngine )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					ptrNativeObject->registerRenderEngine(pEngine);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CRenderEngine*  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_getRenderEngine_CRenderEngine_EVString(void *pObjectXXXX, _in const char* engineName )
				{
					EarthView::World::Core::ev_string engineName1 = engineName;
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CRenderEngine* objXXXX = ptrNativeObject->getRenderEngine(engineName1);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Display::CRenderEngine*  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_getRenderEngine_CRenderEngine_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					const EarthView::World::Spatial::Display::CRenderEngine* objXXXX = ptrNativeObject->getRenderEngine(index);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_getRenderEngineCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getRenderEngineCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_EVRenderEngineManager_loadEngines_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::EVRenderEngineManager* ptrNativeObject = (EarthView::World::Spatial::Display::EVRenderEngineManager*) pObjectXXXX;
					ptrNativeObject->loadEngines();
				}
			}
		}
	}
}
