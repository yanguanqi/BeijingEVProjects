package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum MaterialResourceType implements INativeEnum<MaterialResourceType> {
	MTRL_GPU(MaterialResourceTypeHelper.ENUM_VALUES[0]),
	MTRL_PROGRAM(MaterialResourceTypeHelper.ENUM_VALUES[1]),
	MTRL_MATREIAL(MaterialResourceTypeHelper.ENUM_VALUES[2]),
	MTRL_MESH(MaterialResourceTypeHelper.ENUM_VALUES[3]),
	MTRL_TEXTURE(MaterialResourceTypeHelper.ENUM_VALUES[4]),
	MTRL_SKELETON(MaterialResourceTypeHelper.ENUM_VALUES[5]),
	MTRL_ANIMATION(MaterialResourceTypeHelper.ENUM_VALUES[6]);
	private int value;
	MaterialResourceType(int i) {
		this.value = i;
	}
	public MaterialResourceType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MaterialResourceType toEnum(int retval) {
		if(retval == MTRL_GPU.value){
			return MTRL_GPU;
		}
		else if(retval == MTRL_PROGRAM.value){
			return MTRL_PROGRAM;
		}
		else if(retval == MTRL_MATREIAL.value){
			return MTRL_MATREIAL;
		}
		else if(retval == MTRL_MESH.value){
			return MTRL_MESH;
		}
		else if(retval == MTRL_TEXTURE.value){
			return MTRL_TEXTURE;
		}
		else if(retval == MTRL_SKELETON.value){
			return MTRL_SKELETON;
		}
		else if(retval == MTRL_ANIMATION.value){
			return MTRL_ANIMATION;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MaterialResourceTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
