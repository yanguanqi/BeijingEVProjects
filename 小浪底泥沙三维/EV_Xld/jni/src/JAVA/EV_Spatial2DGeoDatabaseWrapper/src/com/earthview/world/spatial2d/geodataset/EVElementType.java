package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 网络要素类型
 */
public enum EVElementType implements INativeEnum<EVElementType> {
	ET_JUNCTION(EVElementTypeHelper.ENUM_VALUES[0]),
	ET_EDGE(EVElementTypeHelper.ENUM_VALUES[1]),
	ET_TURN(EVElementTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVElementType(int i) {
		this.value = i;
	}
	public EVElementType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVElementType toEnum(int retval) {
		if(retval == ET_JUNCTION.value){
			return ET_JUNCTION;
		}
		else if(retval == ET_EDGE.value){
			return ET_EDGE;
		}
		else if(retval == ET_TURN.value){
			return ET_TURN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVElementTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
