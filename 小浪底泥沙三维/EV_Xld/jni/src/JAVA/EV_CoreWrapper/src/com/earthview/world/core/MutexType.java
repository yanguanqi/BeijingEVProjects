package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public enum MutexType implements INativeEnum<MutexType> {
	Mutex_Normal(MutexTypeHelper.ENUM_VALUES[0]),
	Mutex_Recursive(MutexTypeHelper.ENUM_VALUES[1]);
	private int value;
	MutexType(int i) {
		this.value = i;
	}
	public MutexType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MutexType toEnum(int retval) {
		if(retval == Mutex_Normal.value){
			return Mutex_Normal;
		}
		else if(retval == Mutex_Recursive.value){
			return Mutex_Recursive;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MutexTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
