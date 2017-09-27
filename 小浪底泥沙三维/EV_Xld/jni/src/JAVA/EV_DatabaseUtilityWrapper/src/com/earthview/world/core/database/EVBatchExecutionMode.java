package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVBatchExecutionMode implements INativeEnum<EVBatchExecutionMode> {
	ValuesAsRows(EVBatchExecutionModeHelper.ENUM_VALUES[0]),
	ValuesAsColumns(EVBatchExecutionModeHelper.ENUM_VALUES[1]);
	private int value;
	EVBatchExecutionMode(int i) {
		this.value = i;
	}
	public EVBatchExecutionMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVBatchExecutionMode toEnum(int retval) {
		if(retval == ValuesAsRows.value){
			return ValuesAsRows;
		}
		else if(retval == ValuesAsColumns.value){
			return ValuesAsColumns;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVBatchExecutionModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
