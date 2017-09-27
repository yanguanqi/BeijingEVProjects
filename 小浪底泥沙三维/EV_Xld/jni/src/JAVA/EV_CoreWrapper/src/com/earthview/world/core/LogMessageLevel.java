package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum LogMessageLevel implements INativeEnum<LogMessageLevel> {
	LML_TRIVIAL(LogMessageLevelHelper.ENUM_VALUES[0]),
	LML_NORMAL(LogMessageLevelHelper.ENUM_VALUES[1]),
	LML_CRITICAL(LogMessageLevelHelper.ENUM_VALUES[2]);
	private int value;
	LogMessageLevel(int i) {
		this.value = i;
	}
	public LogMessageLevel getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LogMessageLevel toEnum(int retval) {
		if(retval == LML_TRIVIAL.value){
			return LML_TRIVIAL;
		}
		else if(retval == LML_NORMAL.value){
			return LML_NORMAL;
		}
		else if(retval == LML_CRITICAL.value){
			return LML_CRITICAL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LogMessageLevelHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
