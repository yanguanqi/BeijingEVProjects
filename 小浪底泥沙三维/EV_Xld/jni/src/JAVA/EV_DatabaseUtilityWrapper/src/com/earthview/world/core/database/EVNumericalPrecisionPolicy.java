package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数值精度策略枚举
 */
public enum EVNumericalPrecisionPolicy implements INativeEnum<EVNumericalPrecisionPolicy> {
	NP_LowPrecisionInt32(EVNumericalPrecisionPolicyHelper.ENUM_VALUES[0]),
	NP_LowPrecisionInt64(EVNumericalPrecisionPolicyHelper.ENUM_VALUES[1]),
	NP_LowPrecisionDouble(EVNumericalPrecisionPolicyHelper.ENUM_VALUES[2]),
	NP_HighPrecision(EVNumericalPrecisionPolicyHelper.ENUM_VALUES[3]);
	private int value;
	EVNumericalPrecisionPolicy(int i) {
		this.value = i;
	}
	public EVNumericalPrecisionPolicy getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVNumericalPrecisionPolicy toEnum(int retval) {
		if(retval == NP_LowPrecisionInt32.value){
			return NP_LowPrecisionInt32;
		}
		else if(retval == NP_LowPrecisionInt64.value){
			return NP_LowPrecisionInt64;
		}
		else if(retval == NP_LowPrecisionDouble.value){
			return NP_LowPrecisionDouble;
		}
		else if(retval == NP_HighPrecision.value){
			return NP_HighPrecision;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVNumericalPrecisionPolicyHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
