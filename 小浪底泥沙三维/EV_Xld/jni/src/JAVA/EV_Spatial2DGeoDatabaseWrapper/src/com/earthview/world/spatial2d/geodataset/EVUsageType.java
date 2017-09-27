package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集用途类型枚举
 */
public enum EVUsageType implements INativeEnum<EVUsageType> {
	UST_COST(EVUsageTypeHelper.ENUM_VALUES[0]),
	UST_RESTRICTION(EVUsageTypeHelper.ENUM_VALUES[1]),
	UST_HIERACHY(EVUsageTypeHelper.ENUM_VALUES[2]),
	UST_DESCRIPTOR(EVUsageTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVUsageType(int i) {
		this.value = i;
	}
	public EVUsageType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVUsageType toEnum(int retval) {
		if(retval == UST_COST.value){
			return UST_COST;
		}
		else if(retval == UST_RESTRICTION.value){
			return UST_RESTRICTION;
		}
		else if(retval == UST_HIERACHY.value){
			return UST_HIERACHY;
		}
		else if(retval == UST_DESCRIPTOR.value){
			return UST_DESCRIPTOR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVUsageTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
