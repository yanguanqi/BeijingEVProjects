package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum MaterialScriptSection implements INativeEnum<MaterialScriptSection> {
	MSS_NONE(MaterialScriptSectionHelper.ENUM_VALUES[0]),
	MSS_MATERIAL(MaterialScriptSectionHelper.ENUM_VALUES[1]),
	MSS_TECHNIQUE(MaterialScriptSectionHelper.ENUM_VALUES[2]),
	MSS_PASS(MaterialScriptSectionHelper.ENUM_VALUES[3]),
	MSS_TEXTUREUNIT(MaterialScriptSectionHelper.ENUM_VALUES[4]),
	MSS_PROGRAM_REF(MaterialScriptSectionHelper.ENUM_VALUES[5]),
	MSS_PROGRAM(MaterialScriptSectionHelper.ENUM_VALUES[6]),
	MSS_DEFAULT_PARAMETERS(MaterialScriptSectionHelper.ENUM_VALUES[7]),
	MSS_TEXTURESOURCE(MaterialScriptSectionHelper.ENUM_VALUES[8]);
	private int value;
	MaterialScriptSection(int i) {
		this.value = i;
	}
	public MaterialScriptSection getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MaterialScriptSection toEnum(int retval) {
		if(retval == MSS_NONE.value){
			return MSS_NONE;
		}
		else if(retval == MSS_MATERIAL.value){
			return MSS_MATERIAL;
		}
		else if(retval == MSS_TECHNIQUE.value){
			return MSS_TECHNIQUE;
		}
		else if(retval == MSS_PASS.value){
			return MSS_PASS;
		}
		else if(retval == MSS_TEXTUREUNIT.value){
			return MSS_TEXTUREUNIT;
		}
		else if(retval == MSS_PROGRAM_REF.value){
			return MSS_PROGRAM_REF;
		}
		else if(retval == MSS_PROGRAM.value){
			return MSS_PROGRAM;
		}
		else if(retval == MSS_DEFAULT_PARAMETERS.value){
			return MSS_DEFAULT_PARAMETERS;
		}
		else if(retval == MSS_TEXTURESOURCE.value){
			return MSS_TEXTURESOURCE;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MaterialScriptSectionHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
