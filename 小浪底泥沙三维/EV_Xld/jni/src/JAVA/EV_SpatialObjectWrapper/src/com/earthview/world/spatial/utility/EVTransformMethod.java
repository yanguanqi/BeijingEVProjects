package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

////计算
public enum EVTransformMethod implements INativeEnum<EVTransformMethod> {
	TR_BOOLSHA(EVTransformMethodHelper.ENUM_VALUES[0]),
	TR_RIGOROUS(EVTransformMethodHelper.ENUM_VALUES[1]);
	private int value;
	EVTransformMethod(int i) {
		this.value = i;
	}
	public EVTransformMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTransformMethod toEnum(int retval) {
		if(retval == TR_BOOLSHA.value){
			return TR_BOOLSHA;
		}
		else if(retval == TR_RIGOROUS.value){
			return TR_RIGOROUS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTransformMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
