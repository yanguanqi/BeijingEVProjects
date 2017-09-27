package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

///功能：日志系统下，文件定时备份周期
///创建时间：2012.2.13
///作者：邹先涛
public enum LOGSCHEDULE implements INativeEnum<LOGSCHEDULE> {
	MONTHLY(LOGSCHEDULEHelper.ENUM_VALUES[0]),
	WEEKLY(LOGSCHEDULEHelper.ENUM_VALUES[1]),
	DAILY(LOGSCHEDULEHelper.ENUM_VALUES[2]),
	TWICE_DAILY(LOGSCHEDULEHelper.ENUM_VALUES[3]),
	HOURLY(LOGSCHEDULEHelper.ENUM_VALUES[4]),
	MINUTELY(LOGSCHEDULEHelper.ENUM_VALUES[5]);
	private int value;
	LOGSCHEDULE(int i) {
		this.value = i;
	}
	public LOGSCHEDULE getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final LOGSCHEDULE toEnum(int retval) {
		if(retval == MONTHLY.value){
			return MONTHLY;
		}
		else if(retval == WEEKLY.value){
			return WEEKLY;
		}
		else if(retval == DAILY.value){
			return DAILY;
		}
		else if(retval == TWICE_DAILY.value){
			return TWICE_DAILY;
		}
		else if(retval == HOURLY.value){
			return HOURLY;
		}
		else if(retval == MINUTELY.value){
			return MINUTELY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class LOGSCHEDULEHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
