package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纸张单位
 */
public enum EVPageUnits implements INativeEnum<EVPageUnits> {
	PU_Unknown(EVPageUnitsHelper.ENUM_VALUES[0]),
	PU_Meters(EVPageUnitsHelper.ENUM_VALUES[1]),
	PU_Millimeters(EVPageUnitsHelper.ENUM_VALUES[2]),
	PU_Centimeters(EVPageUnitsHelper.ENUM_VALUES[3]),
	PU_Inches(EVPageUnitsHelper.ENUM_VALUES[4]),
	PU_Points(EVPageUnitsHelper.ENUM_VALUES[5]),
	PU_Pixel(EVPageUnitsHelper.ENUM_VALUES[6]);
	private int value;
	EVPageUnits(int i) {
		this.value = i;
	}
	public EVPageUnits getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPageUnits toEnum(int retval) {
		if(retval == PU_Unknown.value){
			return PU_Unknown;
		}
		else if(retval == PU_Meters.value){
			return PU_Meters;
		}
		else if(retval == PU_Millimeters.value){
			return PU_Millimeters;
		}
		else if(retval == PU_Centimeters.value){
			return PU_Centimeters;
		}
		else if(retval == PU_Inches.value){
			return PU_Inches;
		}
		else if(retval == PU_Points.value){
			return PU_Points;
		}
		else if(retval == PU_Pixel.value){
			return PU_Pixel;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPageUnitsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
