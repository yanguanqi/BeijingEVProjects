package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 面积测量方式
 */
public enum AreaMeasureStyle implements INativeEnum<AreaMeasureStyle> {
	AMS_Clamp_Project(AreaMeasureStyleHelper.ENUM_VALUES[0]),
	AMS_Clamp(AreaMeasureStyleHelper.ENUM_VALUES[1]),
	AMS_Project(AreaMeasureStyleHelper.ENUM_VALUES[2]);
	private int value;
	AreaMeasureStyle(int i) {
		this.value = i;
	}
	public AreaMeasureStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final AreaMeasureStyle toEnum(int retval) {
		if(retval == AMS_Clamp_Project.value){
			return AMS_Clamp_Project;
		}
		else if(retval == AMS_Clamp.value){
			return AMS_Clamp;
		}
		else if(retval == AMS_Project.value){
			return AMS_Project;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class AreaMeasureStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
