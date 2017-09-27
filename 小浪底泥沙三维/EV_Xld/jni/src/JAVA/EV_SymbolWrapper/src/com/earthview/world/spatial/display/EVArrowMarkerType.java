package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 箭头点类型
 */
public enum EVArrowMarkerType implements INativeEnum<EVArrowMarkerType> {
	AMT_ARROWMARKER_SOLID(EVArrowMarkerTypeHelper.ENUM_VALUES[0]),
	AMT_ARROWMARKER_BOUND(EVArrowMarkerTypeHelper.ENUM_VALUES[1]),
	AMT_ARROWMARKER_SPINE(EVArrowMarkerTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVArrowMarkerType(int i) {
		this.value = i;
	}
	public EVArrowMarkerType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVArrowMarkerType toEnum(int retval) {
		if(retval == AMT_ARROWMARKER_SOLID.value){
			return AMT_ARROWMARKER_SOLID;
		}
		else if(retval == AMT_ARROWMARKER_BOUND.value){
			return AMT_ARROWMARKER_BOUND;
		}
		else if(retval == AMT_ARROWMARKER_SPINE.value){
			return AMT_ARROWMARKER_SPINE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVArrowMarkerTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
