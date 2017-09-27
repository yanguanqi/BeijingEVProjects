/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialinterface/idisplayoptions.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback)(_out int* mode);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback)(_in int mode);
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback)(_out int* quality);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback)(_in int quality);
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback)(_out int* hint);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback)(_in int hint);
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback)(_out int* mode);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback)(_in int mode);
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback)(_out int* mode);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback)(_in int mode);
			typedef ev_bool  ( _stdcall EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback)(_out int* mode);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback)(_in int mode);
			typedef void  ( _stdcall EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback)(_in void* element);
			typedef void*  ( _stdcall EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback)();
			class IDisplayOptionsProxy : public EarthView::World::Display::IDisplayOptions
			{
			private:
				EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback* m_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback;
				EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback* m_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback;
				EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback* m_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback;
				EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback* m_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback;
				EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback* m_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback;
				EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback* m_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback;
				EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback* m_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback;
				EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback* m_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback;
				EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback* m_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback;
				EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback* m_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback;
				EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback* m_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback;
				EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback* m_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback;
				EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback* m_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback;
				EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback* m_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback;
			public:
				IDisplayOptionsProxy(EarthView::World::Core::CNameValuePairList *pList) : IDisplayOptions(pList)
				{
					m_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback = NULL;
					m_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback* pCallback)
				{
					m_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback = pCallback;
				}
				virtual ev_bool getCompositingMode(_out EarthView::World::Display::EVCompositingMode* mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback((int*)mode);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getCompositingMode(mode);
				}
				virtual void setEVCompositingMode(_in EarthView::World::Display::EVCompositingMode mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback((int)mode);
					}
					else
						return this->IDisplayOptions::setEVCompositingMode(mode);
				}
				virtual ev_bool getCompositingQuality(_out EarthView::World::Display::EVCompositingQuality* quality)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback((int*)quality);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getCompositingQuality(quality);
				}
				virtual void setCompositingQuality(_in EarthView::World::Display::EVCompositingQuality quality)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback((int)quality);
					}
					else
						return this->IDisplayOptions::setCompositingQuality(quality);
				}
				virtual ev_bool getTextRenderingHint(_out EarthView::World::Display::EVTextRenderingHint* hint)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback((int*)hint);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getTextRenderingHint(hint);
				}
				virtual void setTextRenderingHint(_in EarthView::World::Display::EVTextRenderingHint hint)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback((int)hint);
					}
					else
						return this->IDisplayOptions::setTextRenderingHint(hint);
				}
				virtual ev_bool getInterpolationMode(_out EarthView::World::Display::EVInterpolationMode* mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback((int*)mode);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getInterpolationMode(mode);
				}
				virtual void setInterpolationMode(_in EarthView::World::Display::EVInterpolationMode mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback((int)mode);
					}
					else
						return this->IDisplayOptions::setInterpolationMode(mode);
				}
				virtual ev_bool getSmoothingMode(_out EarthView::World::Display::EVSmoothingMode* mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback((int*)mode);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getSmoothingMode(mode);
				}
				virtual void setSmoothingMode(_in EarthView::World::Display::EVSmoothingMode mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback((int)mode);
					}
					else
						return this->IDisplayOptions::setSmoothingMode(mode);
				}
				virtual ev_bool getPixelOffsetMode(_out EarthView::World::Display::EVPixelOffsetMode* mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback((int*)mode);
						return returnValue;
					}
					else
						return this->IDisplayOptions::getPixelOffsetMode(mode);
				}
				virtual void setPixelOffsetMode(_in EarthView::World::Display::EVPixelOffsetMode mode)
				{
					if(m_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback((int)mode);
					}
					else
						return this->IDisplayOptions::setPixelOffsetMode(mode);
				}
				virtual void loadFromXML(_in EarthView::World::Core::CXmlElement& element)
				{
					if(m_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback(&element);
					}
					else
						return this->IDisplayOptions::loadFromXML(element);
				}
				virtual EarthView::World::Core::CXmlElement toXmlElement()
				{
					if(m_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback();
						return returnValue;
					}
					else
						return this->IDisplayOptions::toXmlElement();
				}
			};
			REGISTER_FACTORY_CLASS(IDisplayOptionsProxy);
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getCompositingMode((EarthView::World::Display::EVCompositingMode*)mode);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCompositingMode((EarthView::World::Display::EVCompositingMode*)mode);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getCompositingMode_ev_bool_EVCompositingMode_NoVirtual(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getCompositingMode((EarthView::World::Display::EVCompositingMode*)mode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setEVCompositingMode((EarthView::World::Display::EVCompositingMode)mode);
				else
					ptrNativeObject->setEVCompositingMode((EarthView::World::Display::EVCompositingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setEVCompositingMode_void_EVCompositingMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setEVCompositingMode((EarthView::World::Display::EVCompositingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(void *pObjectXXXX, _out int* quality )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getCompositingQuality((EarthView::World::Display::EVCompositingQuality*)quality);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getCompositingQuality((EarthView::World::Display::EVCompositingQuality*)quality);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getCompositingQuality_ev_bool_EVCompositingQuality_NoVirtual(void *pObjectXXXX, _out int* quality )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getCompositingQuality((EarthView::World::Display::EVCompositingQuality*)quality);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(void *pObjectXXXX, _in int quality )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setCompositingQuality((EarthView::World::Display::EVCompositingQuality)quality);
				else
					ptrNativeObject->setCompositingQuality((EarthView::World::Display::EVCompositingQuality)quality);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setCompositingQuality_void_EVCompositingQuality_NoVirtual(void *pObjectXXXX, _in int quality )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setCompositingQuality((EarthView::World::Display::EVCompositingQuality)quality);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(void *pObjectXXXX, _out int* hint )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getTextRenderingHint((EarthView::World::Display::EVTextRenderingHint*)hint);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getTextRenderingHint((EarthView::World::Display::EVTextRenderingHint*)hint);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getTextRenderingHint_ev_bool_EVTextRenderingHint_NoVirtual(void *pObjectXXXX, _out int* hint )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getTextRenderingHint((EarthView::World::Display::EVTextRenderingHint*)hint);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(void *pObjectXXXX, _in int hint )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setTextRenderingHint((EarthView::World::Display::EVTextRenderingHint)hint);
				else
					ptrNativeObject->setTextRenderingHint((EarthView::World::Display::EVTextRenderingHint)hint);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setTextRenderingHint_void_EVTextRenderingHint_NoVirtual(void *pObjectXXXX, _in int hint )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setTextRenderingHint((EarthView::World::Display::EVTextRenderingHint)hint);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getInterpolationMode((EarthView::World::Display::EVInterpolationMode*)mode);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getInterpolationMode((EarthView::World::Display::EVInterpolationMode*)mode);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getInterpolationMode_ev_bool_EVInterpolationMode_NoVirtual(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getInterpolationMode((EarthView::World::Display::EVInterpolationMode*)mode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setInterpolationMode((EarthView::World::Display::EVInterpolationMode)mode);
				else
					ptrNativeObject->setInterpolationMode((EarthView::World::Display::EVInterpolationMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setInterpolationMode_void_EVInterpolationMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setInterpolationMode((EarthView::World::Display::EVInterpolationMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getSmoothingMode((EarthView::World::Display::EVSmoothingMode*)mode);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getSmoothingMode((EarthView::World::Display::EVSmoothingMode*)mode);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getSmoothingMode_ev_bool_EVSmoothingMode_NoVirtual(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getSmoothingMode((EarthView::World::Display::EVSmoothingMode*)mode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setSmoothingMode((EarthView::World::Display::EVSmoothingMode)mode);
				else
					ptrNativeObject->setSmoothingMode((EarthView::World::Display::EVSmoothingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setSmoothingMode_void_EVSmoothingMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setSmoothingMode((EarthView::World::Display::EVSmoothingMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode*)mode);
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->getPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode*)mode);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_IDisplayOptions_getPixelOffsetMode_ev_bool_EVPixelOffsetMode_NoVirtual(void *pObjectXXXX, _out int* mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::getPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode*)mode);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::setPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode)mode);
				else
					ptrNativeObject->setPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode)mode);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_setPixelOffsetMode_void_EVPixelOffsetMode_NoVirtual(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::setPixelOffsetMode((EarthView::World::Display::EVPixelOffsetMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::IDisplayOptions::loadFromXML(*(EarthView::World::Core::CXmlElement*)element);
				else
					ptrNativeObject->loadFromXML(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_IDisplayOptions_loadFromXML_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::IDisplayOptions::loadFromXML(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(void *pObjectXXXX )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				if (dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_Callback* pCallback )
			{
				IDisplayOptionsProxy* ptr = dynamic_cast<IDisplayOptionsProxy*>((EarthView::World::Display::IDisplayOptions*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_IDisplayOptions_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::IDisplayOptions* ptrNativeObject = (EarthView::World::Display::IDisplayOptions*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Display::IDisplayOptions::toXmlElement();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
