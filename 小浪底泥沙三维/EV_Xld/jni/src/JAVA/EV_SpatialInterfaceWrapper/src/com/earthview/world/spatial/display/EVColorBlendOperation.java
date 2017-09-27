package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * Gray颜色空间
 */
public enum EVColorBlendOperation implements INativeEnum<EVColorBlendOperation> {
	CBO_UNKNOWN(EVColorBlendOperationHelper.ENUM_VALUES[0]),
	CBO_SELECTARG1(EVColorBlendOperationHelper.ENUM_VALUES[1]),
	CBO_SELECTARG2(EVColorBlendOperationHelper.ENUM_VALUES[2]),
	CBO_ADD(EVColorBlendOperationHelper.ENUM_VALUES[3]),
	CBO_MODULATE(EVColorBlendOperationHelper.ENUM_VALUES[4]);
	private int value;
	EVColorBlendOperation(int i) {
		this.value = i;
	}
	public EVColorBlendOperation getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVColorBlendOperation toEnum(int retval) {
		if(retval == CBO_UNKNOWN.value){
			return CBO_UNKNOWN;
		}
		else if(retval == CBO_SELECTARG1.value){
			return CBO_SELECTARG1;
		}
		else if(retval == CBO_SELECTARG2.value){
			return CBO_SELECTARG2;
		}
		else if(retval == CBO_ADD.value){
			return CBO_ADD;
		}
		else if(retval == CBO_MODULATE.value){
			return CBO_MODULATE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVColorBlendOperationHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
