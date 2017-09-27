package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ModelCommandType implements INativeEnum<ModelCommandType> {
	CT_UnKnown(ModelCommandTypeHelper.ENUM_VALUES[0]),
	CT_Select(ModelCommandTypeHelper.ENUM_VALUES[1]),
	CT_Edit(ModelCommandTypeHelper.ENUM_VALUES[2]);
	private int value;
	ModelCommandType(int i) {
		this.value = i;
	}
	public ModelCommandType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelCommandType toEnum(int retval) {
		if(retval == CT_UnKnown.value){
			return CT_UnKnown;
		}
		else if(retval == CT_Select.value){
			return CT_Select;
		}
		else if(retval == CT_Edit.value){
			return CT_Edit;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelCommandTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
