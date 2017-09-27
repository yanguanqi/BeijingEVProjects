package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 降水强度枚举
 */
public enum EVPrecipitationStrength implements INativeEnum<EVPrecipitationStrength> {
	PS_DEFAULT(EVPrecipitationStrengthHelper.ENUM_VALUES[0]),
	PS_SMALL(EVPrecipitationStrengthHelper.ENUM_VALUES[1]),
	PS_MIDDLE(EVPrecipitationStrengthHelper.ENUM_VALUES[2]),
	PS_LARGE(EVPrecipitationStrengthHelper.ENUM_VALUES[3]),
	PS_STRONG(EVPrecipitationStrengthHelper.ENUM_VALUES[4]);
	private int value;
	EVPrecipitationStrength(int i) {
		this.value = i;
	}
	public EVPrecipitationStrength getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPrecipitationStrength toEnum(int retval) {
		if(retval == PS_DEFAULT.value){
			return PS_DEFAULT;
		}
		else if(retval == PS_SMALL.value){
			return PS_SMALL;
		}
		else if(retval == PS_MIDDLE.value){
			return PS_MIDDLE;
		}
		else if(retval == PS_LARGE.value){
			return PS_LARGE;
		}
		else if(retval == PS_STRONG.value){
			return PS_STRONG;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPrecipitationStrengthHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
