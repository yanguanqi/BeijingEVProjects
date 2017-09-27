/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printengine.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef int  ( _stdcall EarthView_World_Display_CPrintEngine_type_Type_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback)(_in int key, _in const void* value);
			typedef void*  ( _stdcall EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback)(_in int key);
			typedef bool  ( _stdcall EarthView_World_Display_CPrintEngine_newPage_bool_Callback)();
			typedef bool  ( _stdcall EarthView_World_Display_CPrintEngine_abort_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback)();
			typedef ev_bool  ( _stdcall EarthView_World_Display_CPrintEngine_end_ev_bool_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback)(_in int dm);
			typedef int  ( _stdcall EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback)();
			typedef void*  ( _stdcall EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback)();
			typedef ev_int64  ( _stdcall EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64 left, _in ev_real64 top, _in ev_real64 right, _in ev_real64 bottom);
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback)(_in ev_real64* left, _in ev_real64* top, _in ev_real64* right, _in ev_real64* bottom);
			typedef void*  ( _stdcall EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback)(_in const void* paperSize);
			typedef int  ( _stdcall EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback)(_in ev_int32 resolution);
			typedef void  ( _stdcall EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback)(_in int source);
			typedef ev_int32  ( _stdcall EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback)();
			class CPrintEngineProxy : public EarthView::World::Display::CPrintEngine
			{
			private:
				EarthView_World_Display_CPrintEngine_type_Type_Callback* m_EarthView_World_Display_CPrintEngine_type_Type_Callback;
				EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback* m_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback;
				EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback* m_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback;
				EarthView_World_Display_CPrintEngine_newPage_bool_Callback* m_EarthView_World_Display_CPrintEngine_newPage_bool_Callback;
				EarthView_World_Display_CPrintEngine_abort_bool_Callback* m_EarthView_World_Display_CPrintEngine_abort_bool_Callback;
				EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback* m_EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback;
				EarthView_World_Display_CPrintEngine_end_ev_bool_Callback* m_EarthView_World_Display_CPrintEngine_end_ev_bool_Callback;
				EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback* m_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback;
				EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback* m_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback;
				EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback* m_EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback;
				EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback* m_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback;
				EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback* m_EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback;
				EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* m_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback;
				EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback* m_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback;
				EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback* m_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback;
				EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback* m_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback;
				EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback* m_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback;
				EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback* m_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback;
				EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback* m_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback;
			public:
				CPrintEngineProxy(EarthView::World::Core::CNameValuePairList *pList) : CPrintEngine(pList)
				{
					m_EarthView_World_Display_CPrintEngine_type_Type_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_newPage_bool_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_abort_bool_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_end_ev_bool_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback = NULL;
					m_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_type_Type(EarthView_World_Display_CPrintEngine_type_Type_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_type_Type_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_newPage_bool(EarthView_World_Display_CPrintEngine_newPage_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_newPage_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_abort_bool(EarthView_World_Display_CPrintEngine_abort_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_abort_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_begin_ev_bool(EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_end_ev_bool(EarthView_World_Display_CPrintEngine_end_ev_bool_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_end_ev_bool_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_getPaintEngine_void(EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_releasePrinterDC_void(EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback = pCallback;
				}
				virtual EarthView::World::Display::CPrintEngine::Type type()
				{
					if(m_EarthView_World_Display_CPrintEngine_type_Type_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::CPrintEngine::Type returnValue = (EarthView::World::Display::CPrintEngine::Type)m_EarthView_World_Display_CPrintEngine_type_Type_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::type();
				}
				virtual void setProperty(_in EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key, _in const EarthView::World::Core::CVariant& value)
				{
					if(m_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback((int)key, &value);
					}
					else
						return this->CPrintEngine::setProperty(key, value);
				}
				virtual EarthView::World::Core::CVariant property(_in EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey key) const
				{
					if(m_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Core::CVariant returnValue = *(EarthView::World::Core::CVariant*)m_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback((int)key);
						return returnValue;
					}
					else
						return this->CPrintEngine::property(key);
				}
				virtual bool newPage()
				{
					if(m_EarthView_World_Display_CPrintEngine_newPage_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Display_CPrintEngine_newPage_bool_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::newPage();
				}
				virtual bool abort()
				{
					if(m_EarthView_World_Display_CPrintEngine_abort_bool_Callback != NULL && this->isCustomExtend())
					{
						bool returnValue = m_EarthView_World_Display_CPrintEngine_abort_bool_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::abort();
				}
				virtual ev_bool begin()
				{
					if(m_EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::begin();
				}
				virtual ev_bool end()
				{
					if(m_EarthView_World_Display_CPrintEngine_end_ev_bool_Callback != NULL && this->isCustomExtend())
					{
						ev_bool returnValue = m_EarthView_World_Display_CPrintEngine_end_ev_bool_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::end();
				}
				virtual ev_int32 metric(_in EarthView::World::Display::CPrinter::EVPrintDeviceMetric dm)
				{
					if(m_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback((int)dm);
						return returnValue;
					}
					else
						return this->CPrintEngine::metric(dm);
				}
				virtual EarthView::World::Display::CPrinter::EVPrinterState printerState() const
				{
					if(m_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::CPrinter::EVPrinterState returnValue = (EarthView::World::Display::CPrinter::EVPrinterState)m_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::printerState();
				}
				virtual void* getPaintEngine()
				{
					if(m_EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback != NULL && this->isCustomExtend())
					{
						void* returnValue = m_EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::getPaintEngine();
				}
				virtual ev_int64 getPrinterDC() const
				{
					if(m_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::getPrinterDC();
				}
				virtual void releasePrinterDC()
				{
					if(m_EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback();
					}
					else
						return this->CPrintEngine::releasePrinterDC();
				}
				virtual void setPageMargins(_in ev_real64 left, _in ev_real64 top, _in ev_real64 right, _in ev_real64 bottom)
				{
					if(m_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(left, top, right, bottom);
					}
					else
						return this->CPrintEngine::setPageMargins(left, top, right, bottom);
				}
				virtual void getPageMargins(_in ev_real64* left, _in ev_real64* top, _in ev_real64* right, _in ev_real64* bottom) const
				{
					if(m_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback(left, top, right, bottom);
					}
					else
						return this->CPrintEngine::getPageMargins(left, top, right, bottom);
				}
				virtual EarthView::World::Display::CPageRect getPageRect() const
				{
					if(m_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Display::CPageRect returnValue = *(EarthView::World::Display::CPageRect*)m_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::getPageRect();
				}
				virtual void setPageSize(_in const EarthView::World::Display::CPageSize& paperSize)
				{
					if(m_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback(&paperSize);
					}
					else
						return this->CPrintEngine::setPageSize(paperSize);
				}
				virtual EarthView::World::Spatial::Carto::EVPageSize getPageSize()
				{
					if(m_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback != NULL && this->isCustomExtend())
					{
						EarthView::World::Spatial::Carto::EVPageSize returnValue = (EarthView::World::Spatial::Carto::EVPageSize)m_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::getPageSize();
				}
				virtual void setResolution(_in ev_int32 resolution)
				{
					if(m_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback(resolution);
					}
					else
						return this->CPrintEngine::setResolution(resolution);
				}
				virtual void setPaperSources(_in EarthView::World::Display::CPrinter::EVPaperSource source)
				{
					if(m_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback((int)source);
					}
					else
						return this->CPrintEngine::setPaperSources(source);
				}
				virtual ev_int32 setPrinterProperty()
				{
					if(m_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPrintEngine::setPrinterProperty();
				}
			};
			REGISTER_FACTORY_CLASS(CPrintEngineProxy);
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_type_Type(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::CPrintEngine::Type objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::type();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Display::CPrintEngine::Type objXXXX = ptrNativeObject->type();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_type_Type( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_type_Type_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_type_Type(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_type_Type_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				EarthView::World::Display::CPrintEngine::Type objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::type();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(void *pObjectXXXX, _in int key, _in const void* value )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::setProperty((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key, *(EarthView::World::Core::CVariant*)value);
				else
					ptrNativeObject->setProperty((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key, *(EarthView::World::Core::CVariant*)value);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setProperty_void_EVPrintEnginePropertyKey_CVariant_NoVirtual(void *pObjectXXXX, _in int key, _in const void* value )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::setProperty((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key, *(EarthView::World::Core::CVariant*)value);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(void *pObjectXXXX, _in int key )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::property((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Core::CVariant objXXXX = ptrNativeObject->property((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key);
					EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_property_CVariant_EVPrintEnginePropertyKey_NoVirtual(void *pObjectXXXX, _in int key )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				EarthView::World::Core::CVariant objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::property((EarthView::World::Display::CPrintEngine::EVPrintEnginePropertyKey)key);
				EarthView::World::Core::CVariant *pXXXX = new EarthView::World::Core::CVariant(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrintEngine_newPage_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::newPage();
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->newPage();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_newPage_bool( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_newPage_bool_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_newPage_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrintEngine_newPage_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::newPage();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrintEngine_abort_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::abort();
					return objXXXX;
				}
				else
				{
					bool objXXXX = ptrNativeObject->abort();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_abort_bool( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_abort_bool_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_abort_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrintEngine_abort_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::abort();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrintEngine_begin_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::begin();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->begin();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_begin_ev_bool( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_begin_ev_bool_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_begin_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrintEngine_begin_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::begin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrintEngine_end_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::end();
					return objXXXX;
				}
				else
				{
					ev_bool objXXXX = ptrNativeObject->end();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_end_ev_bool( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_end_ev_bool_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_end_ev_bool(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrintEngine_end_ev_bool_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::end();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(void *pObjectXXXX, _in int dm )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::metric((EarthView::World::Display::CPrinter::EVPrintDeviceMetric)dm);
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->metric((EarthView::World::Display::CPrinter::EVPrintDeviceMetric)dm);
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrintEngine_metric_ev_int32_EVPrintDeviceMetric_NoVirtual(void *pObjectXXXX, _in int dm )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::metric((EarthView::World::Display::CPrinter::EVPrintDeviceMetric)dm);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::CPrinter::EVPrinterState objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::printerState();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Display::CPrinter::EVPrinterState objXXXX = ptrNativeObject->printerState();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_printerState_EVPrinterState(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_printerState_EVPrinterState_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPrinterState objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::printerState();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_getPaintEngine_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					void* objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPaintEngine();
					return objXXXX;
				}
				else
				{
					void* objXXXX = ptrNativeObject->getPaintEngine();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPaintEngine_void( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_getPaintEngine_void_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_getPaintEngine_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_getPaintEngine_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPaintEngine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPrinterDC();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getPrinterDC();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CPrintEngine_getPrinterDC_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPrinterDC();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_releasePrinterDC_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::releasePrinterDC();
				else
					ptrNativeObject->releasePrinterDC();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_releasePrinterDC_void( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_releasePrinterDC_void_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_releasePrinterDC_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_releasePrinterDC_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::releasePrinterDC();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 left, _in ev_real64 top, _in ev_real64 right, _in ev_real64 bottom )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::setPageMargins(left, top, right, bottom);
				else
					ptrNativeObject->setPageMargins(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64 left, _in ev_real64 top, _in ev_real64 right, _in ev_real64 bottom )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::setPageMargins(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* left, _in ev_real64* top, _in ev_real64* right, _in ev_real64* bottom )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageMargins(left, top, right, bottom);
				else
					ptrNativeObject->getPageMargins(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_getPageMargins_void_ev_real64_ev_real64_ev_real64_ev_real64_NoVirtual(void *pObjectXXXX, _in ev_real64* left, _in ev_real64* top, _in ev_real64* right, _in ev_real64* bottom )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageMargins(left, top, right, bottom);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageRect();
					EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				else
				{
					EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->getPageRect();
					EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_getPageRect_CPageRect(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrintEngine_getPageRect_CPageRect_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageRect();
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(void *pObjectXXXX, _in const void* paperSize )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::setPageSize(*(EarthView::World::Display::CPageSize*)paperSize);
				else
					ptrNativeObject->setPageSize(*(EarthView::World::Display::CPageSize*)paperSize);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPageSize_void_CPageSize_NoVirtual(void *pObjectXXXX, _in const void* paperSize )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::setPageSize(*(EarthView::World::Display::CPageSize*)paperSize);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageSize();
					return (int)objXXXX;
				}
				else
				{
					EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->getPageSize();
					return (int)objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrintEngine_getPageSize_EVPageSize_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::getPageSize();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::setResolution(resolution);
				else
					ptrNativeObject->setResolution(resolution);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setResolution_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 resolution )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::setResolution(resolution);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(void *pObjectXXXX, _in int source )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrintEngine::setPaperSources((EarthView::World::Display::CPrinter::EVPaperSource)source);
				else
					ptrNativeObject->setPaperSources((EarthView::World::Display::CPrinter::EVPaperSource)source);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrintEngine_setPaperSources_void_EVPaperSource_NoVirtual(void *pObjectXXXX, _in int source )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrintEngine::setPaperSources((EarthView::World::Display::CPrinter::EVPaperSource)source);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				if (dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::setPrinterProperty();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->setPrinterProperty();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_Callback* pCallback )
			{
				CPrintEngineProxy* ptr = dynamic_cast<CPrintEngineProxy*>((EarthView::World::Display::CPrintEngine*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrintEngine_setPrinterProperty_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrintEngine* ptrNativeObject = (EarthView::World::Display::CPrintEngine*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrintEngine::setPrinterProperty();
				return objXXXX;
			}
		}
	}
}
