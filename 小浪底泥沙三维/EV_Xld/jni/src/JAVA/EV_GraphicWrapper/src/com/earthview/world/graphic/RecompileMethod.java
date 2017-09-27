package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///// Not determined
public enum RecompileMethod implements INativeEnum<RecompileMethod> {
	CT_Recompile(RecompileMethodHelper.ENUM_VALUES[0]),
	CT_NoRecompile(RecompileMethodHelper.ENUM_VALUES[1]);
	private int value;
	RecompileMethod(int i) {
		this.value = i;
	}
	public RecompileMethod getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final RecompileMethod toEnum(int retval) {
		if(retval == CT_Recompile.value){
			return CT_Recompile;
		}
		else if(retval == CT_NoRecompile.value){
			return CT_NoRecompile;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class RecompileMethodHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
