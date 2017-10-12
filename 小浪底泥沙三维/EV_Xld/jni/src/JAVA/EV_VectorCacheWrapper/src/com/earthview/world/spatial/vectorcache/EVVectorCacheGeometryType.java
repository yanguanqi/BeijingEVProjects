package com.earthview.world.spatial.vectorcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 缓存数据几何类型
 */
public enum EVVectorCacheGeometryType implements INativeEnum<EVVectorCacheGeometryType> {
	VectorCacheGeometryType_Unknown(EVVectorCacheGeometryTypeHelper.ENUM_VALUES[0]),
	VectorCacheGeometryType_Point(EVVectorCacheGeometryTypeHelper.ENUM_VALUES[1]),
	VectorCacheGeometryType_Polyline(EVVectorCacheGeometryTypeHelper.ENUM_VALUES[2]),
	VectorCacheGeometryType_Polygon(EVVectorCacheGeometryTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVVectorCacheGeometryType(int i) {
		this.value = i;
	}
	public EVVectorCacheGeometryType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVVectorCacheGeometryType toEnum(int retval) {
		if(retval == VectorCacheGeometryType_Unknown.value){
			return VectorCacheGeometryType_Unknown;
		}
		else if(retval == VectorCacheGeometryType_Point.value){
			return VectorCacheGeometryType_Point;
		}
		else if(retval == VectorCacheGeometryType_Polyline.value){
			return VectorCacheGeometryType_Polyline;
		}
		else if(retval == VectorCacheGeometryType_Polygon.value){
			return VectorCacheGeometryType_Polygon;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVVectorCacheGeometryTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
