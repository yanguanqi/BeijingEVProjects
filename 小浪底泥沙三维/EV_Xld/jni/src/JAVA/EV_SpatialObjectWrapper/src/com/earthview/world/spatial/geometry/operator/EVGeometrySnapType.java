package com.earthview.world.spatial.geometry.operator;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVGeometrySnapType implements INativeEnum<EVGeometrySnapType> {
	GST_UNKNOWN(EVGeometrySnapTypeHelper.ENUM_VALUES[0]),
	GST_VERTEX(EVGeometrySnapTypeHelper.ENUM_VALUES[1]),
	GST_SEGMENT(EVGeometrySnapTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVGeometrySnapType(int i) {
		this.value = i;
	}
	public EVGeometrySnapType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGeometrySnapType toEnum(int retval) {
		if(retval == GST_UNKNOWN.value){
			return GST_UNKNOWN;
		}
		else if(retval == GST_VERTEX.value){
			return GST_VERTEX;
		}
		else if(retval == GST_SEGMENT.value){
			return GST_SEGMENT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGeometrySnapTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
