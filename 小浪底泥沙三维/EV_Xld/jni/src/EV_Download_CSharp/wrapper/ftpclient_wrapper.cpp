/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "download/ftpclient.h"
extern "C" EV_DLL_EXPORT  char*  _stdcall FTPClient_pwd_EVString(void *pObjectXXXX )
{
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	EVString objXXXX = ptrNativeObject->pwd();
	return objXXXX.makeBuffer();
}
extern "C" EV_DLL_EXPORT  void*  _stdcall FTPClient_dir_CStringArray(void *pObjectXXXX )
{
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	EarthView::World::Core::CStringArray objXXXX = ptrNativeObject->dir();
	EarthView::World::Core::CStringArray *pXXXX = new EarthView::World::Core::CStringArray(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall FTPClient_cd_ev_bool_EVString(void *pObjectXXXX, _in const char* param )
{
	EarthView::World::Core::ev_string param1 = param;
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->cd(param1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  void*  _stdcall FTPClient_get_MemoryDataStreamPtr_EVString_ev_int32(void *pObjectXXXX, _in const char* filename, _in ev_int32 fileformat )
{
	EarthView::World::Core::ev_string filename1 = filename;
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	EarthView::World::Core::MemoryDataStreamPtr objXXXX = ptrNativeObject->get(filename1, fileformat);
	EarthView::World::Core::MemoryDataStreamPtr *pXXXX = new EarthView::World::Core::MemoryDataStreamPtr(objXXXX);
	((EarthView::World::Core::CBaseObject*)pXXXX)->setExternFree(true);
	return (void*)pXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall FTPClient_put_ev_int32_MemoryDataStreamPtr_EVString_ev_int32(void *pObjectXXXX, _in void* data, _in const char* filename, _in ev_int32 fileformat )
{
	EarthView::World::Core::ev_string filename1 = filename;
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->put(*(EarthView::World::Core::MemoryDataStreamPtr*)data, filename1, fileformat);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_bool  _stdcall FTPClient_remove_ev_bool_EVString(void *pObjectXXXX, _in const char* filename )
{
	EarthView::World::Core::ev_string filename1 = filename;
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	ev_bool objXXXX = ptrNativeObject->remove(filename1);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_int32  _stdcall FTPClient_errorCode_ev_int32(void *pObjectXXXX )
{
	FTPClient* ptrNativeObject = (FTPClient*) pObjectXXXX;
	ev_int32 objXXXX = ptrNativeObject->errorCode();
	return objXXXX;
}
