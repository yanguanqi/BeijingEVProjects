package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 拐点样式
 */
public enum EVLineJoinType implements INativeEnum<EVLineJoinType> {
	LJT_LINEJOINTYPE_BEVEL(EVLineJoinTypeHelper.ENUM_VALUES[0]),
	LJT_LINEJOINTYPE_MITER(EVLineJoinTypeHelper.ENUM_VALUES[1]),
	LJT_LINEJOINTYPE_ROUND(EVLineJoinTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVLineJoinType(int i) {
		this.value = i;
	}
	public EVLineJoinType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLineJoinType toEnum(int retval) {
		if(retval == LJT_LINEJOINTYPE_BEVEL.value){
			return LJT_LINEJOINTYPE_BEVEL;
		}
		else if(retval == LJT_LINEJOINTYPE_MITER.value){
			return LJT_LINEJOINTYPE_MITER;
		}
		else if(retval == LJT_LINEJOINTYPE_ROUND.value){
			return LJT_LINEJOINTYPE_ROUND;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLineJoinTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
