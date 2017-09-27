package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ModelPropertyType implements INativeEnum<ModelPropertyType> {
	MPT_MODELTYPE(ModelPropertyTypeHelper.ENUM_VALUES[0]),
	MPT_ENTITYTYPE(ModelPropertyTypeHelper.ENUM_VALUES[1]);
	private int value;
	ModelPropertyType(int i) {
		this.value = i;
	}
	public ModelPropertyType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelPropertyType toEnum(int retval) {
		if(retval == MPT_MODELTYPE.value){
			return MPT_MODELTYPE;
		}
		else if(retval == MPT_ENTITYTYPE.value){
			return MPT_ENTITYTYPE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelPropertyTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
