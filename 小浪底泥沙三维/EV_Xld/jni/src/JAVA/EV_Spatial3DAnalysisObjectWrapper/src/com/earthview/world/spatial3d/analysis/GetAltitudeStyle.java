package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 获取高程枚举
 */
public enum GetAltitudeStyle implements INativeEnum<GetAltitudeStyle> {
	GAS_Draw(GetAltitudeStyleHelper.ENUM_VALUES[0]),
	GAS_CalcuHighest(GetAltitudeStyleHelper.ENUM_VALUES[1]),
	GAS_CalcuAdapt(GetAltitudeStyleHelper.ENUM_VALUES[2]);
	private int value;
	GetAltitudeStyle(int i) {
		this.value = i;
	}
	public GetAltitudeStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GetAltitudeStyle toEnum(int retval) {
		if(retval == GAS_Draw.value){
			return GAS_Draw;
		}
		else if(retval == GAS_CalcuHighest.value){
			return GAS_CalcuHighest;
		}
		else if(retval == GAS_CalcuAdapt.value){
			return GAS_CalcuAdapt;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GetAltitudeStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
