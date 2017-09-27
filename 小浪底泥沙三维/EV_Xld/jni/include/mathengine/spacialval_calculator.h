#ifndef __SPACIALVAL_CALCULATOR_H__
#define __SPACIALVAL_CALCULATOR_H__

#include <core/platform.h>
#include "mathengine_config.h"



/// 得到与val最接近的 2的n次方的值
inline ev_uint32 closest2ExpN(ev_uint32 val)
{
	ev_uint32 val2ExpN = 1;
	while(val2ExpN < 0xffffffff)
	{
		val2ExpN <<= 1;
		if(val < val2ExpN)
		{	
			ev_uint32 lowerVal = val2ExpN >> 1;
			if((val2ExpN - val) > (val - lowerVal))
				return lowerVal;
			else
				return val2ExpN;
		}
	}
	return 0x80000000;
}

/// 得到与val最接近的大于或小于 2的n次方的值
inline ev_uint32 closestHOrL2ExpN(ev_uint32 val,ev_bool isLarger = true)
{
	ev_uint32 val2ExpN = 1;
	while(val2ExpN < 0xffffffff)
	{
		val2ExpN <<= 1;
		if(val < val2ExpN)
			if(isLarger)
				return val2ExpN;
			else
				return val2ExpN >> 1;
	}
	return 0x80000000;
}

#endif
