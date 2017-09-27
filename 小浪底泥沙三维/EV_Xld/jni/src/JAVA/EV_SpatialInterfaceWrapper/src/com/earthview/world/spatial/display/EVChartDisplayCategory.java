package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 海图显示类
 */
public enum EVChartDisplayCategory implements INativeEnum<EVChartDisplayCategory> {
	CDC_Unknown(EVChartDisplayCategoryHelper.ENUM_VALUES[0]),
	CDC_Base(EVChartDisplayCategoryHelper.ENUM_VALUES[1]),
	CDC_Standard(EVChartDisplayCategoryHelper.ENUM_VALUES[2]),
	CDC_Other(EVChartDisplayCategoryHelper.ENUM_VALUES[3]);
	private int value;
	EVChartDisplayCategory(int i) {
		this.value = i;
	}
	public EVChartDisplayCategory getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartDisplayCategory toEnum(int retval) {
		if(retval == CDC_Unknown.value){
			return CDC_Unknown;
		}
		else if(retval == CDC_Base.value){
			return CDC_Base;
		}
		else if(retval == CDC_Standard.value){
			return CDC_Standard;
		}
		else if(retval == CDC_Other.value){
			return CDC_Other;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartDisplayCategoryHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
