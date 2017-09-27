package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum LoggingLevel implements INativeEnum<LoggingLevel> {
	LL_LOW(LoggingLevelHelper.ENUM_VALUES[0]),
	LL_NORMAL(LoggingLevelHelper.ENUM_VALUES[1]),
	LL_BOREME(LoggingLevelHelper.ENUM_VALUES[2]);
	private int value;
	LoggingLevel(int i) {
		this.value = i;
	}
	public LoggingLevel getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LoggingLevel toEnum(int retval) {
		if(retval == LL_LOW.value){
			return LL_LOW;
		}
		else if(retval == LL_NORMAL.value){
			return LL_NORMAL;
		}
		else if(retval == LL_BOREME.value){
			return LL_BOREME;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LoggingLevelHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
