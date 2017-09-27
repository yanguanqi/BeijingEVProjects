package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPointWithinType implements INativeEnum<EVPointWithinType> {
	POINT_UNK(EVPointWithinTypeHelper.ENUM_VALUES[0]),
	POINT_OUT(EVPointWithinTypeHelper.ENUM_VALUES[1]),
	POINT_ON(EVPointWithinTypeHelper.ENUM_VALUES[2]),
	POINT_IN(EVPointWithinTypeHelper.ENUM_VALUES[3]),
	POINT_VERTEX(EVPointWithinTypeHelper.ENUM_VALUES[4]),
	POINT_EDGE(EVPointWithinTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVPointWithinType(int i) {
		this.value = i;
	}
	public EVPointWithinType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPointWithinType toEnum(int retval) {
		if(retval == POINT_UNK.value){
			return POINT_UNK;
		}
		else if(retval == POINT_OUT.value){
			return POINT_OUT;
		}
		else if(retval == POINT_ON.value){
			return POINT_ON;
		}
		else if(retval == POINT_IN.value){
			return POINT_IN;
		}
		else if(retval == POINT_VERTEX.value){
			return POINT_VERTEX;
		}
		else if(retval == POINT_EDGE.value){
			return POINT_EDGE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPointWithinTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
