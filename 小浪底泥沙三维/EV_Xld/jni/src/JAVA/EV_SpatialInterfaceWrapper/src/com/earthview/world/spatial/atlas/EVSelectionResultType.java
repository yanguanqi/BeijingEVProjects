package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVSelectionResultType implements INativeEnum<EVSelectionResultType> {
	SRT_New(EVSelectionResultTypeHelper.ENUM_VALUES[0]),
	SRT_Add(EVSelectionResultTypeHelper.ENUM_VALUES[1]),
	SRT_Sub(EVSelectionResultTypeHelper.ENUM_VALUES[2]),
	SRT_And(EVSelectionResultTypeHelper.ENUM_VALUES[3]),
	SRT_XOR(EVSelectionResultTypeHelper.ENUM_VALUES[4]);
	private int value;
	EVSelectionResultType(int i) {
		this.value = i;
	}
	public EVSelectionResultType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVSelectionResultType toEnum(int retval) {
		if(retval == SRT_New.value){
			return SRT_New;
		}
		else if(retval == SRT_Add.value){
			return SRT_Add;
		}
		else if(retval == SRT_Sub.value){
			return SRT_Sub;
		}
		else if(retval == SRT_And.value){
			return SRT_And;
		}
		else if(retval == SRT_XOR.value){
			return SRT_XOR;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVSelectionResultTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
