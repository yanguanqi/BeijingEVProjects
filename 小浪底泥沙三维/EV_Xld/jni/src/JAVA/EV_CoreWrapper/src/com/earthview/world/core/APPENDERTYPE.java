package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：输出终端类别
///创建时间：2012.2.13
///作者：邹先涛
public enum APPENDERTYPE implements INativeEnum<APPENDERTYPE> {
	CONSOLE(APPENDERTYPEHelper.ENUM_VALUES[0]),
	COMMONFILE(APPENDERTYPEHelper.ENUM_VALUES[1]),
	ROLLINGFILE(APPENDERTYPEHelper.ENUM_VALUES[2]),
	DAILYROLLINGFILE(APPENDERTYPEHelper.ENUM_VALUES[3]),
	REMOTE(APPENDERTYPEHelper.ENUM_VALUES[4]);
	private int value;
	APPENDERTYPE(int i) {
		this.value = i;
	}
	public APPENDERTYPE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final APPENDERTYPE toEnum(int retval) {
		if(retval == CONSOLE.value){
			return CONSOLE;
		}
		else if(retval == COMMONFILE.value){
			return COMMONFILE;
		}
		else if(retval == ROLLINGFILE.value){
			return ROLLINGFILE;
		}
		else if(retval == DAILYROLLINGFILE.value){
			return DAILYROLLINGFILE;
		}
		else if(retval == REMOTE.value){
			return REMOTE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class APPENDERTYPEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
