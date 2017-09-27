package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

/**
 * 文本垂直停靠方式
 */
public enum EVTextVerticalAlignment implements INativeEnum<EVTextVerticalAlignment> {
	TVA_Top(EVTextVerticalAlignmentHelper.ENUM_VALUES[0]),
	TVA_Bottom(EVTextVerticalAlignmentHelper.ENUM_VALUES[1]),
	TVA_VCenter(EVTextVerticalAlignmentHelper.ENUM_VALUES[2]);
	private int value;
	EVTextVerticalAlignment(int i) {
		this.value = i;
	}
	public EVTextVerticalAlignment getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTextVerticalAlignment toEnum(int retval) {
		if(retval == TVA_Top.value){
			return TVA_Top;
		}
		else if(retval == TVA_Bottom.value){
			return TVA_Bottom;
		}
		else if(retval == TVA_VCenter.value){
			return TVA_VCenter;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTextVerticalAlignmentHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
