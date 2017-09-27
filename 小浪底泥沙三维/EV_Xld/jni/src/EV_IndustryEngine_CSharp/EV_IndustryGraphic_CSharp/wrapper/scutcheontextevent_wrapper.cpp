/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "industryengine/industrygraphic/scutcheontextevent.h"
namespace EarthView
{
	namespace IndustryEngine
	{
		namespace IndustryGraphic
		{
			extern "C" EV_DLL_EXPORT  EarthView::IndustryEngine::IndustryGraphic::CScutcheonText*  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_getSelectedScutcheon_CScutcheonText(void *pObjectXXXX )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) pObjectXXXX;
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* objXXXX = ptrNativeObject->getSelectedScutcheon();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_IndustryEngine_IndustryGraphic_CScutcheonTextEvent_setSelectedScutcheon_void_CScutcheonText(void *pObjectXXXX, _in EarthView::IndustryEngine::IndustryGraphic::CScutcheonText* scutcheon )
			{
				EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent* ptrNativeObject = (EarthView::IndustryEngine::IndustryGraphic::CScutcheonTextEvent*) pObjectXXXX;
				ptrNativeObject->setSelectedScutcheon(scutcheon);
			}
		}
	}
}
