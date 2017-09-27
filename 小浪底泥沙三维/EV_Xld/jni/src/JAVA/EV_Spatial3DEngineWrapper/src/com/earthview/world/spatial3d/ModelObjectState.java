package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 可见模型对象状态
 */
public enum ModelObjectState implements INativeEnum<ModelObjectState> {
	VOS_DECLARED(ModelObjectStateHelper.ENUM_VALUES[0]),
	VOS_LOADED(ModelObjectStateHelper.ENUM_VALUES[1]),
	VOS_ATTACHED(ModelObjectStateHelper.ENUM_VALUES[2]),
	VOS_DETACHED(ModelObjectStateHelper.ENUM_VALUES[3]),
	VOS_UNLOADED(ModelObjectStateHelper.ENUM_VALUES[4]);
	private int value;
	ModelObjectState(int i) {
		this.value = i;
	}
	public ModelObjectState getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final ModelObjectState toEnum(int retval) {
		if(retval == VOS_DECLARED.value){
			return VOS_DECLARED;
		}
		else if(retval == VOS_LOADED.value){
			return VOS_LOADED;
		}
		else if(retval == VOS_ATTACHED.value){
			return VOS_ATTACHED;
		}
		else if(retval == VOS_DETACHED.value){
			return VOS_DETACHED;
		}
		else if(retval == VOS_UNLOADED.value){
			return VOS_UNLOADED;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class ModelObjectStateHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
