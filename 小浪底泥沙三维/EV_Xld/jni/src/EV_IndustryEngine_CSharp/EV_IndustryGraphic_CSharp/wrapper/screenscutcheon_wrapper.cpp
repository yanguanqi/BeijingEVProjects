/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheon.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setSelected_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setSelected(value);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getSelected_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSelected();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setSelectable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setSelectable(value);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getSelectable_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getSelectable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setDraggable_void_ev_bool(void *pObjectXXXX, _in const ev_bool& value )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setDraggable(value);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getDraggable_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getDraggable();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setVisible_void_bool(void *pObjectXXXX, _in const bool& visible )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setVisible(visible);
			}
			extern "C" EV_DLL_EXPORT  bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getVisible_bool(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				bool objXXXX = ptrNativeObject->getVisible();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getName_EVString(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getName();
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementHeight_void_EVString_int(void *pObjectXXXX, _in const char* panelElementName, _in const int& height )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementHeight(panelElementName1, height);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getPanelElementHeight_int_EVString(void *pObjectXXXX, _in const char* panelElementName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getPanelElementHeight(panelElementName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementWidth_void_EVString_int(void *pObjectXXXX, _in const char* panelElementName, _in const int& width )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementWidth(panelElementName1, width);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getPanelElementWidth_int_EVString(void *pObjectXXXX, _in const char* panelElementName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getPanelElementWidth(panelElementName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementPostion_void_EVString_CVector2(void *pObjectXXXX, _in const char* panelElementName, _in const void* pos )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementPostion(panelElementName1, *(EarthView::World::Spatial::Math::CVector2*)pos);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getPanelElementPostion_CVector2_EVString(void *pObjectXXXX, _in const char* panelElementName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::World::Spatial::Math::CVector2 objXXXX = ptrNativeObject->getPanelElementPostion(panelElementName1);
				EarthView::World::Spatial::Math::CVector2 *pXXXX = new EarthView::World::Spatial::Math::CVector2(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontName_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const char* fontName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::World::Core::ev_string fontName1 = fontName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontName(panelElementName1, textAreaName1, fontName1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementFontName_EVString_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getTextElementFontName(panelElementName1, textAreaName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontColor_void_EVString_EVString_CColourValue(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const void* color )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontColor(panelElementName1, textAreaName1, *(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementFontColor_CColourValue_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getTextElementFontColor(panelElementName1, textAreaName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontColorTop_void_EVString_EVString_CColourValue(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const void* color )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontColorTop(panelElementName1, textAreaName1, *(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementFontColorTop_CColourValue_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getTextElementFontColorTop(panelElementName1, textAreaName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontColorBottom_void_EVString_EVString_CColourValue(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const void* color )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontColorBottom(panelElementName1, textAreaName1, *(EarthView::World::Graphic::CColourValue*)color);
			}
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementFontColorBottom_CColourValue_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getTextElementFontColorBottom(panelElementName1, textAreaName1);
				EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
				((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontSize_void_EVString_EVString_Real(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const Real& size )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontSize(panelElementName1, textAreaName1, size);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementFontSize_Real_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getTextElementFontSize(panelElementName1, textAreaName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementFontHasShadow_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const ev_bool& hasShadow )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementFontHasShadow(panelElementName1, textAreaName1, hasShadow);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementCaption_void_EVString_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in const char* value )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::World::Core::ev_string value1 = value;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementCaption(panelElementName1, textAreaName1, value1);
			}
			extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementCaption_EVString_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EVString objXXXX = ptrNativeObject->getTextElementCaption(panelElementName1, textAreaName1);
				return objXXXX.makeBuffer();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_addChildName_void_EVString(void *pObjectXXXX, _in const char* name )
			{
				EarthView::World::Core::ev_string name1 = name;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->addChildName(name1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementMaterial_void_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* materialName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string materialName1 = materialName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementMaterial(panelElementName1, materialName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setEventObject_void_CScreenScutcheonEventObject(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* object )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setEventObject(object);
			}
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getEventObject_CScreenScutcheonEventObject(void *pObjectXXXX )
			{
				const EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEventObject* objXXXX = ptrNativeObject->getEventObject();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementTexture_void_EVString_CTexturePtr(void *pObjectXXXX, _in const char* panelElementName, _in const void* texturePtr )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementTexture(panelElementName1, *(EarthView::World::Graphic::CTexturePtr*)texturePtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementBorderTexture_void_EVString_CTexturePtr(void *pObjectXXXX, _in const char* panelElementName, _in const void* texturePtr )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementBorderTexture(panelElementName1, *(EarthView::World::Graphic::CTexturePtr*)texturePtr);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_calculateWidth_void_CTextAreaOverlayElement_Real_Real(void *pObjectXXXX, _in EarthView::World::Graphic::CTextAreaOverlayElement* pTextArea, _out Real& width, _out Real& height )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->calculateWidth(pTextArea, width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setPanelElementVisible_void_EVString_ev_bool(void *pObjectXXXX, _in const char* panelElementName, _in ev_bool isVisible )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setPanelElementVisible(panelElementName1, isVisible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getPanelElementVisible_ev_bool_EVString(void *pObjectXXXX, _in const char* panelElementName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getPanelElementVisible(panelElementName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_setTextElementVisible_void_EVString_EVString_ev_bool(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName, _in ev_bool isVisible )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ptrNativeObject->setTextElementVisible(panelElementName1, textAreaName1, isVisible);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getTextElementVisible_ev_bool_EVString_EVString(void *pObjectXXXX, _in const char* panelElementName, _in const char* textAreaName )
			{
				EarthView::World::Core::ev_string panelElementName1 = panelElementName;
				EarthView::World::Core::ev_string textAreaName1 = textAreaName;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getTextElementVisible(panelElementName1, textAreaName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheon_getGlobeControl_CGlobeControl(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*) pObjectXXXX;
				EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->getGlobeControl();
				return objXXXX;
			}
		}
	}
}
