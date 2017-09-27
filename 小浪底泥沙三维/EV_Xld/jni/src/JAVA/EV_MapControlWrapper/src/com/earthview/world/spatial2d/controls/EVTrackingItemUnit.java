package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVTrackingItemUnit implements INativeEnum<EVTrackingItemUnit> {
	TIU_MapUnit(EVTrackingItemUnitHelper.ENUM_VALUES[0]),
	TIU_PixelUnit(EVTrackingItemUnitHelper.ENUM_VALUES[1]);
	private int value;
	EVTrackingItemUnit(int i) {
		this.value = i;
	}
	public EVTrackingItemUnit getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTrackingItemUnit toEnum(int retval) {
		if(retval == TIU_MapUnit.value){
			return TIU_MapUnit;
		}
		else if(retval == TIU_PixelUnit.value){
			return TIU_PixelUnit;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTrackingItemUnitHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
