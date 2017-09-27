package com.earthview.world.license;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// 许可状态类型
/// <summary>
public enum EVLicenseStatusType implements INativeEnum<EVLicenseStatusType> {
	LS_NOT_MODULE(EVLicenseStatusTypeHelper.ENUM_VALUES[0]),
	LS_VALID(EVLicenseStatusTypeHelper.ENUM_VALUES[1]),
	LS_INVALID(EVLicenseStatusTypeHelper.ENUM_VALUES[2]),
	LS_EXPIRED(EVLicenseStatusTypeHelper.ENUM_VALUES[3]),
	LS_NOT_LICENSE(EVLicenseStatusTypeHelper.ENUM_VALUES[4]),
	LS_NOT_KEY(EVLicenseStatusTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVLicenseStatusType(int i) {
		this.value = i;
	}
	public EVLicenseStatusType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLicenseStatusType toEnum(int retval) {
		if(retval == LS_NOT_MODULE.value){
			return LS_NOT_MODULE;
		}
		else if(retval == LS_VALID.value){
			return LS_VALID;
		}
		else if(retval == LS_INVALID.value){
			return LS_INVALID;
		}
		else if(retval == LS_EXPIRED.value){
			return LS_EXPIRED;
		}
		else if(retval == LS_NOT_LICENSE.value){
			return LS_NOT_LICENSE;
		}
		else if(retval == LS_NOT_KEY.value){
			return LS_NOT_KEY;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLicenseStatusTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
