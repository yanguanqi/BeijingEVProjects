/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "display/printerinfo.h"
namespace EarthView
{
	namespace World
	{
		namespace Display
		{
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Display_PageInfo_isPreDefine( void *pObjectXXXX )
			{
				EarthView::World::Display::PageInfo* ptrNativeObject = (EarthView::World::Display::PageInfo*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isPreDefine;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Display_PageInfo_isPreDefine( void *pObjectXXXX, ev_bool  value )
			{
				((EarthView::World::Display::PageInfo*)pObjectXXXX)->isPreDefine = value;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Display_PageInfo_evPageSize( void *pObjectXXXX )
			{
				EarthView::World::Display::PageInfo* ptrNativeObject = (EarthView::World::Display::PageInfo*) pObjectXXXX;
				EarthView::World::Spatial::Carto::EVPageSize objXXXX = ptrNativeObject->evPageSize;
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Display_PageInfo_evPageSize( void *pObjectXXXX, int  value )
			{
				((EarthView::World::Display::PageInfo*)pObjectXXXX)->evPageSize = (EarthView::World::Spatial::Carto::EVPageSize)value;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Display_PageInfo_name( void *pObjectXXXX )
			{
				EarthView::World::Display::PageInfo* ptrNativeObject = (EarthView::World::Display::PageInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->name;
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Display_PageInfo_name( void *pObjectXXXX, char*  value )
			{
				EarthView::World::Core::ev_string value1 = value;
				((EarthView::World::Display::PageInfo*)pObjectXXXX)->name = value1;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Display_PageInfo_width( void *pObjectXXXX )
			{
				EarthView::World::Display::PageInfo* ptrNativeObject = (EarthView::World::Display::PageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->width;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Display_PageInfo_width( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Display::PageInfo*)pObjectXXXX)->width = value;
			}
			extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Display_PageInfo_height( void *pObjectXXXX )
			{
				EarthView::World::Display::PageInfo* ptrNativeObject = (EarthView::World::Display::PageInfo*) pObjectXXXX;
				ev_real64 objXXXX = ptrNativeObject->height;
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Display_PageInfo_height( void *pObjectXXXX, ev_real64  value )
			{
				((EarthView::World::Display::PageInfo*)pObjectXXXX)->height = value;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinterInfo_OperatorAssign_CPrinterInfo_CPrinterInfo(void *pObjXXXX, _in const void* other )
			{
				EarthView::World::Display::CPrinterInfo& objXXXX = *((EarthView::World::Display::CPrinterInfo*) pObjXXXX);
				objXXXX = *(EarthView::World::Display::CPrinterInfo*)other;
				EarthView::World::Display::CPrinterInfo *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Display_CPrinterInfo_printerName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->printerName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_World_Display_CPrinterInfo_isDefault_bool(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->isDefault();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Display_CPrinterInfo_getAvailablePrinters_void_CStringArray(_inout void* printers )
			{
				EarthView::World::Display::CPrinterInfo::getAvailablePrinters(*(EarthView::World::Core::CStringArray*)printers);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinterInfo_defaultPrinter_CPrinterInfo( )
			{
				EarthView::World::Display::CPrinterInfo objXXXX = EarthView::World::Display::CPrinterInfo::defaultPrinter();
				EarthView::World::Display::CPrinterInfo *pXXXX = new EarthView::World::Display::CPrinterInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedPaperSizesCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSupportedPaperSizesCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedPaperSize_PageInfo_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				EarthView::World::Display::PageInfo objXXXX = ptrNativeObject->getSupportedPaperSize(index);
				EarthView::World::Display::PageInfo *pXXXX = new EarthView::World::Display::PageInfo(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedPaperSourceCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSupportedPaperSourceCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedPaperSource_EVPaperSource_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				EarthView::World::Display::CPrinter::EVPaperSource objXXXX = ptrNativeObject->getSupportedPaperSource(index);
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedResolutionCount_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSupportedResolutionCount();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Display_CPrinterInfo_getSupportedResolution_ev_uint32_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
			{
				EarthView::World::Display::CPrinterInfo* ptrNativeObject = (EarthView::World::Display::CPrinterInfo*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getSupportedResolution(index);
				return objXXXX;
			}
		}
	}
}
