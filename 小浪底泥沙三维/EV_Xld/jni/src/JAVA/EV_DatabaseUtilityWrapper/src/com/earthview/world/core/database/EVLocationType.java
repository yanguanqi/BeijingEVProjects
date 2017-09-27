package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVLocationType implements INativeEnum<EVLocationType> {
	LT_BeforeFirstRow(EVLocationTypeHelper.ENUM_VALUES[0]),
	LT_AfterLastRow(EVLocationTypeHelper.ENUM_VALUES[1]);
	private int value;
	EVLocationType(int i) {
		this.value = i;
	}
	public EVLocationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVLocationType toEnum(int retval) {
		if(retval == LT_BeforeFirstRow.value){
			return LT_BeforeFirstRow;
		}
		else if(retval == LT_AfterLastRow.value){
			return LT_AfterLastRow;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVLocationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
