package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 曲线环枚举类型
 */
public enum EVCurveRingType implements INativeEnum<EVCurveRingType> {
	CRT_COMPOUND_RING(EVCurveRingTypeHelper.ENUM_VALUES[0]),
	CRT_CIRCLE_RING(EVCurveRingTypeHelper.ENUM_VALUES[1]),
	CRT_CIRCLE_SECTOR(EVCurveRingTypeHelper.ENUM_VALUES[2]),
	CRT_CIRCLE_CHORD(EVCurveRingTypeHelper.ENUM_VALUES[3]),
	CRT_ELLIPTIC_RING(EVCurveRingTypeHelper.ENUM_VALUES[4]),
	CRT_ELLIPTIC_SECTOR(EVCurveRingTypeHelper.ENUM_VALUES[5]),
	CRT_ELLIPTIC_CHORD(EVCurveRingTypeHelper.ENUM_VALUES[6]),
	CRT_TRIANGLE_RING(EVCurveRingTypeHelper.ENUM_VALUES[7]),
	CRT_RECTANGLE_RING(EVCurveRingTypeHelper.ENUM_VALUES[8]),
	CRT_EQUILATERAL_RING(EVCurveRingTypeHelper.ENUM_VALUES[9]);
	private int value;
	EVCurveRingType(int i) {
		this.value = i;
	}
	public EVCurveRingType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCurveRingType toEnum(int retval) {
		if(retval == CRT_COMPOUND_RING.value){
			return CRT_COMPOUND_RING;
		}
		else if(retval == CRT_CIRCLE_RING.value){
			return CRT_CIRCLE_RING;
		}
		else if(retval == CRT_CIRCLE_SECTOR.value){
			return CRT_CIRCLE_SECTOR;
		}
		else if(retval == CRT_CIRCLE_CHORD.value){
			return CRT_CIRCLE_CHORD;
		}
		else if(retval == CRT_ELLIPTIC_RING.value){
			return CRT_ELLIPTIC_RING;
		}
		else if(retval == CRT_ELLIPTIC_SECTOR.value){
			return CRT_ELLIPTIC_SECTOR;
		}
		else if(retval == CRT_ELLIPTIC_CHORD.value){
			return CRT_ELLIPTIC_CHORD;
		}
		else if(retval == CRT_TRIANGLE_RING.value){
			return CRT_TRIANGLE_RING;
		}
		else if(retval == CRT_RECTANGLE_RING.value){
			return CRT_RECTANGLE_RING;
		}
		else if(retval == CRT_EQUILATERAL_RING.value){
			return CRT_EQUILATERAL_RING;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCurveRingTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
