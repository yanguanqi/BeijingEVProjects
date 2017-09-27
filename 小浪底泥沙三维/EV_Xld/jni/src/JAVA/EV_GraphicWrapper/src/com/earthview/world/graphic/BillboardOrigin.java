package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum BillboardOrigin implements INativeEnum<BillboardOrigin> {
	BBO_TOP_LEFT(BillboardOriginHelper.ENUM_VALUES[0]),
	BBO_TOP_CENTER(BillboardOriginHelper.ENUM_VALUES[1]),
	BBO_TOP_RIGHT(BillboardOriginHelper.ENUM_VALUES[2]),
	BBO_CENTER_LEFT(BillboardOriginHelper.ENUM_VALUES[3]),
	BBO_CENTER(BillboardOriginHelper.ENUM_VALUES[4]),
	BBO_CENTER_RIGHT(BillboardOriginHelper.ENUM_VALUES[5]),
	BBO_BOTTOM_LEFT(BillboardOriginHelper.ENUM_VALUES[6]),
	BBO_BOTTOM_CENTER(BillboardOriginHelper.ENUM_VALUES[7]),
	BBO_BOTTOM_RIGHT(BillboardOriginHelper.ENUM_VALUES[8]);
	private int value;
	BillboardOrigin(int i) {
		this.value = i;
	}
	public BillboardOrigin getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final BillboardOrigin toEnum(int retval) {
		if(retval == BBO_TOP_LEFT.value){
			return BBO_TOP_LEFT;
		}
		else if(retval == BBO_TOP_CENTER.value){
			return BBO_TOP_CENTER;
		}
		else if(retval == BBO_TOP_RIGHT.value){
			return BBO_TOP_RIGHT;
		}
		else if(retval == BBO_CENTER_LEFT.value){
			return BBO_CENTER_LEFT;
		}
		else if(retval == BBO_CENTER.value){
			return BBO_CENTER;
		}
		else if(retval == BBO_CENTER_RIGHT.value){
			return BBO_CENTER_RIGHT;
		}
		else if(retval == BBO_BOTTOM_LEFT.value){
			return BBO_BOTTOM_LEFT;
		}
		else if(retval == BBO_BOTTOM_CENTER.value){
			return BBO_BOTTOM_CENTER;
		}
		else if(retval == BBO_BOTTOM_RIGHT.value){
			return BBO_BOTTOM_RIGHT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class BillboardOriginHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
