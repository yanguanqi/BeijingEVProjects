package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/**
 * 面与几何体的空间关系
 */
public enum EVFaceWithinType implements INativeEnum<EVFaceWithinType> {
	FACE_UNCLASSIFIED(EVFaceWithinTypeHelper.ENUM_VALUES[0]),
	FACE_ON_ORIENT_OUT(EVFaceWithinTypeHelper.ENUM_VALUES[1]),
	FACE_OUT(EVFaceWithinTypeHelper.ENUM_VALUES[2]),
	FACE_ON(EVFaceWithinTypeHelper.ENUM_VALUES[3]),
	FACE_IN(EVFaceWithinTypeHelper.ENUM_VALUES[4]),
	FACE_ON_ORIENT_IN(EVFaceWithinTypeHelper.ENUM_VALUES[5]);
	private int value;
	EVFaceWithinType(int i) {
		this.value = i;
	}
	public EVFaceWithinType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVFaceWithinType toEnum(int retval) {
		if(retval == FACE_UNCLASSIFIED.value){
			return FACE_UNCLASSIFIED;
		}
		else if(retval == FACE_ON_ORIENT_OUT.value){
			return FACE_ON_ORIENT_OUT;
		}
		else if(retval == FACE_OUT.value){
			return FACE_OUT;
		}
		else if(retval == FACE_ON.value){
			return FACE_ON;
		}
		else if(retval == FACE_IN.value){
			return FACE_IN;
		}
		else if(retval == FACE_ON_ORIENT_IN.value){
			return FACE_ON_ORIENT_IN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVFaceWithinTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
