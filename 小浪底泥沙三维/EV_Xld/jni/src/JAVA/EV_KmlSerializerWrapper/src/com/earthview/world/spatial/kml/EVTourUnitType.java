package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 漫游状态
public enum EVTourUnitType implements INativeEnum<EVTourUnitType> {
	TUT_FLYTO(EVTourUnitTypeHelper.ENUM_VALUES[0]),
	TUT_WAIT(EVTourUnitTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVTourUnitType(int i) {
		this.value = i;
	}
	public EVTourUnitType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTourUnitType toEnum(int retval) {
		if(retval == TUT_FLYTO.value){
			return TUT_FLYTO;
		}
		else if(retval == TUT_WAIT.value){
			return TUT_WAIT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTourUnitTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
