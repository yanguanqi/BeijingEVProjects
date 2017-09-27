/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "symbol/symboldisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback)(_in EarthView::World::Display::IPaintDevice* ref_device);
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback)();
				typedef EarthView::World::Display::IDisplayOptions*  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback)(_in ev_int32 resolution);
				class CSymbolDisplayProxy : public EarthView::World::Spatial::Display::CSymbolDisplay
				{
				private:
					EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback;
					EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback;
					EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback;
				public:
					CSymbolDisplayProxy(EarthView::World::Core::CNameValuePairList *pList) : CSymbolDisplay(pList)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice(EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice(EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void(EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions(EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32(EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32(EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback = pCallback;
					}
					virtual void fixDevice(_in EarthView::World::Display::IPaintDevice* ref_device)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback(ref_device);
						}
						else
							return this->CSymbolDisplay::fixDevice(ref_device);
					}
					virtual EarthView::World::Display::IPaintDevice* getDevice() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->CSymbolDisplay::getDevice();
					}
					virtual void unfixDevice()
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback();
						}
						else
							return this->CSymbolDisplay::unfixDevice();
					}
					virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IDisplayOptions* returnValue = m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback();
							return returnValue;
						}
						else
							return this->CSymbolDisplay::getDisplayOptions();
					}
					virtual ev_int32 getDisplayResolution() const
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CSymbolDisplay::getDisplayResolution();
					}
					virtual void setDisplayResolution(_in ev_int32 resolution)
					{
						if(m_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback(resolution);
						}
						else
							return this->CSymbolDisplay::setDisplayResolution(resolution);
					}
				};
				REGISTER_FACTORY_CLASS(CSymbolDisplayProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::fixDevice(ref_device);
					else
						ptrNativeObject->fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_fixDevice_void_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDevice();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getDevice();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDevice_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDevice();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::unfixDevice();
					else
						ptrNativeObject->unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_unfixDevice_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDisplayOptions();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->getDisplayOptions();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayOptions_IDisplayOptions_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDisplayOptions();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDisplayResolution();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getDisplayResolution();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_getDisplayResolution_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::getDisplayResolution();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					if (dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::setDisplayResolution(resolution);
					else
						ptrNativeObject->setDisplayResolution(resolution);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback )
				{
					CSymbolDisplayProxy* ptr = dynamic_cast<CSymbolDisplayProxy*>((EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSymbolDisplay_setDisplayResolution_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::CSymbolDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSymbolDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSymbolDisplay::setDisplayResolution(resolution);
				}
			}
		}
	}
}
