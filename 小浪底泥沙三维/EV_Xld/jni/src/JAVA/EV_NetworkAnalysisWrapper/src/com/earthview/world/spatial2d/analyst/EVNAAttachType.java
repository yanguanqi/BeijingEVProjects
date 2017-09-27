package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 停靠点寻找边上已有点中最近的
 */
public enum EVNAAttachType implements INativeEnum<EVNAAttachType> {
	NAAT_None(EVNAAttachTypeHelper.ENUM_VALUES[0]),
	NAAT_Selected(EVNAAttachTypeHelper.ENUM_VALUES[1]),
	NAAT_Locked(EVNAAttachTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVNAAttachType(int i) {
		this.value = i;
	}
	public EVNAAttachType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVNAAttachType toEnum(int retval) {
		if(retval == NAAT_None.value){
			return NAAT_None;
		}
		else if(retval == NAAT_Selected.value){
			return NAAT_Selected;
		}
		else if(retval == NAAT_Locked.value){
			return NAAT_Locked;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVNAAttachTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
