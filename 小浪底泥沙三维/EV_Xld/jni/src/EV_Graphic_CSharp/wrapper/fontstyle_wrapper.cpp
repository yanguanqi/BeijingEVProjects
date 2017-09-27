/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/fontstyle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_FontStyle_getFontFamily_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFontFamily();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setFontFamily_void_EVString(void *pObjectXXXX, _in const char* fontFamily )
			{
				EarthView::World::Core::ev_string fontFamily1 = fontFamily;
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setFontFamily(fontFamily1);
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_FontStyle_fontIndex_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->fontIndex();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FontStyle_isItalic_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isItalic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setItalic_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setItalic(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_FontStyle_size_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->size();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setSize_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 val )
			{
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setSize(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FontStyle_isBold_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBold();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setBold_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setBold(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FontStyle_hasShadow_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setShadow_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setShadow(val);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_FontStyle_isAntiAlias_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isAntiAlias();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_FontStyle_setAntiAlias_void_ev_bool(void *pObjectXXXX, _in ev_bool val )
			{
				EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ptrNativeObject->setAntiAlias(val);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_FontStyle_key_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->key();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_FontStyle_flag_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::FontStyle* ptrNativeObject = (EarthView::World::Graphic::FontStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->flag();
				return objXXXX;
			}
		}
	}
}
