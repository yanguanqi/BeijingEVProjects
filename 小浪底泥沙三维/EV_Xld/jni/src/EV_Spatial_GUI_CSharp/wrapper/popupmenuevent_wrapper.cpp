/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatialgui/popupmenuevent.h"
namespace EarthView
{
	namespace World
	{
		namespace Spatial
		{
			namespace SystemUI
			{
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CPopUpMenuEvent_setDisplayPos_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64 x, _in ev_real64 y )
				{
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjectXXXX;
					ptrNativeObject->setDisplayPos(x, y);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CPopUpMenuEvent_addCommand_void_ICommand(void *pObjectXXXX, _in EarthView::World::Spatial::SystemUI::ICommand* ref_cmd )
				{
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjectXXXX;
					ptrNativeObject->addCommand(ref_cmd);
				}
				extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Spatial_SystemUI_CPopUpMenuEvent_getDisplayPos_void_ev_real64_ev_real64(void *pObjectXXXX, _in ev_real64* x, _in ev_real64* y )
				{
					EarthView::World::Spatial::SystemUI::CPopUpMenuEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjectXXXX;
					ptrNativeObject->getDisplayPos(x, y);
				}
				extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Spatial_SystemUI_CPopUpMenuEvent_getCommandCount_ev_uint32(void *pObjectXXXX )
				{
					const EarthView::World::Spatial::SystemUI::CPopUpMenuEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjectXXXX;
					ev_uint32 objXXXX = ptrNativeObject->getCommandCount();
					return objXXXX;
				}
				extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall EarthView_World_Spatial_SystemUI_CPopUpMenuEvent_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
				{
					const EarthView::World::Spatial::SystemUI::CPopUpMenuEvent* ptrNativeObject = (EarthView::World::Spatial::SystemUI::CPopUpMenuEvent*) pObjectXXXX;
					EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(index);
					return objXXXX;
				}
			}
		}
	}
}
