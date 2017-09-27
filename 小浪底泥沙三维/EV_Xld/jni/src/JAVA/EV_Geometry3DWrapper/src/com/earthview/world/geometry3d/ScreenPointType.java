package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// <summary>
/// ∆¡ƒªµ„¿‡–Õ
/// <summary>
public enum ScreenPointType implements INativeEnum<ScreenPointType> {
	SPT_Circle(ScreenPointTypeHelper.ENUM_VALUES[0]),
	SPT_Quad(ScreenPointTypeHelper.ENUM_VALUES[1]);
	private int value;
	ScreenPointType(int i) {
		this.value = i;
	}
	public ScreenPointType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ScreenPointType toEnum(int retval) {
		if(retval == SPT_Circle.value){
			return SPT_Circle;
		}
		else if(retval == SPT_Quad.value){
			return SPT_Quad;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ScreenPointTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
