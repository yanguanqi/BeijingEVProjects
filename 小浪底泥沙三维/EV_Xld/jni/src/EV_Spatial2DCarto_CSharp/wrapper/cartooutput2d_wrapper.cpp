/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dcarto/cartooutput2d.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace Carto
			{
				typedef EarthView::World::Display::CPrinter*  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback)(_in ev_bool usingMapPageSettings);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback)(_in ev_bool printerAll);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback)(_in ev_bool scaleMap);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback)();
				typedef ev_uint32  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback)(_in ev_uint32 count);
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback)(_in int fromPage, _in int toPage);
				typedef ev_int32  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback)();
				typedef void  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback)(_in void* element);
				typedef void*  ( _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback)();
				class CCartoOutput2DProxy : public EarthView::World::Spatial::Carto::CCartoOutput2D
				{
				private:
					EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback;
					EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback* m_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback;
				public:
					CCartoOutput2DProxy(EarthView::World::Core::CNameValuePairList *pList) : CCartoOutput2D(pList)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback = NULL;
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback = NULL;
					}
				protected:
					C_DISABLE_COPY(CCartoOutput2DProxy)
				public:
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter(EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool(EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32(EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32(EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int(EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32(EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement(EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement(EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback* pCallback)
					{
						m_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback = pCallback;
					}
					virtual EarthView::World::Display::CPrinter* getPrinter()
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Display::CPrinter* returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::getPrinter();
					}
					virtual void setUsingPrinterPaperSettings(_in ev_bool usingMapPageSettings)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback(usingMapPageSettings);
						}
						else
							return this->CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
					}
					virtual ev_bool isUsingPrinterPaperSettings() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::isUsingPrinterPaperSettings();
					}
					virtual void setPrinterAll(_in ev_bool printerAll)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback(printerAll);
						}
						else
							return this->CCartoOutput2D::setPrinterAll(printerAll);
					}
					virtual ev_bool isPrinterAll() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::isPrinterAll();
					}
					virtual void setScaleMap(_in ev_bool scaleMap)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback(scaleMap);
						}
						else
							return this->CCartoOutput2D::setScaleMap(scaleMap);
					}
					virtual ev_bool isScaleMap() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::isScaleMap();
					}
					virtual ev_uint32 getPrintCopyCount() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							ev_uint32 returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::getPrintCopyCount();
					}
					virtual void setPrintCopyCount(_in ev_uint32 count)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback(count);
						}
						else
							return this->CCartoOutput2D::setPrintCopyCount(count);
					}
					virtual void setFromTo(_in int fromPage, _in int toPage)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback(fromPage, toPage);
						}
						else
							return this->CCartoOutput2D::setFromTo(fromPage, toPage);
					}
					virtual ev_int32 getFromPage() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback != NULL && this->isCustomExtend())
						{
							ev_int32 returnValue = m_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::getFromPage();
					}
					virtual void fromXmlElement(_in EarthView::World::Core::CXmlElement& element)
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback(&element);
						}
						else
							return this->CCartoOutput2D::fromXmlElement(element);
					}
					virtual EarthView::World::Core::CXmlElement toXmlElement() const
					{
						if(m_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback != NULL && this->isCustomExtend())
						{
							EarthView::World::Core::CXmlElement returnValue = *(EarthView::World::Core::CXmlElement*)m_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback();
							return returnValue;
						}
						else
							return this->CCartoOutput2D::toXmlElement();
					}
				};
				REGISTER_FACTORY_CLASS(CCartoOutput2DProxy);
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::CPrinter*  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Display::CPrinter* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrinter();
						return objXXXX;
					}
					else
					{
						EarthView::World::Display::CPrinter* objXXXX = ptrNativeObject->getPrinter();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Display::CPrinter*  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrinter_CPrinter_NoVirtual(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					EarthView::World::Display::CPrinter* objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrinter();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool(void *pObjectXXXX, _in ev_bool usingMapPageSettings )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
					else
						ptrNativeObject->setUsingPrinterPaperSettings(usingMapPageSettings);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setUsingPrinterPaperSettings_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool usingMapPageSettings )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setUsingPrinterPaperSettings(usingMapPageSettings);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isUsingPrinterPaperSettings();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isUsingPrinterPaperSettings();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isUsingPrinterPaperSettings_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isUsingPrinterPaperSettings();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool(void *pObjectXXXX, _in ev_bool printerAll )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrinterAll(printerAll);
					else
						ptrNativeObject->setPrinterAll(printerAll);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrinterAll_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool printerAll )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrinterAll(printerAll);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isPrinterAll();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isPrinterAll();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isPrinterAll_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isPrinterAll();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool(void *pObjectXXXX, _in ev_bool scaleMap )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setScaleMap(scaleMap);
					else
						ptrNativeObject->setScaleMap(scaleMap);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setScaleMap_void_ev_bool_NoVirtual(void *pObjectXXXX, _in ev_bool scaleMap )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setScaleMap(scaleMap);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isScaleMap();
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->isScaleMap();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_isScaleMap_ev_bool_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::isScaleMap();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrintCopyCount();
						return objXXXX;
					}
					else
					{
						ev_uint32 objXXXX = ptrNativeObject->getPrintCopyCount();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getPrintCopyCount_ev_uint32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getPrintCopyCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrintCopyCount(count);
					else
						ptrNativeObject->setPrintCopyCount(count);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setPrintCopyCount_void_ev_uint32_NoVirtual(void *pObjectXXXX, _in ev_uint32 count )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setPrintCopyCount(count);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int(void *pObjectXXXX, _in int fromPage, _in int toPage )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setFromTo(fromPage, toPage);
					else
						ptrNativeObject->setFromTo(fromPage, toPage);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_setFromTo_void_int_int_NoVirtual(void *pObjectXXXX, _in int fromPage, _in int toPage )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::setFromTo(fromPage, toPage);
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getFromPage();
						return objXXXX;
					}
					else
					{
						ev_int32 objXXXX = ptrNativeObject->getFromPage();
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getFromPage_ev_int32_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::getFromPage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getToPage_ev_int32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getToPage();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_getAllPageCount_ev_int32(void *pObjectXXXX )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->getAllPageCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
						ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
					else
						ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_fromXmlElement_void_CXmlElement_NoVirtual(void *pObjectXXXX, _in void* element )
				{
					EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					if (dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*)ptrNativeObject) != NULL)
					{
						EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::toXmlElement();
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
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement( void *pObjectXXXX, EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_Callback* pCallback )
				{
					CCartoOutput2DProxy* ptr = dynamic_cast<CCartoOutput2DProxy*>((EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial_Carto_CCartoOutput2D_toXmlElement_CXmlElement_NoVirtual(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::Carto::CCartoOutput2D* ptrNativeObject = (EarthView::World::Spatial::Carto::CCartoOutput2D*) pObjectXXXX;
					EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->EarthView::World::Spatial::Carto::CCartoOutput2D::toXmlElement();
					EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
		}
	}
}
