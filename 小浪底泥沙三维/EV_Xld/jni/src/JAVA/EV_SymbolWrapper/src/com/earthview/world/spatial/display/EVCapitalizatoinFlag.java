package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 文本大小写
 */
public enum EVCapitalizatoinFlag implements INativeEnum<EVCapitalizatoinFlag> {
	CF_MixedCase(EVCapitalizatoinFlagHelper.ENUM_VALUES[0]),
	CF_AllUppercase(EVCapitalizatoinFlagHelper.ENUM_VALUES[1]),
	CF_AllLowercase(EVCapitalizatoinFlagHelper.ENUM_VALUES[2]),
	CF_SmallCaps(EVCapitalizatoinFlagHelper.ENUM_VALUES[3]),
	CF_Capitalize(EVCapitalizatoinFlagHelper.ENUM_VALUES[4]);
	private int value;
	EVCapitalizatoinFlag(int i) {
		this.value = i;
	}
	public EVCapitalizatoinFlag getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCapitalizatoinFlag toEnum(int retval) {
		if(retval == CF_MixedCase.value){
			return CF_MixedCase;
		}
		else if(retval == CF_AllUppercase.value){
			return CF_AllUppercase;
		}
		else if(retval == CF_AllLowercase.value){
			return CF_AllLowercase;
		}
		else if(retval == CF_SmallCaps.value){
			return CF_SmallCaps;
		}
		else if(retval == CF_Capitalize.value){
			return CF_Capitalize;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCapitalizatoinFlagHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
