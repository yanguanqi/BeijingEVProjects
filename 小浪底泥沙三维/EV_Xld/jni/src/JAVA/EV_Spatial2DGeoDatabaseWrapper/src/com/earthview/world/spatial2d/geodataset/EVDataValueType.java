package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据类型枚举
 */
public enum EVDataValueType implements INativeEnum<EVDataValueType> {
	VT_FIELD(EVDataValueTypeHelper.ENUM_VALUES[0]),
	VT_CONSTANT(EVDataValueTypeHelper.ENUM_VALUES[1]),
	VT_FUNCTION(EVDataValueTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVDataValueType(int i) {
		this.value = i;
	}
	public EVDataValueType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataValueType toEnum(int retval) {
		if(retval == VT_FIELD.value){
			return VT_FIELD;
		}
		else if(retval == VT_CONSTANT.value){
			return VT_CONSTANT;
		}
		else if(retval == VT_FUNCTION.value){
			return VT_FUNCTION;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataValueTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
