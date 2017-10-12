package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum LasRequestType implements INativeEnum<LasRequestType> {
	LasRT_NoMERGE(LasRequestTypeHelper.ENUM_VALUES[0]),
	LasRT_ToMERGE(LasRequestTypeHelper.ENUM_VALUES[1]);
	private int value;
	LasRequestType(int i) {
		this.value = i;
	}
	public LasRequestType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LasRequestType toEnum(int retval) {
		if(retval == LasRT_NoMERGE.value){
			return LasRT_NoMERGE;
		}
		else if(retval == LasRT_ToMERGE.value){
			return LasRT_ToMERGE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LasRequestTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
