package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 要素几何类型
 */
public enum EVGeoElementType implements INativeEnum<EVGeoElementType> {
	GET_UNKNOWN(EVGeoElementTypeHelper.ENUM_VALUES[0]),
	GET_POINT(EVGeoElementTypeHelper.ENUM_VALUES[1]),
	GET_POLYLINE(EVGeoElementTypeHelper.ENUM_VALUES[2]),
	GET_POLYGON(EVGeoElementTypeHelper.ENUM_VALUES[3]),
	GET_MULTIPOINT(EVGeoElementTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVGeoElementType(int i) {
		this.value = i;
	}
	public EVGeoElementType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGeoElementType toEnum(int retval) {
		if(retval == GET_UNKNOWN.value){
			return GET_UNKNOWN;
		}
		else if(retval == GET_POINT.value){
			return GET_POINT;
		}
		else if(retval == GET_POLYLINE.value){
			return GET_POLYLINE;
		}
		else if(retval == GET_POLYGON.value){
			return GET_POLYGON;
		}
		else if(retval == GET_MULTIPOINT.value){
			return GET_MULTIPOINT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGeoElementTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
