package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：文件打开模式
///创建时间：2012.2.13
///作者：邹先涛
public enum FILEMODE implements INativeEnum<FILEMODE> {
	READ_MODE(FILEMODEHelper.ENUM_VALUES[0]),
	WRITE_MODE(FILEMODEHelper.ENUM_VALUES[1]),
	APPEND_MODE(FILEMODEHelper.ENUM_VALUES[2]),
	BINARY_READ_MODE(FILEMODEHelper.ENUM_VALUES[3]),
	BINARY_WRITE_MODE(FILEMODEHelper.ENUM_VALUES[4]),
	BINARYE_APPEND_MODE(FILEMODEHelper.ENUM_VALUES[5]);
	private int value;
	FILEMODE(int i) {
		this.value = i;
	}
	public FILEMODE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FILEMODE toEnum(int retval) {
		if(retval == READ_MODE.value){
			return READ_MODE;
		}
		else if(retval == WRITE_MODE.value){
			return WRITE_MODE;
		}
		else if(retval == APPEND_MODE.value){
			return APPEND_MODE;
		}
		else if(retval == BINARY_READ_MODE.value){
			return BINARY_READ_MODE;
		}
		else if(retval == BINARY_WRITE_MODE.value){
			return BINARY_WRITE_MODE;
		}
		else if(retval == BINARYE_APPEND_MODE.value){
			return BINARYE_APPEND_MODE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FILEMODEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
