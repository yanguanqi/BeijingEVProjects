package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVTileUnitsType implements INativeEnum<EVTileUnitsType> {
	TUT_UNKNOWN(EVTileUnitsTypeHelper.ENUM_VALUES[0]),
	TUT_DEGREE(EVTileUnitsTypeHelper.ENUM_VALUES[1]),
	TUT_METER(EVTileUnitsTypeHelper.ENUM_VALUES[2]),
	TUT_RADIAN(EVTileUnitsTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVTileUnitsType(int i) {
		this.value = i;
	}
	public EVTileUnitsType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTileUnitsType toEnum(int retval) {
		if(retval == TUT_UNKNOWN.value){
			return TUT_UNKNOWN;
		}
		else if(retval == TUT_DEGREE.value){
			return TUT_DEGREE;
		}
		else if(retval == TUT_METER.value){
			return TUT_METER;
		}
		else if(retval == TUT_RADIAN.value){
			return TUT_RADIAN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTileUnitsTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
