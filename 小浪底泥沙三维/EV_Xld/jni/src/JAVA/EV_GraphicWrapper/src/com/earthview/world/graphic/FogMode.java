package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FogMode implements INativeEnum<FogMode> {
	FOG_NONE(FogModeHelper.ENUM_VALUES[0]),
	FOG_EXP(FogModeHelper.ENUM_VALUES[1]),
	FOG_EXP2(FogModeHelper.ENUM_VALUES[2]),
	FOG_LINEAR(FogModeHelper.ENUM_VALUES[3]);
	private int value;
	FogMode(int i) {
		this.value = i;
	}
	public FogMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FogMode toEnum(int retval) {
		if(retval == FOG_NONE.value){
			return FOG_NONE;
		}
		else if(retval == FOG_EXP.value){
			return FOG_EXP;
		}
		else if(retval == FOG_EXP2.value){
			return FOG_EXP2;
		}
		else if(retval == FOG_LINEAR.value){
			return FOG_LINEAR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FogModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
