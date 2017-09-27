package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapcontrolCoordinateUnit implements INativeEnum<EVMapcontrolCoordinateUnit> {
	MCU_FollowMap(EVMapcontrolCoordinateUnitHelper.ENUM_VALUES[0]),
	MCU_Geographic(EVMapcontrolCoordinateUnitHelper.ENUM_VALUES[1]);
	private int value;
	EVMapcontrolCoordinateUnit(int i) {
		this.value = i;
	}
	public EVMapcontrolCoordinateUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapcontrolCoordinateUnit toEnum(int retval) {
		if(retval == MCU_FollowMap.value){
			return MCU_FollowMap;
		}
		else if(retval == MCU_Geographic.value){
			return MCU_Geographic;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapcontrolCoordinateUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
