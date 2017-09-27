package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 高度测量方式
 */
public enum HeightCalcuStyle implements INativeEnum<HeightCalcuStyle> {
	HCS_Difference(HeightCalcuStyleHelper.ENUM_VALUES[0]),
	HCS_Vertical(HeightCalcuStyleHelper.ENUM_VALUES[1]);
	private int value;
	HeightCalcuStyle(int i) {
		this.value = i;
	}
	public HeightCalcuStyle getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final HeightCalcuStyle toEnum(int retval) {
		if(retval == HCS_Difference.value){
			return HCS_Difference;
		}
		else if(retval == HCS_Vertical.value){
			return HCS_Vertical;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class HeightCalcuStyleHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
