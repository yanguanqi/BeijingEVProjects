/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printer.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			typedef ev_int64  ( _stdcall EarthView_World_Display_CPrinter_getDC_ev_int64_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrinter_releaseDC_void_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback)();
			typedef ev_int32  ( _stdcall EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback)();
			typedef void  ( _stdcall EarthView_World_Display_CPrinter_fill_void_IColor_Callback)(_in const EarthView::World::Spatial::Display::IColor* color);
			typedef void  ( _stdcall EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback)(_in ev_int32 color);
			typedef ev_int32  ( _stdcall EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback)();
			class CPrinterProxy : public EarthView::World::Display::CPrinter
			{
			private:
				EarthView_World_Display_CPrinter_getDC_ev_int64_Callback* m_EarthView_World_Display_CPrinter_getDC_ev_int64_Callback;
				EarthView_World_Display_CPrinter_releaseDC_void_Callback* m_EarthView_World_Display_CPrinter_releaseDC_void_Callback;
				EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback* m_EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback;
				EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback* m_EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback;
				EarthView_World_Display_CPrinter_fill_void_IColor_Callback* m_EarthView_World_Display_CPrinter_fill_void_IColor_Callback;
				EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback* m_EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback;
				EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback* m_EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback;
			public:
				CPrinterProxy(EarthView::World::Core::CNameValuePairList *pList) : CPrinter(pList)
				{
					m_EarthView_World_Display_CPrinter_getDC_ev_int64_Callback = NULL;
					m_EarthView_World_Display_CPrinter_releaseDC_void_Callback = NULL;
					m_EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CPrinter_fill_void_IColor_Callback = NULL;
					m_EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback = NULL;
					m_EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Display_CPrinter_getDC_ev_int64(EarthView_World_Display_CPrinter_getDC_ev_int64_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_getDC_ev_int64_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_releaseDC_void(EarthView_World_Display_CPrinter_releaseDC_void_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_releaseDC_void_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_getWidth_ev_int32(EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_getHeight_ev_int32(EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_fill_void_IColor(EarthView_World_Display_CPrinter_fill_void_IColor_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_fill_void_IColor_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_fill_void_ev_int32(EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback = pCallback;
				}
				ev_void registerCallback_EarthView_World_Display_CPrinter_getResolution_ev_int32(EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback* pCallback)
				{
					m_EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback = pCallback;
				}
				virtual ev_int64 getDC()
				{
					if(m_EarthView_World_Display_CPrinter_getDC_ev_int64_Callback != NULL && this->isCustomExtend())
					{
						ev_int64 returnValue = m_EarthView_World_Display_CPrinter_getDC_ev_int64_Callback();
						return returnValue;
					}
					else
						return this->CPrinter::getDC();
				}
				virtual void releaseDC()
				{
					if(m_EarthView_World_Display_CPrinter_releaseDC_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrinter_releaseDC_void_Callback();
					}
					else
						return this->CPrinter::releaseDC();
				}
				virtual ev_int32 getWidth() const
				{
					if(m_EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPrinter::getWidth();
				}
				virtual ev_int32 getHeight() const
				{
					if(m_EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPrinter::getHeight();
				}
				virtual void fill(_in const EarthView::World::Spatial::Display::IColor* color)
				{
					if(m_EarthView_World_Display_CPrinter_fill_void_IColor_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrinter_fill_void_IColor_Callback(color);
					}
					else
						return this->CPrinter::fill(color);
				}
				virtual void fill(_in ev_int32 color)
				{
					if(m_EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback(color);
					}
					else
						return this->CPrinter::fill(color);
				}
				virtual ev_int32 getResolution() const
				{
					if(m_EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback != NULL && this->isCustomExtend())
					{
						ev_int32 returnValue = m_EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback();
						return returnValue;
					}
					else
						return this->CPrinter::getResolution();
				}
			};
			REGISTER_FACTORY_CLASS(CPrinterProxy);
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CPrinter_getDC_ev_int64(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
				{
					ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getDC();
					return objXXXX;
				}
				else
				{
					ev_int64 objXXXX = ptrNativeObject->getDC();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_getDC_ev_int64( void *pObjectXXXX, EarthView_World_Display_CPrinter_getDC_ev_int64_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_getDC_ev_int64(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int64  _stdcall EarthView_World_Display_CPrinter_getDC_ev_int64_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_int64 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getDC();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_releaseDC_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrinter::releaseDC();
				else
					ptrNativeObject->releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_releaseDC_void( void *pObjectXXXX, EarthView_World_Display_CPrinter_releaseDC_void_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_releaseDC_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_releaseDC_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrinter::releaseDC();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getWidth_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getWidth();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getWidth();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_getWidth_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrinter_getWidth_ev_int32_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_getWidth_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getWidth_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getHeight_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getHeight();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getHeight();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_getHeight_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrinter_getHeight_ev_int32_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_getHeight_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getHeight_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_fill_void_IColor(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrinter::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_fill_void_IColor( void *pObjectXXXX, EarthView_World_Display_CPrinter_fill_void_IColor_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_fill_void_IColor(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_fill_void_IColor_NoVirtual(void *pObjectXXXX, _in const EarthView::World::Spatial::Display::IColor* color )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrinter::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_fill_void_ev_int32(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Display::CPrinter::fill(color);
				else
					ptrNativeObject->fill(color);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_fill_void_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrinter_fill_void_ev_int32_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_fill_void_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_fill_void_ev_int32_NoVirtual(void *pObjectXXXX, _in ev_int32 color )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Display::CPrinter::fill(color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setResolution_void_ev_int32(void *pObjectXXXX, _in ev_int32 resolution )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setResolution(resolution);
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getResolution_ev_int32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				if (dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*)ptrNativeObject) != NULL)
				{
					ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getResolution();
					return objXXXX;
				}
				else
				{
					ev_int32 objXXXX = ptrNativeObject->getResolution();
					return objXXXX;
				}
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Display_CPrinter_getResolution_ev_int32( void *pObjectXXXX, EarthView_World_Display_CPrinter_getResolution_ev_int32_Callback* pCallback )
			{
				CPrinterProxy* ptr = dynamic_cast<CPrinterProxy*>((EarthView::World::Display::CPrinter*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Display_CPrinter_getResolution_ev_int32(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_getResolution_ev_int32_NoVirtual(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->EarthView::World::Display::CPrinter::getResolution();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPrinterName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPrinterName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CPrinter_getPrinterName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getPrinterName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrinter_isValid_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isValid();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setDocName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setDocName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CPrinter_getDocName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getDocName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setOrientation_void_EVPageOrientation(void *pObjectXXXX, _in int orientation )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setOrientation((EarthView::World::Spatial::Carto::EVPageOrientation)orientation);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getOrientation_EVPageOrientation(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Spatial::Carto::EVPageOrientation objXXXX = ptrNativeObject->getOrientation();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPageSize_void_EVPageSize(void *pObjectXXXX, _in int size )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPageSize((EarthView::World::Spatial::Carto::EVPageSize)size);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getPageSize_EVPageSize(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->getPageSize();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPageSize_void_CPageSize_EVPrintUnit(void *pObjectXXXX, _in const void* paperSize, _in int unit )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPageSize(*(EarthView::World::Display::CPageSize*)paperSize, (EarthView::World::Display::CPrinter::EVPrintUnit)unit);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinter_getPageSize_CPageSize_EVPrintUnit(void *pObjectXXXX, _in int unit )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPageSize objXXXX = ptrNativeObject->getPageSize((EarthView::World::Display::CPrinter::EVPrintUnit)unit);
				EarthView::World::Display::CPageSize *pXXXX = new EarthView::World::Display::CPageSize(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPageOrder_void_EVPageOrder(void *pObjectXXXX, _in int order )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPageOrder((EarthView::World::Display::CPrinter::EVPageOrder)order);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getPageOrder_EVPageOrder(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPageOrder objXXXX = ptrNativeObject->getPageOrder();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPrinterMode_void_EVPrinterMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPrinterMode((EarthView::World::Display::CPrinter::EVPrinterMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getPrinterMode_EVPrinterMode(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPrinterMode objXXXX = ptrNativeObject->getPrinterMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setColorMode_void_EVColorMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setColorMode((EarthView::World::Display::CPrinter::EVColorMode)mode);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getColorMode_EVColorMode(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVColorMode objXXXX = ptrNativeObject->getColorMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setCopyCount_void_int(void *pObjectXXXX, _in int count )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setCopyCount(count);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getCopyCount_int(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getCopyCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrinter_isSupportsMultipleCopies_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->isSupportsMultipleCopies();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setPaperSource_void_EVPaperSource(void *pObjectXXXX, _in int soure )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setPaperSource((EarthView::World::Display::CPrinter::EVPaperSource)soure);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getPaperSource_EVPaperSource(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPaperSource objXXXX = ptrNativeObject->getPaperSource();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinter_getPageRect_CPageRect_EVPrintUnit(void *pObjectXXXX, _in int unit )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->getPageRect((EarthView::World::Display::CPrinter::EVPrintUnit)unit);
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinter_getPageRect_CPageRect(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPageRect objXXXX = ptrNativeObject->getPageRect();
				EarthView::World::Display::CPageRect *pXXXX = new EarthView::World::Display::CPageRect(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrinter_newPage_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->newPage();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getPrinterState_EVPrinterState(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPrinterState objXXXX = ptrNativeObject->getPrinterState();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Display::CPrintEngine*  _stdcall EarthView_World_Display_CPrinter_getPrintEngine_CPrintEngine(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrintEngine* objXXXX = ptrNativeObject->getPrintEngine();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinter_getNativeGraphics_void(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				void* objXXXX = ptrNativeObject->getNativeGraphics();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrinter_startPrint_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->startPrint();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Display_CPrinter_endPrint_ev_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->endPrint();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setOutputFormat_void_EVOutputFormat(void *pObjectXXXX, _in int format )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setOutputFormat((EarthView::World::Display::CPrinter::EVOutputFormat)format);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinter_getOutputFormat_EVOutputFormat(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVOutputFormat objXXXX = ptrNativeObject->getOutputFormat();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrinter_abort_bool(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->abort();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setCollateCopies_void_bool(void *pObjectXXXX, _in bool collate )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setCollateCopies(collate);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrinter_isCollateCopies_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->isCollateCopies();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_setOutputFileName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->setOutputFileName(name1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CPrinter_getOutputFileName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getOutputFileName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_int32  _stdcall EarthView_World_Display_CPrinter_setPrinterProperty_ev_int32(void *pObjectXXXX )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ev_int32 objXXXX = ptrNativeObject->setPrinterProperty();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinter_fromXmlElement_void_CXmlElement(void *pObjectXXXX, _in void* element )
			{
				EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				ptrNativeObject->fromXmlElement(*(EarthView::World::Core::CXmlElement*)element);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinter_toXmlElement_CXmlElement(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinter* ptrNativeObject = (EarthView::World::Display::CPrinter*) pObjectXXXX;
				EarthView::World::Core::CXmlElement objXXXX = ptrNativeObject->toXmlElement();
				EarthView::World::Core::CXmlElement *pXXXX = new EarthView::World::Core::CXmlElement(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
		}
	}
}
