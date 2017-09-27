package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum PolygonMode implements INativeEnum<PolygonMode> {
	PM_POINTS(PolygonModeHelper.ENUM_VALUES[0]),
	PM_WIREFRAME(PolygonModeHelper.ENUM_VALUES[1]),
	PM_SOLID(PolygonModeHelper.ENUM_VALUES[2]);
	private int value;
	PolygonMode(int i) {
		this.value = i;
	}
	public PolygonMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final PolygonMode toEnum(int retval) {
		if(retval == PM_POINTS.value){
			return PM_POINTS;
		}
		else if(retval == PM_WIREFRAME.value){
			return PM_WIREFRAME;
		}
		else if(retval == PM_SOLID.value){
			return PM_SOLID;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class PolygonModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
