package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///亩
public enum VolumeUnit implements INativeEnum<VolumeUnit> {
	VU_AutoCubeMeterToCubeKilometer(VolumeUnitHelper.ENUM_VALUES[0]),
	VU_CubeMeter(VolumeUnitHelper.ENUM_VALUES[1]),
	VU_CubeKilometer(VolumeUnitHelper.ENUM_VALUES[2]);
	private int value;
	VolumeUnit(int i) {
		this.value = i;
	}
	public VolumeUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VolumeUnit toEnum(int retval) {
		if(retval == VU_AutoCubeMeterToCubeKilometer.value){
			return VU_AutoCubeMeterToCubeKilometer;
		}
		else if(retval == VU_CubeMeter.value){
			return VU_CubeMeter;
		}
		else if(retval == VU_CubeKilometer.value){
			return VU_CubeKilometer;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VolumeUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
