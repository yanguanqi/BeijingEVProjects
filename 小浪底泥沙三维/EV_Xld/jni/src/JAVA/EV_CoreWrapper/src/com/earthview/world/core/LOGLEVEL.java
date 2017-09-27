package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：日志级别
///创建时间：2012.2.13
///作者：邹先涛
public enum LOGLEVEL implements INativeEnum<LOGLEVEL> {
	FATAL_LEVEL(LOGLEVELHelper.ENUM_VALUES[0]),
	ERROR_LEVEL(LOGLEVELHelper.ENUM_VALUES[1]),
	WARN_LEVEL(LOGLEVELHelper.ENUM_VALUES[2]),
	INFO_LEVEL(LOGLEVELHelper.ENUM_VALUES[3]),
	DEBUG_LEVEL(LOGLEVELHelper.ENUM_VALUES[4]),
	TRACE_LEVEL(LOGLEVELHelper.ENUM_VALUES[5]),
	OFF_LEVEL(LOGLEVELHelper.ENUM_VALUES[6]);
	private int value;
	LOGLEVEL(int i) {
		this.value = i;
	}
	public LOGLEVEL getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LOGLEVEL toEnum(int retval) {
		if(retval == FATAL_LEVEL.value){
			return FATAL_LEVEL;
		}
		else if(retval == ERROR_LEVEL.value){
			return ERROR_LEVEL;
		}
		else if(retval == WARN_LEVEL.value){
			return WARN_LEVEL;
		}
		else if(retval == INFO_LEVEL.value){
			return INFO_LEVEL;
		}
		else if(retval == DEBUG_LEVEL.value){
			return DEBUG_LEVEL;
		}
		else if(retval == TRACE_LEVEL.value){
			return TRACE_LEVEL;
		}
		else if(retval == OFF_LEVEL.value){
			return OFF_LEVEL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LOGLEVELHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
