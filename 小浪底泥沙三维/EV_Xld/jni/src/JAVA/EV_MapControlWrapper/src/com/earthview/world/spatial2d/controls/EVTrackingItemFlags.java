package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 跟踪项标识
 */
public enum EVTrackingItemFlags implements INativeEnum<EVTrackingItemFlags> {
	TIF_NoFlag(EVTrackingItemFlagsHelper.ENUM_VALUES[0]),
	TIF_Selectable(EVTrackingItemFlagsHelper.ENUM_VALUES[1]),
	TIF_Hoverable(EVTrackingItemFlagsHelper.ENUM_VALUES[2]),
	TIF_Draggable(EVTrackingItemFlagsHelper.ENUM_VALUES[3]);
	private int value;
	EVTrackingItemFlags(int i) {
		this.value = i;
	}
	public EVTrackingItemFlags getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemFlags toEnum(int retval) {
		if(retval == TIF_NoFlag.value){
			return TIF_NoFlag;
		}
		else if(retval == TIF_Selectable.value){
			return TIF_Selectable;
		}
		else if(retval == TIF_Hoverable.value){
			return TIF_Hoverable;
		}
		else if(retval == TIF_Draggable.value){
			return TIF_Draggable;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemFlagsHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
