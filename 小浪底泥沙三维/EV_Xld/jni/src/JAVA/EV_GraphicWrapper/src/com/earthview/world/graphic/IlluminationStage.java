package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

///// Categorisation of passes for the purpose of additive lighting
public enum IlluminationStage implements INativeEnum<IlluminationStage> {
	IS_AMBIENT(IlluminationStageHelper.ENUM_VALUES[0]),
	IS_PER_LIGHT(IlluminationStageHelper.ENUM_VALUES[1]),
	IS_DECAL(IlluminationStageHelper.ENUM_VALUES[2]),
	IS_UNKNOWN(IlluminationStageHelper.ENUM_VALUES[3]);
	private int value;
	IlluminationStage(int i) {
		this.value = i;
	}
	public IlluminationStage getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final IlluminationStage toEnum(int retval) {
		if(retval == IS_AMBIENT.value){
			return IS_AMBIENT;
		}
		else if(retval == IS_PER_LIGHT.value){
			return IS_PER_LIGHT;
		}
		else if(retval == IS_DECAL.value){
			return IS_DECAL;
		}
		else if(retval == IS_UNKNOWN.value){
			return IS_UNKNOWN;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class IlluminationStageHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
