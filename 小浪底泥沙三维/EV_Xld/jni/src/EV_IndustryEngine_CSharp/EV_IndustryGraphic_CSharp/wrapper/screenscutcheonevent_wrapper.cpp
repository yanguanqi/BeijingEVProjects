/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/screenscutcheonevent.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getSelectedScreenScutcheon_CScreenScutcheon(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* objXXXX = ptrNativeObject->getSelectedScreenScutcheon();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_setSelectedScreenScutcheon_void_CScreenScutcheon(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheon* scutcheon )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjectXXXX;
				ptrNativeObject->setSelectedScreenScutcheon(scutcheon);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getX_int(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getX();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScreenScutcheonEvent_getY_int(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScreenScutcheonEvent*) pObjectXXXX;
				int objXXXX = ptrNativeObject->getY();
				return objXXXX;
			}
		}
	}
}
