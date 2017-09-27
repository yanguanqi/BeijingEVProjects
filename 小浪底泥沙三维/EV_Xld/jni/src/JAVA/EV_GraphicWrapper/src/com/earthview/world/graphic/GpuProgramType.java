package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

//// Full mask (16-bit)
public enum GpuProgramType implements INativeEnum<GpuProgramType> {
	GPT_VERTEX_PROGRAM(GpuProgramTypeHelper.ENUM_VALUES[0]),
	GPT_FRAGMENT_PROGRAM(GpuProgramTypeHelper.ENUM_VALUES[1]),
	GPT_GEOMETRY_PROGRAM(GpuProgramTypeHelper.ENUM_VALUES[2]);
	private int value;
	GpuProgramType(int i) {
		this.value = i;
	}
	public GpuProgramType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final GpuProgramType toEnum(int retval) {
		if(retval == GPT_VERTEX_PROGRAM.value){
			return GPT_VERTEX_PROGRAM;
		}
		else if(retval == GPT_FRAGMENT_PROGRAM.value){
			return GPT_FRAGMENT_PROGRAM;
		}
		else if(retval == GPT_GEOMETRY_PROGRAM.value){
			return GPT_GEOMETRY_PROGRAM;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class GpuProgramTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
