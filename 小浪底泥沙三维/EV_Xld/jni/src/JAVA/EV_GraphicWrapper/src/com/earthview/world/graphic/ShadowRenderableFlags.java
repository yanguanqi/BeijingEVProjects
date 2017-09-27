package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ShadowRenderableFlags implements INativeEnum<ShadowRenderableFlags> {
	SRF_INCLUDE_LIGHT_CAP(ShadowRenderableFlagsHelper.ENUM_VALUES[0]),
	SRF_INCLUDE_DARK_CAP(ShadowRenderableFlagsHelper.ENUM_VALUES[1]),
	SRF_EXTRUDE_TO_INFINITY(ShadowRenderableFlagsHelper.ENUM_VALUES[2]);
	private int value;
	ShadowRenderableFlags(int i) {
		this.value = i;
	}
	public ShadowRenderableFlags getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ShadowRenderableFlags toEnum(int retval) {
		if(retval == SRF_INCLUDE_LIGHT_CAP.value){
			return SRF_INCLUDE_LIGHT_CAP;
		}
		else if(retval == SRF_INCLUDE_DARK_CAP.value){
			return SRF_INCLUDE_DARK_CAP;
		}
		else if(retval == SRF_EXTRUDE_TO_INFINITY.value){
			return SRF_EXTRUDE_TO_INFINITY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ShadowRenderableFlagsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
