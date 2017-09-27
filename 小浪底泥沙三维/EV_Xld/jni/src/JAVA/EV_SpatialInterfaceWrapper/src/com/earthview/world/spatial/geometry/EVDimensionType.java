package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 维度类型
 */
public enum EVDimensionType implements INativeEnum<EVDimensionType> {
	DT_DIMENSION_UNKNOWN(EVDimensionTypeHelper.ENUM_VALUES[0]),
	DT_DIMENSION_0(EVDimensionTypeHelper.ENUM_VALUES[1]),
	DT_DIMENSION_1(EVDimensionTypeHelper.ENUM_VALUES[2]),
	DT_DIMENSION_2(EVDimensionTypeHelper.ENUM_VALUES[3]),
	DT_DIMENSION_2_5(EVDimensionTypeHelper.ENUM_VALUES[4]),
	DT_DIMENSION_3(EVDimensionTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVDimensionType(int i) {
		this.value = i;
	}
	public EVDimensionType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDimensionType toEnum(int retval) {
		if(retval == DT_DIMENSION_UNKNOWN.value){
			return DT_DIMENSION_UNKNOWN;
		}
		else if(retval == DT_DIMENSION_0.value){
			return DT_DIMENSION_0;
		}
		else if(retval == DT_DIMENSION_1.value){
			return DT_DIMENSION_1;
		}
		else if(retval == DT_DIMENSION_2.value){
			return DT_DIMENSION_2;
		}
		else if(retval == DT_DIMENSION_2_5.value){
			return DT_DIMENSION_2_5;
		}
		else if(retval == DT_DIMENSION_3.value){
			return DT_DIMENSION_3;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDimensionTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
