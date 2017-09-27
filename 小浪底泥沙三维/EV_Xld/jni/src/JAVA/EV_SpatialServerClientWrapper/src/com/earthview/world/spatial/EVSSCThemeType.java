package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EarthView服务支持的专题图类型
 */
public enum EVSSCThemeType implements INativeEnum<EVSSCThemeType> {
	SSC_ThemeType_Unknown(EVSSCThemeTypeHelper.ENUM_VALUES[0]),
	SSC_ThemeType_Unique(EVSSCThemeTypeHelper.ENUM_VALUES[1]),
	SSC_ThemeType_Range(EVSSCThemeTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVSSCThemeType(int i) {
		this.value = i;
	}
	public EVSSCThemeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSSCThemeType toEnum(int retval) {
		if(retval == SSC_ThemeType_Unknown.value){
			return SSC_ThemeType_Unknown;
		}
		else if(retval == SSC_ThemeType_Unique.value){
			return SSC_ThemeType_Unique;
		}
		else if(retval == SSC_ThemeType_Range.value){
			return SSC_ThemeType_Range;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSSCThemeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
