package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum SceneBlendType implements INativeEnum<SceneBlendType> {
	SBT_TRANSPARENT_ALPHA(SceneBlendTypeHelper.ENUM_VALUES[0]),
	SBT_TRANSPARENT_COLOUR(SceneBlendTypeHelper.ENUM_VALUES[1]),
	SBT_ADD(SceneBlendTypeHelper.ENUM_VALUES[2]),
	SBT_MODULATE(SceneBlendTypeHelper.ENUM_VALUES[3]),
	SBT_REPLACE(SceneBlendTypeHelper.ENUM_VALUES[4]);
	private int value;
	SceneBlendType(int i) {
		this.value = i;
	}
	public SceneBlendType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final SceneBlendType toEnum(int retval) {
		if(retval == SBT_TRANSPARENT_ALPHA.value){
			return SBT_TRANSPARENT_ALPHA;
		}
		else if(retval == SBT_TRANSPARENT_COLOUR.value){
			return SBT_TRANSPARENT_COLOUR;
		}
		else if(retval == SBT_ADD.value){
			return SBT_ADD;
		}
		else if(retval == SBT_MODULATE.value){
			return SBT_MODULATE;
		}
		else if(retval == SBT_REPLACE.value){
			return SBT_REPLACE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class SceneBlendTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
