package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVCombineMode implements INativeEnum<EVCombineMode> {
	CM_Replace(EVCombineModeHelper.ENUM_VALUES[0]),
	CM_Intersect(EVCombineModeHelper.ENUM_VALUES[1]),
	CM_ModeUnion(EVCombineModeHelper.ENUM_VALUES[2]),
	CM_Xor(EVCombineModeHelper.ENUM_VALUES[3]),
	CM_Exclude(EVCombineModeHelper.ENUM_VALUES[4]),
	CM_Complement(EVCombineModeHelper.ENUM_VALUES[5]);
	private int value;
	EVCombineMode(int i) {
		this.value = i;
	}
	public EVCombineMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCombineMode toEnum(int retval) {
		if(retval == CM_Replace.value){
			return CM_Replace;
		}
		else if(retval == CM_Intersect.value){
			return CM_Intersect;
		}
		else if(retval == CM_ModeUnion.value){
			return CM_ModeUnion;
		}
		else if(retval == CM_Xor.value){
			return CM_Xor;
		}
		else if(retval == CM_Exclude.value){
			return CM_Exclude;
		}
		else if(retval == CM_Complement.value){
			return CM_Complement;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCombineModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
