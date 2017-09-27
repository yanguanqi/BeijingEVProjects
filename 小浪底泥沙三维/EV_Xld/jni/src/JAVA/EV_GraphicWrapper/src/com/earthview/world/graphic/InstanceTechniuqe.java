package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum InstanceTechniuqe implements INativeEnum<InstanceTechniuqe> {
	IT_None(InstanceTechniuqeHelper.ENUM_VALUES[0]),
	IT_ShaderBased(InstanceTechniuqeHelper.ENUM_VALUES[1]),
	IT_HardwareBased(InstanceTechniuqeHelper.ENUM_VALUES[2]),
	IT_HardwareBasedAndShaderBased(InstanceTechniuqeHelper.ENUM_VALUES[3]);
	private int value;
	InstanceTechniuqe(int i) {
		this.value = i;
	}
	public InstanceTechniuqe getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final InstanceTechniuqe toEnum(int retval) {
		if(retval == IT_None.value){
			return IT_None;
		}
		else if(retval == IT_ShaderBased.value){
			return IT_ShaderBased;
		}
		else if(retval == IT_HardwareBased.value){
			return IT_HardwareBased;
		}
		else if(retval == IT_HardwareBasedAndShaderBased.value){
			return IT_HardwareBasedAndShaderBased;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class InstanceTechniuqeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
