/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/latticetextstyle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			typedef void  ( _stdcall EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback)();
			class CLatticeTextStyleProxy : public EarthView::World::Graphic::CLatticeTextStyle
			{
			private:
				EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback* m_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback;
			public:
				CLatticeTextStyleProxy(EarthView::World::Core::CNameValuePairList *pList) : CLatticeTextStyle(pList)
				{
					m_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void(EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback* pCallback)
				{
					m_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback = pCallback;
				}
				virtual void toDefaultVal()
				{
					if(m_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback();
					}
					else
						return this->CLatticeTextStyle::toDefaultVal();
				}
			};
			REGISTER_FACTORY_CLASS(CLatticeTextStyleProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setColor_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 rgbVal )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setColor(rgbVal);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setUnderline_void_ev_bool(void *pObjectXXXX, _in ev_bool bUnderline )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setUnderline(bUnderline);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setStrikeOut_void_ev_bool(void *pObjectXXXX, _in ev_bool bStrikeOut )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setStrikeOut(bStrikeOut);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setBold_void_ev_bool(void *pObjectXXXX, _in ev_bool bBold )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setBold(bBold);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setItalic_void_ev_bool(void *pObjectXXXX, _in ev_bool bItalic )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setItalic(bItalic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setFont_void_EarthView_World_Core_ev_string(void *pObjectXXXX, _in const char* fontFamily )
			{
				EarthView::World::Core::ev_string fontFamily1 = fontFamily;
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setFont(fontFamily1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setFontSize_void_ev_byte(void *pObjectXXXX, _in ev_byte size )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setFontSize(size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setTransparence_void_ev_real32(void *pObjectXXXX, _in ev_real32 rate )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setTransparence(rate);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_setShadeMode_void_EShadeMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->setShadeMode((EarthView::World::Graphic::CLatticeTextStyle::EShadeMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				if (dynamic_cast<CLatticeTextStyleProxy*>((EarthView::World::Graphic::CLatticeTextStyle*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::CLatticeTextStyle::toDefaultVal();
				else
					ptrNativeObject->toDefaultVal();
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void( void *pObjectXXXX, EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_Callback* pCallback )
			{
				CLatticeTextStyleProxy* ptr = dynamic_cast<CLatticeTextStyleProxy*>((EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_toDefaultVal_void_NoVirtual(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::CLatticeTextStyle::toDefaultVal();
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLatticeTextStyle*  _stdcall EarthView_World_Graphic_CLatticeTextStyle_create_CLatticeTextStyle( )
			{
				EarthView::World::Graphic::CLatticeTextStyle* objXXXX = EarthView::World::Graphic::CLatticeTextStyle::create();
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CLatticeTextStyle*  _stdcall EarthView_World_Graphic_CLatticeTextStyle_create_CLatticeTextStyle_EarthView_World_Core_ev_string_ev_byte_CColourValue(_in const char* fontFamily, _in ev_byte fontSize, _in const void* color )
			{
				EarthView::World::Core::ev_string fontFamily1 = fontFamily;
				EarthView::World::Graphic::CLatticeTextStyle* objXXXX = EarthView::World::Graphic::CLatticeTextStyle::create(fontFamily1, fontSize, *(EarthView::World::Graphic::CColourValue*)color);
				if(objXXXX != NULL) {
					((EarthView::World::Core::CBaseObject*)objXXXX)->setExternFree(true);
				}
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CLatticeTextStyle_destroy_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ptrNativeObject->destroy();
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getRGB_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRGB();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getColor_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeTextStyle_isUnderline_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isUnderline();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeTextStyle_isStrikeOut_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isStrikeOut();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeTextStyle_isBold_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBold();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CLatticeTextStyle_isItalic_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isItalic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint16  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getFont_ev_uint16(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_uint16 objXXXX = ptrNativeObject->getFont();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_byte  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getFontSize_ev_byte(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_byte objXXXX = ptrNativeObject->getFontSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_real32  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getTransparence_ev_real32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				ev_real32 objXXXX = ptrNativeObject->getTransparence();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const ev_int64&  _stdcall EarthView_World_Graphic_CLatticeTextStyle_getKey_ev_int64(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CLatticeTextStyle* ptrNativeObject = (EarthView::World::Graphic::CLatticeTextStyle*) pObjectXXXX;
				const ev_int64& objXXXX = ptrNativeObject->getKey();
				return objXXXX;
			}
		}
	}
}
