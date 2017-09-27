package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum Layer3DEditorType implements INativeEnum<Layer3DEditorType> {
	LET_Model(Layer3DEditorTypeHelper.ENUM_VALUES[0]),
	LET_Effect(Layer3DEditorTypeHelper.ENUM_VALUES[1]);
	private int value;
	Layer3DEditorType(int i) {
		this.value = i;
	}
	public Layer3DEditorType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final Layer3DEditorType toEnum(int retval) {
		if(retval == LET_Model.value){
			return LET_Model;
		}
		else if(retval == LET_Effect.value){
			return LET_Effect;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class Layer3DEditorTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
