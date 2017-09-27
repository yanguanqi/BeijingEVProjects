/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/ispatialdisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Display::ISpatialTransformer*  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback)(_in EarthView::World::Display::IPaintDevice* ref_device);
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback)();
				typedef EarthView::World::Display::IDisplayOptions*  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback)(_in ev_int32 resolution);
				class ISpatialDisplayProxy : public EarthView::World::Spatial::Display::ISpatialDisplay
				{
				private:
					EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback;
					EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback* m_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback;
				public:
					ISpatialDisplayProxy(EarthView::World::Core::CNameValuePairList *pList) : ISpatialDisplay(pList)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer(EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool(EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_start_void(EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void(EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice(EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice(EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void(EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions(EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32(EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32(EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback = pCallback;
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->ISpatialDisplay::setSpatialReference(ref_sr);
					}
					virtual EarthView::World::Spatial::Display::ISpatialTransformer* getSpatialTransformer() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISpatialTransformer* returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::getSpatialTransformer();
					}
					virtual ev_bool isCancelled() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::isCancelled();
					}
					virtual void start()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback();
						}
						else
							return this->ISpatialDisplay::start();
					}
					virtual void cancel()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback();
						}
						else
							return this->ISpatialDisplay::cancel();
					}
					virtual void fixDevice(_in EarthView::World::Display::IPaintDevice* ref_device)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback(ref_device);
						}
						else
							return this->ISpatialDisplay::fixDevice(ref_device);
					}
					virtual EarthView::World::Display::IPaintDevice* getDevice() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::getDevice();
					}
					virtual void unfixDevice()
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback();
						}
						else
							return this->ISpatialDisplay::unfixDevice();
					}
					virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IDisplayOptions* returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::getDisplayOptions();
					}
					virtual ev_int32 getDisplayResolution() const
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->ISpatialDisplay::getDisplayResolution();
					}
					virtual void setDisplayResolution(_in ev_int32 resolution)
					{
						if(m_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback(resolution);
						}
						else
							return this->ISpatialDisplay::setDisplayResolution(resolution);
					}
				};
				REGISTER_FACTORY_CLASS(ISpatialDisplayProxy);
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialTransformer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->getSpatialTransformer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getSpatialTransformer_ISpatialTransformer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getSpatialTransformer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::isCancelled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCancelled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_isCancelled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::isCancelled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_start_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::start();
					else
						ptrNativeObject->start();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_start_void( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_start_void_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_start_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_start_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::start();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::cancel();
					else
						ptrNativeObject->cancel();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_cancel_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::cancel();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::fixDevice(ref_device);
					else
						ptrNativeObject->fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_fixDevice_void_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDevice();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getDevice();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDevice_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDevice();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::unfixDevice();
					else
						ptrNativeObject->unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_unfixDevice_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayOptions();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->getDisplayOptions();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayOptions_IDisplayOptions_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayOptions();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayResolution();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getDisplayResolution();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_getDisplayResolution_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::getDisplayResolution();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::setDisplayResolution(resolution);
					else
						ptrNativeObject->setDisplayResolution(resolution);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback )
				{
					ISpatialDisplayProxy* ptr = dynamic_cast<ISpatialDisplayProxy*>((EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_ISpatialDisplay_setDisplayResolution_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::ISpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::ISpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::ISpatialDisplay::setDisplayResolution(resolution);
				}
			}
		}
	}
}
