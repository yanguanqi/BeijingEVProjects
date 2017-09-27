package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVWellKnownGeoCSType枚举常见地理坐标系统可根据该枚举值创建一个常见的地理坐标系，如80椭球坐标系
 */
public enum EVWellKnownGeoCSType implements INativeEnum<EVWellKnownGeoCSType> {
	GEO_UNKNOWN(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[0]),
	GEO_Beijing54(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[1]),
	GEO_XIAN80(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[2]),
	GEO_WGS84(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[3]),
	GEO_CGCS2000(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[4]),
	GEO_WGS72(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[5]),
	GEO_NSWC9Z_2(EVWellKnownGeoCSTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVWellKnownGeoCSType(int i) {
		this.value = i;
	}
	public EVWellKnownGeoCSType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVWellKnownGeoCSType toEnum(int retval) {
		if(retval == GEO_UNKNOWN.value){
			return GEO_UNKNOWN;
		}
		else if(retval == GEO_Beijing54.value){
			return GEO_Beijing54;
		}
		else if(retval == GEO_XIAN80.value){
			return GEO_XIAN80;
		}
		else if(retval == GEO_WGS84.value){
			return GEO_WGS84;
		}
		else if(retval == GEO_CGCS2000.value){
			return GEO_CGCS2000;
		}
		else if(retval == GEO_WGS72.value){
			return GEO_WGS72;
		}
		else if(retval == GEO_NSWC9Z_2.value){
			return GEO_NSWC9Z_2;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVWellKnownGeoCSTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
