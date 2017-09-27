/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "vectorfileparser/cadfunction.h"
extern "C" EV_DLL_EXPORT  const ev_uint8*  _stdcall Globel_ACGetColorTable_ev_uint8()
{
	const ev_uint8* objXXXX = ACGetColorTable();
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  const char*  _stdcall Globel_ACTextUnescape_EVString_ev_char(_in const ev_char* pszRawInput)
{
	const EVString objXXXX = ACTextUnescape(pszRawInput);
	return objXXXX.makeBuffer();
}
