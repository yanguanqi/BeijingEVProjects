package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///用于线和面的标注类型
public enum EVFontAndAxisRelationType implements INativeEnum<EVFontAndAxisRelationType> {
	FAART_FontPlumbAxisType(EVFontAndAxisRelationTypeHelper.ENUM_VALUES[0]),
	FAART_FontParallelAxisType(EVFontAndAxisRelationTypeHelper.ENUM_VALUES[1]),
	FAART_FontErectAlwaysType(EVFontAndAxisRelationTypeHelper.ENUM_VALUES[2]);
	private int value;
	EVFontAndAxisRelationType(int i) {
		this.value = i;
	}
	public EVFontAndAxisRelationType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVFontAndAxisRelationType toEnum(int retval) {
		if(retval == FAART_FontPlumbAxisType.value){
			return FAART_FontPlumbAxisType;
		}
		else if(retval == FAART_FontParallelAxisType.value){
			return FAART_FontParallelAxisType;
		}
		else if(retval == FAART_FontErectAlwaysType.value){
			return FAART_FontErectAlwaysType;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVFontAndAxisRelationTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
