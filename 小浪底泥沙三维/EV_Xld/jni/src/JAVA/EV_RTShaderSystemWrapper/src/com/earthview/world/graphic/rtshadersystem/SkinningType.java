package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// VS Outputs will be compacted always including parameter splits.
public enum SkinningType implements INativeEnum<SkinningType> {
	ST_LINEAR(SkinningTypeHelper.ENUM_VALUES[0]),
	ST_DUAL_QUATERNION(SkinningTypeHelper.ENUM_VALUES[1]);
	private int value;
	SkinningType(int i) {
		this.value = i;
	}
	public SkinningType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SkinningType toEnum(int retval) {
		if(retval == ST_LINEAR.value){
			return ST_LINEAR;
		}
		else if(retval == ST_DUAL_QUATERNION.value){
			return ST_DUAL_QUATERNION;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SkinningTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
