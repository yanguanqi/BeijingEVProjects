package com.earthview.world.spatial.kml;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 半球的渲染模式
 */
public enum HalfsPhereRenderMode implements INativeEnum<HalfsPhereRenderMode> {
	HPRM_WIREFRAME(HalfsPhereRenderModeHelper.ENUM_VALUES[0]),
	HPRM_SOLID(HalfsPhereRenderModeHelper.ENUM_VALUES[1]);
	private int value;
	HalfsPhereRenderMode(int i) {
		this.value = i;
	}
	public HalfsPhereRenderMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final HalfsPhereRenderMode toEnum(int retval) {
		if(retval == HPRM_WIREFRAME.value){
			return HPRM_WIREFRAME;
		}
		else if(retval == HPRM_SOLID.value){
			return HPRM_SOLID;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class HalfsPhereRenderModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
