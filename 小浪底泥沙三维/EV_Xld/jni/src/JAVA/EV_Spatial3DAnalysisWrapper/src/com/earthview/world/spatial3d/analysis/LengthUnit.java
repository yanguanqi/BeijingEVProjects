package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LengthUnit implements INativeEnum<LengthUnit> {
	LU_AutoMeterToKilometer(LengthUnitHelper.ENUM_VALUES[0]),
	LU_Meter(LengthUnitHelper.ENUM_VALUES[1]),
	LU_Kilometer(LengthUnitHelper.ENUM_VALUES[2]);
	private int value;
	LengthUnit(int i) {
		this.value = i;
	}
	public LengthUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LengthUnit toEnum(int retval) {
		if(retval == LU_AutoMeterToKilometer.value){
			return LU_AutoMeterToKilometer;
		}
		else if(retval == LU_Meter.value){
			return LU_Meter;
		}
		else if(retval == LU_Kilometer.value){
			return LU_Kilometer;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LengthUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
