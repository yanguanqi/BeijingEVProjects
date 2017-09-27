package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 颜色显示模式
 */
public enum EVChartColorType implements INativeEnum<EVChartColorType> {
	CCT_DAY_BRIGHT(EVChartColorTypeHelper.ENUM_VALUES[0]),
	CCT_DAY_BLACKBACK(EVChartColorTypeHelper.ENUM_VALUES[1]),
	CCT_DAY_WHITEBACK(EVChartColorTypeHelper.ENUM_VALUES[2]),
	CCT_DAY_DUSK(EVChartColorTypeHelper.ENUM_VALUES[3]),
	CCT_DAY_NIGHT(EVChartColorTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVChartColorType(int i) {
		this.value = i;
	}
	public EVChartColorType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartColorType toEnum(int retval) {
		if(retval == CCT_DAY_BRIGHT.value){
			return CCT_DAY_BRIGHT;
		}
		else if(retval == CCT_DAY_BLACKBACK.value){
			return CCT_DAY_BLACKBACK;
		}
		else if(retval == CCT_DAY_WHITEBACK.value){
			return CCT_DAY_WHITEBACK;
		}
		else if(retval == CCT_DAY_DUSK.value){
			return CCT_DAY_DUSK;
		}
		else if(retval == CCT_DAY_NIGHT.value){
			return CCT_DAY_NIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartColorTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
