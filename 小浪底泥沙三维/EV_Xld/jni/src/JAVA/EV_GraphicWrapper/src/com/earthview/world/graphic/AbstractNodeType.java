package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum AbstractNodeType implements INativeEnum<AbstractNodeType> {
	ANT_UNKNOWN(AbstractNodeTypeHelper.ENUM_VALUES[0]),
	ANT_ATOM(AbstractNodeTypeHelper.ENUM_VALUES[1]),
	ANT_OBJECT(AbstractNodeTypeHelper.ENUM_VALUES[2]),
	ANT_PROPERTY(AbstractNodeTypeHelper.ENUM_VALUES[3]),
	ANT_IMPORT(AbstractNodeTypeHelper.ENUM_VALUES[4]),
	ANT_VARIABLE_SET(AbstractNodeTypeHelper.ENUM_VALUES[5]),
	ANT_VARIABLE_ACCESS(AbstractNodeTypeHelper.ENUM_VALUES[6]);
	private int value;
	AbstractNodeType(int i) {
		this.value = i;
	}
	public AbstractNodeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final AbstractNodeType toEnum(int retval) {
		if(retval == ANT_UNKNOWN.value){
			return ANT_UNKNOWN;
		}
		else if(retval == ANT_ATOM.value){
			return ANT_ATOM;
		}
		else if(retval == ANT_OBJECT.value){
			return ANT_OBJECT;
		}
		else if(retval == ANT_PROPERTY.value){
			return ANT_PROPERTY;
		}
		else if(retval == ANT_IMPORT.value){
			return ANT_IMPORT;
		}
		else if(retval == ANT_VARIABLE_SET.value){
			return ANT_VARIABLE_SET;
		}
		else if(retval == ANT_VARIABLE_ACCESS.value){
			return ANT_VARIABLE_ACCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class AbstractNodeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
