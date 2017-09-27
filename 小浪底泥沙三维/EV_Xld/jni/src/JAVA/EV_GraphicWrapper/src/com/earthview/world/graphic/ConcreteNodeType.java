package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ConcreteNodeType implements INativeEnum<ConcreteNodeType> {
	CNT_VARIABLE(ConcreteNodeTypeHelper.ENUM_VALUES[0]),
	CNT_VARIABLE_ASSIGN(ConcreteNodeTypeHelper.ENUM_VALUES[1]),
	CNT_WORD(ConcreteNodeTypeHelper.ENUM_VALUES[2]),
	CNT_IMPORT(ConcreteNodeTypeHelper.ENUM_VALUES[3]),
	CNT_QUOTE(ConcreteNodeTypeHelper.ENUM_VALUES[4]),
	CNT_LBRACE(ConcreteNodeTypeHelper.ENUM_VALUES[5]),
	CNT_RBRACE(ConcreteNodeTypeHelper.ENUM_VALUES[6]),
	CNT_COLON(ConcreteNodeTypeHelper.ENUM_VALUES[7]);
	private int value;
	ConcreteNodeType(int i) {
		this.value = i;
	}
	public ConcreteNodeType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ConcreteNodeType toEnum(int retval) {
		if(retval == CNT_VARIABLE.value){
			return CNT_VARIABLE;
		}
		else if(retval == CNT_VARIABLE_ASSIGN.value){
			return CNT_VARIABLE_ASSIGN;
		}
		else if(retval == CNT_WORD.value){
			return CNT_WORD;
		}
		else if(retval == CNT_IMPORT.value){
			return CNT_IMPORT;
		}
		else if(retval == CNT_QUOTE.value){
			return CNT_QUOTE;
		}
		else if(retval == CNT_LBRACE.value){
			return CNT_LBRACE;
		}
		else if(retval == CNT_RBRACE.value){
			return CNT_RBRACE;
		}
		else if(retval == CNT_COLON.value){
			return CNT_COLON;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ConcreteNodeTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
