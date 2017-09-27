/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "stableheaders.h"
#include "graphic/profiler.h"
namespace EarthView
{
	namespace World
	{
		namespace Graphic
		{
			extern "C" EV_DLL_EXPORT  void*  _stdcall EarthView_World_Graphic_CProfiler_getSingleton_CProfiler( )
			{
				EarthView::World::Graphic::CProfiler& objXXXX = EarthView::World::Graphic::CProfiler::getSingleton();
				EarthView::World::Graphic::CProfiler *pXXXX = &objXXXX;
				return (void*)pXXXX;
			}
			extern "C" EV_DLL_EXPORT  EarthView::World::Graphic::CProfiler*  _stdcall EarthView_World_Graphic_CProfiler_getSingletonPtr_CProfiler( )
			{
				EarthView::World::Graphic::CProfiler* objXXXX = EarthView::World::Graphic::CProfiler::getSingletonPtr();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_beginProfile_void_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->beginProfile(profileName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_beginProfile_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* profileName, _in ev_uint32 groupID )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->beginProfile(profileName1, groupID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_endProfile_void_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->endProfile(profileName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_endProfile_void_EVString_ev_uint32(void *pObjectXXXX, _in const char* profileName, _in ev_uint32 groupID )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->endProfile(profileName1, groupID);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setEnabled_void_ev_bool(void *pObjectXXXX, _in ev_bool enabled )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setEnabled(enabled);
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProfiler_getEnabled_ev_bool(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->getEnabled();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_enableProfile_void_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->enableProfile(profileName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_disableProfile_void_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->disableProfile(profileName1);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setProfileGroupMask_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 mask )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setProfileGroupMask(mask);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CProfiler_getProfileGroupMask_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getProfileGroupMask();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProfiler_watchForMax_ev_bool_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->watchForMax(profileName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProfiler_watchForMin_ev_bool_EVString(void *pObjectXXXX, _in const char* profileName )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->watchForMin(profileName1);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProfiler_watchForLimit_ev_bool_EVString_Real(void *pObjectXXXX, _in const char* profileName, _in Real limit )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->watchForLimit(profileName1, limit);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  ev_bool  _stdcall EarthView_World_Graphic_CProfiler_watchForLimit_ev_bool_EVString_Real_ev_bool(void *pObjectXXXX, _in const char* profileName, _in Real limit, _in ev_bool greaterThan )
			{
				EarthView::World::Core::ev_string profileName1 = profileName;
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_bool objXXXX = ptrNativeObject->watchForLimit(profileName1, limit, greaterThan);
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_logResults_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->logResults();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_reset_void(void *pObjectXXXX )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->reset();
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setDisplayMode_void_DisplayMode(void *pObjectXXXX, _in int d )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setDisplayMode((EarthView::World::Graphic::CProfiler::DisplayMode)d);
			}
			extern "C" EV_DLL_EXPORT  int  _stdcall EarthView_World_Graphic_CProfiler_getDisplayMode_DisplayMode(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				EarthView::World::Graphic::CProfiler::DisplayMode objXXXX = ptrNativeObject->getDisplayMode();
				return (int)objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setUpdateDisplayFrequency_void_ev_uint32(void *pObjectXXXX, _in ev_uint32 freq )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setUpdateDisplayFrequency(freq);
			}
			extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall EarthView_World_Graphic_CProfiler_getUpdateDisplayFrequency_ev_uint32(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ev_uint32 objXXXX = ptrNativeObject->getUpdateDisplayFrequency();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setOverlayDimensions_void_Real_Real(void *pObjectXXXX, _in Real width, _in Real height )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setOverlayDimensions(width, height);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_Graphic_CProfiler_setOverlayPosition_void_Real_Real(void *pObjectXXXX, _in Real left, _in Real top )
			{
				EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				ptrNativeObject->setOverlayPosition(left, top);
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CProfiler_getOverlayWidth_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOverlayWidth();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CProfiler_getOverlayHeight_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOverlayHeight();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CProfiler_getOverlayLeft_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOverlayLeft();
				return objXXXX;
			}
			extern "C" EV_DLL_EXPORT  Real  _stdcall EarthView_World_Graphic_CProfiler_getOverlayTop_Real(void *pObjectXXXX )
			{
				const EarthView::World::Graphic::CProfiler* ptrNativeObject = (EarthView::World::Graphic::CProfiler*) pObjectXXXX;
				Real objXXXX = ptrNativeObject->getOverlayTop();
				return objXXXX;
			}
		}
	}
}
