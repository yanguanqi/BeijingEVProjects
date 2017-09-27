package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Fixed Function fragment shader stages.
public enum FFPFragmentShaderStage implements INativeEnum<FFPFragmentShaderStage> {
	FFP_PS_PRE_PROCESS(FFPFragmentShaderStageHelper.ENUM_VALUES[0]),
	FFP_PS_COLOUR_BEGIN(FFPFragmentShaderStageHelper.ENUM_VALUES[1]),
	FFP_PS_SAMPLING(FFPFragmentShaderStageHelper.ENUM_VALUES[2]),
	FFP_PS_TEXTURING(FFPFragmentShaderStageHelper.ENUM_VALUES[3]),
	FFP_PS_COLOUR_END(FFPFragmentShaderStageHelper.ENUM_VALUES[4]),
	FFP_PS_FOG(FFPFragmentShaderStageHelper.ENUM_VALUES[5]),
	FFP_PS_POST_PROCESS(FFPFragmentShaderStageHelper.ENUM_VALUES[6]);
	private int value;
	FFPFragmentShaderStage(int i) {
		this.value = i;
	}
	public FFPFragmentShaderStage getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FFPFragmentShaderStage toEnum(int retval) {
		if(retval == FFP_PS_PRE_PROCESS.value){
			return FFP_PS_PRE_PROCESS;
		}
		else if(retval == FFP_PS_COLOUR_BEGIN.value){
			return FFP_PS_COLOUR_BEGIN;
		}
		else if(retval == FFP_PS_SAMPLING.value){
			return FFP_PS_SAMPLING;
		}
		else if(retval == FFP_PS_TEXTURING.value){
			return FFP_PS_TEXTURING;
		}
		else if(retval == FFP_PS_COLOUR_END.value){
			return FFP_PS_COLOUR_END;
		}
		else if(retval == FFP_PS_FOG.value){
			return FFP_PS_FOG;
		}
		else if(retval == FFP_PS_POST_PROCESS.value){
			return FFP_PS_POST_PROCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FFPFragmentShaderStageHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
