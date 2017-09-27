package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：文件指针移动方向
///创建时间：2012.2.13
///作者：邹先涛
public enum FILEWAY implements INativeEnum<FILEWAY> {
	AT_BEGIN(FILEWAYHelper.ENUM_VALUES[0]),
	AT_END(FILEWAYHelper.ENUM_VALUES[1]),
	AT_CURRENT(FILEWAYHelper.ENUM_VALUES[2]);
	private int value;
	FILEWAY(int i) {
		this.value = i;
	}
	public FILEWAY getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FILEWAY toEnum(int retval) {
		if(retval == AT_BEGIN.value){
			return AT_BEGIN;
		}
		else if(retval == AT_END.value){
			return AT_END;
		}
		else if(retval == AT_CURRENT.value){
			return AT_CURRENT;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FILEWAYHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
