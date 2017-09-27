package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 颜色空间类型
 */
public enum EVColorSpaceType implements INativeEnum<EVColorSpaceType> {
	CST_UNKNOWN(EVColorSpaceTypeHelper.ENUM_VALUES[0]),
	CST_RGB(EVColorSpaceTypeHelper.ENUM_VALUES[1]),
	CST_HSV(EVColorSpaceTypeHelper.ENUM_VALUES[2]),
	CST_CIELAB(EVColorSpaceTypeHelper.ENUM_VALUES[3]),
	CST_CMKY(EVColorSpaceTypeHelper.ENUM_VALUES[4]),
	CST_GRAY(EVColorSpaceTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVColorSpaceType(int i) {
		this.value = i;
	}
	public EVColorSpaceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVColorSpaceType toEnum(int retval) {
		if(retval == CST_UNKNOWN.value){
			return CST_UNKNOWN;
		}
		else if(retval == CST_RGB.value){
			return CST_RGB;
		}
		else if(retval == CST_HSV.value){
			return CST_HSV;
		}
		else if(retval == CST_CIELAB.value){
			return CST_CIELAB;
		}
		else if(retval == CST_CMKY.value){
			return CST_CMKY;
		}
		else if(retval == CST_GRAY.value){
			return CST_GRAY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVColorSpaceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
