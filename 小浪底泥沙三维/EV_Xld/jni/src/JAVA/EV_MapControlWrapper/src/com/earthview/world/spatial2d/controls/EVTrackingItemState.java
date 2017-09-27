package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///矩形
public enum EVTrackingItemState implements INativeEnum<EVTrackingItemState> {
	TIS_None(EVTrackingItemStateHelper.ENUM_VALUES[0]),
	TIS_MouseOver(EVTrackingItemStateHelper.ENUM_VALUES[1]),
	TIS_Selected(EVTrackingItemStateHelper.ENUM_VALUES[2]);
	private int value;
	EVTrackingItemState(int i) {
		this.value = i;
	}
	public EVTrackingItemState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemState toEnum(int retval) {
		if(retval == TIS_None.value){
			return TIS_None;
		}
		else if(retval == TIS_MouseOver.value){
			return TIS_MouseOver;
		}
		else if(retval == TIS_Selected.value){
			return TIS_Selected;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
