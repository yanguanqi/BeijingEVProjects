package com.earthview.industryengine.militaryengine.radarlibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 雷达类型
 */
public enum CRadarType implements INativeEnum<CRadarType> {
	RT_UnKnown(CRadarTypeHelper.ENUM_VALUES[0]),
	RT_PhasedArray(CRadarTypeHelper.ENUM_VALUES[1]),
	RT_MechanicalScanning(CRadarTypeHelper.ENUM_VALUES[2]);
	private int value;
	CRadarType(int i) {
		this.value = i;
	}
	public CRadarType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CRadarType toEnum(int retval) {
		if(retval == RT_UnKnown.value){
			return RT_UnKnown;
		}
		else if(retval == RT_PhasedArray.value){
			return RT_PhasedArray;
		}
		else if(retval == RT_MechanicalScanning.value){
			return RT_MechanicalScanning;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CRadarTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
