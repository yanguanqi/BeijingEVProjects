/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "videorecordingproxy/videoplayer.h"
namespace Video
{
	extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Video_VideoPlayer_hasAudioStream_ev_bool(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_bool objXXXX = ptrNativeObject->hasAudioStream();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_playVideo_void_EVString_ev_bool(void *pObjectXXXX, _in const char* resourceName, _in ev_bool bPlayLoop )
	{
		EarthView::World::Core::ev_string resourceName1 = resourceName;
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->playVideo(resourceName1, bPlayLoop);
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_playVideo_void_EVString_CTexturePtr_ev_bool(void *pObjectXXXX, _in const char* resourceName, _inout void* texturePtr, _in ev_bool bPlayLoop )
	{
		EarthView::World::Core::ev_string resourceName1 = resourceName;
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->playVideo(resourceName1, *(EarthView::World::Graphic::CTexturePtr*)texturePtr, bPlayLoop);
	}
	extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Video_VideoPlayer_getCurrentTime_ev_real64(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_real64 objXXXX = ptrNativeObject->getCurrentTime();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  ev_real64  _stdcall Video_VideoPlayer_getDuration_ev_real64(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_real64 objXXXX = ptrNativeObject->getDuration();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_seek_void_ev_real64(void *pObjectXXXX, _in ev_real64 time )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->seek(time);
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_play_void(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->play();
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_pause_void(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->pause();
	}
	extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Video_VideoPlayer_isPaused_ev_bool(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_bool objXXXX = ptrNativeObject->isPaused();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  ev_bool  _stdcall Video_VideoPlayer_update_ev_bool(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_bool objXXXX = ptrNativeObject->update();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  void  _stdcall Video_VideoPlayer_close_void(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ptrNativeObject->close();
	}
	extern "C" EV_DLL_EXPORT  char*  _stdcall Video_VideoPlayer_getTextureName_EVString(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		EVString objXXXX = ptrNativeObject->getTextureName();
		return objXXXX.makeBuffer();
	}
	extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Video_VideoPlayer_getVideoWidth_ev_uint32(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_uint32 objXXXX = ptrNativeObject->getVideoWidth();
		return objXXXX;
	}
	extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Video_VideoPlayer_getVideoHeight_ev_uint32(void *pObjectXXXX )
	{
		Video::VideoPlayer* ptrNativeObject = (Video::VideoPlayer*) pObjectXXXX;
		ev_uint32 objXXXX = ptrNativeObject->getVideoHeight();
		return objXXXX;
	}
}
