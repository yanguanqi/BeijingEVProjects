package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVNAAnalystMethod implements INativeEnum<EVNAAnalystMethod> {
	EVNAMethod_1(EVNAAnalystMethodHelper.ENUM_VALUES[0]),
	EVNAMethod_2(EVNAAnalystMethodHelper.ENUM_VALUES[1]);
	private int value;
	EVNAAnalystMethod(int i) {
		this.value = i;
	}
	public EVNAAnalystMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVNAAnalystMethod toEnum(int retval) {
		if(retval == EVNAMethod_1.value){
			return EVNAMethod_1;
		}
		else if(retval == EVNAMethod_2.value){
			return EVNAMethod_2;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVNAAnalystMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
