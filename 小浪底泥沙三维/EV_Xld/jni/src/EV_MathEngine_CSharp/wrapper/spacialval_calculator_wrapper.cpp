/* This file is produced by the P/Invoke AutoWrapper Utility 
 Copyright (c) 2012 by EarthView Image Inc */
#include "mathengine/mathengine_headers.h"
#include "mathengine/spacialval_calculator.h"
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Globel_closest2ExpN_ev_uint32_ev_uint32(_in ev_uint32 val)
{
	ev_uint32 objXXXX = closest2ExpN(val);
	return objXXXX;
}
extern "C" EV_DLL_EXPORT  ev_uint32  _stdcall Globel_closestHOrL2ExpN_ev_uint32_ev_uint32_ev_bool(_in ev_uint32 val, _in ev_bool isLarger)
{
	ev_uint32 objXXXX = closestHOrL2ExpN(val, isLarger);
	return objXXXX;
}
