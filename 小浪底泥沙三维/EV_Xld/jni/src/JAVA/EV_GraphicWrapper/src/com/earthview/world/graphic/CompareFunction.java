package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 快速的hash算法
 */
public enum CompareFunction implements INativeEnum<CompareFunction> {
	CMPF_ALWAYS_FAIL(CompareFunctionHelper.ENUM_VALUES[0]),
	CMPF_ALWAYS_PASS(CompareFunctionHelper.ENUM_VALUES[1]),
	CMPF_LESS(CompareFunctionHelper.ENUM_VALUES[2]),
	CMPF_LESS_EQUAL(CompareFunctionHelper.ENUM_VALUES[3]),
	CMPF_EQUAL(CompareFunctionHelper.ENUM_VALUES[4]),
	CMPF_NOT_EQUAL(CompareFunctionHelper.ENUM_VALUES[5]),
	CMPF_GREATER_EQUAL(CompareFunctionHelper.ENUM_VALUES[6]),
	CMPF_GREATER(CompareFunctionHelper.ENUM_VALUES[7]);
	private int value;
	CompareFunction(int i) {
		this.value = i;
	}
	public CompareFunction getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CompareFunction toEnum(int retval) {
		if(retval == CMPF_ALWAYS_FAIL.value){
			return CMPF_ALWAYS_FAIL;
		}
		else if(retval == CMPF_ALWAYS_PASS.value){
			return CMPF_ALWAYS_PASS;
		}
		else if(retval == CMPF_LESS.value){
			return CMPF_LESS;
		}
		else if(retval == CMPF_LESS_EQUAL.value){
			return CMPF_LESS_EQUAL;
		}
		else if(retval == CMPF_EQUAL.value){
			return CMPF_EQUAL;
		}
		else if(retval == CMPF_NOT_EQUAL.value){
			return CMPF_NOT_EQUAL;
		}
		else if(retval == CMPF_GREATER_EQUAL.value){
			return CMPF_GREATER_EQUAL;
		}
		else if(retval == CMPF_GREATER.value){
			return CMPF_GREATER;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CompareFunctionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
