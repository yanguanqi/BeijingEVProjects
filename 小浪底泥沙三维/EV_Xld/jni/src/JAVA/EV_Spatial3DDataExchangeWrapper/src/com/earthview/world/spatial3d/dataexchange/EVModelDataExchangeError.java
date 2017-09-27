package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 操作结果的枚举
 */
public enum EVModelDataExchangeError implements INativeEnum<EVModelDataExchangeError> {
	EV_MDEE_UNKNOWN(EVModelDataExchangeErrorHelper.ENUM_VALUES[0]),
	EV_MDEE_PARSE_ERROR(EVModelDataExchangeErrorHelper.ENUM_VALUES[1]),
	EV_MDEE_PARSE_SUCCESS(EVModelDataExchangeErrorHelper.ENUM_VALUES[2]),
	EV_MODE_IMPORT_ERROR(EVModelDataExchangeErrorHelper.ENUM_VALUES[3]),
	EV_MODE_IMPORT_SUCCESS(EVModelDataExchangeErrorHelper.ENUM_VALUES[4]),
	EV_MODE_OPEN_DREVER_ERROR(EVModelDataExchangeErrorHelper.ENUM_VALUES[5]),
	EV_MODE_OPEN_DRIVER_SUCCESS(EVModelDataExchangeErrorHelper.ENUM_VALUES[6]);
	private int value;
	EVModelDataExchangeError(int i) {
		this.value = i;
	}
	public EVModelDataExchangeError getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVModelDataExchangeError toEnum(int retval) {
		if(retval == EV_MDEE_UNKNOWN.value){
			return EV_MDEE_UNKNOWN;
		}
		else if(retval == EV_MDEE_PARSE_ERROR.value){
			return EV_MDEE_PARSE_ERROR;
		}
		else if(retval == EV_MDEE_PARSE_SUCCESS.value){
			return EV_MDEE_PARSE_SUCCESS;
		}
		else if(retval == EV_MODE_IMPORT_ERROR.value){
			return EV_MODE_IMPORT_ERROR;
		}
		else if(retval == EV_MODE_IMPORT_SUCCESS.value){
			return EV_MODE_IMPORT_SUCCESS;
		}
		else if(retval == EV_MODE_OPEN_DREVER_ERROR.value){
			return EV_MODE_OPEN_DREVER_ERROR;
		}
		else if(retval == EV_MODE_OPEN_DRIVER_SUCCESS.value){
			return EV_MODE_OPEN_DRIVER_SUCCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVModelDataExchangeErrorHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
