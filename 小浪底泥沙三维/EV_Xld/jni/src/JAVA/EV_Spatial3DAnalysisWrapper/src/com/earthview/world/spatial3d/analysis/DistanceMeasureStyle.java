package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 距离测量方式
 */
public enum DistanceMeasureStyle implements INativeEnum<DistanceMeasureStyle> {
	DMS_Clamp(DistanceMeasureStyleHelper.ENUM_VALUES[0]),
	DMS_Line(DistanceMeasureStyleHelper.ENUM_VALUES[1]),
	DMS_Project(DistanceMeasureStyleHelper.ENUM_VALUES[2]);
	private int value;
	DistanceMeasureStyle(int i) {
		this.value = i;
	}
	public DistanceMeasureStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DistanceMeasureStyle toEnum(int retval) {
		if(retval == DMS_Clamp.value){
			return DMS_Clamp;
		}
		else if(retval == DMS_Line.value){
			return DMS_Line;
		}
		else if(retval == DMS_Project.value){
			return DMS_Project;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DistanceMeasureStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
