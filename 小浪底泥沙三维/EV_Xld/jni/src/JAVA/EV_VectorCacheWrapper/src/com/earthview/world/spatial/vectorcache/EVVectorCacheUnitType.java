package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存制作所用真实世界距离单位
 */
public enum EVVectorCacheUnitType implements INativeEnum<EVVectorCacheUnitType> {
	VectorCacheUnitType_Unknown(EVVectorCacheUnitTypeHelper.ENUM_VALUES[0]),
	VectorCacheUnitType_Degree(EVVectorCacheUnitTypeHelper.ENUM_VALUES[1]),
	VectorCacheUnitType_Radian(EVVectorCacheUnitTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVVectorCacheUnitType(int i) {
		this.value = i;
	}
	public EVVectorCacheUnitType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheUnitType toEnum(int retval) {
		if(retval == VectorCacheUnitType_Unknown.value){
			return VectorCacheUnitType_Unknown;
		}
		else if(retval == VectorCacheUnitType_Degree.value){
			return VectorCacheUnitType_Degree;
		}
		else if(retval == VectorCacheUnitType_Radian.value){
			return VectorCacheUnitType_Radian;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheUnitTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
