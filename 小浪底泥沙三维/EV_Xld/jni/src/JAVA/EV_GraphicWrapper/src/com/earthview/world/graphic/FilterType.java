package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FilterType implements INativeEnum<FilterType> {
	FT_MIN(FilterTypeHelper.ENUM_VALUES[0]),
	FT_MAG(FilterTypeHelper.ENUM_VALUES[1]),
	FT_MIP(FilterTypeHelper.ENUM_VALUES[2]);
	private int value;
	FilterType(int i) {
		this.value = i;
	}
	public FilterType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FilterType toEnum(int retval) {
		if(retval == FT_MIN.value){
			return FT_MIN;
		}
		else if(retval == FT_MAG.value){
			return FT_MAG;
		}
		else if(retval == FT_MIP.value){
			return FT_MIP;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FilterTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
