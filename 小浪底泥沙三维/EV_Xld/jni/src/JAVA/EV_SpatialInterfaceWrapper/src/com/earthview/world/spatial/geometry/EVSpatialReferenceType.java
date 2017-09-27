package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 空间参考系类型枚举
 */
public enum EVSpatialReferenceType implements INativeEnum<EVSpatialReferenceType> {
	SST_UNKNOWN(EVSpatialReferenceTypeHelper.ENUM_VALUES[0]),
	SST_GEOCOORDINATESYSTEM(EVSpatialReferenceTypeHelper.ENUM_VALUES[1]),
	SST_PROJCOORDINATESYSTEM(EVSpatialReferenceTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVSpatialReferenceType(int i) {
		this.value = i;
	}
	public EVSpatialReferenceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpatialReferenceType toEnum(int retval) {
		if(retval == SST_UNKNOWN.value){
			return SST_UNKNOWN;
		}
		else if(retval == SST_GEOCOORDINATESYSTEM.value){
			return SST_GEOCOORDINATESYSTEM;
		}
		else if(retval == SST_PROJCOORDINATESYSTEM.value){
			return SST_PROJCOORDINATESYSTEM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpatialReferenceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
