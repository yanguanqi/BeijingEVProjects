package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 瓦片模式
 */
public enum EVTileModeType implements INativeEnum<EVTileModeType> {
	TMT_UNKNOWN(EVTileModeTypeHelper.ENUM_VALUES[0]),
	TMT_WGS84(EVTileModeTypeHelper.ENUM_VALUES[1]),
	TMT_WEBMERCATOR(EVTileModeTypeHelper.ENUM_VALUES[2]),
	TMT_GUTANG(EVTileModeTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVTileModeType(int i) {
		this.value = i;
	}
	public EVTileModeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileModeType toEnum(int retval) {
		if(retval == TMT_UNKNOWN.value){
			return TMT_UNKNOWN;
		}
		else if(retval == TMT_WGS84.value){
			return TMT_WGS84;
		}
		else if(retval == TMT_WEBMERCATOR.value){
			return TMT_WEBMERCATOR;
		}
		else if(retval == TMT_GUTANG.value){
			return TMT_GUTANG;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileModeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
