package com.earthview.world.spatial.accessor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 访问者类型枚举
 */
public enum EVAccessorType implements INativeEnum<EVAccessorType> {
	AT_UNKNOWN(EVAccessorTypeHelper.ENUM_VALUES[0]),
	AT_FILE(EVAccessorTypeHelper.ENUM_VALUES[1]),
	AT_DATABASE(EVAccessorTypeHelper.ENUM_VALUES[2]),
	AT_WEB(EVAccessorTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVAccessorType(int i) {
		this.value = i;
	}
	public EVAccessorType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVAccessorType toEnum(int retval) {
		if(retval == AT_UNKNOWN.value){
			return AT_UNKNOWN;
		}
		else if(retval == AT_FILE.value){
			return AT_FILE;
		}
		else if(retval == AT_DATABASE.value){
			return AT_DATABASE;
		}
		else if(retval == AT_WEB.value){
			return AT_WEB;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVAccessorTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
