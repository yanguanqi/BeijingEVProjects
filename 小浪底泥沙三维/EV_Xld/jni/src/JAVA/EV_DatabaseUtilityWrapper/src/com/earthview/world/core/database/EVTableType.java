package com.earthview.world.core.database;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 数据库表的类型枚举
 */
public enum EVTableType implements INativeEnum<EVTableType> {
	TT_Tables(EVTableTypeHelper.ENUM_VALUES[0]),
	TT_SystemTables(EVTableTypeHelper.ENUM_VALUES[1]),
	TT_Views(EVTableTypeHelper.ENUM_VALUES[2]),
	TT_AllTables(EVTableTypeHelper.ENUM_VALUES[3]);
	private int value;
	EVTableType(int i) {
		this.value = i;
	}
	public EVTableType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVTableType toEnum(int retval) {
		if(retval == TT_Tables.value){
			return TT_Tables;
		}
		else if(retval == TT_SystemTables.value){
			return TT_SystemTables;
		}
		else if(retval == TT_Views.value){
			return TT_Views;
		}
		else if(retval == TT_AllTables.value){
			return TT_AllTables;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVTableTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
