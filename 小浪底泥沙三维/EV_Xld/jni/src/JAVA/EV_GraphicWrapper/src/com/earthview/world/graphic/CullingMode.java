package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum CullingMode implements INativeEnum<CullingMode> {
	CULL_NONE(CullingModeHelper.ENUM_VALUES[0]),
	CULL_CLOCKWISE(CullingModeHelper.ENUM_VALUES[1]),
	CULL_ANTICLOCKWISE(CullingModeHelper.ENUM_VALUES[2]);
	private int value;
	CullingMode(int i) {
		this.value = i;
	}
	public CullingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CullingMode toEnum(int retval) {
		if(retval == CULL_NONE.value){
			return CULL_NONE;
		}
		else if(retval == CULL_CLOCKWISE.value){
			return CULL_CLOCKWISE;
		}
		else if(retval == CULL_ANTICLOCKWISE.value){
			return CULL_ANTICLOCKWISE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CullingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
