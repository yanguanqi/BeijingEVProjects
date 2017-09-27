package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ManualCullingMode implements INativeEnum<ManualCullingMode> {
	MANUAL_CULL_NONE(ManualCullingModeHelper.ENUM_VALUES[0]),
	MANUAL_CULL_BACK(ManualCullingModeHelper.ENUM_VALUES[1]),
	MANUAL_CULL_FRONT(ManualCullingModeHelper.ENUM_VALUES[2]);
	private int value;
	ManualCullingMode(int i) {
		this.value = i;
	}
	public ManualCullingMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ManualCullingMode toEnum(int retval) {
		if(retval == MANUAL_CULL_NONE.value){
			return MANUAL_CULL_NONE;
		}
		else if(retval == MANUAL_CULL_BACK.value){
			return MANUAL_CULL_BACK;
		}
		else if(retval == MANUAL_CULL_FRONT.value){
			return MANUAL_CULL_FRONT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ManualCullingModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
