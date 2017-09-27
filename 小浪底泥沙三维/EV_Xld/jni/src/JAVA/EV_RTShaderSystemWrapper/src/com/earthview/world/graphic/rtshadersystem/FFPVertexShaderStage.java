package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Fixed Function vertex shader stages.
public enum FFPVertexShaderStage implements INativeEnum<FFPVertexShaderStage> {
	FFP_VS_PRE_PROCESS(FFPVertexShaderStageHelper.ENUM_VALUES[0]),
	FFP_VS_TRANSFORM(FFPVertexShaderStageHelper.ENUM_VALUES[1]),
	FFP_VS_COLOUR(FFPVertexShaderStageHelper.ENUM_VALUES[2]),
	FFP_VS_LIGHTING(FFPVertexShaderStageHelper.ENUM_VALUES[3]),
	FFP_VS_TEXTURING(FFPVertexShaderStageHelper.ENUM_VALUES[4]),
	FFP_VS_FOG(FFPVertexShaderStageHelper.ENUM_VALUES[5]),
	FFP_VS_POST_PROCESS(FFPVertexShaderStageHelper.ENUM_VALUES[6]);
	private int value;
	FFPVertexShaderStage(int i) {
		this.value = i;
	}
	public FFPVertexShaderStage getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final FFPVertexShaderStage toEnum(int retval) {
		if(retval == FFP_VS_PRE_PROCESS.value){
			return FFP_VS_PRE_PROCESS;
		}
		else if(retval == FFP_VS_TRANSFORM.value){
			return FFP_VS_TRANSFORM;
		}
		else if(retval == FFP_VS_COLOUR.value){
			return FFP_VS_COLOUR;
		}
		else if(retval == FFP_VS_LIGHTING.value){
			return FFP_VS_LIGHTING;
		}
		else if(retval == FFP_VS_TEXTURING.value){
			return FFP_VS_TEXTURING;
		}
		else if(retval == FFP_VS_FOG.value){
			return FFP_VS_FOG;
		}
		else if(retval == FFP_VS_POST_PROCESS.value){
			return FFP_VS_POST_PROCESS;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class FFPVertexShaderStageHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
