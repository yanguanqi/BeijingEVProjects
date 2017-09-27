package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SceneBlendOperation implements INativeEnum<SceneBlendOperation> {
	SBO_ADD(SceneBlendOperationHelper.ENUM_VALUES[0]),
	SBO_SUBTRACT(SceneBlendOperationHelper.ENUM_VALUES[1]),
	SBO_REVERSE_SUBTRACT(SceneBlendOperationHelper.ENUM_VALUES[2]),
	SBO_MIN(SceneBlendOperationHelper.ENUM_VALUES[3]),
	SBO_MAX(SceneBlendOperationHelper.ENUM_VALUES[4]);
	private int value;
	SceneBlendOperation(int i) {
		this.value = i;
	}
	public SceneBlendOperation getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SceneBlendOperation toEnum(int retval) {
		if(retval == SBO_ADD.value){
			return SBO_ADD;
		}
		else if(retval == SBO_SUBTRACT.value){
			return SBO_SUBTRACT;
		}
		else if(retval == SBO_REVERSE_SUBTRACT.value){
			return SBO_REVERSE_SUBTRACT;
		}
		else if(retval == SBO_MIN.value){
			return SBO_MIN;
		}
		else if(retval == SBO_MAX.value){
			return SBO_MAX;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SceneBlendOperationHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
