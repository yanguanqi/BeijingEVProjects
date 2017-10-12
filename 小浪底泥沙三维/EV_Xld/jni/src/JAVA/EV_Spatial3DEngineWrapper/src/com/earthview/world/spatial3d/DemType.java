package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum DemType implements INativeEnum<DemType> {
	LocalImage(DemTypeHelper.ENUM_VALUES[0]),
	CacheImage(DemTypeHelper.ENUM_VALUES[1]);
	private int value;
	DemType(int i) {
		this.value = i;
	}
	public DemType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final DemType toEnum(int retval) {
		if(retval == LocalImage.value){
			return LocalImage;
		}
		else if(retval == CacheImage.value){
			return CacheImage;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class DemTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
