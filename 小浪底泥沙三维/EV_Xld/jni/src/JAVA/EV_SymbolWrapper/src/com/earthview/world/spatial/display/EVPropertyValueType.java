package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///直线闭合
public enum EVPropertyValueType implements INativeEnum<EVPropertyValueType> {
	PVT_BOOL(EVPropertyValueTypeHelper.ENUM_VALUES[0]),
	PVT_INT8(EVPropertyValueTypeHelper.ENUM_VALUES[1]),
	PVT_INT16(EVPropertyValueTypeHelper.ENUM_VALUES[2]),
	PVT_INT32(EVPropertyValueTypeHelper.ENUM_VALUES[3]),
	PVT_INT64(EVPropertyValueTypeHelper.ENUM_VALUES[4]),
	PVT_FLOAT(EVPropertyValueTypeHelper.ENUM_VALUES[5]),
	PVT_DOUBLE(EVPropertyValueTypeHelper.ENUM_VALUES[6]),
	PVT_STRING(EVPropertyValueTypeHelper.ENUM_VALUES[7]);
	private int value;
	EVPropertyValueType(int i) {
		this.value = i;
	}
	public EVPropertyValueType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPropertyValueType toEnum(int retval) {
		if(retval == PVT_BOOL.value){
			return PVT_BOOL;
		}
		else if(retval == PVT_INT8.value){
			return PVT_INT8;
		}
		else if(retval == PVT_INT16.value){
			return PVT_INT16;
		}
		else if(retval == PVT_INT32.value){
			return PVT_INT32;
		}
		else if(retval == PVT_INT64.value){
			return PVT_INT64;
		}
		else if(retval == PVT_FLOAT.value){
			return PVT_FLOAT;
		}
		else if(retval == PVT_DOUBLE.value){
			return PVT_DOUBLE;
		}
		else if(retval == PVT_STRING.value){
			return PVT_STRING;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPropertyValueTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
