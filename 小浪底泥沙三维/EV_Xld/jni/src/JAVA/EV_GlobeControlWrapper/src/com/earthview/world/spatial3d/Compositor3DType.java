package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum Compositor3DType implements INativeEnum<Compositor3DType> {
	C3DT_Unknown(Compositor3DTypeHelper.ENUM_VALUES[0]),
	C3DT_Gray(Compositor3DTypeHelper.ENUM_VALUES[1]),
	C3DT_Infrared(Compositor3DTypeHelper.ENUM_VALUES[2]);
	private int value;
	Compositor3DType(int i) {
		this.value = i;
	}
	public Compositor3DType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Compositor3DType toEnum(int retval) {
		if(retval == C3DT_Unknown.value){
			return C3DT_Unknown;
		}
		else if(retval == C3DT_Gray.value){
			return C3DT_Gray;
		}
		else if(retval == C3DT_Infrared.value){
			return C3DT_Infrared;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Compositor3DTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
