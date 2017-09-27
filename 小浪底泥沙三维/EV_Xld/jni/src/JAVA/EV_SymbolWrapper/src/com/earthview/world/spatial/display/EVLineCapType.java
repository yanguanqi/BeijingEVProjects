package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 端点样式
 */
public enum EVLineCapType implements INativeEnum<EVLineCapType> {
	LCT_LINECAPTYPE_FLAT(EVLineCapTypeHelper.ENUM_VALUES[0]),
	LCT_LINECAPTYPE_SQUARE(EVLineCapTypeHelper.ENUM_VALUES[1]),
	LCT_LINECAPTYPE_ROUND(EVLineCapTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVLineCapType(int i) {
		this.value = i;
	}
	public EVLineCapType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLineCapType toEnum(int retval) {
		if(retval == LCT_LINECAPTYPE_FLAT.value){
			return LCT_LINECAPTYPE_FLAT;
		}
		else if(retval == LCT_LINECAPTYPE_SQUARE.value){
			return LCT_LINECAPTYPE_SQUARE;
		}
		else if(retval == LCT_LINECAPTYPE_ROUND.value){
			return LCT_LINECAPTYPE_ROUND;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLineCapTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
