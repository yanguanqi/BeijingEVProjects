package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVIconAnchorType implements INativeEnum<EVIconAnchorType> {
	IAT_Pixels(EVIconAnchorTypeHelper.ENUM_VALUES[0]),
	IAT_Fraction(EVIconAnchorTypeHelper.ENUM_VALUES[1]),
	IAT_InsetPixels(EVIconAnchorTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVIconAnchorType(int i) {
		this.value = i;
	}
	public EVIconAnchorType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVIconAnchorType toEnum(int retval) {
		if(retval == IAT_Pixels.value){
			return IAT_Pixels;
		}
		else if(retval == IAT_Fraction.value){
			return IAT_Fraction;
		}
		else if(retval == IAT_InsetPixels.value){
			return IAT_InsetPixels;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVIconAnchorTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
