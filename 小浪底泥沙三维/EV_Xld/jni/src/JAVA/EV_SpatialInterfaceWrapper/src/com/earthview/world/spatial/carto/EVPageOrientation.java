package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 纸张方向
 */
public enum EVPageOrientation implements INativeEnum<EVPageOrientation> {
	PO_Portrait(EVPageOrientationHelper.ENUM_VALUES[0]),
	PO_Landscape(EVPageOrientationHelper.ENUM_VALUES[1]);
	private int value;
	EVPageOrientation(int i) {
		this.value = i;
	}
	public EVPageOrientation getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVPageOrientation toEnum(int retval) {
		if(retval == PO_Portrait.value){
			return PO_Portrait;
		}
		else if(retval == PO_Landscape.value){
			return PO_Landscape;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVPageOrientationHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
