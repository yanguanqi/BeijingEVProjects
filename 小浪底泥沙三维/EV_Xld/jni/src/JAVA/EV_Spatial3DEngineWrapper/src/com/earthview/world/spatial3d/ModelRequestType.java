package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum ModelRequestType implements INativeEnum<ModelRequestType> {
	MRT_UNLOAD(ModelRequestTypeHelper.ENUM_VALUES[0]),
	MRT_THUMB(ModelRequestTypeHelper.ENUM_VALUES[1]),
	MRT_ORIG(ModelRequestTypeHelper.ENUM_VALUES[2]),
	MRT_LOAD(ModelRequestTypeHelper.ENUM_VALUES[3]),
	MRT_DECLARED(ModelRequestTypeHelper.ENUM_VALUES[4]);
	private int value;
	ModelRequestType(int i) {
		this.value = i;
	}
	public ModelRequestType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelRequestType toEnum(int retval) {
		if(retval == MRT_UNLOAD.value){
			return MRT_UNLOAD;
		}
		else if(retval == MRT_THUMB.value){
			return MRT_THUMB;
		}
		else if(retval == MRT_ORIG.value){
			return MRT_ORIG;
		}
		else if(retval == MRT_LOAD.value){
			return MRT_LOAD;
		}
		else if(retval == MRT_DECLARED.value){
			return MRT_DECLARED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelRequestTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
