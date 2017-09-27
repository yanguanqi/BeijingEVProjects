package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * EVSpheriod枚举常见椭球体程序根据这个标识可以知晓该椭球相关参数
 */
public enum EVSpheriod implements INativeEnum<EVSpheriod> {
	EV_UNKNOWN(EVSpheriodHelper.ENUM_VALUES[0]),
	EV_BEIJING54(EVSpheriodHelper.ENUM_VALUES[1]),
	EV_XIAN80(EVSpheriodHelper.ENUM_VALUES[2]),
	EV_WGS84(EVSpheriodHelper.ENUM_VALUES[3]),
	EV_CGCS2000(EVSpheriodHelper.ENUM_VALUES[4]);
	private int value;
	EVSpheriod(int i) {
		this.value = i;
	}
	public EVSpheriod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSpheriod toEnum(int retval) {
		if(retval == EV_UNKNOWN.value){
			return EV_UNKNOWN;
		}
		else if(retval == EV_BEIJING54.value){
			return EV_BEIJING54;
		}
		else if(retval == EV_XIAN80.value){
			return EV_XIAN80;
		}
		else if(retval == EV_WGS84.value){
			return EV_WGS84;
		}
		else if(retval == EV_CGCS2000.value){
			return EV_CGCS2000;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSpheriodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
