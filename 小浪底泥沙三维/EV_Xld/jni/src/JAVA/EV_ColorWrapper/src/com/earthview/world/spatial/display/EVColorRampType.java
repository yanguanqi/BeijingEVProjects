package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVColorRampType implements INativeEnum<EVColorRampType> {
	CRT_COLORRAMPTYPEGRADIENT(EVColorRampTypeHelper.ENUM_VALUES[0]),
	CRT_COLORRAMPRANDOM(EVColorRampTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVColorRampType(int i) {
		this.value = i;
	}
	public EVColorRampType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVColorRampType toEnum(int retval) {
		if(retval == CRT_COLORRAMPTYPEGRADIENT.value){
			return CRT_COLORRAMPTYPEGRADIENT;
		}
		else if(retval == CRT_COLORRAMPRANDOM.value){
			return CRT_COLORRAMPRANDOM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVColorRampTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
