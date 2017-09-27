/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/texturetextstyle.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setFontStyle_void_FontStyle(void *pObjectXXXX, _in const void* style )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setFontStyle(*(EarthView::World::Graphic::FontStyle*)style);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setOutlineColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setOutlineColor(*(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setColorRange_void_CColourValue_CColourValue(void *pObjectXXXX, _in const void* colorBegin, _in const void* colorEnd )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setColorRange(*(EarthView::World::Graphic::CColourValue*)colorBegin, *(EarthView::World::Graphic::CColourValue*)colorEnd);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setFontName_void_EVString(void *pObjectXXXX, _in const char* family )
			{
				EarthView::World::Core::ev_string family1 = family;
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setFontName(family1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setFontSize_void_ev_uint8(void *pObjectXXXX, _in ev_uint8 size )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setFontSize(size);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setBoldEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isBold )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setBoldEnabled(isBold);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setItalicEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool isItalic )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setItalicEnabled(isItalic);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setShadowEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool hasShadow )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setShadowEnabled(hasShadow);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setLayout_void_HoriLayout_VertLayout(void *pObjectXXXX, _in int hLayout, _in int vLayout )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setLayout((EarthView::World::Graphic::CTextureTextStyle::HoriLayout)hLayout, (EarthView::World::Graphic::CTextureTextStyle::VertLayout)vLayout);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setOffset_void_Real_Real_Real(void *pObjectXXXX, _in Real offsetX, _in Real offsetY, _in Real offsetZ )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setOffset(offsetX, offsetY, offsetZ);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setRowHeight_void_Real(void *pObjectXXXX, _in Real scale )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setRowHeight(scale);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_setDisplayMode_void_DisplayMode(void *pObjectXXXX, _in int mode )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->setDisplayMode((EarthView::World::Graphic::CTextureTextStyle::DisplayMode)mode);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_commit_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->commit();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_attach_void_ITextStyleListener(void *pObjectXXXX, _in EarthView::World::Graphic::ITextStyleListener* listener )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->attach(listener);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_remove_void_ITextStyleListener(void *pObjectXXXX, _in EarthView::World::Graphic::ITextStyleListener* listener )
			{
				EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->remove(listener);
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureTextStyle_getFontStyle_FontStyle(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				const EarthView::World::Graphic::FontStyle& objXXXX = ptrNativeObject->getFontStyle();
				const EarthView::World::Graphic::FontStyle *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  const char*  _stdcall EarthView_World_Graphic_CTextureTextStyle_getFontName_EVString(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				const EVString& objXXXX = ptrNativeObject->getFontName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  ev_uint8  _stdcall EarthView_World_Graphic_CTextureTextStyle_getFontSize_ev_uint8(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint8 objXXXX = ptrNativeObject->getFontSize();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_isItalic_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isItalic();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_isBold_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isBold();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_hasShadow_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->hasShadow();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureTextStyle_getColorBegin_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getColorBegin();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureTextStyle_getColorEnd_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getColorEnd();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_getColorRange_void_CColourValue_CColourValue(void *pObjectXXXX, _out void* beginColor, _out void* endColor )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ptrNativeObject->getColorRange(*(EarthView::World::Graphic::CColourValue*)beginColor, *(EarthView::World::Graphic::CColourValue*)endColor);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CTextureTextStyle_getColor_CColourValue(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getColor();
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureTextStyle_getOutlineColor_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getOutlineColor();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_geometryOutOfDate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->geometryOutOfDate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_colorOutOfDate_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->colorOutOfDate();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureTextStyle_getHorizontalLayout_HoriLayout(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				EarthView::World::Graphic::CTextureTextStyle::HoriLayout objXXXX = ptrNativeObject->getHorizontalLayout();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureTextStyle_getVerticalLayout_VertLayout(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				EarthView::World::Graphic::CTextureTextStyle::VertLayout objXXXX = ptrNativeObject->getVerticalLayout();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureTextStyle_getOffsetX_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOffsetX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureTextStyle_getOffsetY_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOffsetY();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CTextureTextStyle_getOffsetZ_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOffsetZ();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CTextureTextStyle_getDisplayMode_DisplayMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				EarthView::World::Graphic::CTextureTextStyle::DisplayMode objXXXX = ptrNativeObject->getDisplayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  const void*  _stdcall EarthView_World_Graphic_CTextureTextStyle_getFontResoure_CFontPtr(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				const EarthView::World::Graphic::CFontPtr& objXXXX = ptrNativeObject->getFontResoure();
				const EarthView::World::Graphic::CFontPtr *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureTextStyle_getRowHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getRowHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CTextureTextStyle_getStandardRowHeight_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getStandardRowHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureTextStyle*  _stdcall EarthView_World_Graphic_CTextureTextStyle_create_CTextureTextStyle_EVString_ev_uint8_CColourValue_ev_bool(_in const char* famliy, _in ev_uint8 fontSize, _in const void* color, _in ev_bool hasShadow )
			{
				EarthView::World::Core::ev_string famliy1 = famliy;
				EarthView::World::Graphic::CTextureTextStyle* objXXXX = EarthView::World::Graphic::CTextureTextStyle::create(famliy1, fontSize, *(EarthView::World::Graphic::CColourValue*)color, hasShadow);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextureTextStyle*  _stdcall EarthView_World_Graphic_CTextureTextStyle_create_CTextureTextStyle( )
			{
				EarthView::World::Graphic::CTextureTextStyle* objXXXX = EarthView::World::Graphic::CTextureTextStyle::create();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CTextureTextStyle_destroy_void_CTextureTextStyle(_in EarthView::World::Graphic::CTextureTextStyle* ref_instance )
			{
				EarthView::World::Graphic::CTextureTextStyle::destroy(ref_instance);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CTextureTextStyle_isToDestroy_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CTextureTextStyle* ptrNativeObject = (EarthView::World::Graphic::CTextureTextStyle*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->isToDestroy();
				return objXXXX;
			}
			typedef void  ( _stdcall EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback)(_in EarthView::World::Graphic::CTextureTextStyle* ref_style);
			class ITextStyleListenerProxy : public EarthView::World::Graphic::ITextStyleListener
			{
			private:
				EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback* m_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback;
			public:
				ITextStyleListenerProxy(EarthView::World::Core::CNameValuePairList *pList) : ITextStyleListener(pList)
				{
					m_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback = NULL;
				}
			public:
				ev_void registerCallback_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle(EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback* pCallback)
				{
					m_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback = pCallback;
				}
				virtual void onStyleChanged(_in EarthView::World::Graphic::CTextureTextStyle* ref_style)
				{
					if(m_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback != NULL && this->isCustomExtend())
					{
						m_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback(ref_style);
					}
					else
						return this->ITextStyleListener::onStyleChanged(ref_style);
				}
			};
			REGISTER_FACTORY_CLASS(ITextStyleListenerProxy);
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureTextStyle* ref_style )
			{
				EarthView::World::Graphic::ITextStyleListener* ptrNativeObject = (EarthView::World::Graphic::ITextStyleListener*) pObjectXXXX;
				if (dynamic_cast<ITextStyleListenerProxy*>((EarthView::World::Graphic::ITextStyleListener*)ptrNativeObject) != NULL)
					ptrNativeObject->EarthView::World::Graphic::ITextStyleListener::onStyleChanged(ref_style);
				else
					ptrNativeObject->onStyleChanged(ref_style);
			}
			extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle( void *pObjectXXXX, EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_Callback* pCallback )
			{
				ITextStyleListenerProxy* ptr = dynamic_cast<ITextStyleListenerProxy*>((EarthView::World::Graphic::ITextStyleListener*) pObjectXXXX);
				if(ptr != NULL)
				{
					ptr->registerCallback_EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle(pCallback);
				}
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_ITextStyleListener_onStyleChanged_void_CTextureTextStyle_NoVirtual(void *pObjectXXXX, _in EarthView::World::Graphic::CTextureTextStyle* ref_style )
			{
				EarthView::World::Graphic::ITextStyleListener* ptrNativeObject = (EarthView::World::Graphic::ITextStyleListener*) pObjectXXXX;
				ptrNativeObject->EarthView::World::Graphic::ITextStyleListener::onStyleChanged(ref_style);
			}
		}
	}
}
