package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ModelType implements INativeEnum<ModelType> {
	MT_MODEL(ModelTypeHelper.ENUM_VALUES[0]),
	MT_INSTANCE(ModelTypeHelper.ENUM_VALUES[1]);
	private int value;
	ModelType(int i) {
		this.value = i;
	}
	public ModelType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelType toEnum(int retval) {
		if(retval == MT_MODEL.value){
			return MT_MODEL;
		}
		else if(retval == MT_INSTANCE.value){
			return MT_INSTANCE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
