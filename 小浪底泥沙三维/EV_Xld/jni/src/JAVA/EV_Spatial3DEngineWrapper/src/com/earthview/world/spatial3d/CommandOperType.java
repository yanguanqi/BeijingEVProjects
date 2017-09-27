package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum CommandOperType implements INativeEnum<CommandOperType> {
	COT_INSERT(CommandOperTypeHelper.ENUM_VALUES[0]),
	COT_UPDATE(CommandOperTypeHelper.ENUM_VALUES[1]),
	COT_DELETE(CommandOperTypeHelper.ENUM_VALUES[2]);
	private int value;
	CommandOperType(int i) {
		this.value = i;
	}
	public CommandOperType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final CommandOperType toEnum(int retval) {
		if(retval == COT_INSERT.value){
			return COT_INSERT;
		}
		else if(retval == COT_UPDATE.value){
			return COT_UPDATE;
		}
		else if(retval == COT_DELETE.value){
			return COT_DELETE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class CommandOperTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
