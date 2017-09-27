package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单点填充样式
 */
public enum EVSimpleMarkerType implements INativeEnum<EVSimpleMarkerType> {
	SMT_SIMPLEMARKERTYPE_CIRCLE(EVSimpleMarkerTypeHelper.ENUM_VALUES[0]),
	SMT_SIMPLEMARKERTYPE_SQUARE(EVSimpleMarkerTypeHelper.ENUM_VALUES[1]),
	SMT_SIMPLEMARKERTYPE_CROSS(EVSimpleMarkerTypeHelper.ENUM_VALUES[2]),
	SMT_SIMPLEMARKERTYPE_X(EVSimpleMarkerTypeHelper.ENUM_VALUES[3]),
	SMT_SIMPLEMARKERTYPE_DIAMOND(EVSimpleMarkerTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSimpleMarkerType(int i) {
		this.value = i;
	}
	public EVSimpleMarkerType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSimpleMarkerType toEnum(int retval) {
		if(retval == SMT_SIMPLEMARKERTYPE_CIRCLE.value){
			return SMT_SIMPLEMARKERTYPE_CIRCLE;
		}
		else if(retval == SMT_SIMPLEMARKERTYPE_SQUARE.value){
			return SMT_SIMPLEMARKERTYPE_SQUARE;
		}
		else if(retval == SMT_SIMPLEMARKERTYPE_CROSS.value){
			return SMT_SIMPLEMARKERTYPE_CROSS;
		}
		else if(retval == SMT_SIMPLEMARKERTYPE_X.value){
			return SMT_SIMPLEMARKERTYPE_X;
		}
		else if(retval == SMT_SIMPLEMARKERTYPE_DIAMOND.value){
			return SMT_SIMPLEMARKERTYPE_DIAMOND;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSimpleMarkerTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
