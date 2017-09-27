/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "spatial2dproxy/networkanalyst/natoolbar.h"
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall CNetworkAnalystToolBar_getCmdCount_ev_int32(void *pObjectXXXX )
{
	const CNetworkAnalystToolBar* ptrNativeObject = (CNetworkAnalystToolBar*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->getCmdCount();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  EarthView::World::Spatial::SystemUI::ICommand*  _stdcall CNetworkAnalystToolBar_getCommand_ICommand_ev_uint32(void *pObjectXXXX, _in ev_uint32 index )
{
	const CNetworkAnalystToolBar* ptrNativeObject = (CNetworkAnalystToolBar*) pObjectXXXX;
	EarthView::World::Spatial::SystemUI::ICommand* objXXXX = ptrNativeObject->getCommand(index);
	return objXXXX;
}
