package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///未知单位
public enum AreaUnitType implements INativeEnum<AreaUnitType> {
	AUT_SQUARE_KILOMETERS(AreaUnitTypeHelper.ENUM_VALUES[0]),
	AUT_SQUARE_METERS(AreaUnitTypeHelper.ENUM_VALUES[1]),
	AUT_SQUARE_DECIMETERS(AreaUnitTypeHelper.ENUM_VALUES[2]),
	AUT_SQUARE_CENTIMETERS(AreaUnitTypeHelper.ENUM_VALUES[3]),
	AUT_SQUARE_MILLIMETER(AreaUnitTypeHelper.ENUM_VALUES[4]),
	AUT_HECTARE(AreaUnitTypeHelper.ENUM_VALUES[5]),
	AUT_ARE(AreaUnitTypeHelper.ENUM_VALUES[6]),
	AUT_QING(AreaUnitTypeHelper.ENUM_VALUES[7]),
	AUT_MU(AreaUnitTypeHelper.ENUM_VALUES[8]),
	AUT_SQUARE_ZHANG(AreaUnitTypeHelper.ENUM_VALUES[9]),
	AUT_SQUARE_CHI(AreaUnitTypeHelper.ENUM_VALUES[10]),
	AUT_SQUARE_CUN(AreaUnitTypeHelper.ENUM_VALUES[11]),
	AUT_ACRE(AreaUnitTypeHelper.ENUM_VALUES[12]),
	AUT_SQUARE_MILES(AreaUnitTypeHelper.ENUM_VALUES[13]),
	AUT_SQUARE_FEET(AreaUnitTypeHelper.ENUM_VALUES[14]),
	AUT_SQUARE_INCHES(AreaUnitTypeHelper.ENUM_VALUES[15]),
	AUT_SQUARE_YARDS(AreaUnitTypeHelper.ENUM_VALUES[16]),
	AUT_UNKNOWN(AreaUnitTypeHelper.ENUM_VALUES[17]);
	private int value;
	AreaUnitType(int i) {
		this.value = i;
	}
	public AreaUnitType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final AreaUnitType toEnum(int retval) {
		if(retval == AUT_SQUARE_KILOMETERS.value){
			return AUT_SQUARE_KILOMETERS;
		}
		else if(retval == AUT_SQUARE_METERS.value){
			return AUT_SQUARE_METERS;
		}
		else if(retval == AUT_SQUARE_DECIMETERS.value){
			return AUT_SQUARE_DECIMETERS;
		}
		else if(retval == AUT_SQUARE_CENTIMETERS.value){
			return AUT_SQUARE_CENTIMETERS;
		}
		else if(retval == AUT_SQUARE_MILLIMETER.value){
			return AUT_SQUARE_MILLIMETER;
		}
		else if(retval == AUT_HECTARE.value){
			return AUT_HECTARE;
		}
		else if(retval == AUT_ARE.value){
			return AUT_ARE;
		}
		else if(retval == AUT_QING.value){
			return AUT_QING;
		}
		else if(retval == AUT_MU.value){
			return AUT_MU;
		}
		else if(retval == AUT_SQUARE_ZHANG.value){
			return AUT_SQUARE_ZHANG;
		}
		else if(retval == AUT_SQUARE_CHI.value){
			return AUT_SQUARE_CHI;
		}
		else if(retval == AUT_SQUARE_CUN.value){
			return AUT_SQUARE_CUN;
		}
		else if(retval == AUT_ACRE.value){
			return AUT_ACRE;
		}
		else if(retval == AUT_SQUARE_MILES.value){
			return AUT_SQUARE_MILES;
		}
		else if(retval == AUT_SQUARE_FEET.value){
			return AUT_SQUARE_FEET;
		}
		else if(retval == AUT_SQUARE_INCHES.value){
			return AUT_SQUARE_INCHES;
		}
		else if(retval == AUT_SQUARE_YARDS.value){
			return AUT_SQUARE_YARDS;
		}
		else if(retval == AUT_UNKNOWN.value){
			return AUT_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class AreaUnitTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
