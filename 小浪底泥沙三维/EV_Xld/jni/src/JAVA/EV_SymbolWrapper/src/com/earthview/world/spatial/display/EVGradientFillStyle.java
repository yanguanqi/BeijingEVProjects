package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 渐进色填充类型
 */
public enum EVGradientFillStyle implements INativeEnum<EVGradientFillStyle> {
	GFS_GradientFillStyle_Linear(EVGradientFillStyleHelper.ENUM_VALUES[0]),
	GFS_GradientFillStyle_Rectangular(EVGradientFillStyleHelper.ENUM_VALUES[1]),
	GFS_GradientFillStyle_Circular(EVGradientFillStyleHelper.ENUM_VALUES[2]),
	GFS_GradientFillStyle_Buffered(EVGradientFillStyleHelper.ENUM_VALUES[3]);
	private int value;
	EVGradientFillStyle(int i) {
		this.value = i;
	}
	public EVGradientFillStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVGradientFillStyle toEnum(int retval) {
		if(retval == GFS_GradientFillStyle_Linear.value){
			return GFS_GradientFillStyle_Linear;
		}
		else if(retval == GFS_GradientFillStyle_Rectangular.value){
			return GFS_GradientFillStyle_Rectangular;
		}
		else if(retval == GFS_GradientFillStyle_Circular.value){
			return GFS_GradientFillStyle_Circular;
		}
		else if(retval == GFS_GradientFillStyle_Buffered.value){
			return GFS_GradientFillStyle_Buffered;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVGradientFillStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
