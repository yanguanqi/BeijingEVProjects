package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum CacheBaseType implements INativeEnum<CacheBaseType> {
	CBT_UnKnow(CacheBaseTypeHelper.ENUM_VALUES[0]),
	CBT_Location(CacheBaseTypeHelper.ENUM_VALUES[1]),
	CBT_VaildTime(CacheBaseTypeHelper.ENUM_VALUES[2]);
	private int value;
	CacheBaseType(int i) {
		this.value = i;
	}
	public CacheBaseType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CacheBaseType toEnum(int retval) {
		if(retval == CBT_UnKnow.value){
			return CBT_UnKnow;
		}
		else if(retval == CBT_Location.value){
			return CBT_Location;
		}
		else if(retval == CBT_VaildTime.value){
			return CBT_VaildTime;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CacheBaseTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
