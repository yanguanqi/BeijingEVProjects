package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作模式
 */
public enum EVDataExchangeOperateMode implements INativeEnum<EVDataExchangeOperateMode> {
	EV_DEOM_UNKNOWN(EVDataExchangeOperateModeHelper.ENUM_VALUES[0]),
	EV_DEOM_WRITE(EVDataExchangeOperateModeHelper.ENUM_VALUES[1]),
	EV_DEOM_READ(EVDataExchangeOperateModeHelper.ENUM_VALUES[2]);
	private int value;
	EVDataExchangeOperateMode(int i) {
		this.value = i;
	}
	public EVDataExchangeOperateMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVDataExchangeOperateMode toEnum(int retval) {
		if(retval == EV_DEOM_UNKNOWN.value){
			return EV_DEOM_UNKNOWN;
		}
		else if(retval == EV_DEOM_WRITE.value){
			return EV_DEOM_WRITE;
		}
		else if(retval == EV_DEOM_READ.value){
			return EV_DEOM_READ;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVDataExchangeOperateModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
