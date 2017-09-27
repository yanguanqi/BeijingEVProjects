package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public enum MeshStreamItemType implements INativeEnum<MeshStreamItemType> {
	MSIT_Mesh(MeshStreamItemTypeHelper.ENUM_VALUES[0]),
	MSIT_Material(MeshStreamItemTypeHelper.ENUM_VALUES[1]),
	MSIT_Texture(MeshStreamItemTypeHelper.ENUM_VALUES[2]),
	MSIT_Skeleton(MeshStreamItemTypeHelper.ENUM_VALUES[3]),
	MSIT_Ani(MeshStreamItemTypeHelper.ENUM_VALUES[4]),
	MSIT_Extend(MeshStreamItemTypeHelper.ENUM_VALUES[5]);
	private int value;
	MeshStreamItemType(int i) {
		this.value = i;
	}
	public MeshStreamItemType getEnum(int val) {
		return toEnum(val);
	}
	public int getValue() {
		return this.value;
	}
	public static final MeshStreamItemType toEnum(int retval) {
		if(retval == MSIT_Mesh.value){
			return MSIT_Mesh;
		}
		else if(retval == MSIT_Material.value){
			return MSIT_Material;
		}
		else if(retval == MSIT_Texture.value){
			return MSIT_Texture;
		}
		else if(retval == MSIT_Skeleton.value){
			return MSIT_Skeleton;
		}
		else if(retval == MSIT_Ani.value){
			return MSIT_Ani;
		}
		else if(retval == MSIT_Extend.value){
			return MSIT_Extend;
		}
		throw new RuntimeException("wrong number in jni call for an enum!");
	}
}
class MeshStreamItemTypeHelper {
	public static final int[] ENUM_VALUES = getEnumValues();
	private static native int[] getEnumValues();
}
