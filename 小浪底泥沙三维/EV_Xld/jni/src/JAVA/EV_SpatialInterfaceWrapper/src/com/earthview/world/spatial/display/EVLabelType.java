package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVLabelType implements INativeEnum<EVLabelType> {
	LT_Marker(EVLabelTypeHelper.ENUM_VALUES[0]),
	LT_Line(EVLabelTypeHelper.ENUM_VALUES[1]),
	LT_Fill(EVLabelTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVLabelType(int i) {
		this.value = i;
	}
	public EVLabelType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLabelType toEnum(int retval) {
		if(retval == LT_Marker.value){
			return LT_Marker;
		}
		else if(retval == LT_Line.value){
			return LT_Line;
		}
		else if(retval == LT_Fill.value){
			return LT_Fill;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLabelTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
