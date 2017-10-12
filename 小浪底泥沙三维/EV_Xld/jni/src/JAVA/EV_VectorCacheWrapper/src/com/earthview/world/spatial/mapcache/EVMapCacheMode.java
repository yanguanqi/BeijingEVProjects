package com.earthview.world.spatial.mapcache;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapCacheMode implements INativeEnum<EVMapCacheMode> {
	MapCacheMode_Unknown(EVMapCacheModeHelper.ENUM_VALUES[0]),
	MapCacheMode_WGS84(EVMapCacheModeHelper.ENUM_VALUES[1]),
	MapCacheMode_Mercator(EVMapCacheModeHelper.ENUM_VALUES[2]);
	private int value;
	EVMapCacheMode(int i) {
		this.value = i;
	}
	public EVMapCacheMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapCacheMode toEnum(int retval) {
		if(retval == MapCacheMode_Unknown.value){
			return MapCacheMode_Unknown;
		}
		else if(retval == MapCacheMode_WGS84.value){
			return MapCacheMode_WGS84;
		}
		else if(retval == MapCacheMode_Mercator.value){
			return MapCacheMode_Mercator;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapCacheModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
