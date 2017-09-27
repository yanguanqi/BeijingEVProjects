package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：内存映射文件访问权限
///创建时间：2012.2.13
///作者：邹先涛
public enum FILEACCESS implements INativeEnum<FILEACCESS> {
	READ_ACCESS(FILEACCESSHelper.ENUM_VALUES[0]),
	READWRITE_ACCESS(FILEACCESSHelper.ENUM_VALUES[1]);
	private int value;
	FILEACCESS(int i) {
		this.value = i;
	}
	public FILEACCESS getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FILEACCESS toEnum(int retval) {
		if(retval == READ_ACCESS.value){
			return READ_ACCESS;
		}
		else if(retval == READWRITE_ACCESS.value){
			return READWRITE_ACCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FILEACCESSHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
