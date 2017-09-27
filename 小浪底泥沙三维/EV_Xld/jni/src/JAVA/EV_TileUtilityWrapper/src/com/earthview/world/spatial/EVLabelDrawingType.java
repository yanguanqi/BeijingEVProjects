package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 注记停靠类型
 */
public enum EVLabelDrawingType implements INativeEnum<EVLabelDrawingType> {
	LDT_UNKNOWN(EVLabelDrawingTypeHelper.ENUM_VALUES[0]),
	LDT_ALONGLINE(EVLabelDrawingTypeHelper.ENUM_VALUES[1]),
	LDT_WIHTIN(EVLabelDrawingTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVLabelDrawingType(int i) {
		this.value = i;
	}
	public EVLabelDrawingType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLabelDrawingType toEnum(int retval) {
		if(retval == LDT_UNKNOWN.value){
			return LDT_UNKNOWN;
		}
		else if(retval == LDT_ALONGLINE.value){
			return LDT_ALONGLINE;
		}
		else if(retval == LDT_WIHTIN.value){
			return LDT_WIHTIN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLabelDrawingTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
