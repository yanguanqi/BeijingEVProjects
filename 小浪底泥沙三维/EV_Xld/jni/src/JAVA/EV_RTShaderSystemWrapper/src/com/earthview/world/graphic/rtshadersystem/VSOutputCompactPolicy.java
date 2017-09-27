package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Vertex shader output parameters compact policy.
public enum VSOutputCompactPolicy implements INativeEnum<VSOutputCompactPolicy> {
	VSOCP_LOW(VSOutputCompactPolicyHelper.ENUM_VALUES[0]),
	VSOCP_MEDIUM(VSOutputCompactPolicyHelper.ENUM_VALUES[1]),
	VSOCP_HIGH(VSOutputCompactPolicyHelper.ENUM_VALUES[2]);
	private int value;
	VSOutputCompactPolicy(int i) {
		this.value = i;
	}
	public VSOutputCompactPolicy getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VSOutputCompactPolicy toEnum(int retval) {
		if(retval == VSOCP_LOW.value){
			return VSOCP_LOW;
		}
		else if(retval == VSOCP_MEDIUM.value){
			return VSOCP_MEDIUM;
		}
		else if(retval == VSOCP_HIGH.value){
			return VSOCP_HIGH;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VSOutputCompactPolicyHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
