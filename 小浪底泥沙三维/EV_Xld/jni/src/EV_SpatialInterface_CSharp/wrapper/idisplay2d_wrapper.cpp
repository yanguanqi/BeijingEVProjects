/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplay2d.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef void  ( _stdcall EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback)(_in EarthView::World::Display::IPaintDevice* ref_device);
			typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback)();
			typedef EarthView::World::Display::IDisplayOptions*  ( _stdcall EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback)(_in ev_int32 resolution);
			class IDisplay2DProxy : public EarthView::World::Display::IDisplay2D
			{
			private:
				EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback* m_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback;
				EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback* m_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback;
				EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback* m_EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback;
				EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback* m_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback;
				EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback* m_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback;
				EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback* m_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback;
			public:
				IDisplay2DProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplay2D(pList)
				{
					m_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback = NULL;
					m_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback = NULL;
					m_EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback = NULL;
					m_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback = NULL;
					m_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback = NULL;
					m_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_unfixDevice_void(EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback = pCallback;
				}
				virtual void fixDevice(_in EarthView::World::Display::IPaintDevice* ref_device)
				{
					if(m_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback(ref_device);
					}
					else
						return this->IDisplay2D::fixDevice(ref_device);
				}
				virtual EarthView::World::Display::IPaintDevice* getDevice() const
				{
					if(m_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback();
						return returnValue;
					}
					else
						return this->IDisplay2D::getDevice();
				}
				virtual void unfixDevice()
				{
					if(m_EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback();
					}
					else
						return this->IDisplay2D::unfixDevice();
				}
				virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const
				{
					if(m_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::IDisplayOptions* returnValue = m_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback();
						return returnValue;
					}
					else
						return this->IDisplay2D::getDisplayOptions();
				}
				virtual ev_int32 getDisplayResolution() const
				{
					if(m_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->IDisplay2D::getDisplayResolution();
				}
				virtual void setDisplayResolution(_in ev_int32 resolution)
				{
					if(m_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback(resolution);
					}
					else
						return this->IDisplay2D::setDisplayResolution(resolution);
				}
			};
			REGISTER_FACTORY_CLASS(IDisplay2DProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplay2D::fixDevice(ref_device);
				else
					ptrNativeObject->fixDevice(ref_device);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_fixDevice_void_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplay2D::fixDevice(ref_device);
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDevice();
					return objXXXX;
				}
				else
				{
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getDevice();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Display_IDisplay2D_getDevice_IPaintDevice_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDevice();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_unfixDevice_void(void *pObjectXXXX )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplay2D::unfixDevice();
				else
					ptrNativeObject->unfixDevice();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_unfixDevice_void( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_unfixDevice_void_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_unfixDevice_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_unfixDevice_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplay2D::unfixDevice();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDisplayOptions();
					return objXXXX;
				}
				else
				{
					EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->getDisplayOptions();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Display_IDisplay2D_getDisplayOptions_IDisplayOptions_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDisplayOptions();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDisplayResolution();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getDisplayResolution();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IDisplay2D_getDisplayResolution_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IDisplay2D::getDisplayResolution();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				if (dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplay2D::setDisplayResolution(resolution);
				else
					ptrNativeObject->setDisplayResolution(resolution);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_Callback* pCallback )
			{
				IDisplay2DProxy* ptr = dynamic_cast<IDisplay2DProxy*>((EarthView::World::Display::IDisplay2D*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplay2D_setDisplayResolution_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 resolution )
			{
				EarthView::World::Display::IDisplay2D* ptrNativeObject = (EarthView::World::Display::IDisplay2D*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplay2D::setDisplayResolution(resolution);
			}
		}
	}
}
