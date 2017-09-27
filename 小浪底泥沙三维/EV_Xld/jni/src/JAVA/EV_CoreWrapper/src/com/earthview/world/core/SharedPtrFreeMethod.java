package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

//// The method to use to free memory on destruction
public enum SharedPtrFreeMethod implements INativeEnum<SharedPtrFreeMethod> {
	SPFM_DELETE(SharedPtrFreeMethodHelper.ENUM_VALUES[0]),
	SPFM_DELETE_T(SharedPtrFreeMethodHelper.ENUM_VALUES[1]),
	SPFM_FREE(SharedPtrFreeMethodHelper.ENUM_VALUES[2]);
	private int value;
	SharedPtrFreeMethod(int i) {
		this.value = i;
	}
	public SharedPtrFreeMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SharedPtrFreeMethod toEnum(int retval) {
		if(retval == SPFM_DELETE.value){
			return SPFM_DELETE;
		}
		else if(retval == SPFM_DELETE_T.value){
			return SPFM_DELETE_T;
		}
		else if(retval == SPFM_FREE.value){
			return SPFM_FREE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SharedPtrFreeMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
