package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// Glyph anti-alias bitmap without hinting
public enum EVInterpolationMode implements INativeEnum<EVInterpolationMode> {
	IM_Invalid(EVInterpolationModeHelper.ENUM_VALUES[0]),
	IM_Default(EVInterpolationModeHelper.ENUM_VALUES[1]),
	IM_LowQuality(EVInterpolationModeHelper.ENUM_VALUES[2]),
	IM_HighQuality(EVInterpolationModeHelper.ENUM_VALUES[3]),
	IM_Bilinear(EVInterpolationModeHelper.ENUM_VALUES[4]),
	IM_Bicubic(EVInterpolationModeHelper.ENUM_VALUES[5]),
	IM_NearestNeighbor(EVInterpolationModeHelper.ENUM_VALUES[6]),
	IM_HighQualityBilinear(EVInterpolationModeHelper.ENUM_VALUES[7]),
	IM_HighQualityBicubic(EVInterpolationModeHelper.ENUM_VALUES[8]);
	private int value;
	EVInterpolationMode(int i) {
		this.value = i;
	}
	public EVInterpolationMode getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVInterpolationMode toEnum(int retval) {
		if(retval == IM_Invalid.value){
			return IM_Invalid;
		}
		else if(retval == IM_Default.value){
			return IM_Default;
		}
		else if(retval == IM_LowQuality.value){
			return IM_LowQuality;
		}
		else if(retval == IM_HighQuality.value){
			return IM_HighQuality;
		}
		else if(retval == IM_Bilinear.value){
			return IM_Bilinear;
		}
		else if(retval == IM_Bicubic.value){
			return IM_Bicubic;
		}
		else if(retval == IM_NearestNeighbor.value){
			return IM_NearestNeighbor;
		}
		else if(retval == IM_HighQualityBilinear.value){
			return IM_HighQualityBilinear;
		}
		else if(retval == IM_HighQualityBicubic.value){
			return IM_HighQualityBicubic;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVInterpolationModeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
