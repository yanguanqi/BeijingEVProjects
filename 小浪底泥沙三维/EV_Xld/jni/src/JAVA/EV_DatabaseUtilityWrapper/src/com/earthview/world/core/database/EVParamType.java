package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 参数传输类型枚举
 */
public enum EVParamType implements INativeEnum<EVParamType> {
	PT_In(EVParamTypeHelper.ENUM_VALUES[0]),
	PT_Out(EVParamTypeHelper.ENUM_VALUES[1]),
	PT_InOut(EVParamTypeHelper.ENUM_VALUES[2]),
	PT_Binary(EVParamTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVParamType(int i) {
		this.value = i;
	}
	public EVParamType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVParamType toEnum(int retval) {
		if(retval == PT_In.value){
			return PT_In;
		}
		else if(retval == PT_Out.value){
			return PT_Out;
		}
		else if(retval == PT_InOut.value){
			return PT_InOut;
		}
		else if(retval == PT_Binary.value){
			return PT_Binary;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVParamTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
