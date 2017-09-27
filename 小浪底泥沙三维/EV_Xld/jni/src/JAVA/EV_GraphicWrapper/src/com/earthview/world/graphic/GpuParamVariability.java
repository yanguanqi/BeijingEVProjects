package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum GpuParamVariability implements INativeEnum<GpuParamVariability> {
	GPV_GLOBAL(GpuParamVariabilityHelper.ENUM_VALUES[0]),
	GPV_PER_OBJECT(GpuParamVariabilityHelper.ENUM_VALUES[1]),
	GPV_LIGHTS(GpuParamVariabilityHelper.ENUM_VALUES[2]),
	GPV_PASS_ITERATION_NUMBER(GpuParamVariabilityHelper.ENUM_VALUES[3]),
	GPV_ALL(GpuParamVariabilityHelper.ENUM_VALUES[4]);
	private int value;
	GpuParamVariability(int i) {
		this.value = i;
	}
	public GpuParamVariability getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GpuParamVariability toEnum(int retval) {
		if(retval == GPV_GLOBAL.value){
			return GPV_GLOBAL;
		}
		else if(retval == GPV_PER_OBJECT.value){
			return GPV_PER_OBJECT;
		}
		else if(retval == GPV_LIGHTS.value){
			return GPV_LIGHTS;
		}
		else if(retval == GPV_PASS_ITERATION_NUMBER.value){
			return GPV_PASS_ITERATION_NUMBER;
		}
		else if(retval == GPV_ALL.value){
			return GPV_ALL;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GpuParamVariabilityHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
