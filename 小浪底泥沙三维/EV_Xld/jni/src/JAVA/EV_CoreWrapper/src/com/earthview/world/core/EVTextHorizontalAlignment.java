package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 文本水平停靠方式
 */
public enum EVTextHorizontalAlignment implements INativeEnum<EVTextHorizontalAlignment> {
	THA_Left(EVTextHorizontalAlignmentHelper.ENUM_VALUES[0]),
	THA_Right(EVTextHorizontalAlignmentHelper.ENUM_VALUES[1]),
	THA_HCenter(EVTextHorizontalAlignmentHelper.ENUM_VALUES[2]);
	private int value;
	EVTextHorizontalAlignment(int i) {
		this.value = i;
	}
	public EVTextHorizontalAlignment getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTextHorizontalAlignment toEnum(int retval) {
		if(retval == THA_Left.value){
			return THA_Left;
		}
		else if(retval == THA_Right.value){
			return THA_Right;
		}
		else if(retval == THA_HCenter.value){
			return THA_HCenter;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTextHorizontalAlignmentHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
