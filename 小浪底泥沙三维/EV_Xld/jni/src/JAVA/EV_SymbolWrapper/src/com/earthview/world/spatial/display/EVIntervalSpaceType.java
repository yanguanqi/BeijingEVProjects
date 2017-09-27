package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 间隔处理方式
 */
public enum EVIntervalSpaceType implements INativeEnum<EVIntervalSpaceType> {
	IST_IntervalSpaceType_Radio(EVIntervalSpaceTypeHelper.ENUM_VALUES[0]),
	IST_IntervalSpaceTypeDash_Space(EVIntervalSpaceTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVIntervalSpaceType(int i) {
		this.value = i;
	}
	public EVIntervalSpaceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVIntervalSpaceType toEnum(int retval) {
		if(retval == IST_IntervalSpaceType_Radio.value){
			return IST_IntervalSpaceType_Radio;
		}
		else if(retval == IST_IntervalSpaceTypeDash_Space.value){
			return IST_IntervalSpaceTypeDash_Space;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVIntervalSpaceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
