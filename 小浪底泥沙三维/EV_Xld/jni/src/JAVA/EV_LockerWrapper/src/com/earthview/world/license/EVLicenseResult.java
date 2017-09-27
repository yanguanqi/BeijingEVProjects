package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 许可结果枚举
/// <summary>
public enum EVLicenseResult implements INativeEnum<EVLicenseResult> {
	LR_INIT_SUCCESS(EVLicenseResultHelper.ENUM_VALUES[0]),
	LR_INIT_FAIL(EVLicenseResultHelper.ENUM_VALUES[1]),
	LR_INIT_HAS_MODULE(EVLicenseResultHelper.ENUM_VALUES[2]),
	LR_UNINIT_SUCCESS(EVLicenseResultHelper.ENUM_VALUES[3]),
	LR_UNINIT_FAIL(EVLicenseResultHelper.ENUM_VALUES[4]),
	LR_UNINIT_NOT_MODULE(EVLicenseResultHelper.ENUM_VALUES[5]);
	private int value;
	EVLicenseResult(int i) {
		this.value = i;
	}
	public EVLicenseResult getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLicenseResult toEnum(int retval) {
		if(retval == LR_INIT_SUCCESS.value){
			return LR_INIT_SUCCESS;
		}
		else if(retval == LR_INIT_FAIL.value){
			return LR_INIT_FAIL;
		}
		else if(retval == LR_INIT_HAS_MODULE.value){
			return LR_INIT_HAS_MODULE;
		}
		else if(retval == LR_UNINIT_SUCCESS.value){
			return LR_UNINIT_SUCCESS;
		}
		else if(retval == LR_UNINIT_FAIL.value){
			return LR_UNINIT_FAIL;
		}
		else if(retval == LR_UNINIT_NOT_MODULE.value){
			return LR_UNINIT_NOT_MODULE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLicenseResultHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
