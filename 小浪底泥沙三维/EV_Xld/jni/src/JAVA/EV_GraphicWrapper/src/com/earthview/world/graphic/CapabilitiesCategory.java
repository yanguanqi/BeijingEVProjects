package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///枚举了性能的种类
public enum CapabilitiesCategory implements INativeEnum<CapabilitiesCategory> {
	CAPS_CATEGORY_COMMON(CapabilitiesCategoryHelper.ENUM_VALUES[0]),
	CAPS_CATEGORY_COMMON_2(CapabilitiesCategoryHelper.ENUM_VALUES[1]),
	CAPS_CATEGORY_D3D9(CapabilitiesCategoryHelper.ENUM_VALUES[2]),
	CAPS_CATEGORY_GL(CapabilitiesCategoryHelper.ENUM_VALUES[3]),
	CAPS_CATEGORY_COUNT(CapabilitiesCategoryHelper.ENUM_VALUES[4]);
	private int value;
	CapabilitiesCategory(int i) {
		this.value = i;
	}
	public CapabilitiesCategory getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CapabilitiesCategory toEnum(int retval) {
		if(retval == CAPS_CATEGORY_COMMON.value){
			return CAPS_CATEGORY_COMMON;
		}
		else if(retval == CAPS_CATEGORY_COMMON_2.value){
			return CAPS_CATEGORY_COMMON_2;
		}
		else if(retval == CAPS_CATEGORY_D3D9.value){
			return CAPS_CATEGORY_D3D9;
		}
		else if(retval == CAPS_CATEGORY_GL.value){
			return CAPS_CATEGORY_GL;
		}
		else if(retval == CAPS_CATEGORY_COUNT.value){
			return CAPS_CATEGORY_COUNT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CapabilitiesCategoryHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
