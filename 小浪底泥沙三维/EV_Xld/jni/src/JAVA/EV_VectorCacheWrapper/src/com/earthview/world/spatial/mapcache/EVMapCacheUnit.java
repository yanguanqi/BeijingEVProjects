package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapCacheUnit implements INativeEnum<EVMapCacheUnit> {
	MapCacheUnit_Unknown(EVMapCacheUnitHelper.ENUM_VALUES[0]),
	MapCacheUnit_Degree(EVMapCacheUnitHelper.ENUM_VALUES[1]),
	MapCacheUnit_Radian(EVMapCacheUnitHelper.ENUM_VALUES[2]);
	private int value;
	EVMapCacheUnit(int i) {
		this.value = i;
	}
	public EVMapCacheUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapCacheUnit toEnum(int retval) {
		if(retval == MapCacheUnit_Unknown.value){
			return MapCacheUnit_Unknown;
		}
		else if(retval == MapCacheUnit_Degree.value){
			return MapCacheUnit_Degree;
		}
		else if(retval == MapCacheUnit_Radian.value){
			return MapCacheUnit_Radian;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapCacheUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
