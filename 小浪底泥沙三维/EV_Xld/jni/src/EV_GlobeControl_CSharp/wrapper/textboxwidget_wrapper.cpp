/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "globecontrol/textboxwidget.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
		}
		namespace Spatial3D
		{
			namespace Controls
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEvent_setVisableMode_void_VisibleMode(void *pObjectXXXX, _in int visableMode )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*) pObjectXXXX;
					ptrNativeObject->setVisableMode((EarthView::World::Spatial3D::Controls::VisibleMode)visableMode);
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEvent_getVisableMode_VisibleMode(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::VisibleMode objXXXX = ptrNativeObject->getVisableMode();
					return (int)objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent*  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEventPtr_get_CLatitudeLonitudeTextBoxVisibleEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEventPtr_OperatorAssign_CLatitudeLonitudeTextBoxVisibleEventPtr_CLatitudeLonitudeTextBoxVisibleEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEventPtr_OperatorAssign_CLatitudeLonitudeTextBoxVisibleEventPtr_CLatitudeLonitudeTextBoxVisibleEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBoxVisibleEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBoxVisibleEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CTextBoxEvent*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxEventPtr_get_CTextBoxEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxEventPtr_OperatorAssign_CTextBoxEventPtr_CTextBoxEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxEventPtr_OperatorAssign_CTextBoxEventPtr_CTextBoxEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CTextBoxEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEvent_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*) pObjectXXXX;
					ptrNativeObject->setEnabled(enabled);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEvent_getEnabled_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getEnabled();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent*  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEventPtr_get_CEnableTextBoxEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEventPtr_OperatorAssign_CEnableTextBoxEventPtr_CEnableTextBoxEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEventPtr_OperatorAssign_CEnableTextBoxEventPtr_CEnableTextBoxEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CEnableTextBoxEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CEnableTextBoxEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CEnableTextBoxEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEvent_setPosition_void_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(void *pObjectXXXX, _in Real x, _in Real y, _in Real width, _in Real height, _in Real textOffsetX, _in Real textOffsetY, _in int gha, _in int gva )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*) pObjectXXXX;
					ptrNativeObject->setPosition(x, y, width, height, textOffsetX, textOffsetY, (EarthView::World::Graphic::GuiHorizontalAlignment)gha, (EarthView::World::Graphic::GuiVerticalAlignment)gva);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEvent_getPosition_void_Real_Real_Real_Real_Real_Real_GuiHorizontalAlignment_GuiVerticalAlignment(void *pObjectXXXX, _inout Real& x, _inout Real& y, _inout Real& width, _inout Real& height, _inout Real& textOffsetX, _inout Real& textOffsetY, _inout int& gha, _inout int& gva )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*) pObjectXXXX;
					ptrNativeObject->getPosition(x, y, width, height, textOffsetX, textOffsetY, (EarthView::World::Graphic::GuiHorizontalAlignment&)gha, (EarthView::World::Graphic::GuiVerticalAlignment&)gva);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEventPtr_get_CTextBoxSetPositionEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEventPtr_OperatorAssign_CTextBoxSetPositionEventPtr_CTextBoxSetPositionEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEventPtr_OperatorAssign_CTextBoxSetPositionEventPtr_CTextBoxSetPositionEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetPositionEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CTextBoxSetPositionEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_setText_void_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ptrNativeObject->setText(text1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getText_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getText();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getTextSeted_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getTextSeted();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_setFontName_void_EVString(void *pObjectXXXX, _in const char* fontName )
				{
					EarthView::World::Core::ev_string fontName1 = fontName;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ptrNativeObject->setFontName(fontName1);
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getFontName_EVString(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->getFontName();
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getFontSeted_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getFontSeted();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_setFontColor_void_CColourValue(void *pObjectXXXX, _in const void* color )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ptrNativeObject->setFontColor(*(EarthView::World::Graphic::CColourValue*)color);
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getFontColor_CColourValue(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					EarthView::World::Graphic::CColourValue objXXXX = ptrNativeObject->getFontColor();
					EarthView::World::Graphic::CColourValue *pXXXX = new EarthView::World::Graphic::CColourValue(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEvent_getFontColorHasSeted_ev_bool(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->getFontColorHasSeted();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEventPtr_get_CTextBoxSetTextEvent(void *pObjectXXXX )
				{
					const EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* objXXXX = ptrNativeObject->get();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEventPtr_OperatorAssign_CTextBoxSetTextEventPtr_CTextBoxSetTextEventPtr(void *pObjXXXX, _in const void* r )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*)r;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEventPtr_OperatorAssign_CTextBoxSetTextEventPtr_CTextBoxSetTextEvent(void *pObjXXXX, _in EarthView::World::Spatial3D::Controls::CTextBoxSetTextEvent* rep )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX);
					objXXXX = rep;
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr *pXXXX = &objXXXX;
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEventPtr_toCGUIEventPtr_CGUIEventPtr(void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = ptrNativeObject->toCGUIEventPtr();
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxSetTextEventPtr_OperatorConvertionCGUIEventPtr_CGUIEventPtr(void *pObjXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr& objYYYY = *(EarthView::World::Spatial3D::Controls::CTextBoxSetTextEventPtr*) pObjXXXX;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr objXXXX = objYYYY ;
					EarthView::World::Spatial::SystemUI::CGUIEventPtr *pXXXX = new EarthView::World::Spatial::SystemUI::CGUIEventPtr(objXXXX);
					((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
					return (void*)pXXXX;
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport);
				class CTextBoxWidgetProxy : public EarthView::World::Spatial3D::Controls::CTextBoxWidget
				{
				private:
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback;
				public:
					CTextBoxWidgetProxy(EarthView::World::Core::CNameValuePairList *pList) : CTextBoxWidget(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void(EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = pCallback;
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback(event, viewport);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleFrameEvent(event, viewport);
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleUserEvent(event);
					}
					virtual void additionMouseUp()
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback();
						}
						else
							return this->CTextBoxWidget::additionMouseUp();
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleMouseUpEvent(event);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleMouseMoveEvent(event);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleMouseDownEvent(event);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handeMouseDbClickEvent(event);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleKeyDownEvent(event);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CTextBoxWidget::handleKeyUpEvent(event);
					}
				};
				REGISTER_FACTORY_CLASS(CTextBoxWidgetProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_setText_void_EVString(void *pObjectXXXX, _in const char* text )
				{
					EarthView::World::Core::ev_string text1 = text;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					ptrNativeObject->setText(text1);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_setPanelMatrial_void_EVString_ev_real32_ev_real32_ev_real32_ev_real32(void *pObjectXXXX, _in const char* matrialName, _in ev_real32 u1, _in ev_real32 v1, _in ev_real32 u2, _in ev_real32 v2 )
				{
					EarthView::World::Core::ev_string matrialName1 = matrialName;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					ptrNativeObject->setPanelMatrial(matrialName1, u1, v1, u2, v2);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_setPanelMatrial_void_EVString_ev_real32_ev_real32_ev_real32_ev_real32_ev_bool(void *pObjectXXXX, _in const char* matrialName, _in ev_real32 u1, _in ev_real32 v1, _in ev_real32 u2, _in ev_real32 v2, _in ev_bool transparent )
				{
					EarthView::World::Core::ev_string matrialName1 = matrialName;
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					ptrNativeObject->setPanelMatrial(matrialName1, u1, v1, u2, v2, transparent);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					if (dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleFrameEvent(event, viewport);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(event, viewport);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleFrameEvent(event, viewport);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					if (dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleUserEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CTextBoxWidget::handleUserEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CTextBoxWidget_OperatorAssign_void_CTextBoxWidget(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget& objXXXX = *((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTextBoxWidget*)rhs;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mtext( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mtext;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mtext( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjectXXXX)->mtext = value1;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CTextAreaOverlayElement*  _stdcall Get_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mTextArea( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					EarthView::World::Graphic::CTextAreaOverlayElement* objXXXX = ptrNativeObject->mTextArea;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mTextArea( void *pObjectXXXX, EarthView::World::Graphic::CTextAreaOverlayElement*  value )
				{
					((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjectXXXX)->mTextArea = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CPanelOverlayElement*  _stdcall Get_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mPanel( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					EarthView::World::Graphic::CPanelOverlayElement* objXXXX = ptrNativeObject->mPanel;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mPanel( void *pObjectXXXX, EarthView::World::Graphic::CPanelOverlayElement*  value )
				{
					((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjectXXXX)->mPanel = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mcharHeight( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CTextBoxWidget* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX;
					int objXXXX = ptrNativeObject->mcharHeight;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CTextBoxWidget_mcharHeight( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Controls::CTextBoxWidget*)pObjectXXXX)->mcharHeight = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_additionMouseUp_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CTextBoxWidgetProxy* ptr = dynamic_cast<CTextBoxWidgetProxy*>((EarthView::World::Spatial3D::Controls::CTextBoxWidget*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CTextBoxWidget_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				typedef void  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback)();
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event);
				typedef ev_bool  ( _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback)(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport);
				class CLatitudeLonitudeTextBoxProxy : public EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox
				{
				private:
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback;
					EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback;
				public:
					CLatitudeLonitudeTextBoxProxy(EarthView::World::Core::CNameValuePairList *pList) : CLatitudeLonitudeTextBox(pList)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback = NULL;
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = NULL;
					}
				public:
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback = pCallback;
					}
					ev_void registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport(EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback)
					{
						m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback = pCallback;
					}
					virtual ev_bool handleUserEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleUserEvent(event);
					}
					virtual ev_bool handleFrameEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback(event, viewport);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
					}
					virtual void additionMouseUp()
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback != NULL && this->isCustomExtend())
						{
							m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback();
						}
						else
							return this->CLatitudeLonitudeTextBox::additionMouseUp();
					}
					virtual ev_bool handleMouseUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleMouseUpEvent(event);
					}
					virtual ev_bool handleMouseMoveEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleMouseMoveEvent(event);
					}
					virtual ev_bool handleMouseDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleMouseDownEvent(event);
					}
					virtual ev_bool handeMouseDbClickEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handeMouseDbClickEvent(event);
					}
					virtual ev_bool handleKeyDownEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleKeyDownEvent(event);
					}
					virtual ev_bool handleKeyUpEvent(_in EarthView::World::Spatial::SystemUI::CGUIEvent* event)
					{
						if(m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback != NULL && this->isCustomExtend())
						{
							ev_bool returnValue = m_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback(event);
							return returnValue;
						}
						else
							return this->CLatitudeLonitudeTextBox::handleKeyUpEvent(event);
					}
				};
				REGISTER_FACTORY_CLASS(CLatitudeLonitudeTextBoxProxy);
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_addGlobeControlListener_void_CGlobeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControlListener* ref_listener )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ptrNativeObject->addGlobeControlListener(ref_listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_removeGlobeControlListener_void_CGlobeControlListener(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControlListener* listener )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ptrNativeObject->removeGlobeControlListener(listener);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_setShowLayerInfo_void_ev_bool(void *pObjectXXXX, _in ev_bool show )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ptrNativeObject->setShowLayerInfo(show);
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					if (dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleUserEvent(event);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleUserEvent(event);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleUserEvent_ev_bool_CGUIEvent_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleUserEvent(event);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					if (dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)ptrNativeObject) != NULL)
					{
						ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
						return objXXXX;
					}
					else
					{
						ev_bool objXXXX = ptrNativeObject->handleFrameEvent(event, viewport);
						return objXXXX;
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleFrameEvent_ev_bool_CGUIEvent_CViewport_NoVirtual(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::CGUIEvent* event, _in EarthView::World::Graphic::CViewport* viewport )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox::handleFrameEvent(event, viewport);
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_OperatorAssign_void_CTextBoxWidget(void *pObjXXXX, _in const void* rhs )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox& objXXXX = *((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjXXXX);
					objXXXX = *(EarthView::World::Spatial3D::Controls::CTextBoxWidget*)rhs;
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_setGlobelControl_void_CGlobeControl(void *pObjectXXXX, _in EarthView::World::Spatial3D::Controls::CGlobeControl* globeContorl )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ptrNativeObject->setGlobelControl(globeContorl);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_setMousetPickInterval_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 intervalTime )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ptrNativeObject->setMousetPickInterval(intervalTime);
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::CGlobeCamera*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mGlobeCamera( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					EarthView::World::Spatial3D::CGlobeCamera* objXXXX = ptrNativeObject->mGlobeCamera;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mGlobeCamera( void *pObjectXXXX, EarthView::World::Spatial3D::CGlobeCamera*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mGlobeCamera = value;
				}
				extern "C" EV_DLL_EXPORT  int  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mlastWidth( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					int objXXXX = ptrNativeObject->mlastWidth;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mlastWidth( void *pObjectXXXX, int  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mlastWidth = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mtextInformation( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					char* objXXXX = ptrNativeObject->mtextInformation;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mtextInformation( void *pObjectXXXX, char*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mtextInformation = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mCurrentEventX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mCurrentEventX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mCurrentEventX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mCurrentEventX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mCurrentEventY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mCurrentEventY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mCurrentEventY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mCurrentEventY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mPreEventX( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mPreEventX;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mPreEventX( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mPreEventX = value;
				}
				extern "C" EV_DLL_EXPORT  ev_int32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mPreEventY( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_int32 objXXXX = ptrNativeObject->mPreEventY;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mPreEventY( void *pObjectXXXX, ev_int32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mPreEventY = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mStartTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mStartTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mStartTime( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mStartTime = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mStopTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mStopTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mStopTime( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mStopTime = value;
				}
				extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mIsStartTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_bool objXXXX = ptrNativeObject->mIsStartTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mIsStartTime( void *pObjectXXXX, ev_bool  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mIsStartTime = value;
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mIntervalTime( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->mIntervalTime;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mIntervalTime( void *pObjectXXXX, ev_uint32  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mIntervalTime = value;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial3D::Controls::CGlobeControl*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mpGlobelControl( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					EarthView::World::Spatial3D::Controls::CGlobeControl* objXXXX = ptrNativeObject->mpGlobelControl;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mpGlobelControl( void *pObjectXXXX, EarthView::World::Spatial3D::Controls::CGlobeControl*  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mpGlobelControl = value;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseLatitudeString( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mouseLatitudeString;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseLatitudeString( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mouseLatitudeString = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseLongitudeString( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mouseLongitudeString;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseLongitudeString( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mouseLongitudeString = value1;
				}
				extern "C" EV_DLL_EXPORT  char*  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseAltitudeString( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					EVString objXXXX = ptrNativeObject->mouseAltitudeString;
					return objXXXX.makeBuffer();
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mouseAltitudeString( void *pObjectXXXX, char*  value )
				{
					EarthView::World::Core::ev_string value1 = value;
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mouseAltitudeString = value1;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mLat( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLat;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mLat( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mLat = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mLon( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mLon;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mLon( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mLon = value;
				}
				extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Get_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mAltitude( void *pObjectXXXX )
				{
					EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox* ptrNativeObject = (EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX;
					ev_real64 objXXXX = ptrNativeObject->mAltitude;
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  void _stdcall Set_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_mAltitude( void *pObjectXXXX, ev_real64  value )
				{
					((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*)pObjectXXXX)->mAltitude = value;
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_additionMouseUp_void(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseMoveEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleMouseDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handeMouseDbClickEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyDownEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
				extern "C" EV_DLL_EXPORT  ev_void _stdcall  EV_RegisterCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent( void *pObjectXXXX, EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent_Callback* pCallback )
				{
					CLatitudeLonitudeTextBoxProxy* ptr = dynamic_cast<CLatitudeLonitudeTextBoxProxy*>((EarthView::World::Spatial3D::Controls::CLatitudeLonitudeTextBox*) pObjectXXXX);
					if(ptr != NULL)
					{
						ptr->registerCallback_EarthView_World_Spatial3D_Controls_CLatitudeLonitudeTextBox_handleKeyUpEvent_ev_bool_CGUIEvent(pCallback);
					}
				}
			}
		}
	}
}
