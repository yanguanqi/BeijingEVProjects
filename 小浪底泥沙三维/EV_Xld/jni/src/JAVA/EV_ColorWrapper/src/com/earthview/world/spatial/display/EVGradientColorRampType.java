package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渐进色色带类型
 */
public enum EVGradientColorRampType implements INativeEnum<EVGradientColorRampType> {
	GCRT_GRADIENTCOLORRAMPRGB(EVGradientColorRampTypeHelper.ENUM_VALUES[0]),
	GCRT_GRADIENTCOLORRAMPHSV(EVGradientColorRampTypeHelper.ENUM_VALUES[1]),
	GCRT_GRADIENTCOLORRAMPLAB(EVGradientColorRampTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVGradientColorRampType(int i) {
		this.value = i;
	}
	public EVGradientColorRampType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGradientColorRampType toEnum(int retval) {
		if(retval == GCRT_GRADIENTCOLORRAMPRGB.value){
			return GCRT_GRADIENTCOLORRAMPRGB;
		}
		else if(retval == GCRT_GRADIENTCOLORRAMPHSV.value){
			return GCRT_GRADIENTCOLORRAMPHSV;
		}
		else if(retval == GCRT_GRADIENTCOLORRAMPLAB.value){
			return GCRT_GRADIENTCOLORRAMPLAB;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGradientColorRampTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
