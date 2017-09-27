/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialdisplay/spatialdisplay.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Display
			{
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CLabelEnvironment_isActive_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelEnvironment* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelEnvironment*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->isActive();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CLabelEnvironment_setActive_void_ev_bool(void *pObjectXXXX, _in ev_bool active )
				{
					EarthView::World::Spatial::Display::CLabelEnvironment* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelEnvironment*) pObjectXXXX;
					ptrNativeObject->setActive(active);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Display_CLabelEnvironment_getPixelGrid_void(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CLabelEnvironment* ptrNativeObject = (EarthView::World::Spatial::Display::CLabelEnvironment*) pObjectXXXX;
					void* objXXXX = ptrNativeObject->getPixelGrid();
					return objXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback)(_in EarthView::World::Spatial::Display::ISpatialTransformer* ref_trans);
				typedef EarthView::World::Spatial::Display::CLabelEnvironment*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback)();
				typedef EarthView::World::Spatial::Display::ILabelEngine*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback)(_in EarthView::World::Spatial::Display::ILabelEngine* ref_engine);
				typedef const EarthView::World::Spatial::Geometry::ISpatialReference*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback)(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr);
				typedef EarthView::World::Spatial::Display::ISpatialTransformer*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback)(_in EarthView::World::Display::IPaintDevice* ref_device);
				typedef EarthView::World::Display::IPaintDevice*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback)();
				typedef EarthView::World::Display::IDisplayOptions*  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback)();
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback)(_in ev_int32 resolution);
				class CSpatialDisplayProxy : public EarthView::World::Spatial::Display::CSpatialDisplay
				{
				private:
					EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback;
					EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback* m_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback;
				public:
					CSpatialDisplayProxy(EarthView::World::Core::CNameValuePairList *pList) : CSpatialDisplay(pList)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CSpatialDisplayProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_start_void(EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback = pCallback;
					}
					virtual void fixDevice(_in EarthView::World::Display::IPaintDevice* ref_device)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback(ref_device);
						}
						else
							return this->CSpatialDisplay::fixDevice(ref_device);
					}
					virtual EarthView::World::Display::IPaintDevice* getDevice() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IPaintDevice* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getDevice();
					}
					virtual void unfixDevice()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback();
						}
						else
							return this->CSpatialDisplay::unfixDevice();
					}
					virtual ev_int32 getDisplayResolution() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getDisplayResolution();
					}
					virtual void setDisplayResolution(_in ev_int32 resolution)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback(resolution);
						}
						else
							return this->CSpatialDisplay::setDisplayResolution(resolution);
					}
					virtual const EarthView::World::Spatial::Geometry::ISpatialReference* getSpatialReference() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							const EarthView::World::Spatial::Geometry::ISpatialReference* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getSpatialReference();
					}
					virtual void setSpatialReference(_in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback(ref_sr);
						}
						else
							return this->CSpatialDisplay::setSpatialReference(ref_sr);
					}
					virtual EarthView::World::Spatial::Display::ISpatialTransformer* getSpatialTransformer() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ISpatialTransformer* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getSpatialTransformer();
					}
					virtual void setSpatialTransformer(_in EarthView::World::Spatial::Display::ISpatialTransformer* ref_trans)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback(ref_trans);
						}
						else
							return this->CSpatialDisplay::setSpatialTransformer(ref_trans);
					}
					virtual ev_bool isCancelled() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::isCancelled();
					}
					virtual void start()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback();
						}
						else
							return this->CSpatialDisplay::start();
					}
					virtual void cancel()
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback();
						}
						else
							return this->CSpatialDisplay::cancel();
					}
					virtual EarthView::World::Display::IDisplayOptions* getDisplayOptions() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::IDisplayOptions* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getDisplayOptions();
					}
					virtual EarthView::World::Spatial::Display::CLabelEnvironment* getLabelEnvironment() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::CLabelEnvironment* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getLabelEnvironment();
					}
					virtual EarthView::World::Spatial::Display::ILabelEngine* getLabelEngine() const
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Spatial::Display::ILabelEngine* returnValue = m_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback();
							return returnValue;
						}
						else
							return this->CSpatialDisplay::getLabelEngine();
					}
					virtual void setLabelEngine(_in EarthView::World::Spatial::Display::ILabelEngine* ref_engine)
					{
						if(m_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback(ref_engine);
						}
						else
							return this->CSpatialDisplay::setLabelEngine(ref_engine);
					}
				};
				REGISTER_FACTORY_CLASS(CSpatialDisplayProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::fixDevice(ref_device);
					else
						ptrNativeObject->fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_fixDevice_void_IPaintDevice_NoVirtual(void *pObjectXXXX, _in EarthView::World::Display::IPaintDevice* ref_device )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::fixDevice(ref_device);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDevice();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->getDevice();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IPaintDevice*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDevice_IPaintDevice_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					EarthView::World::Display::IPaintDevice* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDevice();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::unfixDevice();
					else
						ptrNativeObject->unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_unfixDevice_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::unfixDevice();
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDisplayResolution();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getDisplayResolution();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayResolution_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDisplayResolution();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setDisplayResolution(resolution);
					else
						ptrNativeObject->setDisplayResolution(resolution);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setDisplayResolution_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 resolution )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setDisplayResolution(resolution);
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getSpatialReference();
						return objXXXX;
					}
					else
					{
						const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->getSpatialReference();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  const EarthView::World::Spatial::Geometry::ISpatialReference*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialReference_ISpatialReference_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					const EarthView::World::Spatial::Geometry::ISpatialReference* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getSpatialReference();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setSpatialReference(ref_sr);
					else
						ptrNativeObject->setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialReference_void_ISpatialReference_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Geometry::ISpatialReference* ref_sr )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setSpatialReference(ref_sr);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getSpatialTransformer();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->getSpatialTransformer();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ISpatialTransformer*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getSpatialTransformer_ISpatialTransformer_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					EarthView::World::Spatial::Display::ISpatialTransformer* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getSpatialTransformer();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialTransformer* ref_trans )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setSpatialTransformer(ref_trans);
					else
						ptrNativeObject->setSpatialTransformer(ref_trans);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setSpatialTransformer_void_ISpatialTransformer_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ISpatialTransformer* ref_trans )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setSpatialTransformer(ref_trans);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::isCancelled();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isCancelled();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_isCancelled_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::isCancelled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_start_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::start();
					else
						ptrNativeObject->start();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_start_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_start_void_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_start_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_start_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::start();
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::cancel();
					else
						ptrNativeObject->cancel();
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_cancel_void_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::cancel();
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDisplayOptions();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->getDisplayOptions();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::IDisplayOptions*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getDisplayOptions_IDisplayOptions_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					EarthView::World::Display::IDisplayOptions* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getDisplayOptions();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLabelEnvironment*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::CLabelEnvironment* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getLabelEnvironment();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::CLabelEnvironment* objXXXX = ptrNativeObject->getLabelEnvironment();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::CLabelEnvironment*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEnvironment_CLabelEnvironment_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					EarthView::World::Spatial::Display::CLabelEnvironment* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getLabelEnvironment();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelEngine*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
					{
						EarthView::World::Spatial::Display::ILabelEngine* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getLabelEngine();
						return objXXXX;
					}
					else
					{
						EarthView::World::Spatial::Display::ILabelEngine* objXXXX = ptrNativeObject->getLabelEngine();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::Display::ILabelEngine*  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_getLabelEngine_ILabelEngine_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					EarthView::World::Spatial::Display::ILabelEngine* objXXXX = ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::getLabelEngine();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelEngine* ref_engine )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					if (dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setLabelEngine(ref_engine);
					else
						ptrNativeObject->setLabelEngine(ref_engine);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine( void *pObjectXXXX, EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_Callback* pCallback )
				{
					CSpatialDisplayProxy* ptr = dynamic_cast<CSpatialDisplayProxy*>((EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Display_CSpatialDisplay_setLabelEngine_void_ILabelEngine_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::Display::ILabelEngine* ref_engine )
				{
					EarthView::World::Spatial::Display::CSpatialDisplay* ptrNativeObject = (EarthView::World::Spatial::Display::CSpatialDisplay*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Display::CSpatialDisplay::setLabelEngine(ref_engine);
				}
			}
		}
	}
}
