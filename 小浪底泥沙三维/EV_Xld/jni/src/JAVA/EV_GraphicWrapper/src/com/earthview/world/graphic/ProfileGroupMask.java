package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ProfileGroupMask implements INativeEnum<ProfileGroupMask> {
	PROF_USER_DEFAULT(ProfileGroupMaskHelper.ENUM_VALUES[0]),
	PROF_ALL(ProfileGroupMaskHelper.ENUM_VALUES[1]),
	PROF_GENERAL(ProfileGroupMaskHelper.ENUM_VALUES[2]),
	PROF_CULLING(ProfileGroupMaskHelper.ENUM_VALUES[3]),
	PROF_RENDERING(ProfileGroupMaskHelper.ENUM_VALUES[4]);
	private int value;
	ProfileGroupMask(int i) {
		this.value = i;
	}
	public ProfileGroupMask getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ProfileGroupMask toEnum(int retval) {
		if(retval == PROF_USER_DEFAULT.value){
			return PROF_USER_DEFAULT;
		}
		else if(retval == PROF_ALL.value){
			return PROF_ALL;
		}
		else if(retval == PROF_GENERAL.value){
			return PROF_GENERAL;
		}
		else if(retval == PROF_CULLING.value){
			return PROF_CULLING;
		}
		else if(retval == PROF_RENDERING.value){
			return PROF_RENDERING;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ProfileGroupMaskHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
