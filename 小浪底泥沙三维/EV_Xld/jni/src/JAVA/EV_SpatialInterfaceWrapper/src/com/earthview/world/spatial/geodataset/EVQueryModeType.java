package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 查询模式
 */
public enum EVQueryModeType implements INativeEnum<EVQueryModeType> {
	EVQueryModeUnknown(EVQueryModeTypeHelper.ENUM_VALUES[0]),
	EVQueryModeAttribute(EVQueryModeTypeHelper.ENUM_VALUES[1]),
	EVQueryModeSpatial(EVQueryModeTypeHelper.ENUM_VALUES[2]),
	EVQueryModeAttributeAndSpatial(EVQueryModeTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVQueryModeType(int i) {
		this.value = i;
	}
	public EVQueryModeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVQueryModeType toEnum(int retval) {
		if(retval == EVQueryModeUnknown.value){
			return EVQueryModeUnknown;
		}
		else if(retval == EVQueryModeAttribute.value){
			return EVQueryModeAttribute;
		}
		else if(retval == EVQueryModeSpatial.value){
			return EVQueryModeSpatial;
		}
		else if(retval == EVQueryModeAttributeAndSpatial.value){
			return EVQueryModeAttributeAndSpatial;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVQueryModeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
