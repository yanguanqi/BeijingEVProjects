package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FilterOptions implements INativeEnum<FilterOptions> {
	FO_NONE(FilterOptionsHelper.ENUM_VALUES[0]),
	FO_POINT(FilterOptionsHelper.ENUM_VALUES[1]),
	FO_LINEAR(FilterOptionsHelper.ENUM_VALUES[2]),
	FO_ANISOTROPIC(FilterOptionsHelper.ENUM_VALUES[3]);
	private int value;
	FilterOptions(int i) {
		this.value = i;
	}
	public FilterOptions getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FilterOptions toEnum(int retval) {
		if(retval == FO_NONE.value){
			return FO_NONE;
		}
		else if(retval == FO_POINT.value){
			return FO_POINT;
		}
		else if(retval == FO_LINEAR.value){
			return FO_LINEAR;
		}
		else if(retval == FO_ANISOTROPIC.value){
			return FO_ANISOTROPIC;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FilterOptionsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
