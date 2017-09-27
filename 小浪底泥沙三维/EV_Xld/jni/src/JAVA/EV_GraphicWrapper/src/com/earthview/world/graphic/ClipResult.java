package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 按照给定的参数名，从命令行中解析参数值
 */
public enum ClipResult implements INativeEnum<ClipResult> {
	CLIPPED_NONE(ClipResultHelper.ENUM_VALUES[0]),
	CLIPPED_SOME(ClipResultHelper.ENUM_VALUES[1]),
	CLIPPED_ALL(ClipResultHelper.ENUM_VALUES[2]);
	private int value;
	ClipResult(int i) {
		this.value = i;
	}
	public ClipResult getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ClipResult toEnum(int retval) {
		if(retval == CLIPPED_NONE.value){
			return CLIPPED_NONE;
		}
		else if(retval == CLIPPED_SOME.value){
			return CLIPPED_SOME;
		}
		else if(retval == CLIPPED_ALL.value){
			return CLIPPED_ALL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ClipResultHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
