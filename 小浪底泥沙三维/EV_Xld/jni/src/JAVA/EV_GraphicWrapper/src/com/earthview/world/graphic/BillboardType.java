package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Rotate the billboard's texture coordinates
public enum BillboardType implements INativeEnum<BillboardType> {
	BBT_POINT(BillboardTypeHelper.ENUM_VALUES[0]),
	BBT_ORIENTED_COMMON(BillboardTypeHelper.ENUM_VALUES[1]),
	BBT_ORIENTED_SELF(BillboardTypeHelper.ENUM_VALUES[2]),
	BBT_PERPENDICULAR_COMMON(BillboardTypeHelper.ENUM_VALUES[3]),
	BBT_PERPENDICULAR_SELF(BillboardTypeHelper.ENUM_VALUES[4]);
	private int value;
	BillboardType(int i) {
		this.value = i;
	}
	public BillboardType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final BillboardType toEnum(int retval) {
		if(retval == BBT_POINT.value){
			return BBT_POINT;
		}
		else if(retval == BBT_ORIENTED_COMMON.value){
			return BBT_ORIENTED_COMMON;
		}
		else if(retval == BBT_ORIENTED_SELF.value){
			return BBT_ORIENTED_SELF;
		}
		else if(retval == BBT_PERPENDICULAR_COMMON.value){
			return BBT_PERPENDICULAR_COMMON;
		}
		else if(retval == BBT_PERPENDICULAR_SELF.value){
			return BBT_PERPENDICULAR_SELF;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class BillboardTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
