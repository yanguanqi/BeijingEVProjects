/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ipaintdevice.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef ev_int64  ( _stdcall EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_IPaintDevice_releaseDC_void_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
			typedef void  ( _stdcall EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback)(_in ev_int32 color);
			typedef ev_int32  ( _stdcall EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback)();
			class IPaintDeviceProxy : public EarthView::World::Display::IPaintDevice
			{
			private:
				EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback* m_EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback;
				EarthView_World_Display_IPaintDevice_releaseDC_void_Callback* m_EarthView_World_Display_IPaintDevice_releaseDC_void_Callback;
				EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback* m_EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback;
				EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback* m_EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback;
				EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback* m_EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback;
				EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback* m_EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback;
				EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback* m_EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback;
			public:
				IPaintDeviceProxy(EarthView::World::Core::CNameValuePairList *pList) : IPaintDevice(pList)
				{
					m_EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_releaseDC_void_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback = NULL;
					m_EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_getDC_ev_int64(EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_releaseDC_void(EarthView_World_Display_IPaintDevice_releaseDC_void_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_releaseDC_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_getWidth_ev_int32(EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_getHeight_ev_int32(EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_fill_void_IColor(EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_fill_void_ev_int32(EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IPaintDevice_getResolution_ev_int32(EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback = pCallback;
				}
				virtual ev_int64 getDC()
				{
					if(m_EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->IPaintDevice::getDC();
				}
				virtual void releaseDC()
				{
					if(m_EarthView_World_Display_IPaintDevice_releaseDC_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IPaintDevice_releaseDC_void_Callback();
					}
					else
						return this->IPaintDevice::releaseDC();
				}
				virtual ev_int32 getWidth() const
				{
					if(m_EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->IPaintDevice::getWidth();
				}
				virtual ev_int32 getHeight() const
				{
					if(m_EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->IPaintDevice::getHeight();
				}
				virtual void fill(_in const EarthView::World::Spatial::Display::IColor* color)
				{
					if(m_EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback(color);
					}
					else
						return this->IPaintDevice::fill(color);
				}
				virtual void fill(_in ev_int32 color)
				{
					if(m_EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback(color);
					}
					else
						return this->IPaintDevice::fill(color);
				}
				virtual ev_int32 getResolution() const
				{
					if(m_EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->IPaintDevice::getResolution();
				}
			};
			REGISTER_FACTORY_CLASS(IPaintDeviceProxy);
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_IPaintDevice_getDC_ev_int64(void *pObjectXXXX )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getDC();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getDC();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_getDC_ev_int64( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_getDC_ev_int64_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_getDC_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_IPaintDevice_getDC_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getDC();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_releaseDC_void(void *pObjectXXXX )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IPaintDevice::releaseDC();
				else
					ptrNativeObject->releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_releaseDC_void( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_releaseDC_void_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_releaseDC_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_releaseDC_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IPaintDevice::releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getWidth();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_getWidth_ev_int32_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_getWidth_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getHeight();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_getHeight_ev_int32_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_getHeight_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_fill_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IPaintDevice::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_fill_void_IColor( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_fill_void_IColor_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_fill_void_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_fill_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IPaintDevice::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_fill_void_ev_int32(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IPaintDevice::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_fill_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_fill_void_ev_int32_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_fill_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IPaintDevice_fill_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IPaintDevice::fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getResolution_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				if (dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getResolution();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResolution();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IPaintDevice_getResolution_ev_int32( void *pObjectXXXX, EarthView_World_Display_IPaintDevice_getResolution_ev_int32_Callback* pCallback )
			{
				IPaintDeviceProxy* ptr = dynamic_cast<IPaintDeviceProxy*>((EarthView::World::Display::IPaintDevice*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IPaintDevice_getResolution_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_IPaintDevice_getResolution_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::IPaintDevice* ptrNativeObject = (EarthView::World::Display::IPaintDevice*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::IPaintDevice::getResolution();
				return objXXXX;
			}
		}
	}
}
