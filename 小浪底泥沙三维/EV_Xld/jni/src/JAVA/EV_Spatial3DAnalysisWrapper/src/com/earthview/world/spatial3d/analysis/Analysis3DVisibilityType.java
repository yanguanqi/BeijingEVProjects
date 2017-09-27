package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 通视分析的类型
 */
public enum Analysis3DVisibilityType implements INativeEnum<Analysis3DVisibilityType> {
	A3DVT_Point2Point(Analysis3DVisibilityTypeHelper.ENUM_VALUES[0]),
	A3DVT_Point2Line(Analysis3DVisibilityTypeHelper.ENUM_VALUES[1]),
	A3DVT_Point2Area(Analysis3DVisibilityTypeHelper.ENUM_VALUES[2]);
	private int value;
	Analysis3DVisibilityType(int i) {
		this.value = i;
	}
	public Analysis3DVisibilityType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Analysis3DVisibilityType toEnum(int retval) {
		if(retval == A3DVT_Point2Point.value){
			return A3DVT_Point2Point;
		}
		else if(retval == A3DVT_Point2Line.value){
			return A3DVT_Point2Line;
		}
		else if(retval == A3DVT_Point2Area.value){
			return A3DVT_Point2Area;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Analysis3DVisibilityTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
