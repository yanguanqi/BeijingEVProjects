package com.earthview.world.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

/// 0
public enum EVCompositingQuality implements INativeEnum<EVCompositingQuality> {
	CQ_Invalid(EVCompositingQualityHelper.ENUM_VALUES[0]),
	CQ_Default(EVCompositingQualityHelper.ENUM_VALUES[1]),
	CQ_HighSpeed(EVCompositingQualityHelper.ENUM_VALUES[2]),
	CQ_HighQuality(EVCompositingQualityHelper.ENUM_VALUES[3]),
	CQ_GammaCorrected(EVCompositingQualityHelper.ENUM_VALUES[4]),
	CQ_AssumeLinear(EVCompositingQualityHelper.ENUM_VALUES[5]);
	private int value;
	EVCompositingQuality(int i) {
		this.value = i;
	}
	public EVCompositingQuality getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final EVCompositingQuality toEnum(int retval) {
		if(retval == CQ_Invalid.value){
			return CQ_Invalid;
		}
		else if(retval == CQ_Default.value){
			return CQ_Default;
		}
		else if(retval == CQ_HighSpeed.value){
			return CQ_HighSpeed;
		}
		else if(retval == CQ_HighQuality.value){
			return CQ_HighQuality;
		}
		else if(retval == CQ_GammaCorrected.value){
			return CQ_GammaCorrected;
		}
		else if(retval == CQ_AssumeLinear.value){
			return CQ_AssumeLinear;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class EVCompositingQualityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
