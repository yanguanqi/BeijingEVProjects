package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///0x4,
public enum SortMode implements INativeEnum<SortMode> {
	SM_DIRECTION(SortModeHelper.ENUM_VALUES[0]),
	SM_DISTANCE(SortModeHelper.ENUM_VALUES[1]);
	private int value;
	SortMode(int i) {
		this.value = i;
	}
	public SortMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SortMode toEnum(int retval) {
		if(retval == SM_DIRECTION.value){
			return SM_DIRECTION;
		}
		else if(retval == SM_DISTANCE.value){
			return SM_DISTANCE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SortModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
