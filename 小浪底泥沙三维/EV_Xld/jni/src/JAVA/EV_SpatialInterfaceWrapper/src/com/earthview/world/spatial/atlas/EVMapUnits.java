package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVMapUnits implements INativeEnum<EVMapUnits> {
	MU_Unknown(EVMapUnitsHelper.ENUM_VALUES[0]),
	MU_Inches(EVMapUnitsHelper.ENUM_VALUES[1]),
	MU_Points(EVMapUnitsHelper.ENUM_VALUES[2]),
	MU_Feet(EVMapUnitsHelper.ENUM_VALUES[3]),
	MU_Yards(EVMapUnitsHelper.ENUM_VALUES[4]),
	MU_Miles(EVMapUnitsHelper.ENUM_VALUES[5]),
	MU_NauticalMiles(EVMapUnitsHelper.ENUM_VALUES[6]),
	MU_Kilometers(EVMapUnitsHelper.ENUM_VALUES[7]),
	MU_Meters(EVMapUnitsHelper.ENUM_VALUES[8]),
	MU_Decimeters(EVMapUnitsHelper.ENUM_VALUES[9]),
	MU_Centimeters(EVMapUnitsHelper.ENUM_VALUES[10]),
	MU_Millimeter(EVMapUnitsHelper.ENUM_VALUES[11]),
	MU_DecimalDegrees(EVMapUnitsHelper.ENUM_VALUES[12]),
	MU_DMS(EVMapUnitsHelper.ENUM_VALUES[13]);
	private int value;
	EVMapUnits(int i) {
		this.value = i;
	}
	public EVMapUnits getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVMapUnits toEnum(int retval) {
		if(retval == MU_Unknown.value){
			return MU_Unknown;
		}
		else if(retval == MU_Inches.value){
			return MU_Inches;
		}
		else if(retval == MU_Points.value){
			return MU_Points;
		}
		else if(retval == MU_Feet.value){
			return MU_Feet;
		}
		else if(retval == MU_Yards.value){
			return MU_Yards;
		}
		else if(retval == MU_Miles.value){
			return MU_Miles;
		}
		else if(retval == MU_NauticalMiles.value){
			return MU_NauticalMiles;
		}
		else if(retval == MU_Kilometers.value){
			return MU_Kilometers;
		}
		else if(retval == MU_Meters.value){
			return MU_Meters;
		}
		else if(retval == MU_Decimeters.value){
			return MU_Decimeters;
		}
		else if(retval == MU_Centimeters.value){
			return MU_Centimeters;
		}
		else if(retval == MU_Millimeter.value){
			return MU_Millimeter;
		}
		else if(retval == MU_DecimalDegrees.value){
			return MU_DecimalDegrees;
		}
		else if(retval == MU_DMS.value){
			return MU_DMS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVMapUnitsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
