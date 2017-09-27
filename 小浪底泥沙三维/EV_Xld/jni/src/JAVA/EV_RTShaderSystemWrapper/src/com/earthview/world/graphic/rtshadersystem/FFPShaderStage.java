package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Fixed Function generic stages.
public enum FFPShaderStage implements INativeEnum<FFPShaderStage> {
	FFP_PRE_PROCESS(FFPShaderStageHelper.ENUM_VALUES[0]),
	FFP_TRANSFORM(FFPShaderStageHelper.ENUM_VALUES[1]),
	FFP_COLOUR(FFPShaderStageHelper.ENUM_VALUES[2]),
	FFP_LIGHTING(FFPShaderStageHelper.ENUM_VALUES[3]),
	FFP_TEXTURING(FFPShaderStageHelper.ENUM_VALUES[4]),
	FFP_FOG(FFPShaderStageHelper.ENUM_VALUES[5]),
	FFP_POST_PROCESS(FFPShaderStageHelper.ENUM_VALUES[6]);
	private int value;
	FFPShaderStage(int i) {
		this.value = i;
	}
	public FFPShaderStage getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FFPShaderStage toEnum(int retval) {
		if(retval == FFP_PRE_PROCESS.value){
			return FFP_PRE_PROCESS;
		}
		else if(retval == FFP_TRANSFORM.value){
			return FFP_TRANSFORM;
		}
		else if(retval == FFP_COLOUR.value){
			return FFP_COLOUR;
		}
		else if(retval == FFP_LIGHTING.value){
			return FFP_LIGHTING;
		}
		else if(retval == FFP_TEXTURING.value){
			return FFP_TEXTURING;
		}
		else if(retval == FFP_FOG.value){
			return FFP_FOG;
		}
		else if(retval == FFP_POST_PROCESS.value){
			return FFP_POST_PROCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FFPShaderStageHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
