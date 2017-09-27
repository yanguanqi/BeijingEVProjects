package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络数据集属性单位
 */
public enum EVUnitType implements INativeEnum<EVUnitType> {
	UNT_UNKNOWN(EVUnitTypeHelper.ENUM_VALUES[0]),
	UNT_METER(EVUnitTypeHelper.ENUM_VALUES[1]),
	UNT_CENTIMETER(EVUnitTypeHelper.ENUM_VALUES[2]),
	UNT_MINUTE(EVUnitTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVUnitType(int i) {
		this.value = i;
	}
	public EVUnitType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVUnitType toEnum(int retval) {
		if(retval == UNT_UNKNOWN.value){
			return UNT_UNKNOWN;
		}
		else if(retval == UNT_METER.value){
			return UNT_METER;
		}
		else if(retval == UNT_CENTIMETER.value){
			return UNT_CENTIMETER;
		}
		else if(retval == UNT_MINUTE.value){
			return UNT_MINUTE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVUnitTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
