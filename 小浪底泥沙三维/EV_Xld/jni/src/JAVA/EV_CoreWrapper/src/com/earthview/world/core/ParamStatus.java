package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum ParamStatus implements INativeEnum<ParamStatus> {
	PS_HIDDEN(ParamStatusHelper.ENUM_VALUES[0]),
	PS_DISABLED(ParamStatusHelper.ENUM_VALUES[1]),
	PS_READWRITE(ParamStatusHelper.ENUM_VALUES[2]);
	private int value;
	ParamStatus(int i) {
		this.value = i;
	}
	public ParamStatus getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ParamStatus toEnum(int retval) {
		if(retval == PS_HIDDEN.value){
			return PS_HIDDEN;
		}
		else if(retval == PS_DISABLED.value){
			return PS_DISABLED;
		}
		else if(retval == PS_READWRITE.value){
			return PS_READWRITE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ParamStatusHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
