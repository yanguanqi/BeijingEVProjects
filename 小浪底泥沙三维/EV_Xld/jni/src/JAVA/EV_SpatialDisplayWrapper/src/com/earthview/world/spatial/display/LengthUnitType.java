package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LengthUnitType implements INativeEnum<LengthUnitType> {
	LUT_KILOMETERS(LengthUnitTypeHelper.ENUM_VALUES[0]),
	LUT_METERS(LengthUnitTypeHelper.ENUM_VALUES[1]),
	LUT_DECIMETERS(LengthUnitTypeHelper.ENUM_VALUES[2]),
	LUT_CENTIMETERS(LengthUnitTypeHelper.ENUM_VALUES[3]),
	LUT_MILLIMETER(LengthUnitTypeHelper.ENUM_VALUES[4]),
	LUT_LI(LengthUnitTypeHelper.ENUM_VALUES[5]),
	LUT_ZHANG(LengthUnitTypeHelper.ENUM_VALUES[6]),
	LUT_CHI(LengthUnitTypeHelper.ENUM_VALUES[7]),
	LUT_CUN(LengthUnitTypeHelper.ENUM_VALUES[8]),
	LUT_FEET(LengthUnitTypeHelper.ENUM_VALUES[9]),
	LUT_INCHES(LengthUnitTypeHelper.ENUM_VALUES[10]),
	LUT_YARDS(LengthUnitTypeHelper.ENUM_VALUES[11]),
	LUT_MILES(LengthUnitTypeHelper.ENUM_VALUES[12]),
	LUT_NAUTICALMILES(LengthUnitTypeHelper.ENUM_VALUES[13]),
	LUT_DECIMALDEGREES(LengthUnitTypeHelper.ENUM_VALUES[14]),
	LUT_POINTS(LengthUnitTypeHelper.ENUM_VALUES[15]),
	LUT_UNKNOWN(LengthUnitTypeHelper.ENUM_VALUES[16]);
	private int value;
	LengthUnitType(int i) {
		this.value = i;
	}
	public LengthUnitType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LengthUnitType toEnum(int retval) {
		if(retval == LUT_KILOMETERS.value){
			return LUT_KILOMETERS;
		}
		else if(retval == LUT_METERS.value){
			return LUT_METERS;
		}
		else if(retval == LUT_DECIMETERS.value){
			return LUT_DECIMETERS;
		}
		else if(retval == LUT_CENTIMETERS.value){
			return LUT_CENTIMETERS;
		}
		else if(retval == LUT_MILLIMETER.value){
			return LUT_MILLIMETER;
		}
		else if(retval == LUT_LI.value){
			return LUT_LI;
		}
		else if(retval == LUT_ZHANG.value){
			return LUT_ZHANG;
		}
		else if(retval == LUT_CHI.value){
			return LUT_CHI;
		}
		else if(retval == LUT_CUN.value){
			return LUT_CUN;
		}
		else if(retval == LUT_FEET.value){
			return LUT_FEET;
		}
		else if(retval == LUT_INCHES.value){
			return LUT_INCHES;
		}
		else if(retval == LUT_YARDS.value){
			return LUT_YARDS;
		}
		else if(retval == LUT_MILES.value){
			return LUT_MILES;
		}
		else if(retval == LUT_NAUTICALMILES.value){
			return LUT_NAUTICALMILES;
		}
		else if(retval == LUT_DECIMALDEGREES.value){
			return LUT_DECIMALDEGREES;
		}
		else if(retval == LUT_POINTS.value){
			return LUT_POINTS;
		}
		else if(retval == LUT_UNKNOWN.value){
			return LUT_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LengthUnitTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
