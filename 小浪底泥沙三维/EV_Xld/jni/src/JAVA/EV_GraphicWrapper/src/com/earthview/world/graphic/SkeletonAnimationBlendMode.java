package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SkeletonAnimationBlendMode implements INativeEnum<SkeletonAnimationBlendMode> {
	ANIMBLEND_AVERAGE(SkeletonAnimationBlendModeHelper.ENUM_VALUES[0]),
	ANIMBLEND_CUMULATIVE(SkeletonAnimationBlendModeHelper.ENUM_VALUES[1]);
	private int value;
	SkeletonAnimationBlendMode(int i) {
		this.value = i;
	}
	public SkeletonAnimationBlendMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SkeletonAnimationBlendMode toEnum(int retval) {
		if(retval == ANIMBLEND_AVERAGE.value){
			return ANIMBLEND_AVERAGE;
		}
		else if(retval == ANIMBLEND_CUMULATIVE.value){
			return ANIMBLEND_CUMULATIVE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SkeletonAnimationBlendModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
