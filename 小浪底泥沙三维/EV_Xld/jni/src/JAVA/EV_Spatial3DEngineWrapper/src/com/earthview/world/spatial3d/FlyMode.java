package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum FlyMode implements INativeEnum<FlyMode> {
	FirstPersonMode(FlyModeHelper.ENUM_VALUES[0]),
	ThirdPersonMode(FlyModeHelper.ENUM_VALUES[1]),
	AnimationMode(FlyModeHelper.ENUM_VALUES[2]);
	private int value;
	FlyMode(int i) {
		this.value = i;
	}
	public FlyMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FlyMode toEnum(int retval) {
		if(retval == FirstPersonMode.value){
			return FirstPersonMode;
		}
		else if(retval == ThirdPersonMode.value){
			return ThirdPersonMode;
		}
		else if(retval == AnimationMode.value){
			return AnimationMode;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FlyModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
