package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum BindedState implements INativeEnum<BindedState> {
	BDST_UnBind(BindedStateHelper.ENUM_VALUES[0]),
	BDST_BindedAtSubEntity(BindedStateHelper.ENUM_VALUES[1]),
	BDST_BindedAtBone(BindedStateHelper.ENUM_VALUES[2]),
	BDST_BindedAtNode(BindedStateHelper.ENUM_VALUES[3]);
	private int value;
	BindedState(int i) {
		this.value = i;
	}
	public BindedState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final BindedState toEnum(int retval) {
		if(retval == BDST_UnBind.value){
			return BDST_UnBind;
		}
		else if(retval == BDST_BindedAtSubEntity.value){
			return BDST_BindedAtSubEntity;
		}
		else if(retval == BDST_BindedAtBone.value){
			return BDST_BindedAtBone;
		}
		else if(retval == BDST_BindedAtNode.value){
			return BDST_BindedAtNode;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class BindedStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
