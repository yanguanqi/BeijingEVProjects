/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "videorecordingproxy/videorecordingproxy.h"
namespace EarthView
{
	namespace World
	{
		namespace UtilityTools
		{
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_UtilityTools_VideoRecording_startRecordAsync_void_EVString_Rect_ev_int32_ev_bool(void *pObjectXXXX, _in const char* filePath, _in const void* rectRegion, _in ev_int32 framerate, _in ev_bool bHighQuality )
			{
				EarthView::World::Core::ev_string filePath1 = filePath;
				EarthView::World::UtilityTools::VideoRecording* ptrNativeObject = (EarthView::World::UtilityTools::VideoRecording*) pObjectXXXX;
				ptrNativeObject->startRecordAsync(filePath1, *(EarthView::World::Graphic::Rect*)rectRegion, framerate, bHighQuality);
			}
			extern "C" EV_DLL_EXPORT  void  _stdcall EarthView_World_UtilityTools_VideoRecording_stopRecord_void(void *pObjectXXXX )
			{
				EarthView::World::UtilityTools::VideoRecording* ptrNativeObject = (EarthView::World::UtilityTools::VideoRecording*) pObjectXXXX;
				ptrNativeObject->stopRecord();
			}
		}
	}
}
