package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据操作类的类型
 */
public enum EVChartOperatorType implements INativeEnum<EVChartOperatorType> {
	COT_Unknown(EVChartOperatorTypeHelper.ENUM_VALUES[0]),
	COT_File000(EVChartOperatorTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVChartOperatorType(int i) {
		this.value = i;
	}
	public EVChartOperatorType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartOperatorType toEnum(int retval) {
		if(retval == COT_Unknown.value){
			return COT_Unknown;
		}
		else if(retval == COT_File000.value){
			return COT_File000;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartOperatorTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
