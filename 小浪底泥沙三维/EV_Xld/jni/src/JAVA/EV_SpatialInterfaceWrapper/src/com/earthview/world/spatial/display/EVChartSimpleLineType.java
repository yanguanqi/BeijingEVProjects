package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 简单线的类型
 */
public enum EVChartSimpleLineType implements INativeEnum<EVChartSimpleLineType> {
	EVChartSimpleLineTypeUnknown(EVChartSimpleLineTypeHelper.ENUM_VALUES[0]),
	EVChartSimpleLineTypeSold(EVChartSimpleLineTypeHelper.ENUM_VALUES[1]),
	EVChartSimpleLineTypeDash(EVChartSimpleLineTypeHelper.ENUM_VALUES[2]),
	EVChartSimpleLineTypeDott(EVChartSimpleLineTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVChartSimpleLineType(int i) {
		this.value = i;
	}
	public EVChartSimpleLineType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVChartSimpleLineType toEnum(int retval) {
		if(retval == EVChartSimpleLineTypeUnknown.value){
			return EVChartSimpleLineTypeUnknown;
		}
		else if(retval == EVChartSimpleLineTypeSold.value){
			return EVChartSimpleLineTypeSold;
		}
		else if(retval == EVChartSimpleLineTypeDash.value){
			return EVChartSimpleLineTypeDash;
		}
		else if(retval == EVChartSimpleLineTypeDott.value){
			return EVChartSimpleLineTypeDott;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVChartSimpleLineTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
