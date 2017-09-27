package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 箭头类型
 */
public enum ArrowType implements INativeEnum<ArrowType> {
	GroundArrow(ArrowTypeHelper.ENUM_VALUES[0]),
	ThreeDArrow(ArrowTypeHelper.ENUM_VALUES[1]);
	private int value;
	ArrowType(int i) {
		this.value = i;
	}
	public ArrowType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ArrowType toEnum(int retval) {
		if(retval == GroundArrow.value){
			return GroundArrow;
		}
		else if(retval == ThreeDArrow.value){
			return ThreeDArrow;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ArrowTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
