package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum EVThemeType implements INativeEnum<EVThemeType> {
	TT_UNKNOWN(EVThemeTypeHelper.ENUM_VALUES[0]),
	TT_SIMPLE(EVThemeTypeHelper.ENUM_VALUES[1]),
	TT_UNIQUEVALUE(EVThemeTypeHelper.ENUM_VALUES[2]),
	TT_UNIQUEVALUEMATCHSYMBOL(EVThemeTypeHelper.ENUM_VALUES[3]),
	TT_RANGE(EVThemeTypeHelper.ENUM_VALUES[4]),
	TT_STATISTICS(EVThemeTypeHelper.ENUM_VALUES[5]),
	TT_CADUNIQUEENTITYVALUE(EVThemeTypeHelper.ENUM_VALUES[6]);
	private int value;
	EVThemeType(int i) {
		this.value = i;
	}
	public EVThemeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVThemeType toEnum(int retval) {
		if(retval == TT_UNKNOWN.value){
			return TT_UNKNOWN;
		}
		else if(retval == TT_SIMPLE.value){
			return TT_SIMPLE;
		}
		else if(retval == TT_UNIQUEVALUE.value){
			return TT_UNIQUEVALUE;
		}
		else if(retval == TT_UNIQUEVALUEMATCHSYMBOL.value){
			return TT_UNIQUEVALUEMATCHSYMBOL;
		}
		else if(retval == TT_RANGE.value){
			return TT_RANGE;
		}
		else if(retval == TT_STATISTICS.value){
			return TT_STATISTICS;
		}
		else if(retval == TT_CADUNIQUEENTITYVALUE.value){
			return TT_CADUNIQUEENTITYVALUE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVThemeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
