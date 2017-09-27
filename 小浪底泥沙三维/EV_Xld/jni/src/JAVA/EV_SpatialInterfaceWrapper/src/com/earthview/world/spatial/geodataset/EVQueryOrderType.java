package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVQueryOrderType implements INativeEnum<EVQueryOrderType> {
	QOT_UNKNOWN(EVQueryOrderTypeHelper.ENUM_VALUES[0]);
	private int value;
	EVQueryOrderType(int i) {
		this.value = i;
	}
	public EVQueryOrderType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVQueryOrderType toEnum(int retval) {
		if(retval == QOT_UNKNOWN.value){
			return QOT_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVQueryOrderTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
