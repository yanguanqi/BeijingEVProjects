package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作模式
 */
public enum EVModelDataExchangeOperateMode implements INativeEnum<EVModelDataExchangeOperateMode> {
	EV_MDEOM_UNKNOWN(EVModelDataExchangeOperateModeHelper.ENUM_VALUES[0]),
	EV_MDEOM_WRITE(EVModelDataExchangeOperateModeHelper.ENUM_VALUES[1]),
	EV_MDEOM_READ(EVModelDataExchangeOperateModeHelper.ENUM_VALUES[2]);
	private int value;
	EVModelDataExchangeOperateMode(int i) {
		this.value = i;
	}
	public EVModelDataExchangeOperateMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVModelDataExchangeOperateMode toEnum(int retval) {
		if(retval == EV_MDEOM_UNKNOWN.value){
			return EV_MDEOM_UNKNOWN;
		}
		else if(retval == EV_MDEOM_WRITE.value){
			return EV_MDEOM_WRITE;
		}
		else if(retval == EV_MDEOM_READ.value){
			return EV_MDEOM_READ;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVModelDataExchangeOperateModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
