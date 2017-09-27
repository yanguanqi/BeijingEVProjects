package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Skeleton compatibility versions
public enum SkeletonVersion implements INativeEnum<SkeletonVersion> {
	SKELETON_VERSION_1_0(SkeletonVersionHelper.ENUM_VALUES[0]),
	SKELETON_VERSION_1_8(SkeletonVersionHelper.ENUM_VALUES[1]),
	SKELETON_VERSION_LATEST(SkeletonVersionHelper.ENUM_VALUES[2]),
	SKELETON_VERSION_X_SPECIAL(SkeletonVersionHelper.ENUM_VALUES[3]);
	private int value;
	SkeletonVersion(int i) {
		this.value = i;
	}
	public SkeletonVersion getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SkeletonVersion toEnum(int retval) {
		if(retval == SKELETON_VERSION_1_0.value){
			return SKELETON_VERSION_1_0;
		}
		else if(retval == SKELETON_VERSION_1_8.value){
			return SKELETON_VERSION_1_8;
		}
		else if(retval == SKELETON_VERSION_LATEST.value){
			return SKELETON_VERSION_LATEST;
		}
		else if(retval == SKELETON_VERSION_X_SPECIAL.value){
			return SKELETON_VERSION_X_SPECIAL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SkeletonVersionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
