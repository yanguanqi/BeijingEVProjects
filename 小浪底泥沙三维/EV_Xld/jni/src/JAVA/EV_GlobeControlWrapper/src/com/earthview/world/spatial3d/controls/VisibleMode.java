package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum VisibleMode implements INativeEnum<VisibleMode> {
	ForceVisible(VisibleModeHelper.ENUM_VALUES[0]),
	ForceDisableVisible(VisibleModeHelper.ENUM_VALUES[1]),
	AutoVisible(VisibleModeHelper.ENUM_VALUES[2]);
	private int value;
	VisibleMode(int i) {
		this.value = i;
	}
	public VisibleMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final VisibleMode toEnum(int retval) {
		if(retval == ForceVisible.value){
			return ForceVisible;
		}
		else if(retval == ForceDisableVisible.value){
			return ForceDisableVisible;
		}
		else if(retval == AutoVisible.value){
			return AutoVisible;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class VisibleModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
