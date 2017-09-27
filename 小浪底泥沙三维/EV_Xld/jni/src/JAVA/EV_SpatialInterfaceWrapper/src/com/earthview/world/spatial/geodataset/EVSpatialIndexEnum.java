package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间索引类型枚举
 */
public enum EVSpatialIndexEnum implements INativeEnum<EVSpatialIndexEnum> {
	SIE_UNKNOWN(EVSpatialIndexEnumHelper.ENUM_VALUES[0]),
	SIE_QUADTREE(EVSpatialIndexEnumHelper.ENUM_VALUES[1]),
	SIE_RPLUSTREE(EVSpatialIndexEnumHelper.ENUM_VALUES[2]),
	SIE_OCTREE(EVSpatialIndexEnumHelper.ENUM_VALUES[3]),
	SIE_GRID(EVSpatialIndexEnumHelper.ENUM_VALUES[4]);
	private int value;
	EVSpatialIndexEnum(int i) {
		this.value = i;
	}
	public EVSpatialIndexEnum getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialIndexEnum toEnum(int retval) {
		if(retval == SIE_UNKNOWN.value){
			return SIE_UNKNOWN;
		}
		else if(retval == SIE_QUADTREE.value){
			return SIE_QUADTREE;
		}
		else if(retval == SIE_RPLUSTREE.value){
			return SIE_RPLUSTREE;
		}
		else if(retval == SIE_OCTREE.value){
			return SIE_OCTREE;
		}
		else if(retval == SIE_GRID.value){
			return SIE_GRID;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialIndexEnumHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
