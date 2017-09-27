package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 联通策略枚举
 */
public enum EVConnectivityPolicy implements INativeEnum<EVConnectivityPolicy> {
	CT_ENDPIONT(EVConnectivityPolicyHelper.ENUM_VALUES[0]),
	CT_ANYVERTEX(EVConnectivityPolicyHelper.ENUM_VALUES[1]);
	private int value;
	EVConnectivityPolicy(int i) {
		this.value = i;
	}
	public EVConnectivityPolicy getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVConnectivityPolicy toEnum(int retval) {
		if(retval == CT_ENDPIONT.value){
			return CT_ENDPIONT;
		}
		else if(retval == CT_ANYVERTEX.value){
			return CT_ANYVERTEX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVConnectivityPolicyHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
