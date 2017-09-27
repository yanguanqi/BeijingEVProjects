package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVPieSizePolicy implements INativeEnum<EVPieSizePolicy> {
	PSP_FixSize(EVPieSizePolicyHelper.ENUM_VALUES[0]),
	PSP_AdaptToSum(EVPieSizePolicyHelper.ENUM_VALUES[1]),
	PSP_AdaptToField(EVPieSizePolicyHelper.ENUM_VALUES[2]);
	private int value;
	EVPieSizePolicy(int i) {
		this.value = i;
	}
	public EVPieSizePolicy getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPieSizePolicy toEnum(int retval) {
		if(retval == PSP_FixSize.value){
			return PSP_FixSize;
		}
		else if(retval == PSP_AdaptToSum.value){
			return PSP_AdaptToSum;
		}
		else if(retval == PSP_AdaptToField.value){
			return PSP_AdaptToField;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPieSizePolicyHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
